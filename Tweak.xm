/*

*********
* HACKS *
*********

1. Infinite Mana
2. Player Is Invincible
3. Infinite Credits
4. Infinite ADAM
5. Items in Containers aren't Removed (Can Infinitely Pick Them Up)
6. Players Items Dont Get Used (Shooting Bullets Seems To Add Them To Your Total Amount o_O)
7. Choose Player Damage
8. Machines Don't Attack
9. All Plasmid Slots Unlocked
10. Instant Hack Win
11. Telekinesis Always Knocks Down Enemies
12. Player Can Fly
13. Speed Hack
*/

//CFBundleVersion 1.0.5

#import "writeDataBypassASLR.h"
#import <CoreGraphics/CoreGraphics.h>
#define DEGREES_TO_RADIANS(x) (x * M_PI/180.0)
#define cre @"Hacked By AlphaMΛTTΞR and Mack"
NSMutableDictionary *dictionary = [[NSMutableDictionary alloc] initWithContentsOfFile:@"/var/mobile/Library/Preferences/bioshockMackAndAlpha.plist"];

void setBool(bool value, NSString *key) {
	[dictionary setObject:[NSNumber numberWithBool:value] forKey:key];
	[dictionary writeToFile:@"/var/mobile/Library/Preferences/bioshockMackAndAlpha.plist" atomically:YES];
}

bool getBool(NSString *key) {
	return [[dictionary objectForKey:key] boolValue];
}

@class HackClass;
HackClass *hack = nil;

CGRect screenRect = [[UIScreen mainScreen] bounds];
CGFloat screenWidth = screenRect.size.width;
CGFloat screenHeight = screenRect.size.height;
NSString *bundleVersion = [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleShortVersionString"]; //check app version

UIButton *btnShowMenu;
UIView *hacksView;
UITableView *hacksList;

NSArray *keys = [NSArray arrayWithObjects:@"kInfinMana",@"kInvincible",@"kInfinCreds",@"kInfinADAM",@"kContainers",@"kPlayerItems",@"kInstaKill",@"kNoMachinesAttk",@"kPlasmidSlots",@"kInstantHack",@"kTelekinesis",@"kPlayerFly",@"kSpeedHack",nil];
bool infinMana = getBool(@"kInfinMana"), invincible = getBool(@"kInvincible"), infinCreds = getBool(@"kInfinCreds"), infinADAM = getBool(@"kInfinADAM"), containers = getBool(@"kContainers"), playerItems = getBool(@"kPlayerItems"), instakill = getBool(@"kInstaKill"), noMachinesAttk = getBool(@"kNoMachinesAttk"), plasmidSlots = getBool(@"kPlasmidSlots"), instantHack = getBool(@"kInstantHack"), telekinesis = getBool(@"kTelekinesis"), playerFly = getBool(@"kPlayerFly"), speedHack = getBool(@"kSpeedHack");
BOOL enabled[13] ={infinMana,invincible,infinCreds,infinADAM,containers,playerItems,instakill,noMachinesAttk,plasmidSlots,instantHack,telekinesis,playerFly,speedHack};

@interface HackClass : NSObject <UITableViewDelegate, UITableViewDataSource> {
//Variables etc...
UIWindow *hackWindow;
NSMutableArray *cellNames;

}
//Methods
-(void)showMenu;
@property (nonatomic, retain) UIWindow *hackWindow;
@end

@implementation HackClass
@synthesize hackWindow;

//ADD Methods

-(void)showMenu {
	hackWindow.frame = CGRectMake(0,0,screenWidth,screenHeight);
	btnShowMenu.hidden = true;
	hacksView.hidden = false;
	hacksList.hidden = false;
}

- (void)alertView:(UIAlertView *)alertView clickedButtonAtIndex:(NSInteger)buttonIndex {
	if (buttonIndex == 1) {
		[[UIApplication sharedApplication] openURL:[NSURL URLWithString:@"http://ioscheaters.com/"]];
	}
}

- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView {
	return 1;
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section { //number of rows = number of elements in array
	cellNames = [[NSMutableArray arrayWithObjects:@"Infinite Mana",@"Player is Invicible",@"Infinite Credits",@"Infinite ADAM",@"Container Items Never Removed",@"Player Items Never Used (Includes Ammo)",@"High Player Damage",@"No Machines Attack",@"All Plasmid Slots Unlocked",@"Instant Hacking Win",@"Telekinesis Always Knocks Enemies Down",@"Player Can Flying",@"Speed Hack",@"Return",nil] retain];
	return [cellNames count];
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
	static NSString* const SwitchCellID = @"SwitchCell";
	UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:SwitchCellID];

	if(cell == nil) {
		cell = [[[UITableViewCell alloc] initWithStyle:UITableViewCellStyleSubtitle reuseIdentifier:nil] autorelease];
		cell.selectionStyle = UITableViewCellSelectionStyleGray;
		cell.textLabel.text =[cellNames objectAtIndex:indexPath.row];
		[cell setBackgroundColor:[UIColor whiteColor]];
		[cell.textLabel setTextColor:[UIColor blackColor]];
	}
	
	
	if (enabled[indexPath.row] && indexPath.row != ([cellNames count] - 1)) {
		cell.accessoryType = UITableViewCellAccessoryCheckmark;
	} else {
		cell.accessoryType = UITableViewCellAccessoryNone;
	}
	
	return cell;
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath { //if statement below double checks if checkmark should be shown or not
	if (enabled[indexPath.row]) {
		enabled[indexPath.row] = false;
		[[tableView cellForRowAtIndexPath:indexPath] setAccessoryType:UITableViewCellAccessoryNone];
	} else if (!enabled[indexPath.row] && indexPath.row != ([cellNames count] - 1)) {
		enabled[indexPath.row] = true;
		[[tableView cellForRowAtIndexPath:indexPath] setAccessoryType:UITableViewCellAccessoryCheckmark];
	}
	if (indexPath.row != [cellNames count] - 1) {
		setBool(enabled[indexPath.row], keys[indexPath.row]);
	} else if (indexPath.row == [cellNames count] - 1) {
		hackWindow.frame = CGRectMake(screenWidth - 50,screenHeight - 50,50,50);
		btnShowMenu.hidden = false;
		hacksView.hidden = true;
		hacksList.hidden = true;
	}
	
	[tableView deselectRowAtIndexPath:indexPath animated:YES];
}
@end

void (*removeBioAmmoOld)(void *self, float ammo);
void removeBioAmmo(void *self, float ammo) {
	if (enabled[0]) {
		removeBioAmmoOld(self, 0);
	} else {
		removeBioAmmoOld(self, ammo);
	}
}

void (*removePlayerHealthOld)(void *self, float health);
void removePlayerHealth(void *self, float health) {
	if (enabled[1]) {
		removePlayerHealthOld(self, 0);
	} else {
		removePlayerHealthOld(self, health);
	}
}

void (*removeCreditsOld)(void *self, int amount);
void removeCredits(void *self, int amount) {
	if (enabled[2]) {
		removeCreditsOld(self, -500);
	} else {
		removeCreditsOld(self, amount);
	}
}

void (*credsGetAmountToPickUpOld)(void *self, int amount, void *player);
void credsGetAmountToPickUp(void *self, int amount, void *player) {
	if (enabled[2]) {
		credsGetAmountToPickUpOld(self, 500, player);
	} else if (!enabled[2]) {
		credsGetAmountToPickUpOld(self, amount, player);
	}
}

void (*removeADAMOld)(void *self, int amount);
void removeADAM(void *self, int amount) {
	if (enabled[3]) {
		removeADAMOld(self, -500);
	} else {
		removeADAMOld(self, amount);
	}
}

void (*removeItemContainerOld)(void *self, int amount);
void removeItemContainer(void *self, int amount) {
	if (enabled[4]) {
		removeItemContainerOld(self, 0);
	} else {
		removeItemContainerOld(self, amount);
	}
}

void (*removeItemInventoryOld)(void *self, void *objClass, int item);
void removeItemInventory(void *self, void *objClass, int item) {
	if (enabled[5]) {
		removeItemInventoryOld(self,objClass,0);
	} else {
		removeItemInventoryOld(self,objClass,item);
	}
}

void (*removePawnHealthOld)(void *self, float health);
void removePawnHealth(void *self, float health) {
	if (enabled[6]) {
		removePawnHealthOld(self, health * 10000);
	} else {
		removePawnHealthOld(self, health);
	}
}

bool (*isHumanControlledOld)(void *self);
bool isHumanControlled(void *self) {
	if (enabled[7]) {
		return true;
	} else {
		return isHumanControlledOld(self);
	}
}

int (*plasmidGetUnlockedSlotsOld)(void *self);
int plasmidGetUnlockedSlots(void *self) {
	if (enabled[8]) {
		return 6;
	} else {
		return plasmidGetUnlockedSlotsOld(self);
	}
}

void (*hackingWinOld)(void *self);
void hackingWin(void *self) {
	hackingWinOld(self);
}

void (*hackingTickOld)(void *self, float time);
void hackingTick(void *self, float time) {
	if (enabled[9]) {
		hackingWinOld(self);
	} else {
		hackingTickOld(self, time);
	}
}

float (*telekinesisObjectThrowMomentumOld)(void *self);
float telekinesisObjectThrowMomentum(void *self) {
	if (enabled[10]) {
		return 10000.0f;
	} else {
		return telekinesisObjectThrowMomentumOld(self);
	}
}

bool (*isPawnPlayerOld)(void *self);
bool isPawnPlayer(void *self) {
	return isPawnPlayerOld(self);
}

void (*physFlyingOld)(void *self, float speed, int height);
void physFlying(void *self, float speed, int height) {
	physFlyingOld(self,speed,height);
}

void (*physWalkingOld)(void *self, float speed, int height);
void physWalking(void *self, float speed, int height) {
	if (isPawnPlayer(self)) {
		if (enabled[11] && !enabled[12]) {
			physFlyingOld(self,speed,height);
		} else if (enabled[11] && enabled[12]) {
			physFlyingOld(self,speed * 2,height);
		} else if (!enabled[11] && enabled[12]) {
			physWalkingOld(self,speed * 2,height);
		} else if (!enabled[11] && !enabled[12]) {
			physWalkingOld(self,speed, height);
		}
	} else {
		physWalkingOld(self,speed, height);
	}
}

/*
AAIWeapon::CanHitTarget(AShockPawn *, int, int, FVector const*)
__text:01487B34                 EXPORT __ZN9AAIWeapon12CanHitTargetEP10AShockPawniiPK7FVector
__text:01487B34 __ZN9AAIWeapon12CanHitTargetEP10AShockPawniiPK7FVector
*/

/**********************************************************************************/

	
%hook IPhoneAppDelegate
- (BOOL)application:(id)fp8 didFinishLaunchingWithOptions:(id)fp12 {

	setuid(0);
	setgid(0);

	hack = [[HackClass alloc]init];
	
	hack.hackWindow = [[UIWindow alloc]init];
	[hack.hackWindow setTransform:CGAffineTransformMakeRotation(DEGREES_TO_RADIANS(90))];
	hack.hackWindow.frame = CGRectMake(screenWidth - 50,screenHeight - 50,50,50);
	hack.hackWindow.backgroundColor = [UIColor clearColor];
	
	hacksView = [[UIView alloc] initWithFrame:CGRectMake(0,0, screenHeight, screenWidth)];
	[hacksView setBackgroundColor:[UIColor clearColor]];
	[hack.hackWindow addSubview:hacksView];
	[hacksView setHidden:YES];

	hacksList = [[UITableView alloc]initWithFrame:CGRectMake(5,0, screenHeight - 10, screenWidth) style:UITableViewStyleGrouped];
	[hacksList setBackgroundColor:[UIColor clearColor]];
	[hacksList setBackgroundView:nil];
	[hacksList setDataSource:hack];
	[hacksList setDelegate:hack];
	[hacksView addSubview:hacksList];
	[hacksList setHidden:YES];
	
	btnShowMenu = [UIButton buttonWithType:UIButtonTypeSystem];
	btnShowMenu.frame = CGRectMake(0,0,50,50);
	[btnShowMenu setTitle:@"Menu" forState:UIControlStateNormal];
	[btnShowMenu addTarget:hack action:@selector(showMenu) forControlEvents:UIControlEventTouchUpInside];
	[hack.hackWindow addSubview:btnShowMenu];

	[hack.hackWindow makeKeyAndVisible];
	hack.hackWindow.windowLevel = 1000000000.0f;
	
	MSHookFunction(((void*)MSFindSymbol(NULL, "__ZN12AShockPlayer13RemoveBioAmmoEf")),(void *)removeBioAmmo,(void**)&removeBioAmmoOld); //infinite electro bolt
	MSHookFunction(((void*)MSFindSymbol(NULL, "__ZN12AShockPlayer12RemoveHealthEf")),(void *)removePlayerHealth,(void**)&removePlayerHealthOld); //invincible
	MSHookFunction(((void*)MSFindSymbol(NULL, "__ZN10AShockPawn12RemoveHealthEf")),(void *)removePawnHealth,(void**)&removePawnHealthOld); //10X damage
	MSHookFunction(((void*)MSFindSymbol(NULL, "__ZN10UInventory10RemoveItemEP6UClassi")),(void *)removeItemInventory,(void**)&removeItemInventoryOld); //items dont get removed + stored ammo adds when shot o_O
	MSHookFunction(((void*)MSFindSymbol(NULL, "__ZN12AShockPlayer13RemoveCreditsEi")),(void *)removeCredits,(void**)&removeCreditsOld); //infinite Credits
	MSHookFunction(((void*)MSFindSymbol(NULL, "__ZN12AShockPlayer10RemoveADAMEi")),(void *)removeADAM,(void**)&removeADAMOld); //infinite ADAM
	MSHookFunction(((void*)MSFindSymbol(NULL, "__ZN10UContainer10RemoveItemEi")),(void *)removeItemContainer,(void**)&removeItemContainerOld); //drop items dont get removed
	MSHookFunction(((void*)MSFindSymbol(NULL, "__ZN5APawn17IsHumanControlledEv")),(void *)isHumanControlled,(void**)&isHumanControlledOld); //Mobs Don't Attack
	MSHookFunction(((void*)MSFindSymbol(NULL, "__ZN13UPlasmidTrack16GetUnlockedSlotsEv")),(void *)plasmidGetUnlockedSlots,(void**)&plasmidGetUnlockedSlotsOld); //all slots unlocked
	MSHookFunction(((void*)MSFindSymbol(NULL, "__ZN13FISEUIHacking4TickEf")),(void *)hackingTick,(void**)&hackingTickOld); //timer tick for hacking
	MSHookFunction(((void*)MSFindSymbol(NULL, "__ZN13FISEUIHacking6youWinEv")),(void *)hackingWin,(void**)&hackingWinOld); //hack win
	MSHookFunction(((void*)MSFindSymbol(NULL, "__ZN8UCredits17GetAmountToPickUpEiP12AShockPlayer")),(void *)credsGetAmountToPickUp,(void**)&credsGetAmountToPickUpOld); //pick up lots of credits
	MSHookFunction(((void*)MSFindSymbol(NULL, "__ZNK34TelekinesisCollisionDamageListener23GetThrownActorsMomentumEv")),(void *)telekinesisObjectThrowMomentum,(void**)&telekinesisObjectThrowMomentumOld); //thrown objects always knock enemies down
	MSHookFunction(((void*)MSFindSymbol(NULL, "__ZN5APawn8IsPlayerEv")),(void *)isPawnPlayer,(void**)&isPawnPlayerOld); //player reference
	MSHookFunction(((void*)MSFindSymbol(NULL, "__ZN5APawn10physFlyingEfi")),(void *)physFlying,(void**)&physFlyingOld); //hook machine flying
	MSHookFunction(((void*)MSFindSymbol(NULL, "__ZN5APawn11physWalkingEfi")),(void *)physWalking,(void**)&physWalkingOld); //hook walking
	
	UIAlertView *popup = [[UIAlertView alloc] initWithTitle:cre message:@"Visit iOSCheaters.com for more great hacks!" delegate:hack cancelButtonTitle:@"No Thank You" otherButtonTitles:@"Okay",nil];
	[popup show];
	[popup release];
	
	return %orig;
}

- (void)applicationWillResignActive:(id)fp8 { //hides the menu and releases objects from memory
	//[hacksView setHidden:YES];
	//[hacksList setHidden:YES];
	//[hacksView release];
	//[hacksList release];
%orig;
}

-(void)dealloc { //releases objects from memory
	//[hacksList release];
	//[hacksView release];
%orig;
}

%end



/* CODE GRAVEYARD

	void (*securityBotIsFriendlyOld)(void *self, bool friendly);
	void securityBotIsFriendly(void *self, bool friendly) {
		securityBotIsFriendlyOld(self, true);
	}
	//MSHookFunction(((bool*)MSFindSymbol(NULL, "__ZNK12ASecurityBot10IsFriendlyEv")),(bool *)securityBotIsFriendly,(void**)&securityBotIsFriendlyOld); //doesnt work

	void (*removeAmmoOld)(void *self, void *arg1);
	void removeAmmo(void *self, void *arg1) {
	}
	
	//MSHookFunction(((int*)MSFindSymbol(NULL, "__ZN10UInventory12UIRemoveAmmoEP6UClass")),(int *)removeAmmo,nil); //ammo doesnt remove (weird one)
	
	int removeItem(void *self) {
		return 0;
	}
	//MSHookFunction(((int*)MSFindSymbol(NULL, "__ZN10UInventory10RemoveItemEi")),(int *)removeItem,nil); //Not sure if working
	
	
	//linker error
	
	void rollLootOld(void *self);
void rollLoot(void *self) {
	rollLootOld(self);
}

	bool (*isEmptyOld)(void *self);
	bool isEmpty(void *self) {
		if (isEmptyOld(self)) {
			rollLoot(self);
		}
			return false;
	}
	
	MSHookFunction(((void*)MSFindSymbol(NULL, "__ZN10UContainer7IsEmptyEv")),(void *)rollLoot,(void**)&rollLootOld);
	MSHookFunction(((void*)MSFindSymbol(NULL, "__ZN10UContainer8RollLootEP10ALevelInfo")),(void *)isEmpty,(void**)&isEmptyOld);
	
	

	void (*projectileExplodeOld)(void *self);
	void projectileExplode(void *self) {
		projectileExplodeOld(self);
	}	
	//MSHookFunction(((int*)MSFindSymbol(NULL, "__ZN20AExplosiveProjectile7ExplodeEP6AActor")),(int *)projectileExplode,(void**)projectileExplodeOld);

	
	Works, but hacked speed via a more simpler method!
	
	//MSHookFunction(((void*)MSFindSymbol(NULL, "__ZN5APawn12calcVelocityE7FVectorfffiii")),(void *)pawnSpeed,(void**)&pawnSpeedOld);
	void (*pawnSpeedOld)(void *self, void *Uvector, float arg4, float arg5, float arg6, int arg1, int arg2, int arg3);
	void pawnSpeed(void *self, void *Uvector, float arg4, float arg5, float arg6, int arg1, int arg2, int arg3) {
		if (enabled[12]) {
			pawnSpeedOld(self,Uvector,arg4 * 5,arg5 * 5,arg6 * 5,arg1 * 5,arg2 * 5,arg3 * 5);
		} else {
			pawnSpeedOld(self,Uvector,arg4,arg5,arg6,arg1,arg2,arg3);
		}
	}
	
	
	*/
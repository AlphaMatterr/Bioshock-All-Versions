/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "/UnrealEngine3/Builds/HZUW-JIAOLIN/Projects/jiaolin_hzuw-jiaolin_862/Research/BiosockES2PC/Bioshock1_PC2iOS/Bioshock_PC_JPN/Source/Unreal/../../Source/Unreal/Core/Src/.h"

#import "GameCenterManagerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, PlayerInfo, UITableView;

@interface LeaderboardHandler : /UnrealEngine3/Builds/HZUW-JIAOLIN/Projects/jiaolin_hzuw-jiaolin_862/Research/BiosockES2PC/Bioshock1_PC2iOS/Bioshock_PC_JPN/Source/Unreal/../../Source/Unreal/Core/Src/ <UITableViewDataSource, UITableViewDelegate, GameCenterManagerDelegate>
{
    UITableView *table;
    NSMutableArray *playersArray;
    NSMutableArray *friendsArray;
    int maxPlayers;
    int showPlayers;
    int maxFriends;
    int showFriends;
    int playersSectionNum;
    int friendsSectionNum;
    PlayerInfo *localPlayer;
    _Bool isLoadingPlayers;
    _Bool isLoadingFriends;
    _Bool isLoading;
    _Bool isLoadingError;
    int curBoard;
    struct CGRect rect;
    int rowHeaderHight;
    int rowHeight;
    int localPlayerFontSize;
    int middleFontSize;
    int smallFontSize;
}

+ (int)getLeaderBoardEnumByID:(id)fp8;
+ (id)getLeaderBoardIDByTab:(int)fp8;
- (void)setPlayersArray:(id)fp8;
- (id)playersArray;
- (void)setFriendsArray:(id)fp8;
- (id)friendsArray;
- (void)setTable:(id)fp8;
- (id)table;
- (id).cxx_construct;
- (float)tableView:(id)fp8 heightForRowAtIndexPath:(id)fp12;
- (void)tableView:(id)fp8 didSelectRowAtIndexPath:(id)fp12;
- (id)tableView:(id)fp8 cellForRowAtIndexPath:(id)fp12;
- (int)tableView:(id)fp8 numberOfRowsInSection:(int)fp12;
- (int)numberOfSectionsInTableView:(id)fp8;
- (void)endRetrieveScores:(id)fp8 players:(id)fp12 error:(id)fp16;
- (void)endRetrieveAllFriends:(id)fp8 scores:(id)fp12 error:(id)fp16;
- (_Bool)isLodingData;
- (void)deinitData;
- (void)initData;
- (void)hideTable;
- (void)showTableForleaderboard;
- (void)dealloc;
- (id)init;

@end


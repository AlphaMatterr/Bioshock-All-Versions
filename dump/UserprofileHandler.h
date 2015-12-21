/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "/UnrealEngine3/Builds/HZUW-JIAOLIN/Projects/jiaolin_hzuw-jiaolin_862/Research/BiosockES2PC/Bioshock1_PC2iOS/Bioshock_PC_JPN/Source/Unreal/../../Source/Unreal/Core/Src/.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class CLMView, UIFont, UIImageView, UITableView;

@interface UserprofileHandler : /UnrealEngine3/Builds/HZUW-JIAOLIN/Projects/jiaolin_hzuw-jiaolin_862/Research/BiosockES2PC/Bioshock1_PC2iOS/Bioshock_PC_JPN/Source/Unreal/../../Source/Unreal/Core/Src/ <UITableViewDataSource, UITableViewDelegate>
{
    UITableView *table;
    struct CGRect tableShowRect;
    struct CGRect diagramRect;
    struct CGRect recordRect;
    struct CGRect maskRect;
    CLMView *diagramWeapon;
    CLMView *diagramPlasmid;
    UITableView *tableTotal;
    int tableRowHeight;
    int tableInterval;
    struct CGRect diagramDisplayRect1;
    struct CGRect diagramDisplayRect2;
    struct CGRect diagramDisplayRect3;
    int smallFontSize;
    int middleFontSize;
    UIFont *gameSmallFont;
    UIFont *gameMiddleFont;
    UIImageView *maskImage;
}

- (void)setTable:(id)fp8;
- (id)table;
- (id).cxx_construct;
- (float)tableView:(id)fp8 heightForRowAtIndexPath:(id)fp12;
- (id)tableView:(id)fp8 cellForRowAtIndexPath:(id)fp12;
- (int)tableView:(id)fp8 numberOfRowsInSection:(int)fp12;
- (int)numberOfSectionsInTableView:(id)fp8;
- (id)totalTableView:(id)fp8 cellForRowAtIndexPath:(id)fp12;
- (id)mainTableView:(id)fp8 cellForRowAtIndexPath:(id)fp12;
- (id)creatTableInwithCell:(id)fp8;
- (void)addPlasmidDiagram:(id)fp8;
- (void)addWeaponUsageDiagram:(id)fp8;
- (void)reloadTables;
- (void)deinitData;
- (void)initData;
- (void)hideTable;
- (void)showTable;
- (void)dealloc;
- (id)init;

@end


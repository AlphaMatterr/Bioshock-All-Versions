/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "/UnrealEngine3/Builds/HZUW-JIAOLIN/Projects/jiaolin_hzuw-jiaolin_862/Research/BiosockES2PC/Bioshock1_PC2iOS/Bioshock_PC_JPN/Source/Unreal/../../Source/Unreal/Core/Src/.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class InGameManualDescriptionView, UITableView;

@interface InGameManualHandler : /UnrealEngine3/Builds/HZUW-JIAOLIN/Projects/jiaolin_hzuw-jiaolin_862/Research/BiosockES2PC/Bioshock1_PC2iOS/Bioshock_PC_JPN/Source/Unreal/../../Source/Unreal/Core/Src/ <UITableViewDataSource, UITableViewDelegate>
{
    UITableView *table;
    InGameManualDescriptionView *textView;
    struct CGRect rect;
    int rowHeight;
    int fontSize;
    // Error parsing type: ^{FISEUIInGameManual=^^?ii^{UTexture}{TArray<TStringBase<TSIMDAllocator>, TSIMDAllocator>=^vii}{TMap<TStringBase<TSIMDAllocator>, TArray<ManualItem *, TSIMDAllocator>, TSIMDAllocator>={TArray<TMapBase<TStringBase<TSIMDAllocator>, TArray<ManualItem *, TSIMDAllocator>, TSIMDAllocator>::TPair, TSIMDAllocator>=^vii}^ii}{TStringBase<TSIMDAllocator>=^vii}{TStringBase<TSIMDAllocator>=^vii}{TStringBase<TSIMDAllocator>=^vii}B}, name: screen
    UITableView *_table;
}

- (void)setTable:(id)fp8;
- (id)table;
- (id).cxx_construct;
- (float)tableView:(id)fp8 heightForRowAtIndexPath:(id)fp12;
- (void)tableView:(id)fp8 didSelectRowAtIndexPath:(id)fp12;
- (id)tableView:(id)fp8 cellForRowAtIndexPath:(id)fp12;
- (int)tableView:(id)fp8 numberOfRowsInSection:(int)fp12;
- (int)numberOfSectionsInTableView:(id)fp8;
- (void)reloadTable;
- (void)deinitData;
- (void)initData;
- (void)hideTable;
- (void)setDescription:(id)fp8;
- (void)showTable;
- (void)dealloc;
-     // Error parsing type: @28@0:4{CGRect={CGPoint=ff}{CGSize=ff}}8^{FISEUIInGameManual=^^?ii^{UTexture}{TArray<TStringBase<TSIMDAllocator>, TSIMDAllocator>=^vii}{TMap<TStringBase<TSIMDAllocator>, TArray<ManualItem *, TSIMDAllocator>, TSIMDAllocator>={TArray<TMapBase<TStringBase<TSIMDAllocator>, TArray<ManualItem *, TSIMDAllocator>, TSIMDAllocator>::TPair, TSIMDAllocator>=^vii}^ii}{TStringBase<TSIMDAllocator>=^vii}{TStringBase<TSIMDAllocator>=^vii}{TStringBase<TSIMDAllocator>=^vii}B}24, name: initWithRect:withObject:

@end


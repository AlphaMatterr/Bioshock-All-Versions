/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "/UnrealEngine3/Builds/HZUW-JIAOLIN/Projects/jiaolin_hzuw-jiaolin_862/Research/BiosockES2PC/Bioshock1_PC2iOS/Bioshock_PC_JPN/Source/Unreal/../../Source/Unreal/Core/Src/.h"

@class NSString;

@interface PlayerInfo : /UnrealEngine3/Builds/HZUW-JIAOLIN/Projects/jiaolin_hzuw-jiaolin_862/Research/BiosockES2PC/Bioshock1_PC2iOS/Bioshock_PC_JPN/Source/Unreal/../../Source/Unreal/Core/Src/
{
    NSString *name;
    NSString *formatScore;
    long long score;
    int rank;
}

- (void)setFormatScore:(id)fp8;
- (id)formatScore;
- (void)setName:(id)fp8;
- (id)name;
- (int)getRank;
- (void)setRank:(int)fp8;
- (int)getScore;
- (void)dealloc;
- (id)initWithPlayerName:(id)fp8 rank:(int)fp12 score:(long long)fp16 formatscore:(id)fp24;

@end


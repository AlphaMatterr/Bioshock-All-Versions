/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "/UnrealEngine3/Builds/HZUW-JIAOLIN/Projects/jiaolin_hzuw-jiaolin_862/Research/BiosockES2PC/Bioshock1_PC2iOS/Bioshock_PC_JPN/Source/Unreal/../../Source/Unreal/Core/Src/.h"

@class NSDictionary, NSString, NSURL;

@interface PHContent : /UnrealEngine3/Builds/HZUW-JIAOLIN/Projects/jiaolin_hzuw-jiaolin_862/Research/BiosockES2PC/Bioshock1_PC2iOS/Bioshock_PC_JPN/Source/Unreal/../../Source/Unreal/Core/Src/
{
    NSDictionary *_frameDict;
    NSURL *_URL;
    int _transition;
    NSDictionary *_context;
    double _closeButtonDelay;
    NSString *_closeButtonURLPath;
}

+ (id)contentWithDictionary:(id)fp8;
- (void)setCloseButtonURLPath:(id)fp8;
- (id)closeButtonURLPath;
- (void)setCloseButtonDelay:(double)fp8;
- (double)closeButtonDelay;
- (void)setContext:(id)fp8;
- (id)context;
- (void)setTransition:(int)fp8;
- (int)transition;
- (void)setURL:(id)fp8;
- (id)URL;
- (void)setFramesWithDictionary:(id)fp8;
- (struct CGRect)frameForOrientation:(int)fp8;
- (void)dealloc;
- (id)init;

@end


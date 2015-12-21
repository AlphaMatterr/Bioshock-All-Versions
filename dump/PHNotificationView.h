/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "/UnrealEngine3/Builds/HZUW-JIAOLIN/Projects/jiaolin_hzuw-jiaolin_862/Research/BiosockES2PC/Bioshock1_PC2iOS/Bioshock_PC_JPN/Source/Unreal/../../Source/Unreal/Core/Src/.h"

#import "PHAPIRequestDelegate-Protocol.h"

@class NSDictionary, NSString, PHNotificationRenderer, PHPublisherMetadataRequest;

@interface PHNotificationView : /UnrealEngine3/Builds/HZUW-JIAOLIN/Projects/jiaolin_hzuw-jiaolin_862/Research/BiosockES2PC/Bioshock1_PC2iOS/Bioshock_PC_JPN/Source/Unreal/../../Source/Unreal/Core/Src/ <PHAPIRequestDelegate>
{
    NSString *_app;
    NSString *_secret;
    NSString *_placement;
    NSDictionary *_notificationData;
    PHNotificationRenderer *_notificationRenderer;
    PHPublisherMetadataRequest *_request;
}

+ (id)newRendererForData:(id)fp8;
+ (void)setRendererClass:(Class)fp8 forType:(id)fp12;
+ (void)initialize;
- (void)setNotificationData:(id)fp8;
- (id)notificationData;
- (void)drawRect:(struct CGRect)fp8;
- (void)clear;
- (void)test;
- (void)request:(id)fp8 didFailWithError:(id)fp12;
- (void)request:(id)fp8 didSucceedWithResponse:(id)fp12;
- (void)refresh;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)fp8 ofObject:(id)fp12 change:(id)fp16 context:(void *)fp20;
- (id)initWithFrame:(struct CGRect)fp8;
- (id)initWithApp:(id)fp8 secret:(id)fp12 placement:(id)fp16;

@end

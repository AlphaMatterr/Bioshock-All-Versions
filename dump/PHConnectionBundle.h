/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "/UnrealEngine3/Builds/HZUW-JIAOLIN/Projects/jiaolin_hzuw-jiaolin_862/Research/BiosockES2PC/Bioshock1_PC2iOS/Bioshock_PC_JPN/Source/Unreal/../../Source/Unreal/Core/Src/.h"

@class NSMutableData, NSURLRequest, NSURLResponse;

@interface PHConnectionBundle : /UnrealEngine3/Builds/HZUW-JIAOLIN/Projects/jiaolin_hzuw-jiaolin_862/Research/BiosockES2PC/Bioshock1_PC2iOS/Bioshock_PC_JPN/Source/Unreal/../../Source/Unreal/Core/Src/
{
    NSURLRequest *_request;
    NSURLResponse *_response;
    NSMutableData *_data;
    id _context;
    id <PHConnectionManagerDelegate> _delegate;
}

+ (id)connectionBundleWithRequest:(id)fp8 forDelegate:(id)fp12 withContext:(id)fp16;
- (id)delegate;
- (id)context;
- (void)setData:(id)fp8;
- (id)data;
- (void)setResponse:(id)fp8;
- (id)response;
- (void)setRequest:(id)fp8;
- (id)request;
- (void)dealloc;
- (id)initWithRequest:(id)fp8 forDelegate:(id)fp12 withContext:(id)fp16;

@end


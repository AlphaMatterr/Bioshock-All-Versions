/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "PHAPIRequest.h"

@class NSArray;

@interface PHEventRequest : PHAPIRequest
{
    NSArray *_events;
}

+ (id)requestForApp:(id)fp8 secret:(id)fp12 event:(id)fp16;
- (id)events;
- (id)additionalParameters;
- (unsigned int)HTTPMethod;
- (id)urlPath;
- (void)dealloc;
- (id)initWithApp:(id)fp8 secret:(id)fp12 event:(id)fp16;

@end

/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "PHAPIRequest.h"

@interface PHPublisherOpenRequest : PHAPIRequest
{
}

- (void)updateBaseURL:(id)fp8;
- (void)storePrimarySenderID:(id)fp8 forAPIKey:(id)fp12;
- (id)parameterValueWithAPIKeySIDPairs:(id)fp8;
- (id)timeZoneOffsetFromGMTAsString;
- (void)dealloc;
- (void)didSucceedWithResponse:(id)fp8;
- (void)send;
- (unsigned int)HTTPMethod;
- (id)urlPath;
- (id)additionalParameters;

@end

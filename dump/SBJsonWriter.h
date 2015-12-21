/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SBJsonBase.h"

@interface SBJsonWriter : SBJsonBase
{
    BOOL sortKeys;
    BOOL humanReadable;
}

+ (void)initialize;
- (void)setHumanReadable:(BOOL)fp8;
- (BOOL)humanReadable;
- (void)setSortKeys:(BOOL)fp8;
- (BOOL)sortKeys;
- (BOOL)appendString:(id)fp8 into:(id)fp12;
- (BOOL)appendDictionary:(id)fp8 into:(id)fp12;
- (BOOL)appendArray:(id)fp8 into:(id)fp12;
- (BOOL)appendValue:(id)fp8 into:(id)fp12;
- (id)indent;
- (id)stringWithObject:(id)fp8 error:(id *)fp12;
- (id)stringWithObject:(id)fp8;

@end

/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "/UnrealEngine3/Builds/HZUW-JIAOLIN/Projects/jiaolin_hzuw-jiaolin_862/Research/BiosockES2PC/Bioshock1_PC2iOS/Bioshock_PC_JPN/Source/Unreal/../../Source/Unreal/Core/Src/.h"

#import "NSXMLParserDelegate-Protocol.h"
#import "UIWebViewDelegate-Protocol.h"

@class ASIdentifierManager, NSDate, NSMutableArray, NSMutableDictionary, NSMutableString, NSOperationQueue, NSString, UIWebView;

@interface AdXTracking : /UnrealEngine3/Builds/HZUW-JIAOLIN/Projects/jiaolin_hzuw-jiaolin_862/Research/BiosockES2PC/Bioshock1_PC2iOS/Bioshock_PC_JPN/Source/Unreal/../../Source/Unreal/Core/Src/ <NSXMLParserDelegate, UIWebViewDelegate>
{
    BOOL Is_upgrade;
    BOOL OptOut;
    BOOL advertisingTrackingEnabled;
    BOOL hasASIdentifierManager;
    NSString *ClientId;
    NSString *URLScheme;
    NSString *AppleId;
    NSString *BundleID;
    NSString *CountryCode;
    NSString *UserAgent;
    NSString *IDFV;
    NSString *advertisingIdentifier;
    NSString *attributionID;
    int seencount;
    NSMutableString *referral;
    NSMutableString *clickID;
    NSDate *connectionStartTime;
    NSMutableDictionary *dict;
    NSMutableArray *productArray;
    UIWebView *uAwebView;
    NSString *currentElement;
    NSString *serverIP;
    NSString *serverIP_Q;
    ASIdentifierManager *_identifierManager;
    NSOperationQueue *_networkQueue;
}

- (void)setNetworkQueue:(id)fp8;
- (id)networkQueue;
- (void)setIdentifierManager:(id)fp8;
- (id)identifierManager;
- (void)setServerIP_Q:(id)fp8;
- (id)serverIP_Q;
- (void)setServerIP:(id)fp8;
- (id)serverIP;
- (void)setCurrentElement:(id)fp8;
- (id)currentElement;
- (void)setUAwebView:(id)fp8;
- (id)uAwebView;
- (void)setProductArray:(id)fp8;
- (id)productArray;
- (void)setDict:(id)fp8;
- (id)dict;
- (void)setHasASIdentifierManager:(BOOL)fp8;
- (BOOL)hasASIdentifierManager;
- (void)setAdvertisingTrackingEnabled:(BOOL)fp8;
- (BOOL)advertisingTrackingEnabled;
- (void)setConnectionStartTime:(id)fp8;
- (id)connectionStartTime;
- (void)setClickID:(id)fp8;
- (id)clickID;
- (void)setReferral:(id)fp8;
- (id)referral;
- (void)setSeencount:(int)fp8;
- (int)seencount;
- (void)setOptOut:(BOOL)fp8;
- (BOOL)OptOut;
- (void)setAttributionID:(id)fp8;
- (id)attributionID;
- (void)setAdvertisingIdentifier:(id)fp8;
- (id)advertisingIdentifier;
- (void)setIDFV:(id)fp8;
- (id)IDFV;
- (void)setUserAgent:(id)fp8;
- (id)UserAgent;
- (void)setIs_upgrade:(BOOL)fp8;
- (BOOL)Is_upgrade;
- (void)setCountryCode:(id)fp8;
- (id)CountryCode;
- (void)setBundleID:(id)fp8;
- (id)BundleID;
- (void)setAppleId:(id)fp8;
- (id)AppleId;
- (void)setURLScheme:(id)fp8;
- (id)URLScheme;
- (void)setClientId:(id)fp8;
- (id)ClientId;
- (void)parser:(id)fp8 foundCharacters:(id)fp12;
- (void)parser:(id)fp8 foundCDATA:(id)fp12;
- (void)parser:(id)fp8 didEndElement:(id)fp12 namespaceURI:(id)fp16 qualifiedName:(id)fp20;
- (void)parser:(id)fp8 didStartElement:(id)fp12 namespaceURI:(id)fp16 qualifiedName:(id)fp20 attributes:(id)fp24;
- (BOOL)parseResponse:(id)fp8;
- (BOOL)webView:(id)fp8 shouldStartLoadWithRequest:(id)fp12 navigationType:(int)fp16;
- (BOOL)addSkipBackupAttributeToItemAtURL:(id)fp8;
- (BOOL)connectedToNetwork;
- (id)urlEncode:(id)fp8;
- (BOOL)handleOpenURL:(id)fp8;
- (int)swishAttempts;
- (BOOL)recentSwish;
- (BOOL)doSwish;
- (void)doReportAppOpen;
- (void)reportAppOpen;
- (void)reportExtendedEventToAdX:(id)fp8;
- (void)reportAppEventToAdX:(id)fp8;
- (void)reportAppOpenToAdX:(_Bool)fp8;
- (void)reportAppOpenToAdXNow;
- (id)getOldDID;
- (id)odin1;
- (id)macAddress;
- (void)useQAServerUntilYear:(int)fp8 month:(int)fp12 day:(int)fp16;
- (void)isUpgrade:(BOOL)fp8;
- (id)getAdXDeviceIDForEvents;
- (id)adXGetBundleID;
- (id)getTransactionID;
- (int)isFirstInstall;
- (id)getDLReferral;
- (id)getReferral;
- (void)addProductToList:(id)fp8 ofPrice:(float)fp12 forQuantity:(int)fp16;
- (void)addProductToList:(id)fp8;
- (void)setEventParameterOfName:(id)fp8 withValue:(id)fp12;
- (void)setEventParameter:(int)fp8 withValue:(id)fp12;
- (void)startNewEvent;
- (void)sendExtendedEventOfName:(id)fp8;
- (void)sendExtendedEvent:(int)fp8;
- (void)sendAndValidateSaleEvent:(id)fp8 withValue:(id)fp12 andCurrency:(id)fp16 andCustomData:(id)fp20;
- (void)sendEvent:(id)fp8 withData:(id)fp12 andCurrency:(id)fp16 andCustomData:(id)fp20;
- (void)sendEvent:(id)fp8 withData:(id)fp12 andCurrency:(id)fp16;
- (void)sendEvent:(id)fp8 withData:(id)fp12;
- (void)dealloc;
- (id)init;

@end


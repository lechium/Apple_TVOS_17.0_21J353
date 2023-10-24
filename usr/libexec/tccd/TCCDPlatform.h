//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSUUID, TCCDMainSyncController, TCCDServer, TCCDSyncController;

@interface TCCDPlatform : NSObject
{
    _Bool _isChinaSKUDevice;	// 8 = 0x8
    NSDictionary *_configurationDictionary;	// 16 = 0x10
    NSUUID *_bootUUID;	// 24 = 0x18
    NSString *_name;	// 32 = 0x20
    TCCDServer *_server;	// 40 = 0x28
    TCCDSyncController *_syncController;	// 48 = 0x30
    TCCDMainSyncController *_mainSyncController;	// 56 = 0x38
    NSDictionary *_servicesByName;	// 64 = 0x40
}

+ (id)allTCCEntitlements;	// IMP=0x004000000003ebad
+ (id)currentPlatform;	// IMP=0x001000000003eb41
+ (id)macOSPlatformNames;	// IMP=0x001000000003ead1
+ (id)iosFamilyPlatformNames;	// IMP=0x001000000003ea52
+ (id)allPlatformNames;	// IMP=0x001000000003e9bf
- (void).cxx_destruct;	// IMP=0x0020000000040d54
@property(readonly) _Bool isChinaSKUDevice; // @synthesize isChinaSKUDevice=_isChinaSKUDevice;
@property(retain) NSDictionary *servicesByName; // @synthesize servicesByName=_servicesByName;
@property(retain) TCCDMainSyncController *mainSyncController; // @synthesize mainSyncController=_mainSyncController;
@property(retain) TCCDSyncController *syncController; // @synthesize syncController=_syncController;
@property __weak TCCDServer *server; // @synthesize server=_server;
@property(readonly) NSString *name; // @synthesize name=_name;
@property(readonly) NSDictionary *configurationDictionary; // @synthesize configurationDictionary=_configurationDictionary;
- (void)registerWithApplicationResolverSubjectIdentity:(id)arg1 processChain:(id)arg2;	// IMP=0x0010000000040c8b
- (_Bool)displayAlert:(id)arg1;	// IMP=0x0010000000040c83
- (id)prefixOfBundleIdentifiersToResetAfterResetOfAppBundleIdentifier:(id)arg1;	// IMP=0x0010000000040c7b
- (_Bool)removalOfAppBundleIdentifierRequiresPruning:(id)arg1;	// IMP=0x0010000000040c73
- (_Bool)isNonAppBundleIdentifierValid:(id)arg1;	// IMP=0x0010000000040c6b
- (void)runBacktraceToolOnProcess:(id)arg1 forService:(id)arg2;	// IMP=0x0010000000040c65
- (void)prepareForAbort;	// IMP=0x0010000000040c5f
- (unsigned long long)evaluatePolicyForUsageStringAndPromptingForClient:(id)arg1 attributionChain:(id)arg2 service:(id)arg3 desiredAuth:(unsigned long long)arg4 resultUsageString:(id *)arg5;	// IMP=0x0010000000040c4c
- (void)sendAnalyticsWithEventName:(id)arg1 fields:(id)arg2;	// IMP=0x001000000004093b
- (void)sendAnalyticsForAction:(long long)arg1 service:(id)arg2 subjectIdentity:(id)arg3 indirectObjectIdentity:(id)arg4 authValue:(unsigned long long)arg5 includeV1AuthValue:(_Bool)arg6 v1AuthValue:(unsigned long long)arg7 desiredAuth:(unsigned long long)arg8 domainReason:(id)arg9 promptType:(long long)arg10;	// IMP=0x0010000000040218
- (void)sendAnalyticsForPlugin:(id)arg1 service:(id)arg2 API:(id)arg3;	// IMP=0x001000000003fed3
- (void)updateAnalyticsEvent:(id)arg1 fromIdentity:(id)arg2 keyPrefix:(id)arg3;	// IMP=0x001000000003fc11
- (id)stringForAnalyticsAction:(long long)arg1;	// IMP=0x001000000003fbf2
- (void)notifyUserOfDeniedAccessBy:(id)arg1 forService:(id)arg2;	// IMP=0x001000000003fbe0
- (id)appBundleURLContainingExecutableURL:(id)arg1;	// IMP=0x001000000003f6d7
- (id)bundleURLContainingExecutableURL:(id)arg1;	// IMP=0x001000000003f695
- (long long)promptingPolicyForIdentity:(id)arg1 accessingService:(id)arg2 withAttributionChain:(id)arg3;	// IMP=0x001000000003f680
- (void)handleCompositionType:(long long)arg1 forParentService:(id)arg2 forRequest:(id)arg3 intoReply:(id)arg4;	// IMP=0x001000000003f66e
- (void)forwardMessage:(id)arg1 toUserTCCDFromAttributionChain:(id)arg2 forService:(id)arg3 andMergeReplyInto:(id)arg4 forConnnection:(id)arg5;	// IMP=0x001000000003f65c
- (_Bool)sendMessageAsync:(id)arg1 toTCCDForTargetUID:(unsigned int)arg2 withReplyBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000003f647
- (id)sendMessageSync:(id)arg1 toTCCDForTargetUID:(unsigned int)arg2;	// IMP=0x001000000003f632
@property(readonly) NSUUID *bootUUID; // @synthesize bootUUID=_bootUUID;
- (id)homeRelativePathToStateDirectory;	// IMP=0x001000000003f4af
- (void)_invalidMethodForPlatform;	// IMP=0x001000000003f49d
- (id)serviceByName:(id)arg1;	// IMP=0x001000000003f11c
- (void)_configureServices;	// IMP=0x001000000003f116
- (id)description;	// IMP=0x001000000003f104
- (void)loadConfigurationDictionary;	// IMP=0x001000000003eea1
- (id)initWithName:(id)arg1;	// IMP=0x001000000003ee2e

@end

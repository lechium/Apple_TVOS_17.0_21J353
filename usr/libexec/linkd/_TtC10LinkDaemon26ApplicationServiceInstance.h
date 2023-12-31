//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LNIntentEnablement, MISSING_TYPE, NSArray, NSString;

@interface _TtC10LinkDaemon26ApplicationServiceInstance : NSObject
{
    MISSING_TYPE *sourceBundleIdentifier;	// 8 = 0x8
    MISSING_TYPE *destinationBundleIdentifier;	// 24 = 0x18
    MISSING_TYPE *registrySource;	// 40 = 0x28
    MISSING_TYPE *auditToken;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x004000000005f90a
- (id)init;	// IMP=0x001000000005f8d4
- (void)setIntentEnabled:(NSString *)arg1 enabled:(_Bool)arg2 reply:(void (^)(NSError *))arg3;	// IMP=0x001000000005f6ea
- (void)retrieveSiriLanguageWithReply:(void (^)(NSString *, NSError *))arg1;	// IMP=0x001000000005f392
- (void)retrieveEnabledIntentsWithReply:(void (^)(NSArray *, NSError *))arg1;	// IMP=0x001000000005f1cb
- (void)retrievePersistedIntentEnablementsWithReply:(void (^)(NSDictionary *, NSError *))arg1;	// IMP=0x001000000005ef31
- (void)persistIntentEnablementForIntent:(NSString *)arg1 enablement:(LNIntentEnablement *)arg2 reply:(void (^)(NSError *))arg3;	// IMP=0x001000000005ec61
- (void)updateRelevantIntents:(NSArray *)arg1 bundleIdentifier:(NSString *)arg2 reply:(void (^)(NSError *))arg3;	// IMP=0x001000000005e944
- (void)refreshAutoShortcutSubstitution:(NSArray *)arg1 spans:(NSArray *)arg2 parameterPresentationSubstitutions:(NSArray *)arg3 reply:(void (^)(NSError *))arg4;	// IMP=0x001000000005e2bb
- (void)requestUpdateAppShortcutParametersWithReply:(void (^)(NSError *))arg1;	// IMP=0x001000000005c316

@end


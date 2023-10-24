//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, NSURL, TCCDBundle;

@interface TCCDAccessIdentity : NSObject
{
    CDUnknownBlockType displayNameBlock;	// 8 = 0x8
    unsigned int _sdkVersion;	// 16 = 0x10
    unsigned int _platformType;	// 20 = 0x14
    _Bool _is_wk2_proxy;	// 24 = 0x18
    _Bool _pluginTargetsSystemExtensionPoint;	// 25 = 0x19
    int _client_type;	// 28 = 0x1c
    int _targetPID;	// 32 = 0x20
    int _responsiblePID;	// 36 = 0x24
    NSString *_identifier;	// 40 = 0x28
    NSNumber *_policy_id;	// 48 = 0x30
    NSString *_path;	// 56 = 0x38
    TCCDBundle *_bundle;	// 64 = 0x40
    NSString *_pluginBundleIdentifier;	// 72 = 0x48
    NSURL *_pluginBundleURL;	// 80 = 0x50
    long long _pluginPromptPolicy;	// 88 = 0x58
    long long _appExtensionType;	// 96 = 0x60
    CDStruct_4c969caf _accessorAuditToken;	// 104 = 0x68
    CDStruct_4c969caf _responsibleAuditToken;	// 136 = 0x88
}

+ (void)cacheAccessIdentity:(id)arg1 forAccessorAuditToken:(CDStruct_4c969caf *)arg2 responsibleAuditToken:(CDStruct_4c969caf *)arg3 isSpecificIdentity:(_Bool)arg4;	// IMP=0x0040000000015df2
+ (id)cachedAccessIdentityForAccessorAuditToken:(CDStruct_4c969caf *)arg1 responsibleAuditToken:(CDStruct_4c969caf *)arg2 isSpecificIdentity:(_Bool)arg3;	// IMP=0x0010000000015d2b
+ (void)clearCache;	// IMP=0x0010000000015caa
+ (id)_createCacheKeyWithAccessorAuditToken:(CDStruct_4c969caf *)arg1 responsibleAuditToken:(CDStruct_4c969caf *)arg2 isSpecificIdentity:(_Bool)arg3;	// IMP=0x00100000000158da
+ (void)_initIdentityCache;	// IMP=0x0010000000015835
- (void).cxx_destruct;	// IMP=0x00200000000190c1
@property(readonly) long long appExtensionType; // @synthesize appExtensionType=_appExtensionType;
@property(readonly) long long pluginPromptPolicy; // @synthesize pluginPromptPolicy=_pluginPromptPolicy;
@property(readonly) _Bool pluginTargetsSystemExtensionPoint; // @synthesize pluginTargetsSystemExtensionPoint=_pluginTargetsSystemExtensionPoint;
@property(readonly) NSURL *pluginBundleURL; // @synthesize pluginBundleURL=_pluginBundleURL;
@property(readonly) NSString *pluginBundleIdentifier; // @synthesize pluginBundleIdentifier=_pluginBundleIdentifier;
@property(readonly) CDStruct_4c969caf responsibleAuditToken; // @synthesize responsibleAuditToken=_responsibleAuditToken;
@property(readonly) CDStruct_4c969caf accessorAuditToken; // @synthesize accessorAuditToken=_accessorAuditToken;
@property(readonly) int responsiblePID; // @synthesize responsiblePID=_responsiblePID;
@property(readonly) int targetPID; // @synthesize targetPID=_targetPID;
@property(readonly) TCCDBundle *bundle; // @synthesize bundle=_bundle;
@property(readonly) NSString *path; // @synthesize path=_path;
@property(readonly) _Bool is_wk2_proxy; // @synthesize is_wk2_proxy=_is_wk2_proxy;
@property(readonly) NSNumber *policy_id; // @synthesize policy_id=_policy_id;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly) int client_type; // @synthesize client_type=_client_type;
@property(readonly) _Bool isAvocadoWidget;
- (_Bool)isPlugInWithExtensionPointIdentifier:(id)arg1;	// IMP=0x0010000000018eb1
- (_Bool)getSDKVersion:(unsigned int *)arg1 platformType:(unsigned int *)arg2;	// IMP=0x00100000000184c3
@property(readonly) NSString *attributionPath;
- (id)displayName;	// IMP=0x0010000000018477
- (id)description;	// IMP=0x0010000000018435
- (void)_updateFromAccessIdentity:(id)arg1;	// IMP=0x000000000001834a
- (id)_initWithAccessIdentity:(id)arg1;	// IMP=0x00100000000182dc
- (id)initWithIdentifier:(id)arg1 type:(int)arg2 executableURL:(id)arg3 SDKVersion:(unsigned int)arg4 platformType:(unsigned int)arg5;	// IMP=0x0010000000017e14
- (id)initWithBundleIdentifier:(id)arg1 isWK2Proxy:(_Bool)arg2;	// IMP=0x0010000000017c61
- (id)initWithMessage:(id)arg1;	// IMP=0x001000000001780e
- (id)initWithAttributionChain:(id)arg1 preferMostSpecificIdentifier:(_Bool)arg2;	// IMP=0x0010000000017568
- (_Bool)_deriveIdentityFromAttributionChain:(id)arg1 preferMostSpecificIdentifier:(_Bool)arg2;	// IMP=0x00100000000164c0
- (void)_makeDisplayNameBlockForURL:(id)arg1;	// IMP=0x00100000000163af
- (_Bool)isEqualToCachedIdentity:(id)arg1;	// IMP=0x00100000000159d9

@end


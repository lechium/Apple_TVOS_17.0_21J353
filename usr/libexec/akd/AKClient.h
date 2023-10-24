//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSAuditToken, NSString, NSXPCConnection;

@interface AKClient : NSObject
{
    NSXPCConnection *_connection;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSString *_fullName;	// 24 = 0x18
    NSString *_description;	// 32 = 0x20
    NSString *_bundleID;	// 40 = 0x28
    BSAuditToken *_auditToken;	// 48 = 0x30
}

+ (_Bool)isAppWithBundleIDForeground:(id)arg1;	// IMP=0x0040000000008edd
- (void).cxx_destruct;	// IMP=0x002000000000a4ab
- (id)_stringValueForEntitlement:(id)arg1;	// IMP=0x001000000000a405
- (_Bool)_boolValueForEntitlement:(id)arg1;	// IMP=0x001000000000a371
- (id)_arrayValueForEntitlement:(id)arg1;	// IMP=0x001000000000a2eb
@property(readonly, nonatomic) _Bool authorizationClientProvidesUI;
@property(readonly, nonatomic) _Bool authorizationRequiresRapport;
@property(readonly, nonatomic) NSString *authorizationAccessLevel;
@property(readonly, nonatomic) NSString *teamID;
- (id)_appIDForIOS;	// IMP=0x001000000000a15b
- (id)_appIDForMacOS;	// IMP=0x001000000000a0f9
@property(readonly, nonatomic) NSString *appID;
@property(readonly, nonatomic) NSString *bundleID;
- (id)proxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000009d80
- (id)description;	// IMP=0x0010000000009cb4
- (id)_bundle;	// IMP=0x0010000000009b87
- (id)_bundleNonPluginKit;	// IMP=0x0010000000009a71
@property(readonly, nonatomic) NSString *localizedAppName;
@property(readonly, nonatomic) NSString *fullName;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) _Bool isPermittedToProxyAuthorizationBundleIdentifier;
@property(readonly, nonatomic) _Bool isExemptedFromMandatoryUISecurityUpgrade;
- (id)_exemptedBundleIDsFromMandatoryUISecurityUpgrade;	// IMP=0x00100000000096d4
@property(readonly, nonatomic) _Bool isPermittedForInteractiveAuthOnLimitedContext;
- (id)_permittedProcessNamesForInteractiveAuthOnLimitedContext;	// IMP=0x00100000000095f0
@property(readonly, nonatomic) _Bool isPermittedToProxyInitialAuth;
- (id)_permitedProcessNamesToProxyInitialAuthWhiteList;	// IMP=0x00100000000094c3
@property(readonly, nonatomic) _Bool isPermittedToProxy;
- (id)_permitedProcessNamesToProxyWhiteList;	// IMP=0x0010000000009372
- (_Bool)_isOnInternalBuild;	// IMP=0x0010000000009361
- (_Bool)_isAppleBinary;	// IMP=0x0010000000009359
- (id)_approvedCodeSigningIdentifiers;	// IMP=0x0010000000009322
- (id)_codeSigningIdentifier;	// IMP=0x00100000000092aa
- (_Bool)_hasApprovedSigningIdentifier;	// IMP=0x0010000000009236
@property(readonly, nonatomic) _Bool hasPrivateSignedAccess;
@property(readonly, nonatomic) _Bool hasPrivateAccess;
@property(readonly, nonatomic) _Bool hasPublicAccess;
@property(readonly, nonatomic) _Bool hasOwnerAccess;
@property(readonly, nonatomic) _Bool hasInternalAccess;
@property(readonly, nonatomic) _Bool hasWriteAccess;
@property(readonly, nonatomic) _Bool hasServerOnlyDeviceListAccess;
- (_Bool);	// IMP=0x0010000000009107
@property(readonly, nonatomic) _Bool hasInternalPrivateAccess;
- (_Bool)hasInternalPrivateEntitlementAccess;	// IMP=0x0010000000009095
@property(readonly, nonatomic) NSXPCConnection *xpcConnection;
- (id)initWithAuditToken:(CDStruct_6ad76789)arg1;	// IMP=0x0010000000009006
- (id)initWithConnection:(id)arg1;	// IMP=0x0010000000008f9b

// Remaining properties
@property(readonly, nonatomic) _Bool hasInternalEntitledAccess;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MCMPOSIXUser, MCMUserIdentity, NSURL;
@protocol MCMClientCodeSignInfo;

__attribute__((visibility("hidden")))
@interface MCMClientIdentity : NSObject
{
    _Bool _sandboxed;	// 8 = 0x8
    _Bool _kernel;	// 9 = 0x9
    _Bool _extension;	// 10 = 0xa
    _Bool _cached;	// 11 = 0xb
    int _posixPID;	// 12 = 0xc
    unsigned int _platform;	// 16 = 0x10
    MCMPOSIXUser *_posixUser;	// 24 = 0x18
    MCMUserIdentity *_userIdentity;	// 32 = 0x20
    NSURL *_sandboxContainerURL;	// 40 = 0x28
    id <MCMClientCodeSignInfo> _codeSignInfo;	// 48 = 0x30
    CDStruct_4c969caf _realAuditToken;	// 56 = 0x38
    CDStruct_4c969caf _effectiveAuditToken;	// 88 = 0x58
}

+ (id)privilegedClientIdentityWithUserIdentity:(id)arg1 kernel:(_Bool)arg2;	// IMP=0x001000000000b402
+ (id)anonymousPrivilegedClientIdentityWithUserIdentity:(id)arg1;	// IMP=0x001000000000b3c3
- (void).cxx_destruct;	// IMP=0x000000000000aaec
@property(readonly, nonatomic) _Bool cached; // @synthesize cached=_cached;
@property(readonly, nonatomic, getter=isExtension) _Bool extension; // @synthesize extension=_extension;
@property(readonly, nonatomic) id <MCMClientCodeSignInfo> codeSignInfo; // @synthesize codeSignInfo=_codeSignInfo;
@property(readonly, nonatomic) NSURL *sandboxContainerURL; // @synthesize sandboxContainerURL=_sandboxContainerURL;
@property(readonly, nonatomic) unsigned int platform; // @synthesize platform=_platform;
@property(readonly, nonatomic, getter=isKernel) _Bool kernel; // @synthesize kernel=_kernel;
@property(readonly, nonatomic) MCMUserIdentity *userIdentity; // @synthesize userIdentity=_userIdentity;
@property(readonly, nonatomic) CDStruct_4c969caf effectiveAuditToken; // @synthesize effectiveAuditToken=_effectiveAuditToken;
@property(readonly, nonatomic) CDStruct_4c969caf realAuditToken; // @synthesize realAuditToken=_realAuditToken;
@property(readonly, nonatomic, getter=isSandboxed) _Bool sandboxed; // @synthesize sandboxed=_sandboxed;
@property(readonly, nonatomic) MCMPOSIXUser *posixUser; // @synthesize posixUser=_posixUser;
@property(readonly, nonatomic) int posixPID; // @synthesize posixPID=_posixPID;
- (id)shortDescription;	// IMP=0x000000000000a7d0
- (id)description;	// IMP=0x000000000000a746
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000a656
- (char *)issueSandboxExtensionWithMetadata:(id)arg1 legacyExtensionPolicy:(_Bool)arg2 error:(id *)arg3;	// IMP=0x000000000000a2b3
- (_Bool)needsSandboxExtensionForContainerWithClass:(unsigned long long)arg1 identifier:(id)arg2;	// IMP=0x000000000000a1aa
- (_Bool)isAllowedToChangeReferences;	// IMP=0x000000000000a116
- (_Bool)isAllowedToReadReferences;	// IMP=0x000000000000a082
- (_Bool)isAllowedToAccessUserAssets;	// IMP=0x0000000000009fee
- (_Bool)isAllowedToStageSharedContent;	// IMP=0x0000000000009f5a
- (_Bool)isAllowedToStartUserDataMigration;	// IMP=0x0000000000009ec6
- (_Bool)isAllowedToStartDataMigration;	// IMP=0x0000000000009e32
- (_Bool)isAllowedToRestoreContainer;	// IMP=0x0000000000009d9e
- (_Bool)isAllowedToSetDataProtection;	// IMP=0x0000000000009d0a
- (_Bool)isAllowedToAccessCodesignMapping;	// IMP=0x0000000000009c76
- (_Bool)isAllowedToTest;	// IMP=0x0000000000009be2
- (_Bool)isAllowedToWipeAnyDataContainer;	// IMP=0x0000000000009b4e
- (_Bool)isAllowedToDelete;	// IMP=0x0000000000009aba
- (_Bool)isAllowedToRegenerateDirectoryUUIDs;	// IMP=0x0000000000009a26
- (_Bool)isAllowedToRecreateContainerStructure;	// IMP=0x0000000000009992
- (_Bool)isAllowedToAccessInfoMetadata;	// IMP=0x00000000000098fe
- (_Bool)isAllowedToReplaceContainers;	// IMP=0x000000000000986a
- (_Bool)isAllowedToControlCaches;	// IMP=0x00000000000097d6
- (_Bool)isAllowedToWipePlugInDataContainerWithIdentifier:(id)arg1;	// IMP=0x0000000000009720
- (_Bool)isAllowedToLookupViaPrivateEntitlementWithClass:(unsigned long long)arg1 identifier:(id)arg2;	// IMP=0x0000000000009664
- (_Bool)isAllowedToLookupGroupContainersOfClass:(unsigned long long)arg1 ownedByIdentifier:(id)arg2;	// IMP=0x00000000000095a8
- (_Bool)isAllowedToAccessContainerIdentity:(id)arg1 error:(unsigned long long *)arg2;	// IMP=0x0000000000009563
- (_Bool)isAllowedToLookupContainerIdentity:(id)arg1;	// IMP=0x00000000000093f6
- (_Bool)isAllowedToLookupAllContainersOfClass:(unsigned long long)arg1;	// IMP=0x0000000000009359
- (id)clientIdentityByChangingCached:(_Bool)arg1;	// IMP=0x0000000000009310
- (struct container_client *)createLibsystemClient;	// IMP=0x0000000000009082
- (id)initWithPOSIXUser:(id)arg1 POSIXPID:(int)arg2 platform:(unsigned int)arg3 userIdentity:(id)arg4 effectiveAuditToken:(CDStruct_4c969caf)arg5 realAuditToken:(CDStruct_4c969caf)arg6 codeSignInfo:(id)arg7 extension:(_Bool)arg8 sandboxed:(_Bool)arg9 sandboxContainerURL:(id)arg10 kernel:(_Bool)arg11;	// IMP=0x0000000000008f27
- (id)initInternal;	// IMP=0x0000000000008ed5
- (id)init;	// IMP=0x0000000000008e32

@end

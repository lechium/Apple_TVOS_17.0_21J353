//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSProxy.h>

@class OTManager;
@protocol OctagonEntitlementBearerProtocol;

@interface OctagonXPCEntitlementChecker : NSProxy
{
    OTManager *_manager;	// 8 = 0x8
    id <OctagonEntitlementBearerProtocol> _entitlementBearer;	// 16 = 0x10
}

+ (id)createWithManager:(id)arg1 entitlementBearer:(id)arg2;	// IMP=0x0040000000135fcb
+ (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x0010000000135f84
- (void).cxx_destruct;	// IMP=0x0020000000135f53
@property(retain) id <OctagonEntitlementBearerProtocol> entitlementBearer; // @synthesize entitlementBearer=_entitlementBearer;
@property(retain) OTManager *manager; // @synthesize manager=_manager;
- (void)failPersistAccountSettings:(id)arg1 setting:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000135e39
- (void)failFetchAccountWideSettingsWithForceFetch:(_Bool)arg1 arguments:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000135d6b
- (void)failFetchAccountSettings:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000135c9d
- (void)failSetAccountSetting:(id)arg1 setting:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000135bd1
- (void)failFetchTrustedSecureElementIdentities:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000135b03
- (void)failRemoveLocalSecureElementIdentityPeerID:(id)arg1 secureElementIdentityPeerID:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000135a37
- (void)failSetLocalSecureElementIdentity:(id)arg1 secureElementIdentity:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000013596b
- (void)failFetchEscrowContents:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000135899
- (void)forwardInvocation:(id)arg1;	// IMP=0x0010000000134f8f
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x0010000000134f30
- (id)initWithManager:(id)arg1 entitlementBearer:(id)arg2;	// IMP=0x0010000000134eb4

@end


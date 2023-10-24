//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HAP2AccessorySessionInfo, HAPSecuritySession, NSString;

__attribute__((visibility("hidden")))
@interface HAP2AccessoryServerSecureTransportPairVerify
{
    HAPSecuritySession *_securitySession;	// 8 = 0x8
    CDUnknownBlockType _stateChangeCompletion;	// 16 = 0x10
    HAP2AccessorySessionInfo *_sessionInfo;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000846c5
@property(retain, nonatomic) HAP2AccessorySessionInfo *sessionInfo; // @synthesize sessionInfo=_sessionInfo;
@property(copy, nonatomic) CDUnknownBlockType stateChangeCompletion; // @synthesize stateChangeCompletion=_stateChangeCompletion;
- (void)_closeWithError:(id)arg1;	// IMP=0x0000000000084494
- (void)_sendSetupExchangeData:(id)arg1;	// IMP=0x00000000000842f3
- (void)_secureTransport;	// IMP=0x00000000000841fb
- (void)_openTransport;	// IMP=0x000000000008414a
- (void)securitySession:(id)arg1 didCloseWithError:(id)arg2;	// IMP=0x000000000008405a
- (void)securitySessionDidOpen:(id)arg1;	// IMP=0x0000000000083f92
- (void)securitySession:(id)arg1 didReceiveSetupExchangeData:(id)arg2;	// IMP=0x0000000000083eca
- (id)securitySession:(id)arg1 didReceiveRequestForPeerPairingIdentityWithIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000083c13
- (id)securitySession:(id)arg1 didReceiveLocalPairingIdentityRequestWithError:(id *)arg2;	// IMP=0x0000000000083a22
- (void)doCloseWithError:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000008397a
- (void)doOpenWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000838ee
@property(retain, nonatomic) HAPSecuritySession *securitySession; // @synthesize securitySession=_securitySession;
- (id)initWithTransport:(id)arg1 operationQueue:(id)arg2;	// IMP=0x0000000000083729

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AAAFoundation/AAFService.h>

@class AKClient, NSString;

@interface AKWalrusDaemonService : AAFService
{
    AKClient *_client;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000019088
@property(readonly, nonatomic) AKClient *client; // @synthesize client=_client;
- (_Bool)shouldAcceptNewConnection:(id)arg1;	// IMP=0x0010000000018fe8
- (void)postWalrusStateUpdateToServerWithContext:(id)arg1 urlBagKey:(id)arg2 username:(id)arg3 password:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0010000000018afc
- (void)verifyEnableWalrusAllowedWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001886f
- (void)removeAllPCSAuthCredentialWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000187cf
- (void)PCSAuthContextForWebSessionIdentifier:(id)arg1 serviceName:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000018570
- (void)configureExportedInterface:(id)arg1;	// IMP=0x00100000000182ad
- (id)exportedProtocol;	// IMP=0x001000000001829c
- (id)exportedObject;	// IMP=0x0010000000018293
- (id)serviceName;	// IMP=0x001000000001827f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


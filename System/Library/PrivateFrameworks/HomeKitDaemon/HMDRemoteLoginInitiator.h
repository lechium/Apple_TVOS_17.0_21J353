//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDRemoteLoginAnisetteDataProviderBridge, HMDRemoteLoginInitiatorSession, HMDRemoteLoginMessageSender, NSString;

__attribute__((visibility("hidden")))
@interface HMDRemoteLoginInitiator
{
    HMDRemoteLoginInitiatorSession *_loginSession;	// 8 = 0x8
    HMDRemoteLoginAnisetteDataProviderBridge *_anisetteProviderBridge;	// 16 = 0x10
    HMDRemoteLoginMessageSender *_remoteMessageSender;	// 24 = 0x18
}

+ (_Bool)hasMessageReceiverChildren;	// IMP=0x0010000000320c75
+ (id)logCategory;	// IMP=0x0010000000320c45
- (void).cxx_destruct;	// IMP=0x0000000000320747
@property(retain, nonatomic) HMDRemoteLoginMessageSender *remoteMessageSender; // @synthesize remoteMessageSender=_remoteMessageSender;
@property(retain, nonatomic) HMDRemoteLoginAnisetteDataProviderBridge *anisetteProviderBridge; // @synthesize anisetteProviderBridge=_anisetteProviderBridge;
@property(retain, nonatomic) HMDRemoteLoginInitiatorSession *loginSession; // @synthesize loginSession=_loginSession;
- (void)didCompleteAuthentication:(id)arg1 error:(id)arg2 loggedInAccount:(id)arg3;	// IMP=0x00000000003205cd
- (id)messageReceiverChildren;	// IMP=0x00000000003204a0
- (void)_resetCurrentSession:(id)arg1;	// IMP=0x000000000032048c
- (void)_callCompletion:(id)arg1 loggedInAccount:(id)arg2 authSession:(id)arg3;	// IMP=0x0000000000320176
- (void)_handleSignoutResponse:(id)arg1 error:(id)arg2 message:(id)arg3;	// IMP=0x000000000031ff95
- (void)_handleRemoteLoginSignout:(id)arg1;	// IMP=0x000000000031fd2b
- (void)_proxyLoginWithSessionID:(id)arg1 authResults:(id)arg2 remoteDevice:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000031facf
- (void)_handleRemoteLoginProxyAuthentication:(id)arg1;	// IMP=0x000000000031f789
- (void)_handleProxyDeviceResponse:(id)arg1 error:(id)arg2 message:(id)arg3;	// IMP=0x000000000031f1f6
- (void)_handleRemoteLoginProxiedDevice:(id)arg1;	// IMP=0x000000000031ef8c
- (void)_companionLoginWithSessionID:(id)arg1 account:(id)arg2 remoteDevice:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000031ed30
- (void)_handleRemoteLoginCompanionAuthentication:(id)arg1;	// IMP=0x000000000031eaae
- (void)registerForMessages;	// IMP=0x000000000031e789
- (void)configureWithWorkQueue:(id)arg1 messageDispatcher:(id)arg2;	// IMP=0x000000000031e597
- (id)initWithUUID:(id)arg1 accessory:(id)arg2 remoteLoginHandler:(id)arg3;	// IMP=0x000000000031e4f7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

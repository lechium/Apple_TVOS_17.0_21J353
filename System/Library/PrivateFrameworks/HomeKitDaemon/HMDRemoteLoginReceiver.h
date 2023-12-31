//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDRemoteLoginReceiverSession, NSString;

__attribute__((visibility("hidden")))
@interface HMDRemoteLoginReceiver
{
    HMDRemoteLoginReceiverSession *_loginSession;	// 8 = 0x8
}

+ (id)logCategory;	// IMP=0x0010000000b45d75
- (void).cxx_destruct;	// IMP=0x0000000000b45a35
@property(retain, nonatomic) HMDRemoteLoginReceiverSession *loginSession; // @synthesize loginSession=_loginSession;
- (void)didCompleteAuthentication:(id)arg1 response:(id)arg2;	// IMP=0x0000000000b45932
- (void)_handleACAccountDidChangeNotification:(id)arg1;	// IMP=0x0000000000b45584
- (void)_callCompletion:(id)arg1;	// IMP=0x0000000000b4538c
- (void)_auditLoggedInAccountFor:(id)arg1;	// IMP=0x0000000000b45233
- (void)auditLoggedInAccountFor:(id)arg1;	// IMP=0x0000000000b4517b
- (void)auditLoggedInAccount;	// IMP=0x0000000000b4510a
- (void)_handleSignoutRequest:(id)arg1;	// IMP=0x0000000000b44dc9
- (void)_authenticate:(id)arg1 message:(id)arg2;	// IMP=0x0000000000b44b96
- (void)_handleProxyAuthenticationRequest:(id)arg1;	// IMP=0x0000000000b44661
- (void)_handleProxyDeviceRequest:(id)arg1;	// IMP=0x0000000000b441fc
- (void)_handleCompanionAuthenticationRequest:(id)arg1;	// IMP=0x0000000000b43cc7
- (void)registerForNotifications;	// IMP=0x0000000000b43c25
- (void)registerForMessages;	// IMP=0x0000000000b4388a
- (void)configureWithWorkQueue:(id)arg1 messageDispatcher:(id)arg2;	// IMP=0x0000000000b4385b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


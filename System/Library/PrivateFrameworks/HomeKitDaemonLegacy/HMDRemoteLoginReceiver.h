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

+ (id)logCategory;	// IMP=0x00100000009d4f79
- (void).cxx_destruct;	// IMP=0x00000000009d4c39
@property(retain, nonatomic) HMDRemoteLoginReceiverSession *loginSession; // @synthesize loginSession=_loginSession;
- (void)didCompleteAuthentication:(id)arg1 response:(id)arg2;	// IMP=0x00000000009d4b36
- (void)_handleACAccountDidChangeNotification:(id)arg1;	// IMP=0x00000000009d4788
- (void)_callCompletion:(id)arg1;	// IMP=0x00000000009d4590
- (void)_auditLoggedInAccountFor:(id)arg1;	// IMP=0x00000000009d4437
- (void)auditLoggedInAccountFor:(id)arg1;	// IMP=0x00000000009d437f
- (void)auditLoggedInAccount;	// IMP=0x00000000009d430e
- (void)_handleSignoutRequest:(id)arg1;	// IMP=0x00000000009d3edb
- (void)_authenticate:(id)arg1 message:(id)arg2;	// IMP=0x00000000009d3ca8
- (void)_handleProxyAuthenticationRequest:(id)arg1;	// IMP=0x00000000009d3773
- (void)_handleProxyDeviceRequest:(id)arg1;	// IMP=0x00000000009d330e
- (void)_handleCompanionAuthenticationRequest:(id)arg1;	// IMP=0x00000000009d2dd9
- (void)registerForNotifications;	// IMP=0x00000000009d2d37
- (void)registerForMessages;	// IMP=0x00000000009d299c
- (void)configureWithWorkQueue:(id)arg1 messageDispatcher:(id)arg2;	// IMP=0x00000000009d295b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

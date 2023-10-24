//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString, NSXPCConnection;

@interface AMSDServiceConnection : NSObject
{
    NSString *_logKey;	// 8 = 0x8
    NSXPCConnection *_remoteConnection;	// 16 = 0x10
    NSMutableSet *_retainer;	// 24 = 0x18
}

+ (id)machServiceName;	// IMP=0x00200000000456d0
- (void).cxx_destruct;	// IMP=0x00200000000460a1
@property(retain, nonatomic) NSMutableSet *retainer; // @synthesize retainer=_retainer;
@property(retain, nonatomic) NSXPCConnection *remoteConnection; // @synthesize remoteConnection=_remoteConnection;
@property(retain, nonatomic) NSString *logKey; // @synthesize logKey=_logKey;
- (void)_provideService:(id)arg1 delegate:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000045c9f
- (void)dealloc;	// IMP=0x0010000000045b63
- (void)getAccountSignOutServiceProxyWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000045b02
- (void)getAccountCachedServerDataServiceProxyWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000045aa1
- (void)getSecurityServiceProxyWithDelegate:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000045a14
- (void)getPushNotificationServiceProxyWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000045997
- (void)getPurchaseServiceProxyWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000045936
- (void)getKeychainServiceProxyWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000458d5
- (void)getFraudReportServiceProxyWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000045874
- (void)getDismissQRDialogServiceProxyWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000457f7
- (void)getDeviceMessengerServiceProxyWithDelegate:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000004575a
- (void)getCookieServiceProxyWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000456dd
- (id)initWithConnection:(id)arg1;	// IMP=0x00100000000455da

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

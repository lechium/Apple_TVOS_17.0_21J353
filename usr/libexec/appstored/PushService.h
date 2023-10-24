//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSPushHandler, NSMapTable, NSMutableDictionary, NSString, PushConnection, PushDiagnostic;
@protocol OS_dispatch_queue;

@interface PushService : NSObject
{
    PushConnection *_connection;	// 8 = 0x8
    NSMapTable *_consumers;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    NSString *_environment;	// 32 = 0x20
    NSMutableDictionary *_pendingMessages;	// 40 = 0x28
    AMSPushHandler *_pushHandler;	// 48 = 0x30
    PushDiagnostic *_pushDiagnostic;	// 56 = 0x38
    unsigned long long _stateHandle;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x002000000014e32a
- (void)handleSandboxAccountDidChangeNotification:(id)arg1;	// IMP=0x001000000014e0f8
- (void)_handleAccountDidChangeNotification:(id)arg1;	// IMP=0x001000000014dec9
- (void)_handleBagChangedNotification:(id)arg1;	// IMP=0x001000000014de70
- (void)pushConnection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(unsigned long long)arg3;	// IMP=0x001000000014de6a
- (void)pushConnection:(id)arg1 didReceiveRawMessage:(id)arg2;	// IMP=0x001000000014d802
- (void)pushPayload:(id)arg1 withBadgeRequest:(id)arg2;	// IMP=0x001000000014d6f7
- (id)init;	// IMP=0x001000000014cb0c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


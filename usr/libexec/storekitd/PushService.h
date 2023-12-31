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

+ (id)_pushHandlerWithBagContract:(id)arg1;	// IMP=0x002000000007f4cc
+ (id)sharedInstance;	// IMP=0x001000000007ee6d
- (void).cxx_destruct;	// IMP=0x002000000008017f
- (void)_unitTest_waitForSetup;	// IMP=0x0010000000080164
- (void)_queuePendingMessage:(id)arg1 withActionType:(id)arg2;	// IMP=0x0010000000080081
- (void)_processReceivedMessage:(id)arg1 withConnection:(id)arg2;	// IMP=0x001000000007fc56
- (void)_initializeConnectionsAndSkipEnvironmentCheck:(_Bool)arg1;	// IMP=0x001000000007f8d3
- (void)_handleBagChangedNotification:(id)arg1;	// IMP=0x001000000007f870
- (void)_flushPendingMessagesWithActionType:(id)arg1;	// IMP=0x001000000007f58f
- (void)pushConnection:(id)arg1 didRecieveMessage:(id)arg2;	// IMP=0x001000000007f3ec
- (void)unregisterConsumerForActionType:(unsigned long long)arg1;	// IMP=0x001000000007f2df
- (void)registerConsumer:(id)arg1 forActionType:(unsigned long long)arg2;	// IMP=0x001000000007f15d
- (id)initWithConnection:(id)arg1;	// IMP=0x001000000007eed6
- (id)init;	// IMP=0x001000000007eec2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


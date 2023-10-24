//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol CSVoiceTriggerXPCConnectionDelegate, OS_dispatch_queue, OS_xpc_object;

@interface CSVoiceTriggerXPCConnection : NSObject
{
    id <CSVoiceTriggerXPCConnectionDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSObject<OS_xpc_object> *_connection;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000133d92
@property(retain, nonatomic) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <CSVoiceTriggerXPCConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_handleVoiceTriggerStatsFetchEvent:(id)arg1 client:(id)arg2;	// IMP=0x0010000000133c38
- (void)_handleServiceConnectionLostIfNeeded;	// IMP=0x0010000000133c32
- (void)_handleEnableVoiceTriggerWithSiriAssertionRequest:(id)arg1;	// IMP=0x0010000000133b5e
- (void)_handleVoiceTriggeredSiriSessionCancelled;	// IMP=0x0010000000133aa2
- (void)_handleRaiseToSpeakBypassRequest:(id)arg1;	// IMP=0x0010000000133a07
- (void)_handlePhraseSpotterBypassRequest:(id)arg1;	// IMP=0x00100000001338e4
- (void)_handleVoiceTriggerXPCServiceMessage:(id)arg1 client:(id)arg2;	// IMP=0x00100000001336f4
- (void)_sendReply:(id)arg1 client:(id)arg2 result:(_Bool)arg3 error:(id)arg4;	// IMP=0x0010000000133693
- (void)_handleClientError:(id)arg1 client:(id)arg2;	// IMP=0x0010000000133498
- (void)_handleClientMessage:(id)arg1 client:(id)arg2;	// IMP=0x0010000000133330
- (void)_handleClientEvent:(id)arg1;	// IMP=0x00100000001331ca
- (void)activateConnection;	// IMP=0x001000000013311b
- (id)initWithConnection:(id)arg1;	// IMP=0x001000000013304f

@end


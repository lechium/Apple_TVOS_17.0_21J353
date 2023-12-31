//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HAP2LoggingObject.h"

@class HAP2PropertyLock, NSError, NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSObject, NSString, NSThread;
@protocol HAP2CoAPClientDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HAP2CoAPClient : HAP2LoggingObject
{
    struct coap_address_t _address;	// 8 = 0x8
    _Bool _connected;	// 40 = 0x28
    _Bool _registered;	// 41 = 0x29
    id <HAP2CoAPClientDelegate> _delegate;	// 48 = 0x30
    unsigned long long _maxTransmitAttempts;	// 56 = 0x38
    double _initialACKTimeout;	// 64 = 0x40
    CDUnknownBlockType _openCompletion;	// 72 = 0x48
    CDUnknownBlockType _closeCompletion;	// 80 = 0x50
    NSMutableDictionary *_responseCompletionsByToken;	// 88 = 0x58
    NSError *_closeError;	// 96 = 0x60
    NSMutableSet *_activeTokens;	// 104 = 0x68
    NSMutableOrderedSet *_previousResponseMessageIDs;	// 112 = 0x70
    NSMutableOrderedSet *_previousEventMessageIDs;	// 120 = 0x78
    HAP2PropertyLock *_propertyLock;	// 128 = 0x80
    NSObject<OS_dispatch_queue> *_workQueue;	// 136 = 0x88
    NSString *_accessoryName;	// 144 = 0x90
    NSThread *_ioThread;	// 152 = 0x98
    struct coap_resource_t *_notificationResource;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x000000000012744c
- (void)didUnregister;	// IMP=0x00000000001273d9
- (void)didRegister;	// IMP=0x0000000000127335
- (void)didReceivePongInSession:(struct coap_session_t *)arg1 messageID:(unsigned long long)arg2;	// IMP=0x0000000000127328
- (void)didFailToSendMessageInSession:(struct coap_session_t *)arg1 messageID:(unsigned long long)arg2 message:(struct coap_pdu_t *)arg3 reason:(unsigned long long)arg4;	// IMP=0x0000000000126fc1
- (void)didReceiveRequestInSession:(struct coap_session_t *)arg1 messageID:(unsigned long long)arg2 request:(struct coap_pdu_t *)arg3 response:(struct coap_pdu_t *)arg4;	// IMP=0x0000000000126a90
- (void)didReceiveResponseInSession:(struct coap_session_t *)arg1 messageID:(unsigned long long)arg2 response:(struct coap_pdu_t *)arg3;	// IMP=0x0000000000125f65
- (void)didCloseSession;	// IMP=0x0000000000125de6
- (struct coap_session_t *)shouldOpenSessionWithContext:(struct coap_context_t *)arg1;	// IMP=0x0000000000125095
- (void)closeWithError:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000124f17
- (void)alterMaxTransmitAttempts:(unsigned long long)arg1 initialACKTimeout:(double)arg2;	// IMP=0x0000000000124e09
- (void)sendRequestWithMethod:(unsigned char)arg1 path:(id)arg2 payload:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000124c4f
- (void)openWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000124b09
@property(nonatomic) double initialACKTimeout; // @synthesize initialACKTimeout=_initialACKTimeout;
@property(nonatomic) unsigned long long maxTransmitAttempts; // @synthesize maxTransmitAttempts=_maxTransmitAttempts;
@property(nonatomic) _Bool connected; // @synthesize connected=_connected;
@property(nonatomic) __weak id <HAP2CoAPClientDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithIPAddress:(id)arg1;	// IMP=0x00000000001245c3
- (id)initWithIPAddress:(id)arg1 port:(unsigned short)arg2;	// IMP=0x00000000001245ab
- (id)initWithIPAddress:(id)arg1 port:(unsigned short)arg2 maxTransmitAttempts:(unsigned long long)arg3 initialACKTimeout:(double)arg4;	// IMP=0x0000000000124596
- (id)initWithIPAddress:(id)arg1 port:(unsigned short)arg2 maxTransmitAttempts:(unsigned long long)arg3 initialACKTimeout:(double)arg4 workQueue:(id)arg5;	// IMP=0x0000000000124581
- (id)initWithSocketAddress:(const struct sockaddr *)arg1;	// IMP=0x0000000000124567
- (id)initWithSocketAddress:(const struct sockaddr *)arg1 withAccessoryName:(id)arg2 maxTransmitAttempts:(unsigned long long)arg3 initialACKTimeout:(double)arg4;	// IMP=0x000000000012454c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


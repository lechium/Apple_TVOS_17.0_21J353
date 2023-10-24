//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDModernTransportMessageContextOptions, HMDNetworkActivityWrapper, HMDRemoteMessage, HMFMessageDestination, HMFTimer, NSMutableSet, NSSet, NSString, NSUUID;
@protocol HMDDateProvider, HMDNetworkActivityWrapperFactory, HMDTimerProvider;

__attribute__((visibility("hidden")))
@interface HMDModernTransportMessageContext : NSObject
{
    NSMutableSet *_remainingTransports;	// 8 = 0x8
    NSMutableSet *_inProgressTransports;	// 16 = 0x10
    _Bool _didSucceedSending;	// 24 = 0x18
    _Bool _didNotifyDeviceReachability;	// 25 = 0x19
    _Bool _didTimeout;	// 26 = 0x1a
    _Bool _didFallback;	// 27 = 0x1b
    HMDModernTransportMessageContextOptions *_options;	// 32 = 0x20
    unsigned long long _successfulResponseCount;	// 40 = 0x28
    HMDNetworkActivityWrapper *_messageNetworkActivity;	// 48 = 0x30
    CDUnknownBlockType _completionHandler;	// 56 = 0x38
    id <HMDDateProvider> _dateProvider;	// 64 = 0x40
    id <HMDTimerProvider> _timerProvider;	// 72 = 0x48
    id <HMDNetworkActivityWrapperFactory> _activityFactory;	// 80 = 0x50
    HMFTimer *_responseTimer;	// 88 = 0x58
    CDUnknownBlockType _responseCompletionBlock;	// 96 = 0x60
    HMFTimer *_fallbackTimer;	// 104 = 0x68
    CDUnknownBlockType _fallbackCompletionBlock;	// 112 = 0x70
    double _requestStartTime;	// 120 = 0x78
    HMDRemoteMessage *_message;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x0000000000ce1406
@property(readonly) HMDRemoteMessage *message; // @synthesize message=_message;
@property double requestStartTime; // @synthesize requestStartTime=_requestStartTime;
@property(copy) CDUnknownBlockType fallbackCompletionBlock; // @synthesize fallbackCompletionBlock=_fallbackCompletionBlock;
@property(retain) HMFTimer *fallbackTimer; // @synthesize fallbackTimer=_fallbackTimer;
@property(copy) CDUnknownBlockType responseCompletionBlock; // @synthesize responseCompletionBlock=_responseCompletionBlock;
@property(retain) HMFTimer *responseTimer; // @synthesize responseTimer=_responseTimer;
@property(nonatomic) _Bool didFallback; // @synthesize didFallback=_didFallback;
@property(nonatomic) _Bool didTimeout; // @synthesize didTimeout=_didTimeout;
@property(readonly) id <HMDNetworkActivityWrapperFactory> activityFactory; // @synthesize activityFactory=_activityFactory;
@property(readonly) id <HMDTimerProvider> timerProvider; // @synthesize timerProvider=_timerProvider;
@property(readonly) id <HMDDateProvider> dateProvider; // @synthesize dateProvider=_dateProvider;
@property(copy) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) HMDNetworkActivityWrapper *messageNetworkActivity; // @synthesize messageNetworkActivity=_messageNetworkActivity;
@property(nonatomic) _Bool didNotifyDeviceReachability; // @synthesize didNotifyDeviceReachability=_didNotifyDeviceReachability;
@property(readonly, nonatomic) unsigned long long successfulResponseCount; // @synthesize successfulResponseCount=_successfulResponseCount;
@property(readonly, nonatomic) _Bool didSucceedSending; // @synthesize didSucceedSending=_didSucceedSending;
@property(readonly, copy, nonatomic) NSSet *inProgressTransports; // @synthesize inProgressTransports=_inProgressTransports;
@property(readonly, copy, nonatomic) NSSet *remainingTransports; // @synthesize remainingTransports=_remainingTransports;
@property(readonly, nonatomic) HMDModernTransportMessageContextOptions *options; // @synthesize options=_options;
- (void)timerDidFire:(id)arg1;	// IMP=0x0000000000ce0f17
- (void)done;	// IMP=0x0000000000ce0a60
- (void)startTransportFallbackTimerWithTimeInterval:(double)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000ce08d9
- (void)startResponseTimerWithTimeInterval:(double)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000ce0752
- (double)timeoutRemaining;	// IMP=0x0000000000ce066e
- (id)preparedMessageWithTimeout:(double)arg1;	// IMP=0x0000000000ce02b2
- (void)receivedResponseOverTransport:(id)arg1 withError:(id)arg2;	// IMP=0x0000000000ce01f5
- (void)completeSendingOverTransport:(id)arg1 withError:(id)arg2;	// IMP=0x0000000000cdfd5f
- (void)startSendingOverTransport:(id)arg1;	// IMP=0x0000000000cdf8c9
@property(readonly, nonatomic) _Bool expectsResponse;
@property(readonly, nonatomic) double timeout;
@property(readonly, nonatomic) HMFMessageDestination *destination;
@property(readonly, nonatomic) NSUUID *messageID;
@property(readonly, nonatomic) NSUUID *identifier;
- (id)initWithMessage:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3 dateProvider:(id)arg4 timerProvider:(id)arg5;	// IMP=0x0000000000cdf408
- (id)initWithMessage:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3 dateProvider:(id)arg4 timerProvider:(id)arg5 activityFactory:(id)arg6;	// IMP=0x0000000000cdf251

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


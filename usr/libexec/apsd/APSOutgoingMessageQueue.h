//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APSCPPowerAssertion, APSEnvironment, NSMutableArray, NSMutableDictionary, NSTimer;
@protocol APSOutgoingMessageQueueDelegate;

@interface APSOutgoingMessageQueue : NSObject
{
    id <APSOutgoingMessageQueueDelegate> _delegate;	// 8 = 0x8
    APSEnvironment *_environment;	// 16 = 0x10
    NSMutableArray *_queue;	// 24 = 0x18
    NSTimer *_timer;	// 32 = 0x20
    double _criticalMessageTimeout;	// 40 = 0x28
    NSTimer *_criticalMessageKeepAliveTimer;	// 48 = 0x30
    double _criticalMessageKeepAliveTimerDuration;	// 56 = 0x38
    unsigned long long _criticalMessageFlushCount;	// 64 = 0x40
    unsigned long long _numberOfCriticalMessageFlushesBeforeDisconnecting;	// 72 = 0x48
    unsigned long long _criticalMessageFlushSize;	// 80 = 0x50
    double _forcedShortTimeoutDuration;	// 88 = 0x58
    double _lastReceivedAckOrReconnect;	// 96 = 0x60
    APSCPPowerAssertion *_powerAssertion;	// 104 = 0x68
    NSMutableDictionary *_lastReversePushRTTMilliseconds;	// 112 = 0x70
    NSMutableDictionary *_shouldReportLastReversePushRTT;	// 120 = 0x78
    _Bool _powerOptimizationsForExpensiveNetworkingDisabled;	// 128 = 0x80
    unsigned long long _numberQueued;	// 136 = 0x88
    double _lastNotificationQueued;	// 144 = 0x90
    unsigned long long _numberAcked;	// 152 = 0x98
    double _lastNotificationAcked;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x002000000006ee63
@property(nonatomic) _Bool powerOptimizationsForExpensiveNetworkingDisabled; // @synthesize powerOptimizationsForExpensiveNetworkingDisabled=_powerOptimizationsForExpensiveNetworkingDisabled;
- (void)appendPrettyStatusToStatusPrinter:(id)arg1;	// IMP=0x001000000006ed0f
- (unsigned long long)count;	// IMP=0x001000000006ecf9
- (void)setForcedShortTimeoutInterval:(id)arg1;	// IMP=0x001000000006ebf5
- (void)setCriticalMessageTimeout:(id)arg1;	// IMP=0x001000000006eaf1
- (void)setCriticalMessageKeepAliveTimerDuration:(id)arg1;	// IMP=0x001000000006e9ed
- (void)setNumberOfCriticalMessageFlushesBeforeDisconnecting:(id)arg1;	// IMP=0x001000000006e90e
@property(readonly, nonatomic) _Bool hasEagerMessages;
@property(readonly, nonatomic) _Bool hasPendingMessages;
- (void)_criticalMessageKeepAliveTimerFired;	// IMP=0x001000000006e623
- (void)_clearCriticalMessageKeepAliveTimer;	// IMP=0x001000000006e571
- (void)_clearCriticalMessageKeepAliveTimerIfAppropriate;	// IMP=0x001000000006e40e
- (void)_startCriticalMessageFlushTimerSendingFlush;	// IMP=0x001000000006e2e8
- (_Bool)_outgoingMessageIsLateCriticalMessage:(id)arg1;	// IMP=0x001000000006e0d0
- (void)_timerFired:(id)arg1;	// IMP=0x001000000006d865
- (void)_recalculateDisableFastDormancy;	// IMP=0x001000000006d75b
- (void)_recalculatePowerAssertion;	// IMP=0x001000000006d53c
- (void)_recalculateTimer;	// IMP=0x001000000006cded
- (void)_queueChanged;	// IMP=0x001000000006cd7a
- (void)_deliverResult:(id)arg1 forMessage:(id)arg2;	// IMP=0x001000000006cc5d
- (void)handleConnectionClosedOnInterface:(id)arg1;	// IMP=0x001000000006c8b2
- (void)handleConnectionOpenedOnInterface:(id)arg1;	// IMP=0x001000000006c476
- (void)handleAcknowledgmentForOutgoingMessageWithResult:(id)arg1 ackTimestamp:(unsigned long long)arg2 linkQuality:(int)arg3 connectionType:(long long)arg4 dualChannelState:(unsigned int)arg5 onInterface:(id)arg6;	// IMP=0x001000000006b993
- (id)lastReversePushRTTMillisecondsOnInterface:(id)arg1;	// IMP=0x001000000006b801
- (void)setShouldReportLastReversePushRTT:(_Bool)arg1 onInterface:(id)arg2;	// IMP=0x001000000006b601
- (_Bool)shouldReportLastReversePushRTTOnInterface:(id)arg1;	// IMP=0x001000000006b527
- (void)handleErrorSendingOutgoingMessage:(id)arg1 error:(id)arg2;	// IMP=0x001000000006b340
- (void)handleSentOutgoingMessage:(id)arg1 onInterface:(id)arg2;	// IMP=0x001000000006b18c
- (void)transferOwnershipOfPendingMessagesToHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000006afd3
- (void)cancelOutgoingMessageWithID:(unsigned long long)arg1;	// IMP=0x001000000006ad02
- (id)outgoingMessagesToSend;	// IMP=0x001000000006ab2c
- (void)enqueueOutgoingMessage:(id)arg1 forOriginator:(id)arg2;	// IMP=0x001000000006aa05
- (void)dealloc;	// IMP=0x001000000006a973
- (id)initWithDelegate:(id)arg1 environment:(id)arg2;	// IMP=0x001000000006a8a1

@end


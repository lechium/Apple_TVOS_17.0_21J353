//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPCPlaybackEngineEvent, NSString;
@protocol MPCPlaybackEngineEventStreamSubscription;

__attribute__((visibility("hidden")))
@interface MPCPlaybackEngineLoggingConsumer : NSObject
{
    struct _MPCLoggingConsumerChartState _chartState;	// 8 = 0x8
    struct _MPCLoggingConsumerChartStatus _chartStatus;	// 48 = 0x30
    id <MPCPlaybackEngineEventStreamSubscription> _subscription;	// 64 = 0x40
    MPCPlaybackEngineEvent *_lastTimeControlStatusEvent;	// 72 = 0x48
}

+ (id)identifier;	// IMP=0x001000000011e8fe
- (void).cxx_destruct;	// IMP=0x000000000012198f
@property(retain, nonatomic) MPCPlaybackEngineEvent *lastTimeControlStatusEvent; // @synthesize lastTimeControlStatusEvent=_lastTimeControlStatusEvent;
@property(readonly, nonatomic) id <MPCPlaybackEngineEventStreamSubscription> subscription; // @synthesize subscription=_subscription;
- (id)_playbackBarWithElapsedTime:(double)arg1 duration:(double)arg2;	// IMP=0x00000000001217ab
- (_Bool)_logAccountEvent:(id)arg1 subscription:(id)arg2 cursor:(id)arg3;	// IMP=0x0000000000120e81
- (void)unsubscribeFromEventStream:(id)arg1;	// IMP=0x0000000000120e48
- (void)subscribeToEventStream:(id)arg1;	// IMP=0x000000000011e90b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


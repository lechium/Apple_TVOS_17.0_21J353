//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol AFAnalyticsService, OS_dispatch_group, OS_dispatch_queue;

@interface AFAnalytics : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_dispatch_group> *_group;	// 16 = 0x10
    id <AFAnalyticsService> _service;	// 24 = 0x18
}

+ (id)sharedAnalytics;	// IMP=0x00400000001e47a4
- (void).cxx_destruct;	// IMP=0x00200000001e3cc8
- (id)_service:(_Bool)arg1;	// IMP=0x00100000001e3c72
- (void)_stageEvents:(id)arg1;	// IMP=0x00100000001e3bf2
- (void)_stageEvent:(id)arg1;	// IMP=0x00100000001e3b21
- (void)barrier:(CDUnknownBlockType)arg1;	// IMP=0x00100000001e3a88
- (void)logEvents:(id)arg1;	// IMP=0x00100000001e39fb
- (void)logEvent:(id)arg1;	// IMP=0x00100000001e396e
- (void)logEventWithType:(long long)arg1 machAbsoluteTime:(unsigned long long)arg2 contextResolver:(CDUnknownBlockType)arg3;	// IMP=0x00100000001e38d3
- (void)logEventWithType:(long long)arg1 machAbsoluteTime:(unsigned long long)arg2 contextProvider:(CDUnknownBlockType)arg3 contextProvidingQueue:(id)arg4;	// IMP=0x00100000001e3797
- (void)logEventWithType:(long long)arg1 machAbsoluteTime:(unsigned long long)arg2 context:(id)arg3 contextNoCopy:(_Bool)arg4;	// IMP=0x00100000001e36c8
- (void)setService:(id)arg1;	// IMP=0x00100000001e363b
- (void)boostQueuedEvents:(CDUnknownBlockType)arg1;	// IMP=0x00100000001e3520
- (void)logInstrumentationOfType:(Class)arg1 machAbsoluteTime:(unsigned long long)arg2 turnIdentifier:(id)arg3;	// IMP=0x00100000001e347e
- (void)logInstrumentationOfType:(Class)arg1 turnIdentifier:(id)arg2;	// IMP=0x00100000001e3431
- (void)endEventsGrouping;	// IMP=0x00100000001e33e6
- (void)beginEventsGrouping;	// IMP=0x00100000001e339b
- (void)logInstrumentation:(id)arg1 machAbsoluteTime:(unsigned long long)arg2 turnContext:(id)arg3;	// IMP=0x00100000001e3027
- (void)logInstrumentation:(id)arg1 machAbsoluteTime:(unsigned long long)arg2 turnIdentifier:(id)arg3;	// IMP=0x00100000001e2f71
- (void)logInstrumentation:(id)arg1 turnContext:(id)arg2;	// IMP=0x00100000001e2f0c
- (void)logEventWithType:(long long)arg1 contextResolver:(CDUnknownBlockType)arg2;	// IMP=0x00100000001e2e9f
- (void)logEventWithType:(long long)arg1 contextProvider:(CDUnknownBlockType)arg2 contextProvidingQueue:(id)arg3;	// IMP=0x00100000001e2e09
- (void)logEventWithType:(long long)arg1 contextProvider:(CDUnknownBlockType)arg2;	// IMP=0x00100000001e2d98
- (void)logEventWithType:(long long)arg1 context:(id)arg2 contextNoCopy:(_Bool)arg3;	// IMP=0x00100000001e2d1b
- (void)logEventWithType:(long long)arg1 context:(id)arg2;	// IMP=0x00100000001e2caa
- (void)logEventWithType:(long long)arg1 machAbsoluteTime:(unsigned long long)arg2 context:(id)arg3;	// IMP=0x00100000001e2b87
- (id)initWithInstanceContext:(id)arg1;	// IMP=0x00100000001e2ace
- (id)init;	// IMP=0x00100000001e2a44
- (void)configureForDaemon;	// IMP=0x001000000006e58d
- (CDUnknownBlockType)_ad_contextLoggerWithEventType:(long long)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000f5865

@end


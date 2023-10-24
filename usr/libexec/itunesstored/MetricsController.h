//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ISOperationQueue, SSMetricsEventController;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface MetricsController : NSObject
{
    long long _backoffRetryCount;	// 8 = 0x8
    NSObject<OS_dispatch_source> *_backoffRetryTimer;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    SSMetricsEventController *_eventController;	// 32 = 0x20
    ISOperationQueue *_operationQueue;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x004000000016db2b
- (void).cxx_destruct;	// IMP=0x002000000016fb44
- (void)_sendUnentitledResponseToMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000016f8e7
- (void)_scheduleBackoffRetry;	// IMP=0x001000000016f497
- (void)_reportEventsIfNeeded;	// IMP=0x001000000016f12d
- (void)_reportEvents;	// IMP=0x001000000016ee25
- (id)_operationQueue;	// IMP=0x001000000016ed69
- (_Bool)_hasEntitlements:(id)arg1;	// IMP=0x001000000016ed0d
- (void)_cancelBackoffRetryTimer;	// IMP=0x001000000016ecd7
- (void)_cancelBackoffRetry;	// IMP=0x001000000016ecb2
- (void)setInternalSettingsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000016eb43
- (void)reportEventsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000016e705
- (void)recordAnalyticsWithMetricsDialogEventWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000016e36c
- (void)insertEventWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000016dfe0
- (void)getInternalSettingsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000016dedf
- (void)configureDuet;	// IMP=0x001000000016ded9
- (void)recordAnalyticsWithMetricsDialogEvent:(id)arg1 forTopic:(id)arg2;	// IMP=0x001000000016dc42
- (void)observeXPCServer:(id)arg1;	// IMP=0x001000000016db80
- (void)dealloc;	// IMP=0x001000000016da92
- (id)init;	// IMP=0x001000000016d9ad

@end

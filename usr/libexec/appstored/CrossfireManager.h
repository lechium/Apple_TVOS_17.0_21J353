//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface CrossfireManager
{
    NSObject<OS_dispatch_queue> *_calloutQueue;	// 8 = 0x8
    _Bool _collectingMetrics;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    NSString *_osBuild;	// 32 = 0x20
    NSString *_platform;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000058b4b
- (void)_handleAnalyticsUsageSwitchChange:(id)arg1;	// IMP=0x0010000000058957
- (void)decorateMetricsEvent:(id)arg1 context:(id)arg2;	// IMP=0x0010000000058635
- (id)createMetricsEventsForEventType:(unsigned char)arg1 context:(id)arg2;	// IMP=0x0010000000058413
- (id)init;	// IMP=0x0010000000057042

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AMSEngagement, NSDictionary, _TtC9appstored6LogKey;

@interface ODPMetricsHandler
{
    _TtC9appstored6LogKey *_logKey;	// 8 = 0x8
    AMSEngagement *_engagement;	// 16 = 0x10
    NSDictionary *_powerMetrics;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000197796
- (id)topic;	// IMP=0x001000000019741a
- (_Bool)shouldCollectMetrics;	// IMP=0x0010000000197412
- (void)resetMetrics;	// IMP=0x0010000000196eec
- (void)recordSupplementalAppMetricsEvents;	// IMP=0x0010000000196b9c
- (void)recordLaunches:(id)arg1;	// IMP=0x00100000001960a0
- (void)recordDeletedBundleIDs:(id)arg1;	// IMP=0x00100000001958e0
- (void)recordInstallEventsForBundleIDs:(id)arg1 installType:(unsigned char)arg2;	// IMP=0x0010000000194b89
- (void)postMetrics;	// IMP=0x0010000000193d31
- (id)logKey;	// IMP=0x0010000000193cbe
- (id)getAppEventsWithError:(id *)arg1;	// IMP=0x00100000001939f3
- (id)deviceID;	// IMP=0x00100000001938b2
- (long long)appUsageType;	// IMP=0x00100000001938a7

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServices/AMSMetricsEvent.h>

@class NSDate;

@interface UpdateMetricsEvent : AMSMetricsEvent
{
    double _averageTimeBetweenPolls;	// 8 = 0x8
    NSDate *_lastPollDate;	// 16 = 0x10
    double _meanTimeToDiscovery;	// 24 = 0x18
    double _meanTimeToDownload;	// 32 = 0x20
    double _meanTimeToInstall;	// 40 = 0x28
    double _meanTimeToTransaction;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000000bfc1b
- (id)description;	// IMP=0x00100000000bfa17
- (id)initWithTopic:(id)arg1;	// IMP=0x00100000000bf969

@end


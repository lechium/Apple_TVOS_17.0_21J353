//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface IDSDeviceConnectionAWDMetrics : NSObject
{
    NSMutableDictionary *_metrics;	// 8 = 0x8
    struct os_unfair_lock_s _writeLock;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x004000000040c732
- (void).cxx_destruct;	// IMP=0x002000000040e282
- (id)_currentMetrics;	// IMP=0x001000000040e244
- (_Bool)_canReportMetric:(id)arg1;	// IMP=0x001000000040e204
- (void)_setCreatedAt:(id)arg1 forConnectionUUID:(id)arg2;	// IMP=0x001000000040dfc7
- (void)setSuccess:(_Bool)arg1 forConnectionUUID:(id)arg2;	// IMP=0x001000000040dda8
- (void)setClientOpenSocketCompletionTime:(double)arg1 forConnectionUUID:(id)arg2;	// IMP=0x001000000040db86
- (void)setDaemonOpenSocketCompletionTime:(double)arg1 forConnectionUUID:(id)arg2;	// IMP=0x001000000040d964
- (void)setFirstPacketReceiveTime:(double)arg1 forConnectionUUID:(id)arg2;	// IMP=0x001000000040d742
- (void)setDaemonOpenSocketTime:(double)arg1 forConnectionUUID:(id)arg2;	// IMP=0x001000000040d532
- (void)setConnectionInitTime:(double)arg1 forConnectionUUID:(id)arg2;	// IMP=0x001000000040d310
- (void)setClientInitTime:(double)arg1 forConnectionUUID:(id)arg2;	// IMP=0x001000000040d0ee
- (void)setServiceName:(id)arg1 forConnectionUUID:(id)arg2;	// IMP=0x001000000040ceb1
- (void)reportAndRemoveForConnectionUUID:(id)arg1;	// IMP=0x001000000040ce9f
- (void)_reportAndRemoveForConnectionUUID:(id)arg1;	// IMP=0x001000000040c9a2
- (id)awdMetricsForConnectionUUID:(id)arg1;	// IMP=0x001000000040c82e
- (id)init;	// IMP=0x001000000040c7d1

@end

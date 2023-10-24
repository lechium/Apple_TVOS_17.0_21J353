//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/NSObject-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSString;
@protocol HMMCounterDatePartitionProvider, HMMCounterObserver;

@protocol HMMCounterGroup <NSObject>
@property(readonly, nonatomic) id <HMMCounterDatePartitionProvider> partitionProvider;
- (_Bool)statisticsForCounter:(NSString *)arg1 inDatePartition:(NSDate *)arg2 minValue:(long long *)arg3 maxValue:(long long *)arg4 average:(long long *)arg5 updateCount:(long long *)arg6;
- (void)sampleValue:(long long)arg1 forCounter:(NSString *)arg2;
- (long long)sumOfCountersInDatePartition:(NSDate *)arg1;
- (NSDictionary *)countersInDatePartition:(NSDate *)arg1;
- (long long)valueForCounter:(NSString *)arg1 inDatePartition:(NSDate *)arg2;
- (NSArray *)datePartitions;
- (void)incrementCounter:(NSString *)arg1 by:(long long)arg2;
- (void)incrementCounter:(NSString *)arg1;
- (void)addObserver:(id <HMMCounterObserver>)arg1 forCounterName:(NSString *)arg2;
@end


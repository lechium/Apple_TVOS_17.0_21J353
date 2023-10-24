//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDAppleMediaAccessoryMetricsDispatcher, NSObject, NSString;
@protocol OS_dispatch_queue;

@protocol HMDAppleMediaAccessoryMetricsDispatcherDataSource <NSObject>
- (void)currentAccessorySensorStatusFlagsForAppleMediaAccessoryMetricsDispatcher:(HMDAppleMediaAccessoryMetricsDispatcher *)arg1 completion:(void (^)(int))arg2;
- (long long)numberOfActionSetsWithCurrentAccessoryMediaActionForAppleMediaAccessoryMetricsDispatcher:(HMDAppleMediaAccessoryMetricsDispatcher *)arg1;
- (long long)numberOfTriggersWithCurrentAccessoryPairedSensorsForAppleMediaAccessoryMetricsDispatcher:(HMDAppleMediaAccessoryMetricsDispatcher *)arg1;
- (long long)numberOfCurrentAccessoryPairedSensorsForAppleMediaAccessoryMetricsDispatcher:(HMDAppleMediaAccessoryMetricsDispatcher *)arg1;
- (NSObject<OS_dispatch_queue> *)workQueueForAppleMediaAccessoryMetricsDispatcher:(HMDAppleMediaAccessoryMetricsDispatcher *)arg1;
- (_Bool)audioAnalysisEnabledForAppleMediaAccessoryMetricsDispatcher:(HMDAppleMediaAccessoryMetricsDispatcher *)arg1;
- (NSString *)currentRoomForAppleMediaAccessoryMetricsDispatcher:(HMDAppleMediaAccessoryMetricsDispatcher *)arg1;
@end


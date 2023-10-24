//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDPrimaryResidentMessageRouter, HMDPrimaryResidentMessageRouterMetricsDispatcher, HMFMessageDispatcher, NSUUID;

@protocol HMDPrimaryResidentMessageRouterFactory <NSObject>
- (HMDPrimaryResidentMessageRouter *)createPrimaryResidentMessageRouterWithHomeUUID:(NSUUID *)arg1 messageDispatcher:(HMFMessageDispatcher *)arg2 metricsDispatcher:(HMDPrimaryResidentMessageRouterMetricsDispatcher *)arg3;
@end


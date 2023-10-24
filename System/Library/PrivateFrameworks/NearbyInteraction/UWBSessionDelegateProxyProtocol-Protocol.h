//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NearbyInteraction/NSObject-Protocol.h>

@class NIAlgorithmConvergenceState, NIDiscoveryToken, NINearbyObject, NIRegionPredicate, NSArray, NSData, NSError;

@protocol UWBSessionDelegateProxyProtocol <NSObject>
- (void)didUpdateHomeDeviceUWBRangingAvailability:(_Bool)arg1;
- (void)didUpdateAlgorithmState:(NIAlgorithmConvergenceState *)arg1 forObject:(NINearbyObject *)arg2;
- (void)didReceiveRangingAuthRecommendation:(_Bool)arg1 forObject:(NINearbyObject *)arg2;
- (void)didGenerateShareableConfigurationData:(NSData *)arg1 forObject:(NINearbyObject *)arg2;
- (void)didUpdateHealthStatus:(long long)arg1;
- (void)relayDCKMessage:(NSData *)arg1;
- (void)didUpdateMotionState:(long long)arg1;
- (void)object:(NINearbyObject *)arg1 didUpdateRegion:(NIRegionPredicate *)arg2 previousRegion:(NIRegionPredicate *)arg3;
- (void)didDiscoverNearbyObject:(NINearbyObject *)arg1;
- (void)uwbSessionInterruptionReasonEnded:(long long)arg1 timestamp:(double)arg2;
- (void)uwbSessionInterruptedWithReason:(long long)arg1 timestamp:(double)arg2;
- (void)didRemoveNearbyObjects:(NSArray *)arg1 withReason:(unsigned long long)arg2;
- (void)didUpdateNearbyObjects:(NSArray *)arg1;
- (void)didUpdateLocalDiscoveryToken:(NIDiscoveryToken *)arg1;
- (void)uwbSessionDidInvalidateWithError:(NSError *)arg1;
- (void)uwbSessionDidFailWithError:(NSError *)arg1;
@end


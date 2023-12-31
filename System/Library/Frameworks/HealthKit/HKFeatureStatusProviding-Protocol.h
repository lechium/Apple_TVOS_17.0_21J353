//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HKFeatureStatus, NSObject, NSString;
@protocol HKFeatureAvailabilityProviding, HKFeatureStatusProvidingObserver, OS_dispatch_queue;

@protocol HKFeatureStatusProviding
@property(readonly, nonatomic) id <HKFeatureAvailabilityProviding> featureAvailabilityProviding;
@property(readonly, copy, nonatomic) NSString *featureIdentifier;
- (void)unregisterObserver:(id <HKFeatureStatusProvidingObserver>)arg1;
- (void)registerObserver:(id <HKFeatureStatusProvidingObserver>)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2;
- (void)registerObserver:(id <HKFeatureStatusProvidingObserver>)arg1;
- (HKFeatureStatus *)featureStatusWithError:(id *)arg1;
@end


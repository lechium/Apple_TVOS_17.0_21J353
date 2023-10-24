//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface HKFeatureAvailabilityRequirementActiveRemoteDeviceIsPresentWhenRequiredForRegionAvailabilityOrDeviceCapability
{
}

+ (id)requirementIdentifier;	// IMP=0x001000000008686f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000086bbe
- (void)unregisterObserver:(id)arg1 fromDataSource:(id)arg2;	// IMP=0x0000000000086b55
- (void)registerObserver:(id)arg1 forDataSource:(id)arg2;	// IMP=0x000000000008692b
- (id)isSatisfiedWithOnboardingEligibility:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000868ef
@property(readonly, nonatomic) NSString *requirementDescription;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

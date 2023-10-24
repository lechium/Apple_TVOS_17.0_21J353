//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDateComponents, NSString;

__attribute__((visibility("hidden")))
@interface HKFeatureAvailabilityRequirementOnboardedBeforeTimeAgo
{
    NSDateComponents *_dateComponents;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000002140b8
+ (id)requirementIdentifier;	// IMP=0x0010000000213dcf
- (void).cxx_destruct;	// IMP=0x00000000002141d8
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000021413d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002140c0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002140ad
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000021402e
- (id)isSatisfiedWithOnboardingRecord:(id)arg1 dataSource:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000213e7e
@property(readonly, nonatomic) NSString *requirementDescription;
- (id)initWithFeatureIdentifier:(id)arg1 daysBeforeCurrentDate:(long long)arg2;	// IMP=0x0000000000213d58

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end


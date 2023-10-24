//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface HKFeatureAvailabilityOnboardingRecordRequirement
{
    NSString *_featureIdentifier;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000077c69
- (void).cxx_destruct;	// IMP=0x0000000000077d39
@property(readonly, copy, nonatomic) NSString *featureIdentifier; // @synthesize featureIdentifier=_featureIdentifier;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000077c9b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000077c71
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000077c5e
- (unsigned long long)hash;	// IMP=0x0000000000077be9
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000077b87
- (id)isSatisfiedWithOnboardingRecord:(id)arg1 dataSource:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000077b0a
- (id)isSatisfiedWithDataSource:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000077a73
- (id)initWithFeatureIdentifier:(id)arg1;	// IMP=0x0000000000077a05

@end

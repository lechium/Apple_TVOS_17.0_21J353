//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HKUnit.h"

@class _HKDimension, _HKFactorization;

__attribute__((visibility("hidden")))
@interface _HKCompoundUnit : HKUnit
{
    _HKFactorization *_baseUnits;	// 48 = 0x30
    _HKDimension *_dimension;	// 56 = 0x38
    struct os_unfair_lock_s _dimensionLock;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000001d213b
+ (id)unitWithBaseUnits:(id)arg1;	// IMP=0x006000000001abc5
- (void).cxx_destruct;	// IMP=0x00000000001d2257
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001d2146
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000dfc7
- (unsigned long long)hash;	// IMP=0x00000000001d211e
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000db82
- (id)_computeBaseUnitReductionAndProportionalSize:(double *)arg1 withCycleSet:(id)arg2;	// IMP=0x000000000001add2
- (id)_baseUnits;	// IMP=0x000000000000dc29
- (id)dimension;	// IMP=0x00000000001d1f9c
- (id)unitString;	// IMP=0x000000000000dc5f
- (id)_initWithBaseUnits:(id)arg1;	// IMP=0x000000000001ac0e

@end


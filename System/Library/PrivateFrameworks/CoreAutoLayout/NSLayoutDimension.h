//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface NSLayoutDimension
{
}

- (_Bool)isCompatibleWithAnchor:(id)arg1;	// IMP=0x0000000000031fb4
- (_Bool)validateOtherAttribute:(long long)arg1;	// IMP=0x0000000000031f9a
- (id)constraintLessThanOrEqualToAnchor:(id)arg1 multiplier:(double)arg2 constant:(double)arg3;	// IMP=0x0000000000031f3f
- (id)constraintGreaterThanOrEqualToAnchor:(id)arg1 multiplier:(double)arg2 constant:(double)arg3;	// IMP=0x0000000000031ee6
- (id)constraintEqualToAnchor:(id)arg1 multiplier:(double)arg2 constant:(double)arg3;	// IMP=0x0000000000031e90
- (id)constraintLessThanOrEqualToConstant:(double)arg1;	// IMP=0x0000000000031e5c
- (id)constraintGreaterThanOrEqualToConstant:(double)arg1;	// IMP=0x0000000000031e2a
- (id)constraintEqualToConstant:(double)arg1;	// IMP=0x0000000000031dfb
- (id)constraintLessThanOrEqualToAnchor:(id)arg1 multiplier:(double)arg2;	// IMP=0x0000000000031da7
- (id)constraintGreaterThanOrEqualToAnchor:(id)arg1 multiplier:(double)arg2;	// IMP=0x0000000000031d55
- (id)constraintEqualToAnchor:(id)arg1 multiplier:(double)arg2;	// IMP=0x0000000000031d06
- (id)ruleLessThanOrEqualToConstant:(double)arg1 priority:(float)arg2 identifier:(id)arg3;	// IMP=0x0000000000005d09
- (id)ruleGreaterThanOrEqualToConstant:(double)arg1 priority:(float)arg2 identifier:(id)arg3;	// IMP=0x0000000000005cf7
- (id)ruleEqualToConstant:(double)arg1 priority:(float)arg2 identifier:(id)arg3;	// IMP=0x0000000000005ce5
- (id)ruleGreaterThanOrEqualToConstant:(double)arg1;	// IMP=0x0000000000005cd1
- (id)ruleLessThanOrEqualToConstant:(double)arg1;	// IMP=0x0000000000005cbd
- (id)ruleEqualToConstant:(double)arg1;	// IMP=0x0000000000005ca9
- (id)minusDimension:(id)arg1;	// IMP=0x0000000000023bea
- (id)plusDimension:(id)arg1;	// IMP=0x0000000000023bd8
- (id)plus:(double)arg1;	// IMP=0x0000000000023bc6
- (id)times:(double)arg1;	// IMP=0x0000000000023bb4
- (id)anchorBySubtractingDimension:(id)arg1;	// IMP=0x0000000000023b71
- (id)anchorByAddingDimension:(id)arg1;	// IMP=0x0000000000023b36
- (id)anchorByAddingConstant:(double)arg1;	// IMP=0x0000000000023aee
- (id)anchorByMultiplyingByConstant:(double)arg1;	// IMP=0x0000000000023aab

@end


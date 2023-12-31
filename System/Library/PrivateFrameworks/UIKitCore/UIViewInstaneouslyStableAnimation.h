//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol UIVectorOperatable;

__attribute__((visibility("hidden")))
@interface UIViewInstaneouslyStableAnimation : NSObject
{
    id <UIVectorOperatable> _velocity;	// 8 = 0x8
    id <UIVectorOperatable> _targetValue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000013093fa
@property(retain, nonatomic) id <UIVectorOperatable> targetValue; // @synthesize targetValue=_targetValue;
- (_Bool)isStable;	// IMP=0x00000000013093e1
- (id)value;	// IMP=0x00000000013093d3
- (void)setVelocity:(id)arg1;	// IMP=0x0000000001309398
- (id)velocity;	// IMP=0x000000000130938a
- (id)stepWithDelta:(double)arg1;	// IMP=0x000000000130937c
- (id)initWithTargetValue:(id)arg1 velocity:(id)arg2;	// IMP=0x00000000013092d1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


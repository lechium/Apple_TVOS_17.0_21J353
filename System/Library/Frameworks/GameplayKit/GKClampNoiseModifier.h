//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface GKClampNoiseModifier
{
    double _lowerBound;	// 16 = 0x10
    double _upperBound;	// 24 = 0x18
}

- (id)cloneModule;	// IMP=0x0000000000038915
- (double)valueAt: /* Error: Ran out of types for this method. */;	// IMP=0x0000000000038857
- (int)requiredInputModuleCount;	// IMP=0x000000000003884c
- (id)initWithLowerBound:(double)arg1 upperBound:(double)arg2;	// IMP=0x00000000000387e7
- (id)initWithInputModuleCount:(unsigned long long)arg1;	// IMP=0x00000000000387c5
- (id)init;	// IMP=0x00000000000387a3

@end

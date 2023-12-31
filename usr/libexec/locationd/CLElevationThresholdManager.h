//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CLElevationThresholdManager : NSObject
{
    multimap_22d98a7a _elevationThresholdMap;	// 8 = 0x8
    float _hysteresisBand;	// 32 = 0x20
    struct ElevationAlertCurrentBounds _currentElevationThreshold;	// 36 = 0x24
}

- (id).cxx_construct;	// IMP=0x00200000004e5127
- (void).cxx_destruct;	// IMP=0x00100000004e5115
- (void)clearShouldAlert;	// IMP=0x00100000004e50d4
- (void)updateInitializedThresholdsWithAltitude:(float)arg1;	// IMP=0x00100000004e5033
- (_Bool)updateWithAltitude:(float)arg1 andAccuracy:(float)arg2 upperBound:(float *)arg3 lowerBound:(float *)arg4;	// IMP=0x00100000004e4f7c
- (void)thresholdUpdated:(struct ThresholdClient *)arg1 initialized:(_Bool)arg2 above:(_Bool)arg3;	// IMP=0x00100000004e4f62
- (void)initializeThresholdsGivenAltitude:(float)arg1 andAccuracy:(float)arg2;	// IMP=0x00100000004e4c24
- (multimap_22d98a7a)getElevationThresholdProxyMap;	// IMP=0x00100000004e4c08
- (_Bool)removeClient:(byref id)arg1;	// IMP=0x00100000004e498b
- (void)insertClient:(byref id)arg1 withThreshold:(float)arg2;	// IMP=0x00100000004e47a6
- (void)thresholdBoundsForElevation:(float)arg1 andAccuracy:(float)arg2 upperBound:(float *)arg3 lowerBound:(float *)arg4;	// IMP=0x00100000004e446d
- (id)init;	// IMP=0x00100000004e4406

@end


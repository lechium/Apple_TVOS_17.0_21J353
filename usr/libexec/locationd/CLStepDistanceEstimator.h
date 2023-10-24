//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CLStepDistanceEstimator : NSObject
{
    struct CLExtendedStepCountEntry _lastEntry;	// 8 = 0x8
    double _totalCalibratedDistance;	// 296 = 0x128
    _Bool _supportsFirstStepTime;	// 304 = 0x130
}

- (struct CLExtendedStepCountEntry)updateEntryDistanceAndPace:(struct CLStepCountEntry *)arg1;	// IMP=0x0020000000728b07
- (double)computeWalkRunSigma:(double)arg1;	// IMP=0x0010000000728abd
- (id)init;	// IMP=0x0010000000728a52

@end

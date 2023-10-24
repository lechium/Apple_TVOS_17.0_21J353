//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MNDepartureUpdater, NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface __MNDepartureExitedArrivalRegionCondition : NSObject
{
    MNDepartureUpdater *_updater;	// 8 = 0x8
    NSArray *_arrivalRegions;	// 16 = 0x10
    double _closestDistanceToWaypoint;	// 24 = 0x18
    double _threshold;	// 32 = 0x20
    unsigned long long _numHistoricalLocations;	// 40 = 0x28
    NSMutableArray *_regionDepartureHistory;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000e5c27
- (double)scoreForLocation:(id)arg1;	// IMP=0x00000000000e56c1
- (id)initWithUpdater:(id)arg1 arrivalRegions:(id)arg2;	// IMP=0x00000000000e55dc

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOComposedRouteStep;

__attribute__((visibility("hidden")))
@interface _GEORouteMatchingSegment : NSObject
{
    unsigned int _startPointIndex;	// 8 = 0x8
    float _startRouteCoordinateOffset;	// 12 = 0xc
    float _endRouteCoordinateOffset;	// 16 = 0x10
    CDStruct_2c43369c _startCoordinate;	// 24 = 0x18
    CDStruct_2c43369c _endCoordinate;	// 40 = 0x28
    GEOComposedRouteStep *_step;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000011ddbd7
@property(retain, nonatomic) GEOComposedRouteStep *step; // @synthesize step=_step;
@property(nonatomic) CDStruct_c3b9c2ee endCoordinate; // @synthesize endCoordinate=_endCoordinate;
@property(nonatomic) CDStruct_c3b9c2ee startCoordinate; // @synthesize startCoordinate=_startCoordinate;
@property(nonatomic) float endRouteCoordinateOffset; // @synthesize endRouteCoordinateOffset=_endRouteCoordinateOffset;
@property(nonatomic) float startRouteCoordinateOffset; // @synthesize startRouteCoordinateOffset=_startRouteCoordinateOffset;
@property(nonatomic) unsigned int startPointIndex; // @synthesize startPointIndex=_startPointIndex;
- (id)description;	// IMP=0x00000000011dda78
- (double)distanceFromCoordinate:(CDStruct_c3b9c2ee)arg1 outCoordinateOnSegment:(CDStruct_c3b9c2ee *)arg2 outRouteCoordinate:(struct PolylineCoordinate *)arg3;	// IMP=0x00000000011dd902

@end


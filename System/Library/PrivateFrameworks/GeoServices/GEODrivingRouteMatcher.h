//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "GEORouteMatcher.h"

__attribute__((visibility("hidden")))
@interface GEODrivingRouteMatcher : GEORouteMatcher
{
    double _differentLegScorePenalty;	// 8 = 0x8
}

- (double)_courseFromLocation:(id)arg1;	// IMP=0x00000000013f7d98
- (CDStruct_c3b9c2ee)_coordinateFromLocation:(id)arg1;	// IMP=0x00000000013f7cb8
- (_Bool)_supportsSnapping;	// IMP=0x00000000013f7c0d
- (void)_finishRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3;	// IMP=0x00000000013f77a7
- (id)_startStepForPreviousRouteMatch:(id)arg1;	// IMP=0x00000000013f7708
- (double)_maxCourseDelta:(id)arg1 previousRouteMatch:(id)arg2 timeSinceTunnel:(double)arg3;	// IMP=0x00000000013f7535
- (double)_modifiedCourseAccuracyForLocation:(id)arg1 previousRouteMatch:(id)arg2;	// IMP=0x00000000013f72b9
- (double)_modifiedHorizontalAccuracy:(double)arg1 routeCoordinate:(struct PolylineCoordinate)arg2;	// IMP=0x00000000013f7280
- (double)_courseWeightForLocation:(id)arg1 accuracyType:(long long)arg2;	// IMP=0x00000000013f71b8
- (double)_maxMatchDistance:(double)arg1 routeCoordinate:(struct PolylineCoordinate)arg2 previousRouteMatch:(id)arg3 timeSinceTunnel:(double)arg4;	// IMP=0x00000000013f70bd
- (id)_candidateForSegment:(id)arg1 location:(id)arg2 previousRouteMatch:(id)arg3;	// IMP=0x00000000013f655e
- (id)initWithRoute:(id)arg1 auditToken:(id)arg2;	// IMP=0x00000000013f646d

@end

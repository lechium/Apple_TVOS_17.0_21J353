//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOApplicationAuditToken, GEOComposedRoute, GEOMapFeatureAccess, GEOMotionContext, GEOTransitRouteMatcher;

__attribute__((visibility("hidden")))
@interface _GEORouteMatchUpdater : NSObject
{
    GEOTransitRouteMatcher *_routeMatcher;	// 8 = 0x8
    GEOComposedRoute *_route;	// 16 = 0x10
    GEOMapFeatureAccess *_mapFeatureAccess;	// 24 = 0x18
    GEOMotionContext *_motionContext;	// 32 = 0x20
    GEOApplicationAuditToken *_auditToken;	// 40 = 0x28
    double _stationRadius;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000119c278
- (double)_stationRadiusForStation:(id)arg1 accessPoint:(id)arg2 adjacentWalkingLegCoordinate:(CDStruct_c3b9c2ee)arg3;	// IMP=0x000000000119c0aa
- (_Bool)_isLocation:(id)arg1 nearTransitPoint:(CDStruct_c3b9c2ee)arg2 transitID:(unsigned long long)arg3 featureSize:(double)arg4;	// IMP=0x000000000119b8ec
- (_Bool)_isLocation:(id)arg1 nearStation:(id)arg2;	// IMP=0x000000000119b7c4
- (_Bool)_isLocation:(id)arg1 nearStop:(id)arg2;	// IMP=0x000000000119b6c4
- (unsigned long long)priority;	// IMP=0x000000000119b6bc
- (_Bool)updateRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3;	// IMP=0x000000000119b6b4
- (id)initWithTransitRouteMatcher:(id)arg1;	// IMP=0x000000000119b538

@end

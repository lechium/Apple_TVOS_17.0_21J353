//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEOComposedRouteStep, GEOPBTransitStation, GEOPBTransitStop;

__attribute__((visibility("hidden")))
@interface _GEORouteMatchUpdater_Transfer
{
    GEOPBTransitStation *_alightStation;	// 56 = 0x38
    GEOPBTransitStation *_boardStation;	// 64 = 0x40
    GEOPBTransitStop *_alightStop;	// 72 = 0x48
    GEOPBTransitStop *_boardStop;	// 80 = 0x50
    GEOComposedRouteStep *_alightStep;	// 88 = 0x58
    GEOComposedRouteStep *_transferStep;	// 96 = 0x60
    GEOComposedRouteStep *_boardStep;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x000000000119e585
- (_Bool)_isLocation:(id)arg1 nearStop:(id)arg2;	// IMP=0x000000000119e452
- (_Bool)_isLocation:(id)arg1 nearStation:(id)arg2;	// IMP=0x000000000119e31f
- (_Bool)updateRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3;	// IMP=0x000000000119df4c
- (id)initWithTransitRouteMatcher:(id)arg1 alightStep:(id)arg2 transferStep:(id)arg3 boardStep:(id)arg4;	// IMP=0x000000000119dd49

@end

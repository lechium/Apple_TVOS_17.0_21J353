//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "GEONavdPeer.h"

@class GEONavigationServer, NSString;

__attribute__((visibility("hidden")))
@interface GEONavigationServerPeer : GEONavdPeer
{
    GEONavigationServer *_delegate;	// 40 = 0x28
    _Bool _hasEntitlement;	// 48 = 0x30
    _Bool _wantsRoutes;	// 49 = 0x31
}

- (void).cxx_destruct;	// IMP=0x00000000013e8257
@property(readonly, nonatomic) _Bool wantsRoutes; // @synthesize wantsRoutes=_wantsRoutes;
@property(nonatomic) _Bool hasEntitlement; // @synthesize hasEntitlement=_hasEntitlement;
@property(nonatomic) __weak GEONavigationServer *delegate; // @synthesize delegate=_delegate;
- (void)dealloc;	// IMP=0x00000000013e8111
- (void)setWantsRoutes:(_Bool)arg1;	// IMP=0x00000000013e8101
- (void)requestUpdates;	// IMP=0x00000000013e8044
- (void)requestNavigationVoiceVolume;	// IMP=0x00000000013e7f42
- (void)requestPositionFromDestination;	// IMP=0x00000000013e7e40
- (void)requestPositionFromManeuver;	// IMP=0x00000000013e7d3e
- (void)requestPositionFromSign;	// IMP=0x00000000013e7c3c
- (void)requestRideSelections;	// IMP=0x00000000013e7b3a
- (void)requestStepNameInfo;	// IMP=0x00000000013e7a38
- (void)requestStepIndex;	// IMP=0x00000000013e7936
- (void)requestActiveRouteDetailsData;	// IMP=0x00000000013e7834
- (void)requestGuidanceState;	// IMP=0x00000000013e7732
- (void)requestTransitSummary;	// IMP=0x00000000013e7630
- (void)requestRouteSummary;	// IMP=0x00000000013e752e
- (void)requestETAUpdate;	// IMP=0x00000000013e7437
- (void)requestRoute;	// IMP=0x00000000013e7340

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


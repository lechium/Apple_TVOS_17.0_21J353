//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOApplicationAuditToken, GEODirectionsServiceRequest, MNActiveRouteInfo, MNNavigationSessionState, NSDate, NSString;
@protocol MNWalkingRouteBackgroundLoaderDelegate;

__attribute__((visibility("hidden")))
@interface MNWalkingRouteBackgroundLoader : NSObject
{
    GEOApplicationAuditToken *_auditToken;	// 8 = 0x8
    NSString *_requestingAppIdentifier;	// 16 = 0x10
    _Bool _isFetchingWalkingRoutes;	// 24 = 0x18
    GEODirectionsServiceRequest *_pendingRequest;	// 32 = 0x20
    NSDate *_dateSinceLastRouteRequest;	// 40 = 0x28
    CDStruct_071ac149 _lastFailedRequestCoordinate;	// 48 = 0x30
    id <MNWalkingRouteBackgroundLoaderDelegate> _delegate;	// 72 = 0x48
    MNNavigationSessionState *_navigationSessionState;	// 80 = 0x50
    MNActiveRouteInfo *_walkingRouteInfo;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000000009581f
@property(readonly, nonatomic) MNActiveRouteInfo *walkingRouteInfo; // @synthesize walkingRouteInfo=_walkingRouteInfo;
@property(copy, nonatomic) MNNavigationSessionState *navigationSessionState; // @synthesize navigationSessionState=_navigationSessionState;
@property(nonatomic) __weak id <MNWalkingRouteBackgroundLoaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_handleWalkingRouteResponse:(id)arg1;	// IMP=0x0000000000095730
- (void)_updateForLocation:(id)arg1;	// IMP=0x0000000000095294
- (void)_updateWalkingRoute;	// IMP=0x0000000000094e75
- (id)_requestWalkingRouteWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000947ae
- (unsigned long long)_requestTypeForArrivalState:(long long)arg1;	// IMP=0x000000000009479b
- (void)stop;	// IMP=0x000000000009468e
- (void)start;	// IMP=0x0000000000094589
- (void)dealloc;	// IMP=0x0000000000094416

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


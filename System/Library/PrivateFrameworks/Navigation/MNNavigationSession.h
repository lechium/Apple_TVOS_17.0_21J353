//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOApplicationAuditToken, GEOComposedWaypoint, GEOMotionContext, GEONavigationGuidanceState, GEOProbeCrumbs, GEOResourceManifestUpdateAssertion, MNAudioManager, MNGuidanceManager, MNIdleTimerUpdater, MNLocation, MNLocationTracker, MNNavigationSessionLogger, MNNavigationSessionState, MNNavigationTraceManager, MNObserverHashTable, MNRouteManager, MNServerSessionStateInfo, MNTimeAndDistanceUpdater, MNTraceNavigationEventRecorder, MNTraceNavigationUpdateRecorder, MNTrafficIncidentAlert, MNVehicleMonitor, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface MNNavigationSession : NSObject
{
    long long _navigationType;	// 8 = 0x8
    MNRouteManager *_routeManager;	// 16 = 0x10
    GEOComposedWaypoint *_destination;	// 24 = 0x18
    MNLocationTracker *_locationTracker;	// 32 = 0x20
    MNServerSessionStateInfo *_serverSessionStateInfo;	// 40 = 0x28
    GEOMotionContext *_motionContext;	// 48 = 0x30
    MNAudioManager *_audioManager;	// 56 = 0x38
    MNGuidanceManager *_guidanceManager;	// 64 = 0x40
    MNTimeAndDistanceUpdater *_timeAndDistanceUpdater;	// 72 = 0x48
    MNVehicleMonitor *_vehicleMonitor;	// 80 = 0x50
    MNIdleTimerUpdater *_idleTimerUpdater;	// 88 = 0x58
    double _locationProjectionTime;	// 96 = 0x60
    MNNavigationSessionLogger *_logger;	// 104 = 0x68
    MNNavigationTraceManager *_traceManager;	// 112 = 0x70
    MNTraceNavigationEventRecorder *_navigationEventRecorder;	// 120 = 0x78
    MNTraceNavigationUpdateRecorder *_navigationUpdateRecorder;	// 128 = 0x80
    MNTrafficIncidentAlert *_activeTrafficIncidentAlert;	// 136 = 0x88
    _Bool _guidancePromptsEnabled;	// 144 = 0x90
    _Bool _isConnectedToCarplay;	// 145 = 0x91
    _Bool _isSpeakingTrafficIncidentAlert;	// 146 = 0x92
    GEONavigationGuidanceState *_guidanceState;	// 152 = 0x98
    NSMutableArray *_navigationSessionStateListeners;	// 160 = 0xa0
    MNObserverHashTable *_observers;	// 168 = 0xa8
    NSString *_tileLoaderClient;	// 176 = 0xb0
    GEOApplicationAuditToken *_auditToken;	// 184 = 0xb8
    GEOResourceManifestUpdateAssertion *_manifestUpdateAssertion;	// 192 = 0xc0
    GEOProbeCrumbs *_probeCrumbs;	// 200 = 0xc8
    _Bool _etaUpdatesDisabled;	// 208 = 0xd0
    _Bool _isAllowedToSwitchTransportTypes;	// 209 = 0xd1
    unsigned long long _displayedStepIndex;	// 216 = 0xd8
    MNNavigationSessionState *_navigationSessionState;	// 224 = 0xe0
}

- (void).cxx_destruct;	// IMP=0x00000000000dd741
@property(retain, nonatomic) MNNavigationSessionState *navigationSessionState; // @synthesize navigationSessionState=_navigationSessionState;
@property(nonatomic) unsigned long long displayedStepIndex; // @synthesize displayedStepIndex=_displayedStepIndex;
@property(nonatomic) _Bool isConnectedToCarplay; // @synthesize isConnectedToCarplay=_isConnectedToCarplay;
@property(nonatomic) _Bool guidancePromptsEnabled; // @synthesize guidancePromptsEnabled=_guidancePromptsEnabled;
@property(readonly, nonatomic) MNServerSessionStateInfo *serverSessionStateInfo; // @synthesize serverSessionStateInfo=_serverSessionStateInfo;
@property(readonly, nonatomic) long long navigationType; // @synthesize navigationType=_navigationType;
@property(readonly, nonatomic) _Bool isAllowedToSwitchTransportTypes; // @synthesize isAllowedToSwitchTransportTypes=_isAllowedToSwitchTransportTypes;
@property(readonly, nonatomic) MNNavigationTraceManager *traceManager; // @synthesize traceManager=_traceManager;
@property(readonly, nonatomic) GEOMotionContext *motionContext; // @synthesize motionContext=_motionContext;
@property(readonly, nonatomic) MNRouteManager *routeManager; // @synthesize routeManager=_routeManager;
@property(readonly, nonatomic) GEOComposedWaypoint *destination; // @synthesize destination=_destination;
@property(readonly, nonatomic) GEOApplicationAuditToken *auditToken; // @synthesize auditToken=_auditToken;
@property(readonly, nonatomic) MNAudioManager *audioManager; // @synthesize audioManager=_audioManager;
- (void)valueChangedForGEOConfigKey:(CDStruct_35640fce)arg1;	// IMP=0x00000000000dd653
@property(readonly, nonatomic) int state;
@property(readonly, nonatomic) unsigned long long targetLegIndex;
- (id)recentLocationHistoryForUpdateManager:(id)arg1;	// IMP=0x00000000000dd619
- (id)userLocationForUpdateManager:(id)arg1;	// IMP=0x00000000000dd607
- (id)routeInfoForUpdateManager:(id)arg1;	// IMP=0x00000000000dd5a9
- (_Bool)wantsETAUpdates;	// IMP=0x00000000000dd535
- (void)updateManager:(id)arg1 didReceiveETAResponse:(id)arg2;	// IMP=0x00000000000dd3c7
- (void)updateManager:(id)arg1 willSendETARequest:(id)arg2;	// IMP=0x00000000000dd201
- (void)updateManager:(id)arg1 didReceiveTransitError:(id)arg2;	// IMP=0x00000000000dd1fb
- (void)updateManager:(id)arg1 didReceiveTransitUpdates:(id)arg2;	// IMP=0x00000000000dd1f5
- (void)updateManager:(id)arg1 willSendTransitUpdateRequestForRouteIDs:(id)arg2;	// IMP=0x00000000000dd1ef
- (void)updateManager:(id)arg1 didReceiveTransitUpdateResponse:(id)arg2;	// IMP=0x00000000000dd1e9
- (void)updateManager:(id)arg1 willSendTransitUpdateRequests:(id)arg2;	// IMP=0x00000000000dd1e3
- (void)audioManager:(id)arg1 didStartSpeakingPrompt:(id)arg2;	// IMP=0x00000000000dd1c7
- (void)audioManager:(id)arg1 didActivateAudioSession:(_Bool)arg2;	// IMP=0x00000000000dd1ab
- (void)virtualGarageManager:(id)arg1 didUpdateSelectedVehicle:(id)arg2;	// IMP=0x00000000000dd1a5
- (void)vehicleMonitorDidDisconnectFromVehicle:(id)arg1;	// IMP=0x00000000000dd0e4
- (void)tracePlayer:(id)arg1 didResumeNavigatingFromWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3 reason:(unsigned long long)arg4;	// IMP=0x00000000000dd0d0
- (void)tracePlayer:(id)arg1 didUpdateCurrentRoute:(id)arg2 reason:(unsigned long long)arg3;	// IMP=0x00000000000dd00e
- (void)tracePlayer:(id)arg1 didRecieveNetworkEvent:(id)arg2;	// IMP=0x00000000000dd008
- (void)tracePlayer:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;	// IMP=0x00000000000dd002
- (void)tracePlayer:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;	// IMP=0x00000000000dcffc
- (void)tracePlayer:(id)arg1 didUpdateMotion:(unsigned long long)arg2 exitType:(unsigned long long)arg3 confidence:(unsigned long long)arg4;	// IMP=0x00000000000dcff6
- (void)tracePlayer:(id)arg1 didUpdateHeading:(id)arg2;	// IMP=0x00000000000dcff0
- (void)tracePlayerDidResumeLocationUpdates:(id)arg1;	// IMP=0x00000000000dcfea
- (void)tracePlayerDidPauseLocationUpdates:(id)arg1;	// IMP=0x00000000000dcfe4
- (void)tracePlayer:(id)arg1 didReceiveLocationError:(id)arg2;	// IMP=0x00000000000dcfde
- (void)tracePlayer:(id)arg1 didUpdateLocation:(id)arg2;	// IMP=0x00000000000dcfd8
- (void)tracePlayerDidStayOnRoute:(id)arg1;	// IMP=0x00000000000dcfd2
- (void)tracePlayer:(id)arg1 didPlayAtTime:(double)arg2;	// IMP=0x00000000000dcfcc
- (void)tracePlayer:(id)arg1 didSeekToTime:(double)arg2 fromTime:(double)arg3 location:(id)arg4;	// IMP=0x00000000000dcee9
- (void)tracePlayer:(id)arg1 didSeekToTransportType:(int)arg2;	// IMP=0x00000000000dcee3
- (void)tracePlayerDidResume:(id)arg1;	// IMP=0x00000000000dcedd
- (void)tracePlayerDidPause:(id)arg1;	// IMP=0x00000000000dcec7
- (void)tracePlayerDidStop:(id)arg1;	// IMP=0x00000000000dcec1
- (void)tracePlayerDidStart:(id)arg1;	// IMP=0x00000000000dcebb
- (void)tracePlayer:(id)arg1 didJumpToRouteResponse:(id)arg2 request:(id)arg3 waypoints:(id)arg4;	// IMP=0x00000000000dcd98
- (void)timeAndDistanceUpdater:(id)arg1 didUpdateDisplayETA:(id)arg2 remainingDistance:(id)arg3 batteryChargeInfo:(id)arg4;	// IMP=0x00000000000dcd7c
- (void)timeAndDistanceUpdater:(id)arg1 currentStepIndex:(unsigned long long)arg2 didUpdateDistanceUntilManeuver:(double)arg3 timeUntilManeuver:(double)arg4;	// IMP=0x00000000000dcd60
- (void)idleTimerUpdater:(id)arg1 shouldEnableIdleTimer:(_Bool)arg2;	// IMP=0x00000000000dcd03
- (_Bool)guidanceManagerIsRerouting;	// IMP=0x00000000000dcced
- (void)guidanceManager:(id)arg1 updatedGuidanceEventFeedback:(id)arg2;	// IMP=0x00000000000dccd1
- (void)guidanceManager:(id)arg1 newGuidanceEventFeedback:(id)arg2;	// IMP=0x00000000000dccb5
- (void)guidanceManager:(id)arg1 hideJunctionViewForId:(id)arg2;	// IMP=0x00000000000dcc99
- (void)guidanceManager:(id)arg1 showJunctionView:(id)arg2;	// IMP=0x00000000000dcc7d
- (void)guidanceManager:(id)arg1 usePersistentDisplay:(_Bool)arg2;	// IMP=0x00000000000dcc61
- (void)guidanceManager:(id)arg1 updateSignsWithARInfo:(id)arg2;	// IMP=0x00000000000dcc45
- (void)guidanceManager:(id)arg1 updateSignsWithInfo:(id)arg2;	// IMP=0x00000000000dcc29
- (void)guidanceManager:(id)arg1 hideLaneDirectionsForId:(id)arg2;	// IMP=0x00000000000dcc0d
- (void)guidanceManager:(id)arg1 showLaneDirections:(id)arg2;	// IMP=0x00000000000dcbf1
- (void)guidanceManager:(id)arg1 triggerHaptics:(int)arg2;	// IMP=0x00000000000dcbd5
- (void)guidanceManager:(id)arg1 didProcessSpeechEvent:(id)arg2;	// IMP=0x00000000000dcbb9
- (void)guidanceManager:(id)arg1 willProcessSpeechEvent:(id)arg2;	// IMP=0x00000000000dcb9d
- (void)guidanceManager:(id)arg1 announce:(id)arg2 isImportant:(_Bool)arg3 shortPromptType:(unsigned long long)arg4 ignorePromptStyle:(_Bool)arg5 stage:(unsigned long long)arg6 completionBlock:(CDUnknownBlockType)arg7;	// IMP=0x00000000000dcafd
- (void)guidanceManager:(id)arg1 willAnnounce:(unsigned long long)arg2 inSeconds:(double)arg3;	// IMP=0x00000000000dcae1
- (void)guidanceManagerEndGuidanceUpdate:(id)arg1;	// IMP=0x00000000000dcac5
- (void)guidanceManagerBeginGuidanceUpdate:(id)arg1;	// IMP=0x00000000000dcaa9
- (void)locationManagerUpdatedHeading:(id)arg1;	// IMP=0x00000000000dca25
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;	// IMP=0x00000000000dca1f
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;	// IMP=0x00000000000dca19
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;	// IMP=0x00000000000dca13
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;	// IMP=0x00000000000dca0d
- (_Bool)locationManagerShouldPauseLocationUpdates:(id)arg1;	// IMP=0x00000000000dca05
- (void)locationManagerDidReset:(id)arg1;	// IMP=0x00000000000dc9ff
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;	// IMP=0x00000000000dc9f9
- (void)locationManagerUpdatedLocation:(id)arg1;	// IMP=0x00000000000dc991
- (void)locationTracker:(id)arg1 didReceiveRouteSignalStrength:(unsigned long long)arg2;	// IMP=0x00000000000dc975
- (void)locationTracker:(id)arg1 didReceiveTransitAlert:(id)arg2;	// IMP=0x00000000000dc959
- (void)locationTracker:(id)arg1 shouldShowChargingInfoForWaypoint:(id)arg2;	// IMP=0x00000000000dc93e
- (void)locationTracker:(id)arg1 updatedTrafficIncidentAlert:(id)arg2;	// IMP=0x00000000000dc922
- (void)locationTracker:(id)arg1 dismissedTrafficIncidentAlert:(id)arg2;	// IMP=0x00000000000dc8bf
- (void)locationTracker:(id)arg1 invalidatedTrafficIncidentAlert:(id)arg2;	// IMP=0x00000000000dc85c
- (void)locationTracker:(id)arg1 receivedTrafficIncidentAlert:(id)arg2 responseCallback:(CDUnknownBlockType)arg3;	// IMP=0x00000000000dc74d
- (void)locationTracker:(id)arg1 didUpdateVehicleParkingInfo:(id)arg2;	// IMP=0x00000000000dc731
- (void)locationTracker:(id)arg1 didUpdateBackgroundWalkingRoute:(id)arg2;	// IMP=0x00000000000dc715
- (void)locationTracker:(id)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(id)arg3 request:(id)arg4 response:(id)arg5;	// IMP=0x00000000000dc429
- (void)locationTracker:(id)arg1 didUpdateAlternateRoutes:(id)arg2;	// IMP=0x00000000000dc300
- (void)locationTracker:(id)arg1 didFailRerouteWithError:(id)arg2;	// IMP=0x00000000000dc270
- (void)locationTracker:(id)arg1 didReroute:(id)arg2 newAlternateRoutes:(id)arg3 rerouteReason:(unsigned long long)arg4 request:(id)arg5 response:(id)arg6;	// IMP=0x00000000000dbf9c
- (void)locationTrackerDidCancelReroute:(id)arg1;	// IMP=0x00000000000dbf80
- (void)locationTracker:(id)arg1 didSuppressReroute:(id)arg2;	// IMP=0x00000000000dbf64
- (void)locationTrackerWillReroute:(id)arg1;	// IMP=0x00000000000dbf48
- (void)locationTracker:(id)arg1 didReachETAUpdatePosition:(id)arg2;	// IMP=0x00000000000dbf2c
- (void)locationTracker:(id)arg1 didUpdateETAForRoute:(id)arg2;	// IMP=0x00000000000dbebe
- (void)locationTracker:(id)arg1 didUpdateMatchedLocation:(id)arg2;	// IMP=0x00000000000db823
- (void)locationTracker:(id)arg1 didEndNavigatingWithReason:(unsigned long long)arg2;	// IMP=0x00000000000db807
- (void)locationTrackerDidArrive:(id)arg1;	// IMP=0x00000000000db6e0
- (void)locationTrackerDidEnterPreArrivalState:(id)arg1;	// IMP=0x00000000000db6a2
- (void)locationTracker:(id)arg1 didUpdateTargetLegIndex:(unsigned long long)arg2;	// IMP=0x00000000000db640
- (void)locationTracker:(id)arg1 didResumeNavigatingFromWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3 reason:(unsigned long long)arg4;	// IMP=0x00000000000db560
- (void)locationTracker:(id)arg1 didArriveAtWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3;	// IMP=0x00000000000db544
- (void)locationTracker:(id)arg1 didEnterPreArrivalStateForWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3;	// IMP=0x00000000000db4d6
- (void)locationTracker:(id)arg1 isApproachingEndOfLeg:(unsigned long long)arg2;	// IMP=0x00000000000db4ba
- (void)locationTracker:(id)arg1 didUpdateArrivalInfo:(id)arg2;	// IMP=0x00000000000db343
- (void)locationTracker:(id)arg1 didChangeState:(int)arg2;	// IMP=0x00000000000db327
- (void)motionContextDidUpdateMotion:(id)arg1;	// IMP=0x00000000000db2a5
- (void)_stopVirtualGarageUpdates;	// IMP=0x00000000000db252
- (void)_startVirtualGarageUpdates;	// IMP=0x00000000000db1ff
- (void)_updateNavigationSessionState:(id)arg1;	// IMP=0x00000000000db0b3
- (void)_updateResumeRouteInfoFrom:(CDStruct_3f2a7a20)arg1;	// IMP=0x00000000000daf93
- (void)_stopIdleTimerUpdates;	// IMP=0x00000000000daf5f
- (void)_startIdleTimerUpdates;	// IMP=0x00000000000daee5
- (void)_stopTravelTimeUpdates;	// IMP=0x00000000000daea0
- (void)_startTravelTimeUpdates;	// IMP=0x00000000000dad78
- (void)_stopGuidance;	// IMP=0x00000000000dad62
- (void)_startGuidanceAllowMidRouteStart:(_Bool)arg1 announcementsToIgnore:(id)arg2;	// IMP=0x00000000000dac90
- (void)_stopAudioSession;	// IMP=0x00000000000dac1b
- (void)_startAudioSession;	// IMP=0x00000000000daa17
- (void)_stopMotionUpdates;	// IMP=0x00000000000da9d2
- (void)_startMotionUpdates;	// IMP=0x00000000000da8e9
- (void)_stopLocationUpdates;	// IMP=0x00000000000da886
- (void)_startLocationUpdates;	// IMP=0x00000000000da80f
- (void)_stopLocationTracking;	// IMP=0x00000000000da78b
- (void)_startLocationTrackingWithInitialLocation:(id)arg1 targetLegIndex:(unsigned long long)arg2;	// IMP=0x00000000000da5d8
- (id)_locationTrackerForTransportType:(int)arg1 navigationType:(long long)arg2;	// IMP=0x00000000000d9f89
- (void)_closeTileLoader;	// IMP=0x00000000000d9ecd
- (void)_openTileLoader;	// IMP=0x00000000000d9e11
- (id)recentLocationHistory;	// IMP=0x00000000000d9df8
- (void)didChangeUserOptionsFrom:(id)arg1 to:(id)arg2;	// IMP=0x00000000000d9d73
- (void)enableNavigationCapability:(unsigned long long)arg1;	// IMP=0x00000000000d9d60
- (void)disableNavigationCapability:(unsigned long long)arg1;	// IMP=0x00000000000d9d4d
- (void)setJunctionViewImageWidth:(double)arg1 height:(double)arg2;	// IMP=0x00000000000d9d37
- (void)setIsNavigatingInLowGuidance:(_Bool)arg1;	// IMP=0x00000000000d9d21
- (void)traceJumpedInTime;	// IMP=0x00000000000d9d0b
- (_Bool)isCurrentlySpeaking;	// IMP=0x00000000000d9cf5
- (double)timeUntilNextAnnouncement;	// IMP=0x00000000000d9cdf
- (double)timeSinceLastAnnouncement;	// IMP=0x00000000000d9cc9
- (void)stopCurrentGuidancePrompt;	// IMP=0x00000000000d9cb3
- (_Bool)vibrateForPrompt:(unsigned long long)arg1;	// IMP=0x00000000000d9c9d
- (_Bool)repeatCurrentTrafficAlert;	// IMP=0x00000000000d9b86
- (_Bool)repeatCurrentGuidance;	// IMP=0x00000000000d9b03
- (void)changeTransportType:(int)arg1 route:(id)arg2;	// IMP=0x00000000000d9aed
- (void)switchToRoute:(id)arg1;	// IMP=0x00000000000d9980
- (void)forceReroute;	// IMP=0x00000000000d9965
- (void)resumeOriginalDestination;	// IMP=0x00000000000d98a5
- (void)updateDestination:(id)arg1;	// IMP=0x00000000000d9828
- (void)advanceToNextLeg;	// IMP=0x00000000000d9812
- (void)removeWaypointAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000d9623
- (void)insertWaypoint:(id)arg1;	// IMP=0x00000000000d94fc
- (void)rerouteWithWaypoints:(id)arg1;	// IMP=0x00000000000d93d5
- (void)stopNavigationSessionWithReason:(unsigned long long)arg1;	// IMP=0x00000000000d8fda
- (void)updateWithInitialLocation:(id)arg1;	// IMP=0x00000000000d8d5c
- (void)startNavigationSessionWithDetails:(id)arg1;	// IMP=0x00000000000d8258
- (void)removeObserver:(id)arg1;	// IMP=0x00000000000d823f
- (void)addObserver:(id)arg1;	// IMP=0x00000000000d8226
@property(readonly, nonatomic) int navigationState;
@property(readonly, nonatomic) MNLocation *lastMatchedLocation;
- (void)dealloc;	// IMP=0x00000000000d8128
- (id)initWithRouteManager:(id)arg1 auditToken:(id)arg2 traceManager:(id)arg3;	// IMP=0x00000000000d7f4a
- (id)init;	// IMP=0x00000000000d7f20

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

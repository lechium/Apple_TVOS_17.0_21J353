//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MNStartNavigationDetails, MNStartNavigationReconnectionDetails, MNUserOptions, NSArray, NSHashTable, NSMutableArray, NSString, NSXPCConnection, geo_isolater;
@protocol MNNavigationServiceClientInterface, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MNNavigationServiceRemoteProxy : NSObject
{
    _Bool _applicationActive;	// 8 = 0x8
    NSXPCConnection *_connection;	// 16 = 0x10
    MNUserOptions *_userOptions;	// 24 = 0x18
    geo_isolater *_clientsLock;	// 32 = 0x20
    NSHashTable *_clients;	// 40 = 0x28
    MNStartNavigationDetails *_startNavigationDetails;	// 48 = 0x30
    geo_isolater *_interruptionDatesLock;	// 56 = 0x38
    NSMutableArray *_interruptionDates;	// 64 = 0x40
    MNStartNavigationReconnectionDetails *_reconnectionDetails;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_serialQueue;	// 80 = 0x50
    long long _sandboxHandle;	// 88 = 0x58
    id <MNNavigationServiceClientInterface> _delegate;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000000000b5c19
@property(nonatomic) __weak id <MNNavigationServiceClientInterface> delegate; // @synthesize delegate=_delegate;
- (void)navigationServiceProxy:(id)arg1 didSendNavigationServiceCallback:(id)arg2;	// IMP=0x00000000000b5b31
- (void)navigationServiceProxy:(id)arg1 didUpdateNavigationDetails:(id)arg2;	// IMP=0x00000000000b5a52
- (void)navigationServiceProxy:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;	// IMP=0x00000000000b538e
- (void)navigationServiceProxy:(id)arg1 willChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;	// IMP=0x00000000000b5180
- (void)resumeRealtimeUpdatesForSubscriber:(id)arg1;	// IMP=0x00000000000b50a2
- (void)pauseRealtimeUpdatesForSubscriber:(id)arg1;	// IMP=0x00000000000b4fc4
- (void)checkinForNavigationService:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b4e3e
- (void)interfaceHashesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b4d60
- (void)setSimulationPosition:(double)arg1;	// IMP=0x00000000000b4cbe
- (void)setSimulationSpeedMultiplier:(double)arg1;	// IMP=0x00000000000b4c1c
- (void)setSimulationSpeedOverride:(double)arg1;	// IMP=0x00000000000b4b7a
- (void)recordPedestrianTracePath:(id)arg1;	// IMP=0x00000000000b4a9c
- (void)recordTraceBookmarkAtCurrentPositionWthScreenshotData:(id)arg1;	// IMP=0x00000000000b49be
- (void)setTracePosition:(double)arg1;	// IMP=0x00000000000b491c
- (void)setTracePlaybackSpeed:(double)arg1;	// IMP=0x00000000000b487a
- (void)setTraceIsPlaying:(_Bool)arg1;	// IMP=0x00000000000b47db
- (void)acceptReroute:(_Bool)arg1 forTrafficIncidentAlert:(id)arg2;	// IMP=0x00000000000b46e7
- (void)enableNavigationCapability:(unsigned long long)arg1;	// IMP=0x00000000000b4647
- (void)disableNavigationCapability:(unsigned long long)arg1;	// IMP=0x00000000000b45a7
- (void)setJunctionViewImageWidth:(double)arg1 height:(double)arg2;	// IMP=0x00000000000b44fb
- (void)setRideIndex:(unsigned long long)arg1 forSegmentIndex:(unsigned long long)arg2;	// IMP=0x00000000000b4452
- (void)setDisplayedStepIndex:(unsigned long long)arg1;	// IMP=0x00000000000b43b2
- (void)setIsConnectedToCarplay:(_Bool)arg1;	// IMP=0x00000000000b4313
- (void)setGuidancePromptsEnabled:(_Bool)arg1;	// IMP=0x00000000000b4274
- (void)setHeadingOrientation:(int)arg1;	// IMP=0x00000000000b41d6
- (void)stopCurrentGuidancePrompt;	// IMP=0x00000000000b414a
- (void)vibrateForPrompt:(unsigned long long)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b3fe3
- (void)repeatCurrentTrafficAlertWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b3ea0
- (void)repeatCurrentGuidanceWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b3d5d
- (void)changeUserOptions:(id)arg1;	// IMP=0x00000000000b3c6e
- (void)setGuidanceType:(unsigned long long)arg1;	// IMP=0x00000000000b3bce
- (void)changeTransportType:(int)arg1 route:(id)arg2;	// IMP=0x00000000000b3adb
- (void)switchToRoute:(id)arg1;	// IMP=0x00000000000b39fd
- (void)forceReroute;	// IMP=0x00000000000b3971
- (void)resumeOriginalDestination;	// IMP=0x00000000000b38e5
- (void)updateDestination:(id)arg1;	// IMP=0x00000000000b3807
- (void)advanceToNextLeg;	// IMP=0x00000000000b377b
- (void)removeWaypointAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000b36db
- (void)insertWaypoint:(id)arg1;	// IMP=0x00000000000b35fd
- (void)rerouteWithWaypoints:(id)arg1;	// IMP=0x00000000000b351f
- (void)stopNavigationWithReason:(unsigned long long)arg1;	// IMP=0x00000000000b3343
- (void)startNavigationWithDetails:(id)arg1 activeBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b3275
- (void)setRoutesForPreview:(id)arg1 selectedRouteIndex:(unsigned long long)arg2;	// IMP=0x00000000000b3128
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x00000000000b3038
- (void)forwardInvocation:(id)arg1;	// IMP=0x00000000000b2e6b
- (void)_releaseSandboxExtension;	// IMP=0x00000000000b2d79
- (void)_consumeSandboxExtension:(char *)arg1;	// IMP=0x00000000000b2c60
- (id)_remoteObjectProxy;	// IMP=0x00000000000b2a15
- (void)_startNavigationWithDetails:(id)arg1;	// IMP=0x00000000000b284e
- (void)_closeConnection;	// IMP=0x00000000000b26b1
- (_Bool)_shouldReconnectWithInterruptionOnDate:(id)arg1;	// IMP=0x00000000000b2515
- (void)_restoreIdleConnection;	// IMP=0x00000000000b23ec
- (void)_restoreNavigationSession;	// IMP=0x00000000000b1f14
- (void)_handleDisconnect;	// IMP=0x00000000000b1a9f
- (void)_handleInvalidation;	// IMP=0x00000000000b191a
- (void)_handleInterruption;	// IMP=0x00000000000b17c2
- (_Bool)_hasNavigationServiceEntitlement;	// IMP=0x00000000000b159b
- (void)_setExpectedClassesForClientInterface:(id)arg1;	// IMP=0x00000000000b10b1
- (void)_openConnection;	// IMP=0x00000000000b08c7
- (void)_updateConnection;	// IMP=0x00000000000b07b1
@property(readonly, nonatomic) unsigned long long clientCount;
@property(readonly, nonatomic) unsigned long long interruptionCount;
@property(readonly, nonatomic) NSArray *interruptionDates;
- (_Bool)isOpenForClient:(id)arg1;	// IMP=0x00000000000b038f
- (void)closeForClient:(id)arg1;	// IMP=0x00000000000b02d4
- (void)openForClient:(id)arg1;	// IMP=0x00000000000b00f2
- (void)dealloc;	// IMP=0x00000000000b00b4
- (id)init;	// IMP=0x00000000000affeb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


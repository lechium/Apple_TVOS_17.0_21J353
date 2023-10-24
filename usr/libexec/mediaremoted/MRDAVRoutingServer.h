//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRDAVHostedRoutingService, MRDAVLocalDeviceCommitManager, MRDAVRoutingDataSource, MRDAVSystemEndpointController, MRDActiveMediaRouteBiomeDonor, MRDAutoConnectionController, MRDExternalDeviceHomeServer, MRDIdleTopologySimplifier, MRDMediaActivityManager, MRDProactivePrepareForSetQueueSender, MRDRouteRecommendationController, MRDRoutedBackgroundActivityManager, MROSTransaction, MSVSystemDialog, NSDate, NSMutableArray, NSMutableSet, NSOperationQueue, NSString;

@interface MRDAVRoutingServer : NSObject
{
    MRDAutoConnectionController *_autoConnectionController;	// 8 = 0x8
    NSMutableSet *_routeUIDsToIgnorePortStatusFailures;	// 16 = 0x10
    NSDate *_lastClusterConnectionFailureDate;	// 24 = 0x18
    NSMutableSet *_reconnaissanceSessions;	// 32 = 0x20
    NSMutableArray *_mostRecentlyPickedDevices;	// 40 = 0x28
    int _mostRecentStatus;	// 48 = 0x30
    MRDExternalDeviceHomeServer *_homeServer;	// 56 = 0x38
    NSOperationQueue *_workerOperationQueue;	// 64 = 0x40
    MRDAVLocalDeviceCommitManager *_localDeviceCommitManager;	// 72 = 0x48
    MRDIdleTopologySimplifier *_topologySimplifier;	// 80 = 0x50
    MRDProactivePrepareForSetQueueSender *_proactivePrepareForSetQueueSender;	// 88 = 0x58
    MRDMediaActivityManager *_mediaActivityManager;	// 96 = 0x60
    MRDRoutedBackgroundActivityManager *_routedBackgroundActivityManager;	// 104 = 0x68
    MRDActiveMediaRouteBiomeDonor *_activeMediaRouteDonor;	// 112 = 0x70
    _Bool _airplayActive;	// 120 = 0x78
    MRDAVRoutingDataSource *_routingDataSource;	// 128 = 0x80
    MRDAVHostedRoutingService *_hostedRoutingService;	// 136 = 0x88
    MRDAVSystemEndpointController *_systemEndpointController;	// 144 = 0x90
    MSVSystemDialog *_activePasswordDialog;	// 152 = 0x98
    MSVSystemDialog *_activeDialog;	// 160 = 0xa0
    MROSTransaction *_discoveryTransaction;	// 168 = 0xa8
    MRDRouteRecommendationController *_recommendationController;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x002000000011b27a
@property(readonly, nonatomic) MRDRouteRecommendationController *recommendationController; // @synthesize recommendationController=_recommendationController;
@property(retain, nonatomic) MROSTransaction *discoveryTransaction; // @synthesize discoveryTransaction=_discoveryTransaction;
@property(nonatomic) __weak MSVSystemDialog *activeDialog; // @synthesize activeDialog=_activeDialog;
@property(retain, nonatomic) MSVSystemDialog *activePasswordDialog; // @synthesize activePasswordDialog=_activePasswordDialog;
@property(readonly, nonatomic) _Bool airplayActive; // @synthesize airplayActive=_airplayActive;
@property(readonly, nonatomic) MRDAVSystemEndpointController *systemEndpointController; // @synthesize systemEndpointController=_systemEndpointController;
@property(readonly, nonatomic) MRDAVHostedRoutingService *hostedRoutingService; // @synthesize hostedRoutingService=_hostedRoutingService;
@property(readonly, nonatomic) MRDAVRoutingDataSource *routingDataSource; // @synthesize routingDataSource=_routingDataSource;
- (void)_reevaluateAirplayActive;	// IMP=0x001000000011b0ed
- (void)_predictGroupLeaderForOutputDeviceIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000011adeb
- (void)_createEndpointForOutputDeviceIDsLegacy:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000011a55e
- (void)createHostedEndpointForOutputDeviceUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000011867c
- (void)_createEndpointForOutputDeviceIDs:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000011866a
- (void)_createEndpointForOutputDeviceIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000118653
- (id)_createAirPlaySecuritySettings;	// IMP=0x001000000011852f
- (void)_setApplicationPickedRoutes:(id)arg1 updateRoutes:(_Bool)arg2 forClient:(id)arg3;	// IMP=0x0010000000118529
- (id)_preferredIdentifierForMACAddress:(id)arg1 identifier:(id)arg2 name:(id)arg3;	// IMP=0x0010000000118424
- (void)_storePassword:(id)arg1 forOutputDevice:(id)arg2;	// IMP=0x0010000000118327
- (void)_storePassword:(id)arg1 forRoute:(id)arg2;	// IMP=0x001000000011822a
- (void)_presentPasswordDialogForRoute:(id)arg1 withOptions:(unsigned int)arg2;	// IMP=0x0010000000117f87
- (void)_postExternalScreenDidChange;	// IMP=0x0010000000117e7a
- (_Bool)_setPickedRoute:(id)arg1 withPassword:(id)arg2 options:(unsigned int)arg3;	// IMP=0x0010000000117d6f
- (void)_loadMostRecentlyPicked;	// IMP=0x0010000000117d1f
- (void)_saveMostRecentlyPicked;	// IMP=0x0010000000117cf1
- (void)_clearPasswordForOutputDevice:(id)arg1;	// IMP=0x0010000000117cac
- (id)_savedPasswordForOutputDevice:(id)arg1;	// IMP=0x0010000000117c6c
- (id)_existingKeychainAccountForOutputDevice:(id)arg1 password:(id *)arg2;	// IMP=0x0010000000117a6d
- (void)_handleAuthenticationFailureForRoute:(id)arg1 withOptions:(unsigned int)arg2;	// IMP=0x00100000001179ec
- (id)_presentDialogWithTitle:(id)arg1 message:(id)arg2 defaultButtonTitle:(id)arg3 alternateButtonTitle:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0010000000117550
- (void)_handleErrorStatus:(int)arg1 forRoute:(id)arg2;	// IMP=0x001000000011711f
- (void)_launchTVClusterSettings;	// IMP=0x0010000000116fad
- (void)_handleClusterErrorStatus:(int)arg1 forRoute:(id)arg2;	// IMP=0x0010000000116478
- (_Bool)_shouldIgnorePortStatusFailureForRouteWithUID:(id)arg1 previouslyCachedRouteUID:(id *)arg2;	// IMP=0x00100000001161ec
- (void)_updateSystemRouteDiscoveryMode;	// IMP=0x0010000000115e06
- (id)_passwordDialogForRouteWithName:(id)arg1 usingInputType:(long long)arg2;	// IMP=0x0010000000115bd6
- (id)_descriptionForDiscoveryMode:(unsigned int)arg1;	// IMP=0x0010000000115bc2
- (void)_unregisterNotifications;	// IMP=0x0010000000115b6f
- (void)_registerNotifications;	// IMP=0x001000000011590a
- (void)_handleAuthorizationRequest:(id)arg1;	// IMP=0x00100000001150d8
- (void)_postRouteStatusDidChangeNotificationForRoute:(id)arg1 newStatus:(int)arg2;	// IMP=0x0010000000114f77
- (void)_failedToConnectToOutputDeviceNotification:(id)arg1;	// IMP=0x0010000000114bb0
- (void)_routingDataSourceRouteStatusDidChangeNotification:(id)arg1;	// IMP=0x00100000001149cd
- (void)_routingDataSourceExternalScreenDidChangeNotification:(id)arg1;	// IMP=0x00100000001149bb
- (void)_routingDataSourcePickableRoutesDidChangeNotification:(id)arg1;	// IMP=0x001000000011496d
- (void)_clientInvalidatedNotification:(id)arg1;	// IMP=0x001000000011490a
- (void)postSystemEndpointDeviceChange:(id)arg1 type:(long long)arg2 originClient:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00100000001145d7
- (void)systemEndpointController:(id)arg1 activeSystemEndpointDidChangeForRequest:(id)arg2 type:(long long)arg3;	// IMP=0x0010000000114530
- (void)_handleDismissAllBannersMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0010000000114407
- (void)_handleGetRecommendRouteCandidatesMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000001143c3
- (void)_handleRecommendRouteCandidateMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000001141fb
- (void)_handleWillStartPlayingInterruptMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000001140ee
- (void)_handleModifyOutputContextMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000001137f6
- (void)_handleGetExternalDeviceMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000001133d3
- (void)_handleRemoveFromParentGroup:(id)arg1 fromClient:(id)arg2;	// IMP=0x0010000000112bf8
- (void)_handlePredictGroupLeader:(id)arg1 fromClient:(id)arg2;	// IMP=0x0010000000112a55
- (void)_handleCreateHostedEndpointForDevices:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000001125b9
- (void)_handleGroupDevicesAndSendCommand:(id)arg1 fromClient:(id)arg2;	// IMP=0x0010000000111eb7
- (void)_handleCreateDirectEndpointForDevices:(id)arg1 fromClient:(id)arg2;	// IMP=0x0010000000111bf8
- (void)_handleCreateEndpointWithDevices:(id)arg1 fromClient:(id)arg2;	// IMP=0x0010000000111be6
- (void)_handleMigrateFromEndpointToEndpointMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x00100000001115d8
- (void)_handleMigrateFromEndpointToOutputDevicesMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0010000000111036
- (void)_handleGetOutputContextUIDMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x0010000000110e1b
- (void)_handleResumeNowPlayingSession:(id)arg1 fromClient:(id)arg2;	// IMP=0x0010000000110a2a
- (void)_handleStopNowPlayingSession:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000011063c
- (void)_handleStartNowPlayingSession:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000010e57d
- (void)_handleCreateGroupWithDevices:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000010e364
- (void)_handleGetVirtualOutputDevicesMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000010e2c2
- (void)_handleAddVirtualOutputDeviceMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000010e220
- (void)_handleResetOutputContextMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000010e01d
- (void)_handleSetNearbyDevice:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000010df92
- (void)_handleGetAirplayStatus:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000010deae
- (void)_handlePresentRouteAuthorizationStatusMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000010dddc
- (void)_handlePromptForRouteAuthorizationMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000010db29
- (void)_handleGetHostedEndpointForDeviceUIDMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000010d984
- (void)_handleGetActiveSystemEndpointUIDsMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000010d827
- (void)_handleUpdateActiveSystemEndpointUIDMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000010d65a
- (void)_handleGetRecentAVOutputDeviceUIDsMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000010d5db
- (void)_handleSetRecentAVOutputDeviceUIDMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000010d4a8
- (void)_handleGetHostedRoutingXPCEndpointMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000010d310
- (void)_handleGetAirPlaySecuritySettingsMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000010d213
- (void)_handleSetApplicationPickedRoutes:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000010cf88
- (void)_handleUnpickAirPlayRoutesMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000010ced7
- (void)_handleClearAllAVRoutePasswordsMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000010cb15
- (void)_handleSetSavedAVRoutePasswordMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000010ca7f
- (void)_handleGetSavedAVRoutePasswordMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000010c9de
- (void)_handleGetExternalScreenTypeMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000010c982
- (void)_handleSetPickedRouteHasVolumeControlMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000010c805
- (void)_handleGetPickedRouteHasVolumeControlMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000010c6be
- (void)_handleSetPickedRouteMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000010bfb0
- (void)_handleGetPickableRoutesMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000010bec9
- (void)_handleSetRouteDiscoveryModeMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000010bd76
- (_Bool)outputDeviceAuthorizationSession:(id)arg1 shouldRetryAuthorizationRequest:(id)arg2 reason:(id)arg3;	// IMP=0x001000000010bd65
- (void)outputDeviceAuthorizationSession:(id)arg1 didProvideAuthorizationRequest:(id)arg2;	// IMP=0x001000000010b51b
- (void)collectDiagnostic:(id)arg1;	// IMP=0x001000000010b3b8
- (void)handleXPCMessage:(id)arg1 fromClient:(id)arg2;	// IMP=0x001000000010b08e
- (id)mediaActivityManager;	// IMP=0x001000000010b053
- (void)restoreClientSystemEndpointWithType:(long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000010af8f
- (void)restoreClientState:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x001000000010af15
- (id)clientsWithApplicationPickedRoutes;	// IMP=0x001000000010accb
- (id)clientsForApplicationPickedRoute:(id)arg1;	// IMP=0x001000000010a93d
- (id)applicationPickedRoutes;	// IMP=0x001000000010a738
- (_Bool)routeIsActiveWithUID:(id)arg1;	// IMP=0x001000000010a69f
- (void)pickCachedRouteWithUID:(id)arg1;	// IMP=0x001000000010a270
- (_Bool)setPickedRoute:(id)arg1 withPassword:(id)arg2 options:(unsigned int)arg3;	// IMP=0x001000000010a1d2
- (id)pickableRoutesForCategory:(id)arg1;	// IMP=0x0010000000109ff2
@property(readonly, nonatomic, getter=isSilentPrimary) _Bool silentPrimary;
- (void)setAirplayActive:(_Bool)arg1;	// IMP=0x0010000000109ead
- (void)dealloc;	// IMP=0x0010000000109e2a
- (id)initWithRoutingDataSource:(id)arg1 hostedRoutingService:(id)arg2 systemEndpointController:(id)arg3 autoConnectionController:(id)arg4 homeServer:(id)arg5 avOutputDeviceAuthorizationSession:(id)arg6;	// IMP=0x0010000000109903
- (id)initWithRoutingDataSource:(id)arg1;	// IMP=0x00100000001097c4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

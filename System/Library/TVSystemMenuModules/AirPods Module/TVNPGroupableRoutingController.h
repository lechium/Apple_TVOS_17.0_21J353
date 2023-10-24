//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMMediaDestinationController, MPAVEndpointRoutingDataSource, MPAVOutputDeviceRoutingDataSource, MPAVRoutingController, NSArray, NSMutableDictionary, NSString, TVCSHomeManager, TVNPRoutingDestination;
@protocol OS_dispatch_queue, PBSMediaRemoteServiceInterface;

@interface TVNPGroupableRoutingController : NSObject
{
    _Bool _allowsDestinationSelection;	// 8 = 0x8
    _Bool _allowsRetargeting;	// 9 = 0x9
    _Bool _wantsVolumeUpdates;	// 10 = 0xa
    _Bool _needsAvailableRoutesUpdate;	// 11 = 0xb
    _Bool _multipleSelectionEnabled;	// 12 = 0xc
    NSArray *_availableDestinations;	// 16 = 0x10
    NSArray *_availableRoutes;	// 24 = 0x18
    NSArray *_appleHeadsets;	// 32 = 0x20
    NSArray *_availableRoutesAndGroups;	// 40 = 0x28
    TVNPRoutingDestination *_currentDestination;	// 48 = 0x30
    NSArray *_currentRoutes;	// 56 = 0x38
    unsigned long long _discoveryMode;	// 64 = 0x40
    long long _numberOfExternalRoutesInLocalDestination;	// 72 = 0x48
    HMMediaDestinationController *_homeDestinationController;	// 80 = 0x50
    NSArray *_eligibleOdeonRoutes;	// 88 = 0x58
    NSString *_outputContextUID;	// 96 = 0x60
    NSString *_systemOutputRouteName;	// 104 = 0x68
    NSObject<PBSMediaRemoteServiceInterface> *_pbsMediaRemoteProxy;	// 112 = 0x70
    MPAVEndpointRoutingDataSource *_endpointRoutingDataSource;	// 120 = 0x78
    MPAVOutputDeviceRoutingDataSource *_outputDeviceRoutingDataSource;	// 128 = 0x80
    MPAVRoutingController *_endpointRoutingController;	// 136 = 0x88
    MPAVRoutingController *_outputDeviceRoutingController;	// 144 = 0x90
    TVCSHomeManager *_homeManager;	// 152 = 0x98
    NSMutableDictionary *_mediaDestinationIdentifiersToRoutes;	// 160 = 0xa0
    NSString *_localRouteIdentifier;	// 168 = 0xa8
    NSString *_placeholderRouteIdentifier;	// 176 = 0xb0
    NSString *_pendingSelectedMediaDestination;	// 184 = 0xb8
    NSString *_selectedMediaDestinationIdentifier;	// 192 = 0xc0
    NSMutableDictionary *_outputDeviceIdentifiersToRoutes;	// 200 = 0xc8
    NSMutableDictionary *_endpointIdentifiersToDestinations;	// 208 = 0xd0
    NSMutableDictionary *_groupIdentifiersToGroups;	// 216 = 0xd8
    NSArray *_allOutputDevices;	// 224 = 0xe0
    NSArray *_allEndpoints;	// 232 = 0xe8
    NSString *_currentEndpointRouteUID;	// 240 = 0xf0
    NSObject<OS_dispatch_queue> *_updateQueue;	// 248 = 0xf8
    unsigned long long _numberOfUpdates;	// 256 = 0x100
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x0010000000013130
- (void).cxx_destruct;	// IMP=0x000000000001dec0
@property(readonly, nonatomic) _Bool multipleSelectionEnabled; // @synthesize multipleSelectionEnabled=_multipleSelectionEnabled;
@property(readonly, nonatomic) _Bool needsAvailableRoutesUpdate; // @synthesize needsAvailableRoutesUpdate=_needsAvailableRoutesUpdate;
@property(readonly, nonatomic) unsigned long long numberOfUpdates; // @synthesize numberOfUpdates=_numberOfUpdates;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *updateQueue; // @synthesize updateQueue=_updateQueue;
@property(readonly, copy, nonatomic) NSString *currentEndpointRouteUID; // @synthesize currentEndpointRouteUID=_currentEndpointRouteUID;
@property(readonly, copy, nonatomic) NSArray *allEndpoints; // @synthesize allEndpoints=_allEndpoints;
@property(readonly, copy, nonatomic) NSArray *allOutputDevices; // @synthesize allOutputDevices=_allOutputDevices;
@property(readonly, copy, nonatomic) NSMutableDictionary *groupIdentifiersToGroups; // @synthesize groupIdentifiersToGroups=_groupIdentifiersToGroups;
@property(readonly, copy, nonatomic) NSMutableDictionary *endpointIdentifiersToDestinations; // @synthesize endpointIdentifiersToDestinations=_endpointIdentifiersToDestinations;
@property(readonly, copy, nonatomic) NSMutableDictionary *outputDeviceIdentifiersToRoutes; // @synthesize outputDeviceIdentifiersToRoutes=_outputDeviceIdentifiersToRoutes;
@property(retain, nonatomic) NSString *selectedMediaDestinationIdentifier; // @synthesize selectedMediaDestinationIdentifier=_selectedMediaDestinationIdentifier;
@property(retain, nonatomic) NSString *pendingSelectedMediaDestination; // @synthesize pendingSelectedMediaDestination=_pendingSelectedMediaDestination;
@property(readonly, nonatomic) NSString *placeholderRouteIdentifier; // @synthesize placeholderRouteIdentifier=_placeholderRouteIdentifier;
@property(readonly, nonatomic) NSString *localRouteIdentifier; // @synthesize localRouteIdentifier=_localRouteIdentifier;
@property(readonly, copy, nonatomic) NSMutableDictionary *mediaDestinationIdentifiersToRoutes; // @synthesize mediaDestinationIdentifiersToRoutes=_mediaDestinationIdentifiersToRoutes;
@property(readonly, nonatomic) TVCSHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(readonly, nonatomic) MPAVRoutingController *outputDeviceRoutingController; // @synthesize outputDeviceRoutingController=_outputDeviceRoutingController;
@property(readonly, nonatomic) MPAVRoutingController *endpointRoutingController; // @synthesize endpointRoutingController=_endpointRoutingController;
@property(readonly, nonatomic) MPAVOutputDeviceRoutingDataSource *outputDeviceRoutingDataSource; // @synthesize outputDeviceRoutingDataSource=_outputDeviceRoutingDataSource;
@property(readonly, nonatomic) MPAVEndpointRoutingDataSource *endpointRoutingDataSource; // @synthesize endpointRoutingDataSource=_endpointRoutingDataSource;
@property(readonly, nonatomic) NSObject<PBSMediaRemoteServiceInterface> *pbsMediaRemoteProxy; // @synthesize pbsMediaRemoteProxy=_pbsMediaRemoteProxy;
@property(readonly, copy, nonatomic) NSString *systemOutputRouteName; // @synthesize systemOutputRouteName=_systemOutputRouteName;
@property(nonatomic) _Bool wantsVolumeUpdates; // @synthesize wantsVolumeUpdates=_wantsVolumeUpdates;
@property(nonatomic) _Bool allowsRetargeting; // @synthesize allowsRetargeting=_allowsRetargeting;
@property(copy, nonatomic) NSString *outputContextUID; // @synthesize outputContextUID=_outputContextUID;
@property(readonly, copy, nonatomic) NSArray *eligibleOdeonRoutes; // @synthesize eligibleOdeonRoutes=_eligibleOdeonRoutes;
@property(readonly, nonatomic) HMMediaDestinationController *homeDestinationController; // @synthesize homeDestinationController=_homeDestinationController;
@property(readonly, nonatomic) long long numberOfExternalRoutesInLocalDestination; // @synthesize numberOfExternalRoutesInLocalDestination=_numberOfExternalRoutesInLocalDestination;
@property(nonatomic) unsigned long long discoveryMode; // @synthesize discoveryMode=_discoveryMode;
@property(readonly, copy, nonatomic) NSArray *currentRoutes; // @synthesize currentRoutes=_currentRoutes;
@property(retain, nonatomic) TVNPRoutingDestination *currentDestination; // @synthesize currentDestination=_currentDestination;
@property(readonly, copy, nonatomic) NSArray *availableRoutesAndGroups; // @synthesize availableRoutesAndGroups=_availableRoutesAndGroups;
@property(readonly, copy, nonatomic) NSArray *appleHeadsets; // @synthesize appleHeadsets=_appleHeadsets;
@property(readonly, copy, nonatomic) NSArray *availableRoutes; // @synthesize availableRoutes=_availableRoutes;
@property(readonly, copy, nonatomic) NSArray *availableDestinations; // @synthesize availableDestinations=_availableDestinations;
@property(readonly, nonatomic) _Bool allowsDestinationSelection; // @synthesize allowsDestinationSelection=_allowsDestinationSelection;
- (void)accessoryDidUpdateControllable:(id)arg1;	// IMP=0x000000000001d800
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000001d3e0
- (void)_updateWithAvailableMediaDestinations:(id)arg1;	// IMP=0x000000000001be30
- (void)_updateWithAvailableEndpoints:(id)arg1 outputDevices:(id)arg2;	// IMP=0x0000000000017db0
- (id)_endpointRoutesWithForcedLocalRoute:(id)arg1;	// IMP=0x0000000000017930
- (void)_updateAvailableRoutes;	// IMP=0x0000000000016de0
- (void)_setNeedsDisplayedRoutesUpdate;	// IMP=0x0000000000016c20
- (void)routingController:(id)arg1 pickedRouteDidChange:(id)arg2;	// IMP=0x0000000000016ba0
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;	// IMP=0x0000000000016b50
@property(readonly, nonatomic) _Bool isLocalRouteAVR;
- (void)targetDestination:(id)arg1;	// IMP=0x0000000000016950
- (void)presentEARCUpsell;	// IMP=0x00000000000164f0
- (void)selectOdeonDestination:(id)arg1;	// IMP=0x0000000000015e90
- (void)unpickRoutes:(id)arg1 forDestination:(id)arg2;	// IMP=0x00000000000159c0
- (void)pickRoutes:(id)arg1 forDestination:(id)arg2;	// IMP=0x00000000000144b0
- (void)_updateAllowsDestinationSelection;	// IMP=0x00000000000143d0
- (void)dealloc;	// IMP=0x0000000000013e20
- (id)initWithOutputContextUID:(id)arg1 allowsRetargeting:(_Bool)arg2 initalFetchCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000132e0
- (id)initWithOutputContextUID:(id)arg1 allowsRetargeting:(_Bool)arg2;	// IMP=0x0000000000013240
- (id)init;	// IMP=0x00000000000131e0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

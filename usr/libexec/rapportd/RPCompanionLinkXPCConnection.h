//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CUBonjourDevice, MISSING_TYPE, NSMutableDictionary, NSMutableSet, NSString, NSUUID, NSXPCConnection, RPCompanionLinkClient, RPCompanionLinkDaemon, RPCompanionLinkDevice, RPConnection, RPDiscovery, RPServer, RPSession;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;

@interface RPCompanionLinkXPCConnection : NSObject
{
    CDStruct_20fd928a _metricsCtx;	// 8 = 0x8
    _Bool _clientNeedsWiFiAssertion;	// 32 = 0x20
    _Bool _isContextCollector;	// 33 = 0x21
    _Bool _entitled;	// 34 = 0x22
    _Bool _localDeviceUpdated;	// 35 = 0x23
    _Bool _needsCLink;	// 36 = 0x24
    _Bool _needsNearbyActionV2;	// 37 = 0x25
    unsigned int _xpcID;	// 40 = 0x28
    RPCompanionLinkClient *_client;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 56 = 0x38
    RPConnection *_netCnx;	// 64 = 0x40
    NSString *_appID;	// 72 = 0x48
    CUBonjourDevice *_bonjourDevice;	// 80 = 0x50
    RPCompanionLinkDaemon *_daemon;	// 88 = 0x58
    RPCompanionLinkDevice *_daemonDevice;	// 96 = 0x60
    NSMutableDictionary *_devices;	// 104 = 0x68
    RPDiscovery *_discoveryClient;	// 112 = 0x70
    NSObject<OS_dispatch_source> *_discoveryTimer;	// 120 = 0x78
    NSUUID *_launchInstanceID;	// 128 = 0x80
    NSMutableDictionary *_registeredEvents;	// 136 = 0x88
    NSMutableSet *_registeredProfileIDs;	// 144 = 0x90
    NSMutableDictionary *_registeredRequests;	// 152 = 0x98
    NSObject<OS_os_transaction> *_osTransaction;	// 160 = 0xa0
    RPServer *_server;	// 168 = 0xa8
    RPSession *_session;	// 176 = 0xb0
    unsigned long long _startTicks;	// 184 = 0xb8
    NSXPCConnection *_xpcCnx;	// 192 = 0xc0
}

- (void).cxx_destruct;	// IMP=0x002000000004571f
@property(nonatomic) unsigned int xpcID; // @synthesize xpcID=_xpcID;
@property(readonly, nonatomic) NSXPCConnection *xpcCnx; // @synthesize xpcCnx=_xpcCnx;
@property(nonatomic) unsigned long long startTicks; // @synthesize startTicks=_startTicks;
@property(retain, nonatomic) RPSession *session; // @synthesize session=_session;
@property(retain, nonatomic) RPServer *server; // @synthesize server=_server;
@property(retain, nonatomic) NSObject<OS_os_transaction> *osTransaction; // @synthesize osTransaction=_osTransaction;
@property(readonly, nonatomic) NSMutableDictionary *registeredRequests; // @synthesize registeredRequests=_registeredRequests;
@property(readonly, nonatomic) NSMutableSet *registeredProfileIDs; // @synthesize registeredProfileIDs=_registeredProfileIDs;
@property(readonly, nonatomic) NSMutableDictionary *registeredEvents; // @synthesize registeredEvents=_registeredEvents;
@property(nonatomic) _Bool needsNearbyActionV2; // @synthesize needsNearbyActionV2=_needsNearbyActionV2;
@property(nonatomic) _Bool needsCLink; // @synthesize needsCLink=_needsCLink;
@property(nonatomic) _Bool localDeviceUpdated; // @synthesize localDeviceUpdated=_localDeviceUpdated;
@property(retain, nonatomic) NSUUID *launchInstanceID; // @synthesize launchInstanceID=_launchInstanceID;
@property(readonly, nonatomic) _Bool entitled; // @synthesize entitled=_entitled;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *discoveryTimer; // @synthesize discoveryTimer=_discoveryTimer;
@property(retain, nonatomic) RPDiscovery *discoveryClient; // @synthesize discoveryClient=_discoveryClient;
@property(readonly, nonatomic) NSMutableDictionary *devices; // @synthesize devices=_devices;
@property(readonly, nonatomic) RPCompanionLinkDevice *daemonDevice; // @synthesize daemonDevice=_daemonDevice;
@property(readonly, nonatomic) RPCompanionLinkDaemon *daemon; // @synthesize daemon=_daemon;
@property(retain, nonatomic) CUBonjourDevice *bonjourDevice; // @synthesize bonjourDevice=_bonjourDevice;
@property(retain, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(retain, nonatomic) RPConnection *netCnx; // @synthesize netCnx=_netCnx;
@property(nonatomic) _Bool isContextCollector; // @synthesize isContextCollector=_isContextCollector;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(nonatomic) _Bool clientNeedsWiFiAssertion; // @synthesize clientNeedsWiFiAssertion=_clientNeedsWiFiAssertion;
@property(retain, nonatomic) RPCompanionLinkClient *client; // @synthesize client=_client;
- (id)_findMatchingDevice:(id)arg1 inDeviceDictionary:(id)arg2;	// IMP=0x0010000000045390
- (void)xpcSessionActivate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000004525d
- (void)xpcServerUpdate:(id)arg1;	// IMP=0x0010000000044f75
- (void)xpcServerActivate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000447e2
- (void)xpcDiscoveryUpdate:(id)arg1;	// IMP=0x001000000004473e
- (void)xpcDiscoveryActivate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000004460c
- (void)companionLinkRemoveLocalDeviceAsContextCollector:(CDUnknownBlockType)arg1;	// IMP=0x00100000000444a5
- (void)companionLinkSetLocalDeviceAsContextCollector:(CDUnknownBlockType)arg1;	// IMP=0x001000000004433e
- (void)companionLinkTryPassword:(id)arg1;	// IMP=0x0010000000044260
- (void)companionLinkSendRequestID:(id)arg1 request:(id)arg2 destinationID:(id)arg3 options:(id)arg4 responseHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000044042
- (void)companionLinkDeregisterRequestID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000043f8e
- (void)companionLinkRegisterRequestID:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000043e8c
- (void)companionLinkDeregisterProfileID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000043d4b
- (void)companionLinkRegisterProfileID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000043afb
- (void)companionLinkSendEventID:(id)arg1 event:(id)arg2 destinationID:(id)arg3 options:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000000438f1
- (void)companionLinkDeregisterEventID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000043798
- (void)companionLinkRegisterEventID:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000043547
- (void)companionLinkCreateDeviceToEndpointMappingForDeviceID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000004342e
- (void)companionLinkTriggerEnhancedDiscovery:(id)arg1 useCase:(unsigned int)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000043344
- (void)companionLinkUpdateClient:(id)arg1;	// IMP=0x0010000000042dd6
- (void)companionLinkActivateClient:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000417c1
- (void)companionLinkInvalidateAssertion:(id)arg1;	// IMP=0x00100000000417bb
- (void)companionLinkActivateAssertion:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000417a5
- (void)updateErrorFlags:(unsigned long long)arg1;	// IMP=0x0010000000041660
- (void)reportChangedDevice:(id)arg1 changes:(unsigned int)arg2;	// IMP=0x00100000000413ec
- (void)reportLostDevice:(id)arg1;	// IMP=0x0010000000041253
- (_Bool)reportFoundDevice:(id)arg1 outReason:(id *)arg2;	// IMP=0x001000000004104f
- (_Bool)_checkRSSIThresholdForDevice:(id)arg1;	// IMP=0x0010000000040f7a
- (void)receivedRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000040e5d
- (void)receivedEventID:(id)arg1 event:(id)arg2 options:(id)arg3;	// IMP=0x0010000000040d5a
- (void)promptForPasswordType:(int)arg1 flags:(unsigned int)arg2 throttleSeconds:(int)arg3;	// IMP=0x0010000000040c76
- (id)_devicesForClient:(id)arg1;	// IMP=0x001000000004061e
- (void)handleDisconnect;	// IMP=0x001000000004058f
- (void)authCompletion:(id)arg1;	// IMP=0x00100000000404d9
- (_Bool)_entitledAndReturnError:(id *)arg1;	// IMP=0x00100000000403ad
- (void)connectionInvalidatedCore;	// IMP=0x001000000003fca4
- (void)_invalidateConnectionInList:(id)arg1 listDescription:(id)arg2;	// IMP=0x001000000003f9bf
- (_Bool)_connectionHasActiveSessions:(id)arg1;	// IMP=0x001000000003f891
- (MISSING_TYPE *)connectionInvalidated;	// IMP=0x001000000003f72d
- (id)descriptionWithLevel:(int)arg1;	// IMP=0x001000000003f19f
- (id)description;	// IMP=0x001000000003f188
- (id)initWithDaemon:(id)arg1 xpcCnx:(id)arg2;	// IMP=0x001000000003f0cf

@end


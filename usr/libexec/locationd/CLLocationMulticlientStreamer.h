//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class NSMutableSet, NSString, RPCompanionLinkClient;

@interface CLLocationMulticlientStreamer : CLIntersiloService
{
    struct unique_ptr<CLLocationController_Type::Client, std::default_delete<CLLocationController_Type::Client>> _locationClient;	// 8 = 0x8
    struct unique_ptr<CLRollingPowerAssertion, std::default_delete<CLRollingPowerAssertion>> _locationAssertion;	// 16 = 0x10
    _Bool _clientActivityTypeFitnessActive;	// 24 = 0x18
    _Bool _clientActivityTypeAirborneActive;	// 25 = 0x19
    _Bool _emergencyEnablementAssertionActive;	// 26 = 0x1a
    int _currentGranularity;	// 28 = 0x1c
    RPCompanionLinkClient *_rapportDiscoveryLink;	// 32 = 0x20
    NSMutableSet *_activeStreamingClients;	// 40 = 0x28
    RPCompanionLinkClient *_rapportStreamingLink;	// 48 = 0x30
}

+ (_Bool)isSupported;	// IMP=0x0020000000d612c2
+ (id)getSilo;	// IMP=0x0010000000d61266
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0010000000d6124d
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0010000000d611f0
- (id).cxx_construct;	// IMP=0x0020000000d63660
- (void).cxx_destruct;	// IMP=0x0010000000d6361b
@property(retain) RPCompanionLinkClient *rapportStreamingLink; // @synthesize rapportStreamingLink=_rapportStreamingLink;
@property(retain, nonatomic) NSMutableSet *activeStreamingClients; // @synthesize activeStreamingClients=_activeStreamingClients;
@property(retain) RPCompanionLinkClient *rapportDiscoveryLink; // @synthesize rapportDiscoveryLink=_rapportDiscoveryLink;
@property(nonatomic) _Bool emergencyEnablementAssertionActive; // @synthesize emergencyEnablementAssertionActive=_emergencyEnablementAssertionActive;
@property(nonatomic, getter=isClientActivityTypeAirborneActive) _Bool clientActivityTypeAirborneActive; // @synthesize clientActivityTypeAirborneActive=_clientActivityTypeAirborneActive;
@property(nonatomic, getter=isClientActivityTypeFitnessActive) _Bool clientActivityTypeFitnessActive; // @synthesize clientActivityTypeFitnessActive=_clientActivityTypeFitnessActive;
@property(nonatomic) int currentGranularity; // @synthesize currentGranularity=_currentGranularity;
- (void)stopLocation;	// IMP=0x0010000000d633e9
- (void)activateRapportLinkIfNecessary;	// IMP=0x0010000000d62bf9
- (void)registerRequestHandlers;	// IMP=0x0010000000d6223c
- (void)onLocationNotification:(const int *)arg1 withData:(const void *)arg2;	// IMP=0x0010000000d61bdc
- (void)toggleLocationUpdates:(_Bool)arg1 inFitnessSession:(_Bool)arg2 inAirborneSession:(_Bool)arg3 emergencyEnablementAssertionActive:(_Bool)arg4;	// IMP=0x0010000000d619fd
- (void)endService;	// IMP=0x0010000000d615b0
- (void)beginService;	// IMP=0x0010000000d6132c
- (id)init;	// IMP=0x0010000000d612ef

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end


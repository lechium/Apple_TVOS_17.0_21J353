//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDCharacteristicsAvailabilityListener, HMDHAPAccessory, NSNotificationCenter, NSString, NSUUID;
@protocol HMDCOStateManager, HMDCoordinationStateManagerProviding, HMMLogEventSubmitting, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDDoorbellChimeControllerContext : NSObject
{
    HMDHAPAccessory *_accessory;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
    HMDCharacteristicsAvailabilityListener *_listener;	// 24 = 0x18
    id <HMDCoordinationStateManagerProviding> _stateManagerProvider;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000074f2e8
@property(readonly) __weak id <HMDCoordinationStateManagerProviding> stateManagerProvider; // @synthesize stateManagerProvider=_stateManagerProvider;
@property(readonly) HMDCharacteristicsAvailabilityListener *listener; // @synthesize listener=_listener;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property __weak HMDHAPAccessory *accessory; // @synthesize accessory=_accessory;
- (_Bool)accessorySupportsCoordinationDoorbellChime:(id)arg1;	// IMP=0x000000000074f26e
@property(readonly, copy) NSUUID *currentAccessoryUUID;
- (id)fetchDoorbellDelay;	// IMP=0x000000000074f18a
- (id)clearCoordinationStateForKeyPaths:(id)arg1;	// IMP=0x000000000074f171
- (id)keyPathFromComponents:(id)arg1;	// IMP=0x000000000074f169
- (id)postCoordinationState:(id)arg1;	// IMP=0x000000000074f150
@property(readonly, getter=isCoordinationPathEnabled) _Bool coordinationPathEnabled;
@property(readonly) double doorbellChimeMaximumAnnounceDelay;
@property(readonly) Class doorbellBulletinUtilitiesClass;
@property(readonly, getter=isCurrentDevicePrimaryResident) _Bool currentDevicePrimaryResident;
- (id)postCULiveAction:(id)arg1;	// IMP=0x000000000074ef06
@property(readonly) NSNotificationCenter *notificationCenter;
@property(readonly, getter=isFeatureEnabled) _Bool featureEnabled;
@property(readonly) id <HMMLogEventSubmitting> logEventDispatcher;
@property(readonly) __weak id <HMDCOStateManager> stateManager;
- (id)initWithWorkQueue:(id)arg1 accessory:(id)arg2;	// IMP=0x000000000074ec97

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


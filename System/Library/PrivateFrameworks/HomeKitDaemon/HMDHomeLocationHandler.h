//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class CLLocation, CLRegion, HMDHome, HMDHomeLocationData, HMFMessageDispatcher, HMFTimer, NSDate, NSObject, NSSet, NSString, NSTimeZone, NSUUID, _HMDPendingRegionUpdate;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDHomeLocationHandler : HMFObject
{
    struct os_unfair_recursive_lock_s _lock;	// 8 = 0x8
    _Bool _firstAccessoryReachable;	// 16 = 0x10
    CLLocation *_location;	// 24 = 0x18
    NSTimeZone *_timeZone;	// 32 = 0x20
    NSString *_isoCountryCode;	// 40 = 0x28
    long long _regionStateAtHome;	// 48 = 0x30
    long long _regionStateNearbyHome;	// 56 = 0x38
    NSDate *_locationUpdateTimestamp;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_workQueue;	// 72 = 0x48
    HMFMessageDispatcher *_msgDispatcher;	// 80 = 0x50
    HMDHome *_home;	// 88 = 0x58
    long long _locationAuthorization;	// 96 = 0x60
    CLRegion *_regionAtHome;	// 104 = 0x68
    CLRegion *_regionNearbyHome;	// 112 = 0x70
    HMFTimer *_homeRegionUpdateTimer;	// 120 = 0x78
    _HMDPendingRegionUpdate *_pendingAtHomeRegionUpdate;	// 128 = 0x80
    _HMDPendingRegionUpdate *_pendingNearbyHomeRegionUpdate;	// 136 = 0x88
    double _coalesceRegionUpdateIntervalInSeconds;	// 144 = 0x90
    NSDate *_lastArrival;	// 152 = 0x98
    NSDate *_lastExit;	// 160 = 0xa0
}

+ (id)logCategory;	// IMP=0x0010000000b3c05f
+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000b3c057
+ (_Bool)hasMessageReceiverChildren;	// IMP=0x0010000000b3c04f
- (void).cxx_destruct;	// IMP=0x0000000000b3b061
@property(retain, nonatomic) NSDate *lastExit; // @synthesize lastExit=_lastExit;
@property(retain, nonatomic) NSDate *lastArrival; // @synthesize lastArrival=_lastArrival;
@property(nonatomic) double coalesceRegionUpdateIntervalInSeconds; // @synthesize coalesceRegionUpdateIntervalInSeconds=_coalesceRegionUpdateIntervalInSeconds;
@property(retain, nonatomic) _HMDPendingRegionUpdate *pendingNearbyHomeRegionUpdate; // @synthesize pendingNearbyHomeRegionUpdate=_pendingNearbyHomeRegionUpdate;
@property(retain, nonatomic) _HMDPendingRegionUpdate *pendingAtHomeRegionUpdate; // @synthesize pendingAtHomeRegionUpdate=_pendingAtHomeRegionUpdate;
@property(retain, nonatomic) HMFTimer *homeRegionUpdateTimer; // @synthesize homeRegionUpdateTimer=_homeRegionUpdateTimer;
@property(nonatomic) _Bool firstAccessoryReachable; // @synthesize firstAccessoryReachable=_firstAccessoryReachable;
@property(retain, nonatomic) CLRegion *regionNearbyHome; // @synthesize regionNearbyHome=_regionNearbyHome;
@property(retain, nonatomic) CLRegion *regionAtHome; // @synthesize regionAtHome=_regionAtHome;
@property(nonatomic) long long locationAuthorization; // @synthesize locationAuthorization=_locationAuthorization;
@property(nonatomic) __weak HMDHome *home; // @synthesize home=_home;
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) NSDate *locationUpdateTimestamp; // @synthesize locationUpdateTimestamp=_locationUpdateTimestamp;
@property(nonatomic) long long regionStateNearbyHome; // @synthesize regionStateNearbyHome=_regionStateNearbyHome;
@property(nonatomic) long long regionStateAtHome; // @synthesize regionStateAtHome=_regionStateAtHome;
@property(retain, nonatomic) NSString *isoCountryCode; // @synthesize isoCountryCode=_isoCountryCode;
@property(retain, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
- (long long)__getNearByHomeCalculatedState;	// IMP=0x0000000000b3ad97
- (long long)__getAtHomeCalculatedState;	// IMP=0x0000000000b3ad85
- (void)__simulateNearByHomeRegionState:(long long)arg1;	// IMP=0x0000000000b3ad34
- (void)__simulateAtHomeRegionState:(long long)arg1;	// IMP=0x0000000000b3ace3
- (id)__initForUnitTesting:(double)arg1 home:(id)arg2 queue:(id)arg3 messageDispatcher:(id)arg4 location:(id)arg5;	// IMP=0x0000000000b3abea
- (id)logIdentifier;	// IMP=0x0000000000b3ab33
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000b3aa1b
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000b3a8bb
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
- (id)messageDestination;	// IMP=0x0000000000b3a840
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)checkFalsePresence;	// IMP=0x0000000000b3a2d3
- (void)_processPendingRegionStateUpdates;	// IMP=0x0000000000b39997
- (void)timerDidFire:(id)arg1;	// IMP=0x0000000000b398af
- (void)coalesceRegionUpdateState:(long long)arg1 forRegion:(id)arg2;	// IMP=0x0000000000b3939d
- (_Bool)updateRegionStateFromLocation:(id)arg1;	// IMP=0x0000000000b38f57
- (_Bool)calculateAndUpdateRegionState:(long long)arg1;	// IMP=0x0000000000b38d7a
- (void)getReachableIPAccessory:(unsigned long long *)arg1 btleAccessory:(unsigned long long *)arg2 mediaAccessory:(unsigned long long *)arg3;	// IMP=0x0000000000b38d1a
- (void)didDetermineState:(long long)arg1 forRegion:(id)arg2;	// IMP=0x0000000000b38c62
- (void)didDetermineBatchLocation:(id)arg1;	// IMP=0x0000000000b38baa
- (void)didDetermineLocation:(id)arg1;	// IMP=0x0000000000b38af2
- (void)updateHomeLocationFromCoreRoutine;	// IMP=0x0000000000b38aec
- (_Bool)isDate:(id)arg1 laterThanDate:(id)arg2;	// IMP=0x0000000000b3895c
- (_Bool)isLocation:(id)arg1 closeToLocation:(id)arg2;	// IMP=0x0000000000b38644
@property(readonly, nonatomic) HMDHomeLocationData *locationData;
- (void)_sendLocationUpdateToClients;	// IMP=0x0000000000b383c4
- (_Bool)isNewHomeLocationTooCloseToPreviousLocation:(id)arg1 newLocation:(id)arg2;	// IMP=0x0000000000b3825f
- (void)handleHomeLocationForHH2:(id)arg1 updatedTime:(id)arg2 source:(long long)arg3;	// IMP=0x0000000000b37f14
- (void)runTransactionWithLocation:(id)arg1 updatedTime:(id)arg2 source:(long long)arg3;	// IMP=0x0000000000b37d9f
- (_Bool)shouldUpdateLocationFromLocationData:(id)arg1;	// IMP=0x0000000000b37bd4
- (id)_handleHomeLocationDataForHH2:(id)arg1 fromMessage:(id)arg2;	// IMP=0x0000000000b37455
- (id)_handleHomeLocationData:(id)arg1 message:(id)arg2;	// IMP=0x0000000000b37355
- (void)_updateTimeZone:(id)arg1;	// IMP=0x0000000000b37257
- (void)_evaluateHomeRegionStateForCurrentDeviceLocation:(id)arg1;	// IMP=0x0000000000b36cb6
- (_Bool)_needToExtractBatchLocations;	// IMP=0x0000000000b36a38
- (_Bool)_canExtractBatchLocations;	// IMP=0x0000000000b3687a
- (void)accessoriesBecomeUnreachable;	// IMP=0x0000000000b367a1
- (void)accessoriesBecomeReachable;	// IMP=0x0000000000b366da
- (void)updateHomeLocation;	// IMP=0x0000000000b3657f
- (void)_handleRetrieveLocation:(id)arg1;	// IMP=0x0000000000b36263
- (void)_handleLocationAuthorization:(long long)arg1;	// IMP=0x0000000000b360f3
- (void)_handleLocationAuthorizationChangedNotification:(id)arg1;	// IMP=0x0000000000b35fc6
- (void)_registerForRegionUpdate;	// IMP=0x0000000000b35fc0
- (void)_registerForMessages;	// IMP=0x0000000000b35e8e
- (void)configure:(id)arg1 queue:(id)arg2 messageDispatcher:(id)arg3;	// IMP=0x0000000000b35c5b
- (void)dealloc;	// IMP=0x0000000000b35bed
- (id)init;	// IMP=0x0000000000b35b09
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSSet *messageReceiverChildren;
@property(readonly) Class superclass;

@end

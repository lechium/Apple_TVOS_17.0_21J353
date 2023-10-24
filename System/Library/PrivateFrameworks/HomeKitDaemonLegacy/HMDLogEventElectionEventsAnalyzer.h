//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDEventCountersManager, NSNumber;

__attribute__((visibility("hidden")))
@interface HMDLogEventElectionEventsAnalyzer
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    _Bool _isCurrentDeviceInSecondaryResidentCoordinationMesh;	// 12 = 0xc
    HMDEventCountersManager *_eventCountersManager;	// 16 = 0x10
    CDUnknownBlockType _uptimeFactory;	// 24 = 0x18
    NSNumber *_lastPrimaryUpdateTime;	// 32 = 0x20
    double _lastDurationInMeshUpdateTime;	// 40 = 0x28
}

+ (id)managedEventCounterRequestGroups;	// IMP=0x001000000041be1d
- (void).cxx_destruct;	// IMP=0x000000000041bd80
@property double lastDurationInMeshUpdateTime; // @synthesize lastDurationInMeshUpdateTime=_lastDurationInMeshUpdateTime;
@property(retain, nonatomic) NSNumber *lastPrimaryUpdateTime; // @synthesize lastPrimaryUpdateTime=_lastPrimaryUpdateTime;
@property(readonly, nonatomic) CDUnknownBlockType uptimeFactory; // @synthesize uptimeFactory=_uptimeFactory;
@property(readonly, nonatomic) HMDEventCountersManager *eventCountersManager; // @synthesize eventCountersManager=_eventCountersManager;
@property _Bool isCurrentDeviceInSecondaryResidentCoordinationMesh; // @synthesize isCurrentDeviceInSecondaryResidentCoordinationMesh=_isCurrentDeviceInSecondaryResidentCoordinationMesh;
- (void)resetAggregationAnalysisContext;	// IMP=0x000000000041bcaf
- (void)populateAggregationAnalysisLogEvent:(id)arg1;	// IMP=0x000000000041baa9
- (void)_updatePrimaryDuration;	// IMP=0x000000000041b9c1
- (void)updatePrimaryDuration;	// IMP=0x000000000041b974
- (void)handlePrimaryResidentChangedNotification:(id)arg1;	// IMP=0x000000000041b72c
- (void)didReceiveEventFromDispatcher:(id)arg1;	// IMP=0x000000000041b505
- (void)updateMeshStateAndDurationInPrimaryMeshForCurrentDevice:(_Bool)arg1;	// IMP=0x000000000041b43f
- (unsigned long long)fetchCountForEventName:(id)arg1;	// IMP=0x000000000041b3ca
- (void)incrementCountForEventName:(id)arg1 withValue:(long long)arg2;	// IMP=0x000000000041b34c
- (void)incrementCountForEventName:(id)arg1;	// IMP=0x000000000041b2dc
- (id)initWithDataSource:(id)arg1 uptimeFactory:(CDUnknownBlockType)arg2;	// IMP=0x000000000041b10d
- (id)initWithDataSource:(id)arg1;	// IMP=0x000000000041b0f4

@end


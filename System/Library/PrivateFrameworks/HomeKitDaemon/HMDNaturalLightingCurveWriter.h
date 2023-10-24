//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDLightProfile, HMFTimer, NSNotificationCenter, NSObject, NSString, NSUUID;
@protocol HMDLightProfileDataSource, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDNaturalLightingCurveWriter : HMFObject
{
    _Bool _currentDevicePrimaryResident;	// 8 = 0x8
    NSString *_logIdentifier;	// 16 = 0x10
    NSUUID *_UUID;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_workQueue;	// 32 = 0x20
    CDUnknownBlockType _timerFactory;	// 40 = 0x28
    HMDLightProfile *_lightProfile;	// 48 = 0x30
    HMFTimer *_periodicCharacteristicWriteTimer;	// 56 = 0x38
    double _naturalLightingCurveUpdateInterval;	// 64 = 0x40
    double _naturalLightingCurveUpdateAccessoryTimeDifferenceThreshold;	// 72 = 0x48
    id <HMDLightProfileDataSource> _dataSource;	// 80 = 0x50
    NSNotificationCenter *_notificationCenter;	// 88 = 0x58
}

+ (id)logCategory;	// IMP=0x0010000000cc1666
- (void).cxx_destruct;	// IMP=0x0000000000cc10b5
@property(getter=isCurrentDevicePrimaryResident) _Bool currentDevicePrimaryResident; // @synthesize currentDevicePrimaryResident=_currentDevicePrimaryResident;
@property(readonly) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly) id <HMDLightProfileDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly) double naturalLightingCurveUpdateAccessoryTimeDifferenceThreshold; // @synthesize naturalLightingCurveUpdateAccessoryTimeDifferenceThreshold=_naturalLightingCurveUpdateAccessoryTimeDifferenceThreshold;
@property(readonly) double naturalLightingCurveUpdateInterval; // @synthesize naturalLightingCurveUpdateInterval=_naturalLightingCurveUpdateInterval;
@property(retain) HMFTimer *periodicCharacteristicWriteTimer; // @synthesize periodicCharacteristicWriteTimer=_periodicCharacteristicWriteTimer;
@property __weak HMDLightProfile *lightProfile; // @synthesize lightProfile=_lightProfile;
@property(readonly) CDUnknownBlockType timerFactory; // @synthesize timerFactory=_timerFactory;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) NSUUID *UUID; // @synthesize UUID=_UUID;
@property(readonly) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
- (_Bool)supportsDeviceWithCapabilities:(id)arg1;	// IMP=0x0000000000cc0f82
- (void)timerDidFire:(id)arg1;	// IMP=0x0000000000cc0c4c
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)writeForNaturalLightingEnabledWithReason:(id)arg1;	// IMP=0x0000000000cc0b47
- (void)synchronizeCurveWithActiveTransitionContext:(id)arg1;	// IMP=0x0000000000cc06fd
- (void)writeWithNaturalLightingEnabled:(_Bool)arg1 reason:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000cc04f5
- (void)handleCurrentDevicePrimaryResidentChangedWithReason:(id)arg1;	// IMP=0x0000000000cc0328
- (void)handlePrimaryResidentUpdateNotification:(id)arg1;	// IMP=0x0000000000cc0270
- (void)handleActiveTransitionContextUpdated:(id)arg1;	// IMP=0x0000000000cbfa4e
- (void)configureWithLightProfile:(id)arg1;	// IMP=0x0000000000cbf783
- (id)initWithUUID:(id)arg1 workQueue:(id)arg2 logIdentifier:(id)arg3 dataSource:(id)arg4 notificationCenter:(id)arg5 timerFactory:(CDUnknownBlockType)arg6;	// IMP=0x0000000000cbf638
- (id)initWithUUID:(id)arg1 workQueue:(id)arg2 logIdentifier:(id)arg3;	// IMP=0x0000000000cbf556

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

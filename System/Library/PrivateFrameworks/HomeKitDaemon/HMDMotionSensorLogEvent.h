//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMHomeLogEvent.h>

@class NSDictionary, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDMotionSensorLogEvent : HMMHomeLogEvent
{
    NSString *_accessoryUUID;	// 8 = 0x8
    NSString *_motionSensorStatus;	// 16 = 0x10
    NSString *_characteristicUUID;	// 24 = 0x18
    NSString *_timeStamp;	// 32 = 0x20
    NSString *_homePresence;	// 40 = 0x28
    NSString *_triggerSource;	// 48 = 0x30
    NSString *_bundleId;	// 56 = 0x38
    NSString *_userUUID;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000004af4d1
@property(readonly, copy, nonatomic) NSString *userUUID; // @synthesize userUUID=_userUUID;
@property(readonly, copy, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property(readonly, copy, nonatomic) NSString *triggerSource; // @synthesize triggerSource=_triggerSource;
@property(readonly, copy, nonatomic) NSString *homePresence; // @synthesize homePresence=_homePresence;
@property(readonly, copy, nonatomic) NSString *timeStamp; // @synthesize timeStamp=_timeStamp;
@property(readonly, copy, nonatomic) NSString *characteristicUUID; // @synthesize characteristicUUID=_characteristicUUID;
@property(readonly, copy, nonatomic) NSString *motionSensorStatus; // @synthesize motionSensorStatus=_motionSensorStatus;
@property(readonly, copy, nonatomic) NSString *accessoryUUID; // @synthesize accessoryUUID=_accessoryUUID;
@property(readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property(readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property(readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
- (id)initWithMotionSensorStatus:(id)arg1 accessoryUUID:(id)arg2 characteristicUUID:(id)arg3 timeStamp:(id)arg4 homeUUID:(id)arg5 homePresence:(id)arg6 triggerSource:(id)arg7 bundleId:(id)arg8 userUUID:(id)arg9;	// IMP=0x00000000004af056

// Remaining properties
@property(readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSUUID *homeUUID;
@property(readonly) Class superclass;

@end


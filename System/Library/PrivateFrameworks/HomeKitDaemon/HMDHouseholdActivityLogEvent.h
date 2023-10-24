//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMHomeLogEvent.h>

@class NSArray, NSDictionary, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDHouseholdActivityLogEvent : HMMHomeLogEvent
{
    _Bool _activeDay;	// 8 = 0x8
    unsigned long long _requestCount;	// 16 = 0x10
    unsigned long long _activeDeviceCount;	// 24 = 0x18
    unsigned long long _numReadSiri;	// 32 = 0x20
    unsigned long long _numWriteSiri;	// 40 = 0x28
    unsigned long long _numReadFirstPartyApp;	// 48 = 0x30
    unsigned long long _numWriteFirstPartyApp;	// 56 = 0x38
    unsigned long long _numReadThirdPartyApp;	// 64 = 0x40
    unsigned long long _numWriteThirdPartyApp;	// 72 = 0x48
    unsigned long long _numAccessoriesAdded;	// 80 = 0x50
    unsigned long long _numScenesAdded;	// 88 = 0x58
    unsigned long long _numTriggersAdded;	// 96 = 0x60
    unsigned long long _numShortcutsAdded;	// 104 = 0x68
    unsigned long long _numScenesUserRun;	// 112 = 0x70
    unsigned long long _numShortcutsRun;	// 120 = 0x78
    unsigned long long _numTriggersFired;	// 128 = 0x80
    unsigned long long _cameraStreamStartSuccessCount;	// 136 = 0x88
    unsigned long long _cameraStreamStartFailureCount;	// 144 = 0x90
    unsigned long long _fetchCameraClipVideoSegmentAssetCount;	// 152 = 0x98
    unsigned long long _activeDaysBitField;	// 160 = 0xa0
    long long _countOfDaysSinceLastActive;	// 168 = 0xa8
    long long _activeDaysPerMonthCount;	// 176 = 0xb0
    NSArray *_contributors;	// 184 = 0xb8
}

+ (id)logCategory;	// IMP=0x00100000001d6f1a
+ (id)coalescedEventFromHouseholdActivityLogEvents:(id)arg1 homeUUID:(id)arg2 contributors:(id)arg3;	// IMP=0x00100000001d6949
- (void).cxx_destruct;	// IMP=0x00000000001d6936
@property(readonly, nonatomic) NSArray *contributors; // @synthesize contributors=_contributors;
@property long long activeDaysPerMonthCount; // @synthesize activeDaysPerMonthCount=_activeDaysPerMonthCount;
@property long long countOfDaysSinceLastActive; // @synthesize countOfDaysSinceLastActive=_countOfDaysSinceLastActive;
@property(getter=isActiveDay) _Bool activeDay; // @synthesize activeDay=_activeDay;
@property unsigned long long activeDaysBitField; // @synthesize activeDaysBitField=_activeDaysBitField;
@property unsigned long long fetchCameraClipVideoSegmentAssetCount; // @synthesize fetchCameraClipVideoSegmentAssetCount=_fetchCameraClipVideoSegmentAssetCount;
@property unsigned long long cameraStreamStartFailureCount; // @synthesize cameraStreamStartFailureCount=_cameraStreamStartFailureCount;
@property unsigned long long cameraStreamStartSuccessCount; // @synthesize cameraStreamStartSuccessCount=_cameraStreamStartSuccessCount;
@property unsigned long long numTriggersFired; // @synthesize numTriggersFired=_numTriggersFired;
@property unsigned long long numShortcutsRun; // @synthesize numShortcutsRun=_numShortcutsRun;
@property unsigned long long numScenesUserRun; // @synthesize numScenesUserRun=_numScenesUserRun;
@property unsigned long long numShortcutsAdded; // @synthesize numShortcutsAdded=_numShortcutsAdded;
@property unsigned long long numTriggersAdded; // @synthesize numTriggersAdded=_numTriggersAdded;
@property unsigned long long numScenesAdded; // @synthesize numScenesAdded=_numScenesAdded;
@property unsigned long long numAccessoriesAdded; // @synthesize numAccessoriesAdded=_numAccessoriesAdded;
@property unsigned long long numWriteThirdPartyApp; // @synthesize numWriteThirdPartyApp=_numWriteThirdPartyApp;
@property unsigned long long numReadThirdPartyApp; // @synthesize numReadThirdPartyApp=_numReadThirdPartyApp;
@property unsigned long long numWriteFirstPartyApp; // @synthesize numWriteFirstPartyApp=_numWriteFirstPartyApp;
@property unsigned long long numReadFirstPartyApp; // @synthesize numReadFirstPartyApp=_numReadFirstPartyApp;
@property unsigned long long numWriteSiri; // @synthesize numWriteSiri=_numWriteSiri;
@property unsigned long long numReadSiri; // @synthesize numReadSiri=_numReadSiri;
@property unsigned long long activeDeviceCount; // @synthesize activeDeviceCount=_activeDeviceCount;
@property unsigned long long requestCount; // @synthesize requestCount=_requestCount;
- (id)submitEventWithHistogrammedHomeDataCommonDimensionsForSpecifiedHome;	// IMP=0x00000000001d6627
@property(readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property(readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property(readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
- (id)serializedMetric;	// IMP=0x00000000001d62a5
- (id)initWithDictionary:(id)arg1 contributors:(id)arg2;	// IMP=0x00000000001d5fcb
- (id)initPopulatedFromDate:(id)arg1 homeUUID:(id)arg2 contributors:(id)arg3;	// IMP=0x00000000001d5e07
- (id)initWithHomeUUID:(id)arg1 contributors:(id)arg2;	// IMP=0x00000000001d5d83

// Remaining properties
@property(readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSUUID *homeUUID;
@property(readonly) Class superclass;

@end


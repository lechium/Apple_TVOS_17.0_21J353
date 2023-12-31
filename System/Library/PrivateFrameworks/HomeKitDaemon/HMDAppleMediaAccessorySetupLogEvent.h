//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

@class NSDictionary, NSError, NSNumber, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDAppleMediaAccessorySetupLogEvent : HMMLogEvent
{
    _Bool _isRepairSession;	// 8 = 0x8
    NSNumber *_role;	// 16 = 0x10
    unsigned long long _setupStartTime;	// 24 = 0x18
    unsigned long long _setupEndTime;	// 32 = 0x20
    unsigned long long _accessoryAddEndTime;	// 40 = 0x28
    unsigned long long _accessoryRemoveTime;	// 48 = 0x30
    unsigned long long _configurationEndTime;	// 56 = 0x38
    NSError *_setupSessionError;	// 64 = 0x40
    NSString *_setupSessionIdentifier;	// 72 = 0x48
    NSString *_category;	// 80 = 0x50
    NSString *_setupClientBundleID;	// 88 = 0x58
    NSString *_accessorySoftwareVersion;	// 96 = 0x60
    NSNumber *_retryCount;	// 104 = 0x68
    unsigned long long _firstSettingTime;	// 112 = 0x70
    unsigned long long _languageSettingTime;	// 120 = 0x78
}

+ (_Bool)submitEventWithHistogrammedAggregateHomeDataCommonDimensions;	// IMP=0x0010000000421103
- (void).cxx_destruct;	// IMP=0x000000000042107d
@property(readonly) unsigned long long languageSettingTime; // @synthesize languageSettingTime=_languageSettingTime;
@property(readonly) unsigned long long firstSettingTime; // @synthesize firstSettingTime=_firstSettingTime;
@property(readonly, copy) NSNumber *retryCount; // @synthesize retryCount=_retryCount;
@property(readonly, copy) NSString *accessorySoftwareVersion; // @synthesize accessorySoftwareVersion=_accessorySoftwareVersion;
@property(readonly, copy) NSString *setupClientBundleID; // @synthesize setupClientBundleID=_setupClientBundleID;
@property(readonly, copy) NSString *category; // @synthesize category=_category;
@property(readonly, copy) NSString *setupSessionIdentifier; // @synthesize setupSessionIdentifier=_setupSessionIdentifier;
@property(readonly) _Bool isRepairSession; // @synthesize isRepairSession=_isRepairSession;
@property(readonly, copy) NSError *setupSessionError; // @synthesize setupSessionError=_setupSessionError;
@property(readonly) unsigned long long configurationEndTime; // @synthesize configurationEndTime=_configurationEndTime;
@property(readonly) unsigned long long accessoryRemoveTime; // @synthesize accessoryRemoveTime=_accessoryRemoveTime;
@property(readonly) unsigned long long accessoryAddEndTime; // @synthesize accessoryAddEndTime=_accessoryAddEndTime;
@property(readonly) unsigned long long setupEndTime; // @synthesize setupEndTime=_setupEndTime;
@property(readonly) unsigned long long setupStartTime; // @synthesize setupStartTime=_setupStartTime;
@property(readonly, copy) NSNumber *role; // @synthesize role=_role;
@property(readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property(readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property(readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
- (id)initWithRole:(long long)arg1 setupStartTime:(unsigned long long)arg2 setupEndTime:(unsigned long long)arg3 accessoryAddEndTime:(unsigned long long)arg4 accessoryRemoveTime:(unsigned long long)arg5 configurationEndTime:(unsigned long long)arg6 setupSessionError:(id)arg7 setupSessionIdentifier:(id)arg8 isRepairSession:(_Bool)arg9 category:(id)arg10 accessorySoftwareVersion:(id)arg11 setupClientBundleID:(id)arg12 retryCount:(unsigned long long)arg13 firstSettingTime:(unsigned long long)arg14 languageSettingTime:(unsigned long long)arg15;	// IMP=0x0000000000420625

// Remaining properties
@property(readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSUUID *homeUUID;
@property(readonly) Class superclass;

@end


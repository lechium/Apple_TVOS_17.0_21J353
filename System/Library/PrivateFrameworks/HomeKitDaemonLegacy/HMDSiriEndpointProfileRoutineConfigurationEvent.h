//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

@class HMDSiriEndpointProfileAccessorySettingFields, HMDSiriEndpointProfileFields, NSDictionary, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDSiriEndpointProfileRoutineConfigurationEvent : HMMLogEvent
{
    NSString *_accessoryCategoryType;	// 8 = 0x8
    HMDSiriEndpointProfileFields *_profileFields;	// 16 = 0x10
    HMDSiriEndpointProfileAccessorySettingFields *_accessorySettingFields;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000008c8b40
@property(readonly) HMDSiriEndpointProfileAccessorySettingFields *accessorySettingFields; // @synthesize accessorySettingFields=_accessorySettingFields;
@property(readonly) HMDSiriEndpointProfileFields *profileFields; // @synthesize profileFields=_profileFields;
@property(readonly) NSString *accessoryCategoryType; // @synthesize accessoryCategoryType=_accessoryCategoryType;
- (id)attributeDescriptions;	// IMP=0x00000000008c8980
@property(readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property(readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
@property(readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
- (id)initWithAccessoryCategoryType:(id)arg1 profileFields:(id)arg2 accessorySettingFields:(id)arg3;	// IMP=0x00000000008c86b1

// Remaining properties
@property(readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSUUID *homeUUID;
@property(readonly) Class superclass;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSString, NSUUID;
@protocol HMDSiriEndpointProfileMetricsDispatcherDataSource, HMMLogEventSubmitting;

__attribute__((visibility("hidden")))
@interface HMDSiriEndpointProfileMetricsDispatcher : HMFObject
{
    id <HMDSiriEndpointProfileMetricsDispatcherDataSource> _dataSource;	// 8 = 0x8
    NSUUID *_homeUUID;	// 16 = 0x10
    NSUUID *_accessoryUUID;	// 24 = 0x18
    id <HMMLogEventSubmitting> _logEventSubmitter;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x001000000061b36a
- (void).cxx_destruct;	// IMP=0x000000000061aa6f
@property(readonly) id <HMMLogEventSubmitting> logEventSubmitter; // @synthesize logEventSubmitter=_logEventSubmitter;
@property(readonly, copy) NSUUID *accessoryUUID; // @synthesize accessoryUUID=_accessoryUUID;
@property(readonly, copy) NSUUID *homeUUID; // @synthesize homeUUID=_homeUUID;
@property __weak id <HMDSiriEndpointProfileMetricsDispatcherDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)logIdentifier;	// IMP=0x000000000061a9b0
- (void)runDailyTask;	// IMP=0x000000000061a99e
- (id)dataSourceProfileFields;	// IMP=0x000000000061a846
- (id)dataSourceCompositeSettingsControllerManager;	// IMP=0x000000000061a65a
- (id)dataSourceAccessoryCategoryType;	// IMP=0x000000000061a532
- (_Bool)dataSourceShouldSubmitRoutineConfigurationEvent;	// IMP=0x000000000061a41a
- (id)fetchAccessorySettingFields;	// IMP=0x000000000061a27a
- (void)submitRoutineConfigurationEventWithAccessorySettingFields:(id)arg1;	// IMP=0x000000000061a19a
- (void)submitRoutineConfigurationEvent;	// IMP=0x000000000061a004
- (id)initWithAccessoryUUID:(id)arg1 homeUUID:(id)arg2 logEventSubmitter:(id)arg3;	// IMP=0x0000000000619f0b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


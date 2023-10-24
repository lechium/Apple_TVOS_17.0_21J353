//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDCounterThresholdTTRTrigger, HMDEventCounterGroup, NSString;
@protocol HMDUserNotificationCenterSettingsProviding, HMMLogEventSubmitting;

__attribute__((visibility("hidden")))
@interface HMDLogEventBulletinNotificationsAnalyzer
{
    id <HMDUserNotificationCenterSettingsProviding> _notificationSettingsProvider;	// 8 = 0x8
    HMDEventCounterGroup *_aggregationEventGroup;	// 16 = 0x10
    HMDEventCounterGroup *_topicEventGroup;	// 24 = 0x18
    id <HMMLogEventSubmitting> _logEventSubmitter;	// 32 = 0x20
    HMDCounterThresholdTTRTrigger *_homeHubReachabilityTTRTrigger;	// 40 = 0x28
    HMDCounterThresholdTTRTrigger *_cameraReachabilityTTRTrigger;	// 48 = 0x30
}

+ (id)managedEventCounterRequestGroups;	// IMP=0x00100000002b475d
- (void).cxx_destruct;	// IMP=0x00000000002b434f
@property(readonly, nonatomic) HMDCounterThresholdTTRTrigger *cameraReachabilityTTRTrigger; // @synthesize cameraReachabilityTTRTrigger=_cameraReachabilityTTRTrigger;
@property(readonly, nonatomic) HMDCounterThresholdTTRTrigger *homeHubReachabilityTTRTrigger; // @synthesize homeHubReachabilityTTRTrigger=_homeHubReachabilityTTRTrigger;
@property(readonly, nonatomic) id <HMMLogEventSubmitting> logEventSubmitter; // @synthesize logEventSubmitter=_logEventSubmitter;
@property(readonly, nonatomic) HMDEventCounterGroup *topicEventGroup; // @synthesize topicEventGroup=_topicEventGroup;
@property(readonly, nonatomic) HMDEventCounterGroup *aggregationEventGroup; // @synthesize aggregationEventGroup=_aggregationEventGroup;
@property(readonly, nonatomic) id <HMDUserNotificationCenterSettingsProviding> notificationSettingsProvider; // @synthesize notificationSettingsProvider=_notificationSettingsProvider;
- (void)runDailyTask;	// IMP=0x00000000002b426b
- (void)resetAggregationAnalysisContext;	// IMP=0x00000000002b422e
- (void)populateAggregationAnalysisLogEvent:(id)arg1;	// IMP=0x00000000002b41b1
- (void)didReceiveEventFromDispatcher:(id)arg1;	// IMP=0x00000000002b40b0
- (long long)cameraReachabilityThresholdFromConfiguration:(id)arg1;	// IMP=0x00000000002b4074
- (void)configurationChanged:(id)arg1;	// IMP=0x00000000002b4018
- (id)initWithDataSource:(id)arg1 notificationSettingsProvider:(id)arg2;	// IMP=0x00000000002b3b65

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

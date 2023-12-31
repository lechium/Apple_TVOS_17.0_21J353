//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSString, UNUserNotificationCenter;
@protocol HMDUserNotificationCenterDelegate, HMMLogEventSubmitting;

__attribute__((visibility("hidden")))
@interface HMDUserNotificationCenter : HMFObject
{
    id <HMDUserNotificationCenterDelegate> _delegate;	// 8 = 0x8
    UNUserNotificationCenter *_userNotificationCenter;	// 16 = 0x10
    id <HMMLogEventSubmitting> _logEventSubmitter;	// 24 = 0x18
}

+ (id)logCategory;	// IMP=0x0010000000bf09cc
- (void).cxx_destruct;	// IMP=0x0000000000bf05c9
@property(readonly) id <HMMLogEventSubmitting> logEventSubmitter; // @synthesize logEventSubmitter=_logEventSubmitter;
@property(readonly) UNUserNotificationCenter *userNotificationCenter; // @synthesize userNotificationCenter=_userNotificationCenter;
@property __weak id <HMDUserNotificationCenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)notificationSettingsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000bf04b5
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000bf0427
- (void)_showNotification:(id)arg1;	// IMP=0x0000000000bf0369
- (void)fetchAreUserNotificationsEnabledWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000bf02ae
- (void)removeNotificationRequestsWithIdentifiers:(id)arg1;	// IMP=0x0000000000bf020e
- (id)showNotificationWithTitle:(id)arg1 body:(id)arg2 threadIdentifier:(id)arg3 categoryIdentifier:(id)arg4 requestIdentifier:(id)arg5 date:(id)arg6 attachments:(id)arg7 userInfo:(id)arg8 shouldIgnoreDoNotDisturb:(_Bool)arg9 interruptionLevel:(unsigned long long)arg10 logEventTopic:(long long)arg11;	// IMP=0x0000000000befe33
- (void)updateContent:(id)arg1 forNotificationWithRequestIdentifier:(id)arg2;	// IMP=0x0000000000befc97
- (void)setBadgeNumber:(long long)arg1;	// IMP=0x0000000000befc49
- (id)configureWithNotificationCategories:(id)arg1;	// IMP=0x0000000000befafb
- (id)initWithBundleIdentifier:(id)arg1 logEventSubmitter:(id)arg2;	// IMP=0x0000000000befa26

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


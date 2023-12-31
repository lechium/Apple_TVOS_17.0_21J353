//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDUser, NSArray, NSObject, NSString;
@protocol HMDSiriMultiUserNewLanguageNotificationManagerContextDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDSiriMultiUserNewLanguageNotificationManagerContext : HMFObject
{
    _Bool _cachedHasCurrentUserSeenNotification;	// 8 = 0x8
    id <HMDSiriMultiUserNewLanguageNotificationManagerContextDelegate> _delegate;	// 16 = 0x10
    HMDUser *_user;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_workQueue;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x00100000009c033f
+ (id)userReadableLanguageFromCode:(id)arg1;	// IMP=0x00100000009bff42
- (void).cxx_destruct;	// IMP=0x00000000009bff04
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) __weak HMDUser *user; // @synthesize user=_user;
@property _Bool cachedHasCurrentUserSeenNotification; // @synthesize cachedHasCurrentUserSeenNotification=_cachedHasCurrentUserSeenNotification;
@property __weak id <HMDSiriMultiUserNewLanguageNotificationManagerContextDelegate> delegate; // @synthesize delegate=_delegate;
- (void)submitLogEventForShownNotificationWithLanguage:(id)arg1;	// IMP=0x00000000009bfdf7
- (void)showNotificationForNewlySupportedLanguage:(id)arg1;	// IMP=0x00000000009bfbcf
- (id)siriLanguageForMediaAccessory:(id)arg1;	// IMP=0x00000000009bfb7c
- (id)siriLanguagesRequiringNotificationForVersion:(id)arg1;	// IMP=0x00000000009bf8b4
@property(readonly) NSString *currentDeviceSiriLanguage;
@property(readonly, getter=isRMVEnabledForCurrentUser) _Bool RMVEnabledForCurrentUser;
- (void)setCurrentUserHasSeenNotification;	// IMP=0x00000000009bf5db
@property(readonly) _Bool hasCurrentUserSeenNotification;
@property(readonly) NSArray *mediaAccessories;
- (void)handleMediaAccessorySoftwareVersionUpdated:(id)arg1;	// IMP=0x00000000009bf085
- (void)configure;	// IMP=0x00000000009bf021
- (id)initWithUser:(id)arg1 workQueue:(id)arg2;	// IMP=0x00000000009bef9c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


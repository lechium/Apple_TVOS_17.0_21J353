//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SRNotificationUtility : NSObject
{
}

+ (void)postSiriAdvancedFeaturesAssetsDownloadNotification;	// IMP=0x00400000000761fd
+ (id)_downloadSiriAdvancedFeaturesAssetsNotificationRequest;	// IMP=0x00100000000760c0
+ (void)postStorageLowNotification;	// IMP=0x0010000000076049
+ (id)_downloadAssetsNotificationRequest;	// IMP=0x0010000000075eea
+ (void)_postNotificationRequest:(id)arg1 notificationCenter:(id)arg2 destinations:(unsigned long long)arg3;	// IMP=0x0010000000075d19
+ (void)postSiriUnavailableNotification:(unsigned long long)arg1;	// IMP=0x0010000000075c99
+ (id)_deviceSpecificStringForDefaultString:(id)arg1;	// IMP=0x0010000000075be6
+ (id)_siriUnvailableNotificationRequest;	// IMP=0x00100000000759b0
+ (id)_userNotificationCenter;	// IMP=0x0010000000075980

@end

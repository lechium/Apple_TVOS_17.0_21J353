//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitBackingStore/HMBModel.h>

@class NSData, NSDictionary;

__attribute__((visibility("hidden")))
@interface HMDPersonSettingsModel : HMBModel
{
}

+ (id)sentinelModelUUID;	// IMP=0x0040000000b55b3a
+ (id)sentinelParentUUID;	// IMP=0x0040000000b55b0a
+ (_Bool)hmbExcludeFromCloudStorage;	// IMP=0x0040000000b55b02
+ (id)hmbProperties;	// IMP=0x0040000000b55ad2
- (void)archiveClassificationNotificationsEnabledForPersonUUID:(id)arg1;	// IMP=0x0000000000b560f9
- (id)unarchivedClassificationNotificationsEnabledForPersonUUID;	// IMP=0x0000000000b560b1
- (void)setClassificationNotificationsEnabled:(id)arg1 forPersonUUID:(id)arg2;	// IMP=0x0000000000b56013
- (id)classificationNotificationsEnabledForPersonUUID:(id)arg1;	// IMP=0x0000000000b55f99
- (id)init;	// IMP=0x0000000000b55f12
@property(readonly, copy) NSDictionary *faceClassificationNotificationsEnabledByPersonUUID;

// Remaining properties
@property(retain) NSData *classificationNotificationSettingsData; // @dynamic classificationNotificationSettingsData;

@end

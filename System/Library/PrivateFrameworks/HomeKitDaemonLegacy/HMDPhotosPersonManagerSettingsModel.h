//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitBackingStore/HMBModel.h>

@class NSNumber, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDPhotosPersonManagerSettingsModel : HMBModel
{
}

+ (id)sentinelParentUUID;	// IMP=0x00400000006e9884
+ (id)hmbProperties;	// IMP=0x00400000006e9854
- (id)createSettings;	// IMP=0x00000000006e978c
- (id)initWithModelID:(id)arg1 settings:(id)arg2;	// IMP=0x00000000006e968a

// Remaining properties
@property(retain) NSNumber *sharingFaceClassificationsEnabled; // @dynamic sharingFaceClassificationsEnabled;
@property(retain) NSUUID *zoneUUID; // @dynamic zoneUUID;

@end

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

+ (id)sentinelParentUUID;	// IMP=0x00400000007d6177
+ (id)hmbProperties;	// IMP=0x00400000007d6147
- (id)createSettings;	// IMP=0x00000000007d607f
- (id)initWithModelID:(id)arg1 settings:(id)arg2;	// IMP=0x00000000007d5f7d

// Remaining properties
@property(retain) NSNumber *sharingFaceClassificationsEnabled; // @dynamic sharingFaceClassificationsEnabled;
@property(retain) NSUUID *zoneUUID; // @dynamic zoneUUID;

@end


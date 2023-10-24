//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitBackingStore/HMBCloudDatabase.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDLegacyCloudDatabase : HMBCloudDatabase
{
}

+ (id)recordZoneIDForLegacyName:(id)arg1;	// IMP=0x00100000005b615f
+ (id)legacyCloudDatabaseWithLocalDatabase:(id)arg1;	// IMP=0x00100000005b60b3
- (id)createLegacyZone:(id)arg1 controllerIdentity:(id)arg2 delegate:(id)arg3 error:(id *)arg4;	// IMP=0x00000000005b5c10
- (id)mirrorLegacyZone:(id)arg1 controllerIdentity:(id)arg2 delegate:(id)arg3 error:(id *)arg4;	// IMP=0x00000000005b5b61
- (id)initWithLocalDatabase:(id)arg1;	// IMP=0x00000000005b5a5b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


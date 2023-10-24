//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKFHomeNetworkRouterSettingDatabaseID, NSDate, NSString, NSUUID;
@protocol MKFHAPAccessory, MKFHome;

__attribute__((visibility("hidden")))
@interface _MKFHomeNetworkRouterSetting
{
}

+ (id)backingModelProtocol;	// IMP=0x00100000004f94b4
+ (id)modelIDForParentRelationshipTo:(id)arg1;	// IMP=0x00100000004f949b
+ (Class)cd_modelClass;	// IMP=0x00100000007d55ab
+ (id)fetchRequest;	// IMP=0x0010000000cf6e3e
- (id)castIfHomeNetworkRouterSetting;	// IMP=0x00000000004f94fb
@property(readonly, copy, nonatomic) MKFHomeNetworkRouterSettingDatabaseID *databaseID;

// Remaining properties
@property(copy, nonatomic) NSString *activeNetworkRouterInitialSetupNeededUUID; // @dynamic activeNetworkRouterInitialSetupNeededUUID;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property(readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property(readonly, retain, nonatomic) id <MKFHome> home;
@property(copy, nonatomic) NSString *minHomeKitVersionForAccessoryNetworkProtectionChange; // @dynamic minHomeKitVersionForAccessoryNetworkProtectionChange;
@property(copy, nonatomic) NSString *minimumNetworkRouterSupportHomeKitVersion; // @dynamic minimumNetworkRouterSupportHomeKitVersion;
@property(readonly, copy, nonatomic) NSUUID *modelID;
@property(retain, nonatomic) id <MKFHAPAccessory> networkAccessory; // @dynamic networkAccessory;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSDate *writerTimestamp;

@end

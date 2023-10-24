//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDHomeKitVersion, HMDRPIdentity, HMFProductInfo, MKFDeviceDatabaseID, NSArray, NSDate, NSString, NSUUID;
@protocol MKFAccount, MKFAppleMediaAccessory, MKFHome, MKFHomeNetworkRouterManagingDeviceSetting, MKFResident;

__attribute__((visibility("hidden")))
@interface _MKFDevice
{
}

+ (id)backingModelProtocol;	// IMP=0x00100000003f9d48
+ (id)modelIDForParentRelationshipTo:(id)arg1;	// IMP=0x00100000003f9c94
+ (Class)cd_modelClass;	// IMP=0x0010000000a1681e
+ (id)fetchRequest;	// IMP=0x0010000000cf6c7e
- (id)castIfDevice;	// IMP=0x00000000003f9d8f
@property(readonly, copy, nonatomic) MKFDeviceDatabaseID *databaseID;

// Remaining properties
@property(readonly, retain, nonatomic) id <MKFAppleMediaAccessory> accessoryAppleMedia; // @dynamic accessoryAppleMedia;
@property(readonly, retain, nonatomic) id <MKFAccount> account; // @dynamic account;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSArray *handles; // @dynamic handles;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property(readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property(copy, nonatomic) NSUUID *identifier; // @dynamic identifier;
@property(copy, nonatomic) NSUUID *mediaRouteID; // @dynamic mediaRouteID;
@property(readonly, copy, nonatomic) NSUUID *modelID; // @dynamic modelID;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) id <MKFHome> primaryResidentOf; // @dynamic primaryResidentOf;
@property(retain, nonatomic) HMFProductInfo *productInfo; // @dynamic productInfo;
@property(retain, nonatomic) id <MKFResident> resident; // @dynamic resident;
@property(retain, nonatomic) HMDRPIdentity *rpIdentity; // @dynamic rpIdentity;
@property(retain, nonatomic) id <MKFHomeNetworkRouterManagingDeviceSetting> settingRouterManager; // @dynamic settingRouterManager;
@property(readonly) Class superclass;
@property(retain, nonatomic) HMDHomeKitVersion *version; // @dynamic version;
@property(copy, nonatomic) NSDate *writerTimestamp; // @dynamic writerTimestamp;

@end

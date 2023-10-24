//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKFHomeNetworkRouterManagingDeviceSettingDatabaseID, NSDate, NSString, NSUUID;
@protocol MKFDevice, MKFHome;

__attribute__((visibility("hidden")))
@interface _MKFHomeNetworkRouterManagingDeviceSetting
{
}

+ (id)backingModelProtocol;	// IMP=0x00100000003fe314
+ (id)modelIDForParentRelationshipTo:(id)arg1;	// IMP=0x00100000003fe2fb
+ (Class)cd_modelClass;	// IMP=0x001000000097d604
+ (id)fetchRequest;	// IMP=0x0010000000cf6e1e
- (id)castIfHomeNetworkRouterManagingDeviceSetting;	// IMP=0x00000000003fe35b
@property(readonly, copy, nonatomic) MKFHomeNetworkRouterManagingDeviceSettingDatabaseID *databaseID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) id <MKFDevice> device; // @dynamic device;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property(readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property(readonly, retain, nonatomic) id <MKFHome> home;
@property(readonly, copy, nonatomic) NSUUID *modelID;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSDate *writerTimestamp;

@end


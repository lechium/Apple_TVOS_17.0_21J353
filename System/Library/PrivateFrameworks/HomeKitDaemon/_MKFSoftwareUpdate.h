//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMFSoftwareVersion, HMSoftwareUpdateDocumentationMetadata, MKFSoftwareUpdateDatabaseID, NSDate, NSNumber, NSString, NSUUID;
@protocol MKFAccessory, MKFHome;

__attribute__((visibility("hidden")))
@interface _MKFSoftwareUpdate
{
}

+ (id)backingModelProtocol;	// IMP=0x001000000074e908
+ (id)homeRelation;	// IMP=0x001000000074e8d8
+ (id)modelIDForParentRelationshipTo:(id)arg1;	// IMP=0x001000000074e8bf
+ (Class)cd_modelClass;	// IMP=0x00100000008b2b45
+ (id)fetchRequest;	// IMP=0x0010000000cf71de
@property(readonly) id <MKFHome> home;
- (id)castIfSoftwareUpdate;	// IMP=0x000000000074e98d
@property(readonly, copy, nonatomic) MKFSoftwareUpdateDatabaseID *databaseID;

// Remaining properties
@property(readonly, retain, nonatomic) id <MKFAccessory> accessory; // @dynamic accessory;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) HMSoftwareUpdateDocumentationMetadata *documentationMetadata; // @dynamic documentationMetadata;
@property(copy, nonatomic) NSNumber *downloadSize; // @dynamic downloadSize;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property(readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property(copy, nonatomic) NSNumber *installDuration; // @dynamic installDuration;
@property(readonly, copy, nonatomic) NSUUID *modelID; // @dynamic modelID;
@property(copy, nonatomic) NSDate *releaseDate; // @dynamic releaseDate;
@property(retain, nonatomic) HMFSoftwareVersion *softwareVersion; // @dynamic softwareVersion;
@property(copy, nonatomic) NSNumber *state; // @dynamic state;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSDate *writerTimestamp; // @dynamic writerTimestamp;

@end


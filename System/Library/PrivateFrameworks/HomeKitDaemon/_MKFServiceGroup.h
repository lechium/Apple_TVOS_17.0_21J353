//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKFServiceGroupDatabaseID, NSArray, NSDate, NSSet, NSString, NSUUID;
@protocol MKFApplicationData, MKFHome;

__attribute__((visibility("hidden")))
@interface _MKFServiceGroup
{
}

+ (id)backingModelProtocol;	// IMP=0x0010000000017985
+ (id)homeRelation;	// IMP=0x0010000000017955
+ (id)modelIDForParentRelationshipTo:(id)arg1;	// IMP=0x00100000000178a1
+ (Class)cd_modelClass;	// IMP=0x0010000000995f22
+ (id)fetchRequest;	// IMP=0x0010000000cf717e
- (void)removeServicesObject:(id)arg1;	// IMP=0x0000000000017aac
- (void)addServicesObject:(id)arg1;	// IMP=0x0000000000017a90
@property(readonly, retain, nonatomic) NSArray *services;
- (id)materializeOrCreateApplicationDataRelation:(_Bool *)arg1;	// IMP=0x0000000000017a13
- (id)castIfServiceGroup;	// IMP=0x0000000000017a0a
@property(readonly, copy, nonatomic) MKFServiceGroupDatabaseID *databaseID;

// Remaining properties
@property(retain, nonatomic) id <MKFApplicationData> applicationData; // @dynamic applicationData;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property(readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property(readonly, retain, nonatomic) id <MKFHome> home; // @dynamic home;
@property(readonly, copy, nonatomic) NSUUID *modelID; // @dynamic modelID;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSSet *services_; // @dynamic services_;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSDate *writerTimestamp; // @dynamic writerTimestamp;

@end


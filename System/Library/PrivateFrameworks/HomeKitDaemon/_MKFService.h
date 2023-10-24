//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKFServiceDatabaseID, NSArray, NSDate, NSNumber, NSSet, NSString, NSUUID;
@protocol MKFApplicationData, MKFHAPAccessory, MKFHome;

__attribute__((visibility("hidden")))
@interface _MKFService
{
}

+ (id)backingModelProtocol;	// IMP=0x00100000004e7399
+ (id)homeRelation;	// IMP=0x00100000004e7369
+ (id)modelIDForKeyAttribute:(id)arg1 parent:(id)arg2;	// IMP=0x00100000004e72dc
+ (Class)cd_modelClass;	// IMP=0x0010000000bd8bf7
+ (id)fetchRequest;	// IMP=0x0010000000cf715e
@property(readonly, retain, nonatomic) NSArray *serviceGroups;
@property(readonly, retain, nonatomic) NSArray *eventCharacteristics;
- (void)synchronizeCharacteristicsRelationWith:(id)arg1;	// IMP=0x00000000004e79b1
- (id)findCharacteristicsRelationOfTypeStringCharacteristicWithInstanceID:(id)arg1;	// IMP=0x00000000004e798e
- (id)createCharacteristicsRelationOfTypeStringCharacteristicWithInstanceID:(id)arg1;	// IMP=0x00000000004e796b
- (id)materializeOrCreateCharacteristicsRelationOfTypeStringCharacteristicWithInstanceID:(id)arg1 createdNew:(_Bool *)arg2;	// IMP=0x00000000004e7945
- (id)findCharacteristicsRelationOfTypeIntegerCharacteristicWithInstanceID:(id)arg1;	// IMP=0x00000000004e7922
- (id)createCharacteristicsRelationOfTypeIntegerCharacteristicWithInstanceID:(id)arg1;	// IMP=0x00000000004e78ff
- (id)materializeOrCreateCharacteristicsRelationOfTypeIntegerCharacteristicWithInstanceID:(id)arg1 createdNew:(_Bool *)arg2;	// IMP=0x00000000004e78d9
- (id)findCharacteristicsRelationOfTypeFloatCharacteristicWithInstanceID:(id)arg1;	// IMP=0x00000000004e78b6
- (id)createCharacteristicsRelationOfTypeFloatCharacteristicWithInstanceID:(id)arg1;	// IMP=0x00000000004e7893
- (id)materializeOrCreateCharacteristicsRelationOfTypeFloatCharacteristicWithInstanceID:(id)arg1 createdNew:(_Bool *)arg2;	// IMP=0x00000000004e786d
- (id)findCharacteristicsRelationOfTypeCharacteristicWithInstanceID:(id)arg1;	// IMP=0x00000000004e784a
- (id)createCharacteristicsRelationOfTypeCharacteristicWithInstanceID:(id)arg1;	// IMP=0x00000000004e7827
- (id)materializeOrCreateCharacteristicsRelationOfTypeCharacteristicWithInstanceID:(id)arg1 createdNew:(_Bool *)arg2;	// IMP=0x00000000004e7801
- (id)createCharacteristicsRelationOfType:(id)arg1 instanceID:(id)arg2;	// IMP=0x00000000004e7786
- (id)materializeOrCreateCharacteristicsRelationOfType:(id)arg1 instanceID:(id)arg2 createdNew:(_Bool *)arg3;	// IMP=0x00000000004e7705
@property(retain, nonatomic) NSArray *characteristics;
- (id)materializeOrCreateApplicationDataRelation:(_Bool *)arg1;	// IMP=0x00000000004e7606
@property(readonly, retain, nonatomic) NSArray *actionCharacteristicWrites;
@property(readonly) id <MKFHome> home;
- (id)castIfService;	// IMP=0x00000000004e7556
@property(readonly, copy, nonatomic) MKFServiceDatabaseID *databaseID;
- (id)pr_findCharacteristicWithInstanceID:(id)arg1;	// IMP=0x00000000004e73e8

// Remaining properties
@property(readonly, retain, nonatomic) id <MKFHAPAccessory> accessory; // @dynamic accessory;
@property(retain, nonatomic) NSSet *actionCharacteristicWrites_; // @dynamic actionCharacteristicWrites_;
@property(retain, nonatomic) id <MKFApplicationData> applicationData; // @dynamic applicationData;
@property(copy, nonatomic) NSUUID *associatedServiceType; // @dynamic associatedServiceType;
@property(retain, nonatomic) NSSet *characteristics_; // @dynamic characteristics_;
@property(copy, nonatomic) NSNumber *configurationState; // @dynamic configurationState;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSSet *eventCharacteristics_; // @dynamic eventCharacteristics_;
@property(copy, nonatomic) NSString *expectedConfiguredName; // @dynamic expectedConfiguredName;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property(readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property(readonly, copy, nonatomic) NSNumber *instanceID; // @dynamic instanceID;
@property(copy, nonatomic) NSNumber *labelIndex; // @dynamic labelIndex;
@property(copy, nonatomic) NSNumber *labelNamespace; // @dynamic labelNamespace;
@property(copy, nonatomic) NSNumber *lastKnownDiscoveryMode; // @dynamic lastKnownDiscoveryMode;
@property(copy, nonatomic) NSNumber *lastKnownOperatingState; // @dynamic lastKnownOperatingState;
@property(copy, nonatomic) NSNumber *lastKnownOperatingStateAbnormalReasons; // @dynamic lastKnownOperatingStateAbnormalReasons;
@property(retain, nonatomic) NSArray *linkedServices; // @dynamic linkedServices;
@property(retain, nonatomic) NSArray *mediaSourceDisplayOrder; // @dynamic mediaSourceDisplayOrder;
@property(copy, nonatomic) NSNumber *mediaSourceIdentifier; // @dynamic mediaSourceIdentifier;
@property(readonly, copy, nonatomic) NSUUID *modelID; // @dynamic modelID;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(copy, nonatomic) NSString *providedName; // @dynamic providedName;
@property(retain, nonatomic) NSSet *serviceGroups_; // @dynamic serviceGroups_;
@property(copy, nonatomic) NSNumber *serviceProperties; // @dynamic serviceProperties;
@property(copy, nonatomic) NSUUID *serviceSubtype; // @dynamic serviceSubtype;
@property(copy, nonatomic) NSUUID *serviceType; // @dynamic serviceType;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSDate *writerTimestamp; // @dynamic writerTimestamp;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKFCharacteristicWriteActionDatabaseID, NSDate, NSNumber, NSObject, NSString, NSUUID;
@protocol MKFActionSet, MKFHAPAccessory, MKFHome, MKFService;

__attribute__((visibility("hidden")))
@interface _MKFCharacteristicWriteAction
{
}

+ (id)backingModelProtocol;	// IMP=0x0010000000063c53
+ (id)modelIDForParentRelationshipTo:(id)arg1;	// IMP=0x0010000000063b9f
+ (Class)cd_modelClass;	// IMP=0x00100000006f05ce
+ (id)fetchRequest;	// IMP=0x0010000000cf695e
@property(readonly) id <MKFHome> home;
- (id)castIfCharacteristicWriteAction;	// IMP=0x0000000000063b46
@property(readonly, copy, nonatomic) MKFCharacteristicWriteActionDatabaseID *databaseID;
- (_Bool)validateForInsertOrUpdate:(id *)arg1;	// IMP=0x0000000000063a74
- (void)willSave;	// IMP=0x00000000000639a0
- (_Bool)validateTargetValue:(id *)arg1 error:(id *)arg2;	// IMP=0x0000000000063981

// Remaining properties
@property(retain, nonatomic) id <MKFHAPAccessory> accessory; // @dynamic accessory;
@property(readonly, retain, nonatomic) id <MKFActionSet> actionSet;
@property(copy, nonatomic) NSNumber *characteristicID; // @dynamic characteristicID;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property(readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property(readonly, copy, nonatomic) NSUUID *modelID;
@property(retain, nonatomic) id <MKFService> service; // @dynamic service;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSObject *targetValue; // @dynamic targetValue;
@property(copy, nonatomic) NSDate *writerTimestamp;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKFActionSetDatabaseID, NSArray, NSDate, NSSet, NSString, NSUUID;
@protocol MKFApplicationData, MKFHome;

__attribute__((visibility("hidden")))
@interface _MKFActionSet
{
}

+ (id)backingModelProtocol;	// IMP=0x0010000000988f61
+ (id)homeRelation;	// IMP=0x0010000000988f31
+ (id)modelIDForParentRelationshipTo:(id)arg1;	// IMP=0x0010000000988e7d
+ (Class)cd_modelClass;	// IMP=0x00100000005687b2
+ (id)fetchRequest;	// IMP=0x0010000000cf671e
@property(readonly, retain, nonatomic) NSArray *triggers;
- (id)materializeOrCreateApplicationDataRelation:(_Bool *)arg1;	// IMP=0x0000000000989380
- (void)synchronizeActionsRelationWith:(id)arg1;	// IMP=0x000000000098935e
- (id)findActionsRelationOfTypeShortcutActionWithModelID:(id)arg1;	// IMP=0x000000000098933b
- (id)createActionsRelationOfTypeShortcutActionWithModelID:(id)arg1;	// IMP=0x0000000000989318
- (id)materializeOrCreateActionsRelationOfTypeShortcutActionWithModelID:(id)arg1 createdNew:(_Bool *)arg2;	// IMP=0x00000000009892f2
- (id)findActionsRelationOfTypeNaturalLightingActionWithModelID:(id)arg1;	// IMP=0x00000000009892cf
- (id)createActionsRelationOfTypeNaturalLightingActionWithModelID:(id)arg1;	// IMP=0x00000000009892ac
- (id)materializeOrCreateActionsRelationOfTypeNaturalLightingActionWithModelID:(id)arg1 createdNew:(_Bool *)arg2;	// IMP=0x0000000000989286
- (id)findActionsRelationOfTypeMediaPlaybackActionWithModelID:(id)arg1;	// IMP=0x0000000000989263
- (id)createActionsRelationOfTypeMediaPlaybackActionWithModelID:(id)arg1;	// IMP=0x0000000000989240
- (id)materializeOrCreateActionsRelationOfTypeMediaPlaybackActionWithModelID:(id)arg1 createdNew:(_Bool *)arg2;	// IMP=0x000000000098921a
- (id)findActionsRelationOfTypeCharacteristicWriteActionWithModelID:(id)arg1;	// IMP=0x00000000009891f7
- (id)createActionsRelationOfTypeCharacteristicWriteActionWithModelID:(id)arg1;	// IMP=0x00000000009891d4
- (id)materializeOrCreateActionsRelationOfTypeCharacteristicWriteActionWithModelID:(id)arg1 createdNew:(_Bool *)arg2;	// IMP=0x00000000009891ae
- (id)findActionsRelationOfTypeAppleMediaAccessoryPowerActionWithModelID:(id)arg1;	// IMP=0x000000000098918b
- (id)createActionsRelationOfTypeAppleMediaAccessoryPowerActionWithModelID:(id)arg1;	// IMP=0x0000000000989168
- (id)materializeOrCreateActionsRelationOfTypeAppleMediaAccessoryPowerActionWithModelID:(id)arg1 createdNew:(_Bool *)arg2;	// IMP=0x0000000000989142
- (id)createActionsRelationOfType:(id)arg1 modelID:(id)arg2;	// IMP=0x00000000009890c7
- (id)materializeOrCreateActionsRelationOfType:(id)arg1 modelID:(id)arg2 createdNew:(_Bool *)arg3;	// IMP=0x0000000000989046
@property(readonly, retain, nonatomic) NSArray *actions;
- (id)castIfActionSet;	// IMP=0x0000000000988fe6
@property(readonly, copy, nonatomic) MKFActionSetDatabaseID *databaseID;

// Remaining properties
@property(retain, nonatomic) NSSet *actions_; // @dynamic actions_;
@property(retain, nonatomic) id <MKFApplicationData> applicationData; // @dynamic applicationData;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property(readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property(readonly, retain, nonatomic) id <MKFHome> home; // @dynamic home;
@property(copy, nonatomic) NSDate *lastExecutionDate; // @dynamic lastExecutionDate;
@property(readonly, copy, nonatomic) NSUUID *modelID; // @dynamic modelID;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSSet *triggers_; // @dynamic triggers_;
@property(copy, nonatomic) NSString *type; // @dynamic type;
@property(copy, nonatomic) NSDate *writerTimestamp; // @dynamic writerTimestamp;

@end


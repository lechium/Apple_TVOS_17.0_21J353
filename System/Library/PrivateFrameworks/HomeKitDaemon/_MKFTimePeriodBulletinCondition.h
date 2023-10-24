//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKFTimePeriodBulletinConditionDatabaseID, NSDate, NSString, NSUUID;
@protocol MKFBulletinRegistration, MKFBulletinTimeSpecification, MKFHome;

__attribute__((visibility("hidden")))
@interface _MKFTimePeriodBulletinCondition
{
}

+ (id)backingModelProtocol;	// IMP=0x00100000002f683f
+ (id)modelIDForParentRelationshipTo:(id)arg1;	// IMP=0x00100000002f678b
+ (id)fetchRequest;	// IMP=0x0010000000cf725e
- (void)removeStartElementObject:(id)arg1;	// IMP=0x00000000002f6cdb
- (void)addStartElementObject:(id)arg1;	// IMP=0x00000000002f6cbf
- (id)findStartElementRelationOfTypeTimeOfDayTimeSpecificationWithModelID:(id)arg1;	// IMP=0x00000000002f6c9c
- (id)createStartElementRelationOfTypeTimeOfDayTimeSpecificationWithModelID:(id)arg1;	// IMP=0x00000000002f6c79
- (id)materializeOrCreateStartElementRelationOfTypeTimeOfDayTimeSpecificationWithModelID:(id)arg1 createdNew:(_Bool *)arg2;	// IMP=0x00000000002f6c53
- (id)findStartElementRelationOfTypeSunriseSunsetTimeSpecificationWithModelID:(id)arg1;	// IMP=0x00000000002f6c30
- (id)createStartElementRelationOfTypeSunriseSunsetTimeSpecificationWithModelID:(id)arg1;	// IMP=0x00000000002f6c0d
- (id)materializeOrCreateStartElementRelationOfTypeSunriseSunsetTimeSpecificationWithModelID:(id)arg1 createdNew:(_Bool *)arg2;	// IMP=0x00000000002f6be7
- (id)createStartElementRelationOfType:(id)arg1 modelID:(id)arg2;	// IMP=0x00000000002f6b6c
- (id)materializeOrCreateStartElementRelationOfType:(id)arg1 modelID:(id)arg2 createdNew:(_Bool *)arg3;	// IMP=0x00000000002f6aeb
- (void)removeEndElementObject:(id)arg1;	// IMP=0x00000000002f6acf
- (void)addEndElementObject:(id)arg1;	// IMP=0x00000000002f6ab3
- (id)findEndElementRelationOfTypeTimeOfDayTimeSpecificationWithModelID:(id)arg1;	// IMP=0x00000000002f6a90
- (id)createEndElementRelationOfTypeTimeOfDayTimeSpecificationWithModelID:(id)arg1;	// IMP=0x00000000002f6a6d
- (id)materializeOrCreateEndElementRelationOfTypeTimeOfDayTimeSpecificationWithModelID:(id)arg1 createdNew:(_Bool *)arg2;	// IMP=0x00000000002f6a47
- (id)findEndElementRelationOfTypeSunriseSunsetTimeSpecificationWithModelID:(id)arg1;	// IMP=0x00000000002f6a24
- (id)createEndElementRelationOfTypeSunriseSunsetTimeSpecificationWithModelID:(id)arg1;	// IMP=0x00000000002f6a01
- (id)materializeOrCreateEndElementRelationOfTypeSunriseSunsetTimeSpecificationWithModelID:(id)arg1 createdNew:(_Bool *)arg2;	// IMP=0x00000000002f69db
- (id)createEndElementRelationOfType:(id)arg1 modelID:(id)arg2;	// IMP=0x00000000002f6960
- (id)materializeOrCreateEndElementRelationOfType:(id)arg1 modelID:(id)arg2 createdNew:(_Bool *)arg3;	// IMP=0x00000000002f68df
@property(readonly) id <MKFHome> home;
- (id)castIfTimePeriodBulletinCondition;	// IMP=0x00000000002f6886
@property(readonly, copy, nonatomic) MKFTimePeriodBulletinConditionDatabaseID *databaseID;

// Remaining properties
@property(readonly, retain, nonatomic) id <MKFBulletinRegistration> bulletinRegistration;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) id <MKFBulletinTimeSpecification> endElement; // @dynamic endElement;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSUUID *modelID;
@property(retain, nonatomic) id <MKFBulletinTimeSpecification> startElement; // @dynamic startElement;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSDate *writerTimestamp;

@end


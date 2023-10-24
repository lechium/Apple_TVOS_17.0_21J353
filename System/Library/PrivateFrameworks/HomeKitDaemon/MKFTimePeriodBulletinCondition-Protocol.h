//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/MKFBulletinCondition-Protocol.h>
#import <HomeKitDaemon/MKFTimePeriodBulletinConditionPublicExtensions-Protocol.h>

@class MKFTimePeriodBulletinConditionDatabaseID, NSUUID, Protocol;
@protocol MKFBulletinTimeSpecification, MKFHome, MKFSunriseSunsetTimeSpecification, MKFTimeOfDayTimeSpecification;

@protocol MKFTimePeriodBulletinCondition <MKFBulletinCondition, MKFTimePeriodBulletinConditionPublicExtensions>
@property(readonly) id <MKFHome> home;
@property(readonly, copy, nonatomic) MKFTimePeriodBulletinConditionDatabaseID *databaseID;
@property(retain, nonatomic) id <MKFBulletinTimeSpecification> startElement;
@property(retain, nonatomic) id <MKFBulletinTimeSpecification> endElement;
- (void)removeStartElementObject:(id <MKFBulletinTimeSpecification>)arg1;
- (void)addStartElementObject:(id <MKFBulletinTimeSpecification>)arg1;
- (id <MKFTimeOfDayTimeSpecification>)findStartElementRelationOfTypeTimeOfDayTimeSpecificationWithModelID:(NSUUID *)arg1;
- (id <MKFTimeOfDayTimeSpecification>)createStartElementRelationOfTypeTimeOfDayTimeSpecificationWithModelID:(NSUUID *)arg1;
- (id <MKFTimeOfDayTimeSpecification>)materializeOrCreateStartElementRelationOfTypeTimeOfDayTimeSpecificationWithModelID:(NSUUID *)arg1 createdNew:(_Bool *)arg2;
- (id <MKFSunriseSunsetTimeSpecification>)findStartElementRelationOfTypeSunriseSunsetTimeSpecificationWithModelID:(NSUUID *)arg1;
- (id <MKFSunriseSunsetTimeSpecification>)createStartElementRelationOfTypeSunriseSunsetTimeSpecificationWithModelID:(NSUUID *)arg1;
- (id <MKFSunriseSunsetTimeSpecification>)materializeOrCreateStartElementRelationOfTypeSunriseSunsetTimeSpecificationWithModelID:(NSUUID *)arg1 createdNew:(_Bool *)arg2;
- (id <MKFBulletinTimeSpecification>)createStartElementRelationOfType:(Protocol *)arg1 modelID:(NSUUID *)arg2;
- (id <MKFBulletinTimeSpecification>)materializeOrCreateStartElementRelationOfType:(Protocol *)arg1 modelID:(NSUUID *)arg2 createdNew:(_Bool *)arg3;
- (void)removeEndElementObject:(id <MKFBulletinTimeSpecification>)arg1;
- (void)addEndElementObject:(id <MKFBulletinTimeSpecification>)arg1;
- (id <MKFTimeOfDayTimeSpecification>)findEndElementRelationOfTypeTimeOfDayTimeSpecificationWithModelID:(NSUUID *)arg1;
- (id <MKFTimeOfDayTimeSpecification>)createEndElementRelationOfTypeTimeOfDayTimeSpecificationWithModelID:(NSUUID *)arg1;
- (id <MKFTimeOfDayTimeSpecification>)materializeOrCreateEndElementRelationOfTypeTimeOfDayTimeSpecificationWithModelID:(NSUUID *)arg1 createdNew:(_Bool *)arg2;
- (id <MKFSunriseSunsetTimeSpecification>)findEndElementRelationOfTypeSunriseSunsetTimeSpecificationWithModelID:(NSUUID *)arg1;
- (id <MKFSunriseSunsetTimeSpecification>)createEndElementRelationOfTypeSunriseSunsetTimeSpecificationWithModelID:(NSUUID *)arg1;
- (id <MKFSunriseSunsetTimeSpecification>)materializeOrCreateEndElementRelationOfTypeSunriseSunsetTimeSpecificationWithModelID:(NSUUID *)arg1 createdNew:(_Bool *)arg2;
- (id <MKFBulletinTimeSpecification>)createEndElementRelationOfType:(Protocol *)arg1 modelID:(NSUUID *)arg2;
- (id <MKFBulletinTimeSpecification>)materializeOrCreateEndElementRelationOfType:(Protocol *)arg1 modelID:(NSUUID *)arg2 createdNew:(_Bool *)arg3;
@end

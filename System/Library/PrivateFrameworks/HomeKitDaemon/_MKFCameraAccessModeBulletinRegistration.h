//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKFCameraAccessModeBulletinRegistrationDatabaseID, NSArray, NSDate, NSString, NSUUID;
@protocol MKFAccessory, MKFHome, MKFUser;

__attribute__((visibility("hidden")))
@interface _MKFCameraAccessModeBulletinRegistration
{
}

+ (id)backingModelProtocol;	// IMP=0x00100000004fd236
+ (id)modelIDForParentRelationshipTo:(id)arg1;	// IMP=0x00100000004fd182
+ (id)fetchRequest;	// IMP=0x0010000000cf685e
@property(readonly) id <MKFHome> home;
- (id)castIfCameraAccessModeBulletinRegistration;	// IMP=0x00000000004fd129
@property(readonly, copy, nonatomic) MKFCameraAccessModeBulletinRegistrationDatabaseID *databaseID;
- (_Bool)validateForInsertOrUpdate:(id *)arg1;	// IMP=0x00000000004fd057

// Remaining properties
@property(retain, nonatomic) id <MKFAccessory> accessory; // @dynamic accessory;
@property(readonly, retain, nonatomic) NSArray *conditions;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSString *deviceIdsDestination;
@property(copy, nonatomic) NSUUID *deviceIdsIdentifier;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSUUID *modelID;
@property(readonly) Class superclass;
@property(readonly, retain, nonatomic) id <MKFUser> user;
@property(copy, nonatomic) NSDate *writerTimestamp;

@end


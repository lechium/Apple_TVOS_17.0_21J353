//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKFRemovedUserAccessCodeDatabaseID, NSDate, NSString, NSUUID;
@protocol MKFHome;

__attribute__((visibility("hidden")))
@interface _MKFRemovedUserAccessCode
{
}

+ (id)backingModelProtocol;	// IMP=0x0010000000bfb9ac
+ (id)homeRelation;	// IMP=0x0010000000bfb97c
+ (Class)cd_modelClass;	// IMP=0x00100000003fc790
+ (id)fetchRequest;	// IMP=0x0010000000cf70fe
- (id)castIfRemovedUserAccessCode;	// IMP=0x0000000000bfba31
@property(readonly, copy, nonatomic) MKFRemovedUserAccessCodeDatabaseID *databaseID;

// Remaining properties
@property(copy, nonatomic) NSString *accessCode;
@property(copy, nonatomic) NSDate *dateRemoved; // @dynamic dateRemoved;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSUUID *hh2ModelID; // @dynamic hh2ModelID;
@property(readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property(readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property(readonly, retain, nonatomic) id <MKFHome> home; // @dynamic home;
@property(readonly, copy, nonatomic) NSUUID *modelID;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *userID; // @dynamic userID;
@property(copy, nonatomic) NSUUID *userModelID; // @dynamic userModelID;
@property(copy, nonatomic) NSString *userName; // @dynamic userName;
@property(copy, nonatomic) NSDate *writerTimestamp;

@end


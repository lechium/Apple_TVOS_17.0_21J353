//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKFHomeAccessCodeDatabaseID, NSDate, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface _MKFHomeAccessCode
{
}

+ (id)backingModelProtocol;	// IMP=0x0010000000416d8c
+ (id)fetchRequest;	// IMP=0x0010000000cf6d9e
- (id)castIfHomeAccessCode;	// IMP=0x0000000000416de5
@property(readonly, copy, nonatomic) MKFHomeAccessCodeDatabaseID *databaseID;
- (_Bool)validateForInsertOrUpdate:(id *)arg1;	// IMP=0x0000000000416d9d
- (id)fetchOtherGuestAccessCodesInHome:(id)arg1;	// IMP=0x000000000090646a
- (id)fetchOtherUserAccessCodesInHome:(id)arg1;	// IMP=0x0000000000906281
- (id)homeForHomeAccessCode:(id)arg1;	// IMP=0x000000000090602c
- (_Bool)validateAccessCodeForInsertOrUpdate:(id *)arg1;	// IMP=0x0000000000905a53

// Remaining properties
@property(copy, nonatomic) NSString *accessCode; // @dynamic accessCode;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSUUID *modelID; // @dynamic modelID;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSDate *writerTimestamp; // @dynamic writerTimestamp;

@end


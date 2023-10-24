//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKFInvitationDatabaseID, NSDate, NSNumber, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface _MKFInvitation
{
}

+ (id)backingModelProtocol;	// IMP=0x00100000002bf331
+ (id)fetchRequest;	// IMP=0x0010000000cf6f3e
- (id)castIfInvitation;	// IMP=0x00000000002bf378
@property(readonly, copy, nonatomic) MKFInvitationDatabaseID *databaseID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSDate *expiryDate; // @dynamic expiryDate;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSUUID *idsIdentifier; // @dynamic idsIdentifier;
@property(copy, nonatomic) NSNumber *invitationState; // @dynamic invitationState;
@property(readonly, copy, nonatomic) NSUUID *modelID; // @dynamic modelID;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSDate *writerTimestamp; // @dynamic writerTimestamp;

@end

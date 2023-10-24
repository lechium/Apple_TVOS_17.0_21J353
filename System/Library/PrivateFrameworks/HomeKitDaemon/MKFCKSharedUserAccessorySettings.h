//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKFCKSharedUserDataRoot, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface MKFCKSharedUserAccessorySettings
{
}

+ (_Bool)exportDeleteWithObjectID:(id)arg1 modelID:(id)arg2 additionalUpdates:(id)arg3 context:(id)arg4;	// IMP=0x00100000002eaced
+ (_Bool)exportUpdateWithObjectID:(id)arg1 updatedProperties:(id)arg2 additionalUpdates:(id)arg3 context:(id)arg4;	// IMP=0x00100000002eac17
+ (_Bool)exportInsertWithObjectID:(id)arg1 additionalUpdates:(id)arg2 context:(id)arg3;	// IMP=0x00100000002eab4a
+ (_Bool)importDeleteWithObjectID:(id)arg1 modelID:(id)arg2 additionalUpdates:(id)arg3 context:(id)arg4;	// IMP=0x00100000002eab42
+ (_Bool)importUpdateWithObjectID:(id)arg1 updatedProperties:(id)arg2 additionalUpdates:(id)arg3 context:(id)arg4;	// IMP=0x00100000002eaaa1
+ (_Bool)importInsertWithObjectID:(id)arg1 additionalUpdates:(id)arg2 context:(id)arg3;	// IMP=0x00100000002eaa00
+ (id)createWithHomeModelID:(id)arg1 accessoryModelID:(id)arg2 persistentStore:(id)arg3 context:(id)arg4;	// IMP=0x00100000002ea8e3
+ (id)fetchRequest;	// IMP=0x0010000000cf6b5e
- (_Bool)_importIntoLocalUserModel:(id)arg1 context:(id)arg2;	// IMP=0x00000000002ea66d
- (_Bool)_importWithContext:(id)arg1;	// IMP=0x00000000002ea535
- (_Bool)importIntoLocalUserModel:(id)arg1 context:(id)arg2;	// IMP=0x00000000002ea4bc

// Remaining properties
@property(copy, nonatomic) NSUUID *accessoryModelID; // @dynamic accessoryModelID;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool listeningHistoryEnabled; // @dynamic listeningHistoryEnabled;
@property(nonatomic) _Bool mediaContentProfileEnabled; // @dynamic mediaContentProfileEnabled;
@property(nonatomic) _Bool personalRequestsEnabled; // @dynamic personalRequestsEnabled;
@property(retain, nonatomic) MKFCKSharedUserDataRoot *root; // @dynamic root;
@property(readonly) Class superclass;

@end


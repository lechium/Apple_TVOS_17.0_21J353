//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface MKFCKSharedHome
{
}

+ (_Bool)exportDeleteWithObjectID:(id)arg1 modelID:(id)arg2 additionalUpdates:(id)arg3 context:(id)arg4;	// IMP=0x00100000007586fb
+ (_Bool)exportUpdateWithObjectID:(id)arg1 updatedProperties:(id)arg2 additionalUpdates:(id)arg3 context:(id)arg4;	// IMP=0x0010000000758625
+ (_Bool)exportInsertWithObjectID:(id)arg1 additionalUpdates:(id)arg2 context:(id)arg3;	// IMP=0x0010000000758558
+ (_Bool)importDeleteWithObjectID:(id)arg1 modelID:(id)arg2 additionalUpdates:(id)arg3 context:(id)arg4;	// IMP=0x001000000075853f
+ (_Bool)importUpdateWithObjectID:(id)arg1 updatedProperties:(id)arg2 additionalUpdates:(id)arg3 context:(id)arg4;	// IMP=0x0010000000758537
+ (_Bool)importInsertWithObjectID:(id)arg1 additionalUpdates:(id)arg2 context:(id)arg3;	// IMP=0x001000000075788f
+ (id)createWithModelID:(id)arg1 persistentStore:(id)arg2 context:(id)arg3;	// IMP=0x00100000007577dd
+ (id)rootKeyPath;	// IMP=0x00100000007577d5
+ (id)fetchRequest;	// IMP=0x0010000000cf6b3e
- (id)createLocalModelWithContext:(id)arg1;	// IMP=0x0000000000758a81
- (id)homeModelID;	// IMP=0x0000000000758a6f

// Remaining properties
@property(copy, nonatomic) NSDate *creationDate; // @dynamic creationDate;
@property(readonly, copy) NSString *debugDescription;
@property(copy, nonatomic) NSUUID *defaultRoomModelID; // @dynamic defaultRoomModelID;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSUUID *flags; // @dynamic flags;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSUUID *modelID; // @dynamic modelID;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(copy, nonatomic) NSString *ownerAccountHandle; // @dynamic ownerAccountHandle;
@property(copy, nonatomic) NSUUID *ownerModelID; // @dynamic ownerModelID;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSDate *writerTimestamp; // @dynamic writerTimestamp;
@property(copy, nonatomic) NSString *writerVersion; // @dynamic writerVersion;

@end


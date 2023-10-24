//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSPersistentMap;

@interface IDSInvitationStore : NSObject
{
    IDSPersistentMap *_persistentMap;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000c74df
@property(retain, nonatomic) IDSPersistentMap *persistentMap; // @synthesize persistentMap=_persistentMap;
- (void)removeReceivedInvitation:(id)arg1 forService:(id)arg2;	// IMP=0x00100000000c73a8
- (void)persistReceivedInvitation:(id)arg1 forService:(id)arg2 withUniqueID:(id)arg3;	// IMP=0x00100000000c726f
- (id)persistedReceivedInvitationsForService:(id)arg1;	// IMP=0x00100000000c71fc
- (void)removePendingInvitation:(id)arg1 forService:(id)arg2;	// IMP=0x00100000000c70e0
- (void)persistPendingInvitation:(id)arg1 forService:(id)arg2 withUniqueID:(id)arg3;	// IMP=0x00100000000c6fa7
- (id)persistedPendingInvitationsForService:(id)arg1;	// IMP=0x00100000000c6f34
- (_Bool)isEmpty;	// IMP=0x00100000000c6ec2
- (id)init;	// IMP=0x00100000000c6dd1

@end

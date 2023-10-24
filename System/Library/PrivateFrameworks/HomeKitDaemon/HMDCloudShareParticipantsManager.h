//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMBCloudZone, HMDHome, NSObject, NSSet, NSString;
@protocol HMDCloudShareParticipantsManagerDataSource, HMDCloudShareParticipantsManagerDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDCloudShareParticipantsManager : HMFObject
{
    id <HMDCloudShareParticipantsManagerDataSource> _dataSource;	// 8 = 0x8
    id <HMDCloudShareParticipantsManagerDelegate> _delegate;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_workQueue;	// 24 = 0x18
    HMBCloudZone *_cloudZone;	// 32 = 0x20
    HMDHome *_home;	// 40 = 0x28
}

+ (id)logCategory;	// IMP=0x00100000007b7668
- (void).cxx_destruct;	// IMP=0x00000000007b6d0d
@property __weak HMDHome *home; // @synthesize home=_home;
@property(readonly) HMBCloudZone *cloudZone; // @synthesize cloudZone=_cloudZone;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property __weak id <HMDCloudShareParticipantsManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property __weak id <HMDCloudShareParticipantsManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)logIdentifier;	// IMP=0x00000000007b6be0
- (void)handleHomeDataLoadedNotification:(id)arg1;	// IMP=0x00000000007b6a97
- (void)handleHomeUserRemovedNotification:(id)arg1;	// IMP=0x00000000007b694e
- (void)handleHomeUserAddedNotification:(id)arg1;	// IMP=0x00000000007b6805
- (id)_untrustedInvitationContextForUser:(id)arg1 shouldGrantWriteAccess:(_Bool)arg2;	// IMP=0x00000000007b6500
- (id)fetchInvitationContextForUser:(id)arg1 shouldGrantWriteAccess:(_Bool)arg2;	// IMP=0x00000000007b60d6
- (id)fetchInvitationToUser:(id)arg1 shouldGrantWriteAccess:(_Bool)arg2;	// IMP=0x00000000007b5ead
- (void)_inviteUser:(id)arg1 usingDevice:(id)arg2;	// IMP=0x00000000007b5aed
- (_Bool)isAcceptedParticipatingUser:(id)arg1;	// IMP=0x00000000007b5a3c
- (void)clearParticipants;	// IMP=0x00000000007b57e4
- (void)inviteUser:(id)arg1 usingDevice:(id)arg2;	// IMP=0x00000000007b5555
- (void)updateShareParticipants;	// IMP=0x00000000007b4b19
- (void)configure;	// IMP=0x00000000007b4870
@property(readonly) NSSet *participatingUsers;
- (id)initWithQueue:(id)arg1 cloudZone:(id)arg2 home:(id)arg3;	// IMP=0x00000000007b46f3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


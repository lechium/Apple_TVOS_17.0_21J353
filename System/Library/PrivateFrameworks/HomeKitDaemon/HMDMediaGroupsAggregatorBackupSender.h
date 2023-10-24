//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSMutableDictionary, NSString, NSUUID;
@protocol HMDMediaGroupsAggregateBackupMessageTimerProvider, HMDMediaGroupsAggregatorBackupSenderDataSource;

__attribute__((visibility("hidden")))
@interface HMDMediaGroupsAggregatorBackupSender : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableDictionary *_backupTimers;	// 16 = 0x10
    id <HMDMediaGroupsAggregatorBackupSenderDataSource> _dataSource;	// 24 = 0x18
    id <HMDMediaGroupsAggregateBackupMessageTimerProvider> _backupTimerProvider;	// 32 = 0x20
    NSUUID *_identifier;	// 40 = 0x28
}

+ (id)logCategory;	// IMP=0x00100000001c55a0
- (void).cxx_destruct;	// IMP=0x00000000001c53d9
@property(readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
@property __weak id <HMDMediaGroupsAggregateBackupMessageTimerProvider> backupTimerProvider; // @synthesize backupTimerProvider=_backupTimerProvider;
@property __weak id <HMDMediaGroupsAggregatorBackupSenderDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)logIdentifier;	// IMP=0x00000000001c5319
- (id)mediaGroupsAggregateBackupMessageTimerWithParticipantAccessoryUUID:(id)arg1;	// IMP=0x00000000001c52cc
- (void)didFireTimerForMediaGroupsAggregateBackupMessageTimer:(id)arg1;	// IMP=0x00000000001c5110
- (void)markAttemptForParticipantAccessoryUUID:(id)arg1 withMessageIdentifier:(id)arg2;	// IMP=0x00000000001c4fbe
- (void)startBackupTimerWithParticipantAccessoryUUID:(id)arg1 dueToFailedMessageIdentifier:(id)arg2;	// IMP=0x00000000001c4f0f
- (void)removeBackupTimerWithParticipantAccessoryUUID:(id)arg1;	// IMP=0x00000000001c4e99
- (id)backupTimerForParticipantAccessoryUUID:(id)arg1;	// IMP=0x00000000001c4e10
- (void)setBackUpTimer:(id)arg1;	// IMP=0x00000000001c4d6e
- (void)createNewBackupTimerForParticipantAccessoryUUID:(id)arg1;	// IMP=0x00000000001c4c0a
- (id)receiverForParticipantAccessoryUUID:(id)arg1;	// IMP=0x00000000001c4abb
- (id)routerParticipantAccessoryUUID:(id)arg1;	// IMP=0x00000000001c496c
- (id)backupGroupsForParticipantAccessoryUUID:(id)arg1;	// IMP=0x00000000001c481d
- (void)locallyRouteGroupsBackupDataMessage:(id)arg1 toParticipantAccessoryUUID:(id)arg2;	// IMP=0x00000000001c46a2
- (void)routeBackedUpGroupsMessage:(id)arg1 toParticipantAccessoryUUID:(id)arg2;	// IMP=0x00000000001c43b8
- (void)clearCachedDataForParticipantAccessoryUUID:(id)arg1;	// IMP=0x00000000001c4342
- (void)clearCachedData;	// IMP=0x00000000001c42d4
- (void)_sendBackupToFirstPartyParticipantAccessoryUUID:(id)arg1 backupGroups:(id)arg2;	// IMP=0x00000000001c406c
- (void)_sendBackupToParticipantAccessoryUUID:(id)arg1;	// IMP=0x00000000001c3e8d
- (void)sendBackupToParticipantAccessoryUUID:(id)arg1;	// IMP=0x00000000001c3e38
- (id)initWithIdentifier:(id)arg1 backupTimerProvider:(id)arg2;	// IMP=0x00000000001c3d2c
- (id)initWithIdentifier:(id)arg1;	// IMP=0x00000000001c3d17

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

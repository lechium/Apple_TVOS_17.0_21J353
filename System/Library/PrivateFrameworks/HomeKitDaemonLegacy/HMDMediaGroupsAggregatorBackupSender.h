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

+ (id)logCategory;	// IMP=0x001000000035b41b
- (void).cxx_destruct;	// IMP=0x000000000035b254
@property(readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
@property __weak id <HMDMediaGroupsAggregateBackupMessageTimerProvider> backupTimerProvider; // @synthesize backupTimerProvider=_backupTimerProvider;
@property __weak id <HMDMediaGroupsAggregatorBackupSenderDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)logIdentifier;	// IMP=0x000000000035b194
- (id)mediaGroupsAggregateBackupMessageTimerWithParticipantAccessoryUUID:(id)arg1;	// IMP=0x000000000035b147
- (void)didFireTimerForMediaGroupsAggregateBackupMessageTimer:(id)arg1;	// IMP=0x000000000035af8b
- (void)markAttemptForParticipantAccessoryUUID:(id)arg1 withMessageIdentifier:(id)arg2;	// IMP=0x000000000035ae39
- (void)startBackupTimerWithParticipantAccessoryUUID:(id)arg1 dueToFailedMessageIdentifier:(id)arg2;	// IMP=0x000000000035ad8a
- (void)removeBackupTimerWithParticipantAccessoryUUID:(id)arg1;	// IMP=0x000000000035ad14
- (id)backupTimerForParticipantAccessoryUUID:(id)arg1;	// IMP=0x000000000035ac8b
- (void)setBackUpTimer:(id)arg1;	// IMP=0x000000000035abe9
- (void)createNewBackupTimerForParticipantAccessoryUUID:(id)arg1;	// IMP=0x000000000035aa85
- (id)receiverForParticipantAccessoryUUID:(id)arg1;	// IMP=0x000000000035a936
- (id)routerParticipantAccessoryUUID:(id)arg1;	// IMP=0x000000000035a7e7
- (id)backupGroupsForParticipantAccessoryUUID:(id)arg1;	// IMP=0x000000000035a698
- (void)locallyRouteGroupsBackupDataMessage:(id)arg1 toParticipantAccessoryUUID:(id)arg2;	// IMP=0x000000000035a51d
- (void)routeBackedUpGroupsMessage:(id)arg1 toParticipantAccessoryUUID:(id)arg2;	// IMP=0x000000000035a233
- (void)clearCachedDataForParticipantAccessoryUUID:(id)arg1;	// IMP=0x000000000035a1bd
- (void)clearCachedData;	// IMP=0x000000000035a14f
- (void)_sendBackupToFirstPartyParticipantAccessoryUUID:(id)arg1 backupGroups:(id)arg2;	// IMP=0x0000000000359ee7
- (void)_sendBackupToParticipantAccessoryUUID:(id)arg1;	// IMP=0x0000000000359d08
- (void)sendBackupToParticipantAccessoryUUID:(id)arg1;	// IMP=0x0000000000359cb3
- (id)initWithIdentifier:(id)arg1 backupTimerProvider:(id)arg2;	// IMP=0x0000000000359ba7
- (id)initWithIdentifier:(id)arg1;	// IMP=0x0000000000359b92

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


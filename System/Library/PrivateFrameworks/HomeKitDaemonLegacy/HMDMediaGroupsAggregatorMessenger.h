//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSUUID;
@protocol HMDMediaGroupsAggregatorMessengerDataSource, HMDMediaGroupsAggregatorMessengerDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDMediaGroupsAggregatorMessenger : NSObject
{
    id <HMDMediaGroupsAggregatorMessengerDataSource> _dataSource;	// 8 = 0x8
    id <HMDMediaGroupsAggregatorMessengerDelegate> _delegate;	// 16 = 0x10
    NSUUID *_identifier;	// 24 = 0x18
}

+ (id)logCategory;	// IMP=0x0010000000ac43ee
- (void).cxx_destruct;	// IMP=0x0000000000ac4281
@property(retain) NSUUID *identifier; // @synthesize identifier=_identifier;
@property __weak id <HMDMediaGroupsAggregatorMessengerDelegate> delegate; // @synthesize delegate=_delegate;
@property __weak id <HMDMediaGroupsAggregatorMessengerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)logIdentifier;	// IMP=0x0000000000ac41c0
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)router;	// IMP=0x0000000000ac408a
- (void)notifyOfRequestToUpdateAssociatedGroupIdentifierWithPayload:(id)arg1 message:(id)arg2;	// IMP=0x0000000000ac3fab
- (void)locallyHandleUpdateAssociatedGroupIdentifierRequestMessage:(id)arg1;	// IMP=0x0000000000ac3c2e
- (void)routeUpdateAssociatedGroupIdentifierRequestMessage:(id)arg1;	// IMP=0x0000000000ac3a90
- (void)routeMessage:(id)arg1 localHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000ac388a
- (void)sendRequestToUpdateAssociatedGroupIdentifier:(id)arg1 forGroupIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000ac359b
- (void)registerForMessagesWithMessageDispatcher:(id)arg1 home:(id)arg2;	// IMP=0x0000000000ac340b
- (void)configureWithMessageDispatcher:(id)arg1 home:(id)arg2;	// IMP=0x0000000000ac336d
- (id)init;	// IMP=0x0000000000ac3307

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly) Class superclass;

@end


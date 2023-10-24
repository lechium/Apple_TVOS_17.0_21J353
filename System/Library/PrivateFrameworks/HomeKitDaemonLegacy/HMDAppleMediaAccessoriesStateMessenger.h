//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMFMessageDispatcher, NSObject, NSString, NSUUID;
@protocol HMDAppleMediaAccessoriesStateMessengerDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDAppleMediaAccessoriesStateMessenger : HMFObject
{
    id <HMDAppleMediaAccessoriesStateMessengerDelegate> _delegate;	// 8 = 0x8
    NSUUID *_identifier;	// 16 = 0x10
    HMFMessageDispatcher *_messageDispatcher;	// 24 = 0x18
}

+ (id)logCategory;	// IMP=0x001000000091241c
- (void).cxx_destruct;	// IMP=0x0000000000912017
@property(readonly) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
@property __weak id <HMDAppleMediaAccessoriesStateMessengerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleAppleMediaAccessoryModelIdentifierRequestMessage:(id)arg1;	// IMP=0x0000000000911b72
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)logIdentifier;	// IMP=0x0000000000911a37
- (id)relayMessageName:(id)arg1 payload:(id)arg2 toAppleMediaAccessory:(id)arg3;	// IMP=0x0000000000911677
- (void)sendModelIdentifierRequestMessageToAppleMediaAccessory:(id)arg1 withAccessoryIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000009113c2
- (void)registerForMessagesWithHome:(id)arg1;	// IMP=0x00000000009111b5
- (id)initWithIdentifier:(id)arg1 messageDispatcher:(id)arg2;	// IMP=0x00000000009110f1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly) Class superclass;

@end


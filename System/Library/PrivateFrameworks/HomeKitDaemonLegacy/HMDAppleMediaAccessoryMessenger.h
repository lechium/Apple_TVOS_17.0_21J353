//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDAppleMediaAccessoryLocalMessageHandler, HMFMessageDispatcher, NSObject, NSString, NSUUID;
@protocol HMDMessageRouter, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDAppleMediaAccessoryMessenger : HMFObject
{
    id <HMDMessageRouter> _router;	// 8 = 0x8
    NSUUID *_identifier;	// 16 = 0x10
    HMFMessageDispatcher *_messageDispatcher;	// 24 = 0x18
    HMDAppleMediaAccessoryLocalMessageHandler *_localHandler;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x0010000000489951
- (void).cxx_destruct;	// IMP=0x000000000048978b
@property(readonly) HMDAppleMediaAccessoryLocalMessageHandler *localHandler; // @synthesize localHandler=_localHandler;
@property(readonly) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly) id <HMDMessageRouter> router; // @synthesize router=_router;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)logIdentifier;	// IMP=0x00000000004896d1
- (void)routeSiriEndpointDeleteSiriHistoryMessage:(id)arg1;	// IMP=0x0000000000489578
- (void)sendDeleteSiriHistoryRequestForAccessoryWithUUID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000004892e8
- (void)registerForMessagesWithHome:(id)arg1;	// IMP=0x00000000004890db
- (id)initWithIdentifier:(id)arg1 messageDispatcher:(id)arg2 router:(id)arg3 localHandler:(id)arg4;	// IMP=0x0000000000488f86

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly) Class superclass;

@end


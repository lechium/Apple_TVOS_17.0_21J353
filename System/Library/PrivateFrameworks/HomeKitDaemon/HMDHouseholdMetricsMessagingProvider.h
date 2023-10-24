//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDMessageDispatcher;
@protocol HMFMessageReceiver;

__attribute__((visibility("hidden")))
@interface HMDHouseholdMetricsMessagingProvider : NSObject
{
    id <HMFMessageReceiver> _receiver;	// 8 = 0x8
    HMDMessageDispatcher *_messageDispatcher;	// 16 = 0x10
}

+ (id)logCategory;	// IMP=0x00100000003df812
- (void).cxx_destruct;	// IMP=0x00000000003df735
@property(readonly, nonatomic) HMDMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(readonly, nonatomic) id <HMFMessageReceiver> receiver; // @synthesize receiver=_receiver;
- (void)deregisterForMessage:(id)arg1;	// IMP=0x00000000003df697
- (void)registerForMessage:(id)arg1 messageHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000003df519
- (void)sendMessage:(id)arg1 toDevice:(id)arg2 withPayload:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000003df37b
- (id)initWithReceiver:(id)arg1 messageDispatcher:(id)arg2;	// IMP=0x00000000003df2e2
- (id)initWithReceiver:(id)arg1;	// IMP=0x00000000003df261

@end

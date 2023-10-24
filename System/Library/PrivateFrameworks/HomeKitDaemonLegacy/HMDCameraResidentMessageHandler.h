//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDAccessory, HMDDevice, HMDMessageDispatcher, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface HMDCameraResidentMessageHandler : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    HMDAccessory *_accessory;	// 16 = 0x10
    HMDMessageDispatcher *_messageDispatcher;	// 24 = 0x18
    NSString *_logIdentifier;	// 32 = 0x20
    NSMutableDictionary *_queuedMessagesByDeviceIdentifier;	// 40 = 0x28
}

+ (id)logCategory;	// IMP=0x001000000055b729
- (void).cxx_destruct;	// IMP=0x000000000055b39b
@property(readonly) NSMutableDictionary *queuedMessagesByDeviceIdentifier; // @synthesize queuedMessagesByDeviceIdentifier=_queuedMessagesByDeviceIdentifier;
@property(readonly, copy) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
@property(readonly) HMDMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(readonly) __weak HMDAccessory *accessory; // @synthesize accessory=_accessory;
- (void)sendNextMessageForDeviceIdentifier:(id)arg1;	// IMP=0x000000000055b1aa
- (id)nextMessageForDeviceIdentifier:(id)arg1;	// IMP=0x000000000055b0d9
- (void)dequeueRespondedMessageForDeviceIdentifier:(id)arg1;	// IMP=0x000000000055afca
- (void)enqueueMessage:(id)arg1 forDeviceIdentifier:(id)arg2;	// IMP=0x000000000055ae62
@property(readonly, getter=isRemoteAccessDeviceReachable) _Bool remoteAccessDeviceReachable;
@property(readonly, getter=isUsingCompanionForRemoteAccessDevice) _Bool usingCompanionForRemoteAccessDevice;
@property(readonly) HMDDevice *remoteAccessDevice;
- (void)sendMessageWithName:(id)arg1 cameraSessionID:(id)arg2 payload:(id)arg3 target:(id)arg4 responseQueue:(id)arg5 responseHandler:(CDUnknownBlockType)arg6;	// IMP=0x000000000055a997
- (void)sendMessageWithName:(id)arg1 cameraSessionID:(id)arg2 payload:(id)arg3 target:(id)arg4 device:(id)arg5 responseQueue:(id)arg6 responseHandler:(CDUnknownBlockType)arg7;	// IMP=0x000000000055a566
- (id)initWithAccessory:(id)arg1 logIdentifier:(id)arg2 messageDispatcher:(id)arg3;	// IMP=0x000000000055a409
- (id)initWithAccessory:(id)arg1 logIdentifier:(id)arg2;	// IMP=0x000000000055a372

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


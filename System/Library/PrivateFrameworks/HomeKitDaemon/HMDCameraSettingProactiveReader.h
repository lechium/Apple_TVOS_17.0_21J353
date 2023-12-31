//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMCameraStreamPreferences, HMDAccessory, HMFMessage, NSObject, NSSet, NSString;
@protocol HMDCameraSettingProactiveReaderDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDCameraSettingProactiveReader : HMFObject
{
    NSString *_logIdentifier;	// 8 = 0x8
    id <HMDCameraSettingProactiveReaderDelegate> _delegate;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_workQueue;	// 24 = 0x18
    NSString *_sessionID;	// 32 = 0x20
    HMDAccessory *_accessory;	// 40 = 0x28
    NSSet *_streamControlMessageHandlers;	// 48 = 0x30
    HMCameraStreamPreferences *_streamPreferences;	// 56 = 0x38
    HMFMessage *_pendingMessage;	// 64 = 0x40
}

+ (id)logCategory;	// IMP=0x00100000006a9e17
+ (id)_streamingStatusForResponse:(id)arg1;	// IMP=0x00100000006a9aa6
- (void).cxx_destruct;	// IMP=0x00000000006a9571
@property(retain) HMFMessage *pendingMessage; // @synthesize pendingMessage=_pendingMessage;
@property(readonly) HMCameraStreamPreferences *streamPreferences; // @synthesize streamPreferences=_streamPreferences;
@property(readonly) NSSet *streamControlMessageHandlers; // @synthesize streamControlMessageHandlers=_streamControlMessageHandlers;
@property __weak HMDAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property __weak id <HMDCameraSettingProactiveReaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
- (void)_callDidCompleteReadDelegateCallback;	// IMP=0x00000000006a93f8
- (id)_inUseStreamControlMessageHandlersForReadResponses:(id)arg1;	// IMP=0x00000000006a923d
- (id)_availableStreamControlMessageHandlersForReadResponses:(id)arg1;	// IMP=0x00000000006a9082
- (void)_handleStreamStatusMultireadResponse:(id)arg1;	// IMP=0x00000000006a8b11
- (void)readSetting;	// IMP=0x00000000006a85c0
- (void)handleMessage:(id)arg1;	// IMP=0x00000000006a81ad
- (_Bool)hasPendingNegotiateMessageForSessionWithIdentifier:(id)arg1;	// IMP=0x00000000006a80d7
- (id)initWithWorkQueue:(id)arg1 sessionID:(id)arg2 accessory:(id)arg3 message:(id)arg4 streamControlMessageHandlers:(id)arg5 streamPreferences:(id)arg6 logIdentifier:(id)arg7;	// IMP=0x00000000006a7ea4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


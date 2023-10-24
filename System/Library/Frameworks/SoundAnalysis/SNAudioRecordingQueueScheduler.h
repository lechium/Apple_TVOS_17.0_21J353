//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAudioFormat;
@protocol OS_dispatch_queue, OS_os_transaction;

__attribute__((visibility("hidden")))
@interface SNAudioRecordingQueueScheduler : NSObject
{
    NSObject<OS_dispatch_queue> *_eventHandlerQueue;	// 8 = 0x8
    _Atomic long long _eventHandlerQueueFundsSpent;	// 16 = 0x10
    _Atomic long long _eventHandlerQueueFundsEarned;	// 24 = 0x18
    _Atomic _Bool _eventHandlerQueueStopped;	// 32 = 0x20
    CDUnknownBlockType _bufferHandler;	// 40 = 0x28
    CDUnknownBlockType _interruptionHandler;	// 48 = 0x30
    NSObject<OS_os_transaction> *_transaction;	// 56 = 0x38
    AVAudioFormat *_recordFormat;	// 64 = 0x40
    CDStruct_1b6d18a9 _lastAudioHeartbeatTime;	// 72 = 0x48
    CDStruct_1b6d18a9 _lastProcessingHeartbeatTime;	// 96 = 0x60
    int _unhealthyBufferCount;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x00000000000e5fd4
- (id)init;	// IMP=0x00000000000e54d2

@end


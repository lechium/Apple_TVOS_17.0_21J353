//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject;
@protocol OS_dispatch_queue;

@interface MRDSystemHIDEventManager
{
    struct __IOHIDEventSystemClient *_hidSystemClient;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_serialQueue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000001c4c7
- (void)dispatchHIDEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x001000000001c430
- (void)dealloc;	// IMP=0x001000000001c3ef
- (id)init;	// IMP=0x001000000001c33d

@end

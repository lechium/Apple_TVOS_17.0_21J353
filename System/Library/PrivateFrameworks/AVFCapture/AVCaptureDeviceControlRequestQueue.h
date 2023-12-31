//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVCaptureDeviceControlRequestQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
    NSMutableArray *_mutableArray;	// 16 = 0x10
}

- (id)head;	// IMP=0x000000000009fb62
- (id)dequeue;	// IMP=0x000000000009fa29
- (void)enqueueRequest:(id)arg1;	// IMP=0x000000000009f9bc
- (void)dealloc;	// IMP=0x000000000009f972
- (id)init;	// IMP=0x000000000009f8ff

@end


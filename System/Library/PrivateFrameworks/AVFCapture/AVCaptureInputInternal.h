//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVCaptureSession;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVCaptureInputInternal : NSObject
{
    AVCaptureSession *session;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *figCaptureSessionSyncQueue;	// 16 = 0x10
    struct OpaqueFigCaptureSession *figCaptureSession;	// 24 = 0x18
}

- (void)dealloc;	// IMP=0x000000000009dfb7
- (id)init;	// IMP=0x000000000009df69

@end


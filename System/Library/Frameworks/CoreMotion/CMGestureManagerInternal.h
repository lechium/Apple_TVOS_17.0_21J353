//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface CMGestureManagerInternal : NSObject
{
    int fPriority;	// 8 = 0x8
    void *fLocationdConnection;	// 16 = 0x10
    CDUnknownBlockType fGestureHandler;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *fPrivateQueue;	// 32 = 0x20
}

- (void)stopGestureUpdatesPrivate;	// IMP=0x00000000001ccdcf
- (void)startGestureUpdatesWithHandlerPrivate:(CDUnknownBlockType)arg1;	// IMP=0x00000000001cc08d
- (void)dealloc;	// IMP=0x00000000001cc04b
- (id)initWithPriority:(int)arg1;	// IMP=0x00000000001cbff2

@end

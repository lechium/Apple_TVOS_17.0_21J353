//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface CMWorkoutMetsInternal : NSObject
{
    void *fLocationdConnection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *fInternalQueue;	// 16 = 0x10
}

- (void)_queryWorkoutMetsWithSessionId:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002191b4
- (void)_teardown;	// IMP=0x0000000000219184
- (void)dealloc;	// IMP=0x0000000000219142
- (id)init;	// IMP=0x0000000000218c15

@end


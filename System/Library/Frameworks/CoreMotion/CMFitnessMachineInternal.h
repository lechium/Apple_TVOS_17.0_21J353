//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface CMFitnessMachineInternal : NSObject
{
    void *fLocationdConnection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *fInternalQueue;	// 16 = 0x10
}

- (void)_feedFitnessMachineData:(id)arg1;	// IMP=0x00000000001ebb0c
- (void)_teardown;	// IMP=0x00000000001ebadc
- (void)dealloc;	// IMP=0x00000000001ebaa2
- (id)init;	// IMP=0x00000000001eb574

@end


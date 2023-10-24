//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class RBSProcessMonitor;
@protocol OS_dispatch_queue;

@interface CLDurianAppMonitor : NSObject
{
    RBSProcessMonitor *_processMonitor;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    CDUnknownBlockType _findMyAppDidBackgroundOrExitHandler;	// 24 = 0x18
}

@property(copy) CDUnknownBlockType findMyAppDidBackgroundOrExitHandler; // @synthesize findMyAppDidBackgroundOrExitHandler=_findMyAppDidBackgroundOrExitHandler;
- (void)processMonitor:(id)arg1 didProvideUpdate:(id)arg2 forProcessHandle:(id)arg3;	// IMP=0x0010000000df81e6
- (void)dealloc;	// IMP=0x0010000000df819c
- (id)initWithQueue:(id)arg1;	// IMP=0x0010000000df7f68

@end

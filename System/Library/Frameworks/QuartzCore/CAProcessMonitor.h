//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, RBSProcessMonitor;

__attribute__((visibility("hidden")))
@interface CAProcessMonitor : NSObject
{
    CDUnknownBlockType _callback;	// 8 = 0x8
    RBSProcessMonitor *_processMonitor;	// 16 = 0x10
    NSMutableSet *_processIdentifiers;	// 24 = 0x18
}

- (void)updateConfiguration;	// IMP=0x000000000020b098
- (void)removeMonitoringProcess:(int)arg1;	// IMP=0x000000000020afe5
- (void)addMonitoringProcess:(int)arg1 isRunning:(_Bool *)arg2 isSuspended:(_Bool *)arg3;	// IMP=0x000000000020ae4c
- (void)dealloc;	// IMP=0x000000000020adc5
- (id)initWithCallback:(CDUnknownBlockType)arg1;	// IMP=0x000000000020ad33

@end


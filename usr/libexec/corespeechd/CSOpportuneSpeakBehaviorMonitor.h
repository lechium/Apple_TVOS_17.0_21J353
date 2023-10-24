//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable;
@protocol OS_dispatch_queue;

@interface CSOpportuneSpeakBehaviorMonitor : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSHashTable *_observers;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x004000000012303b
- (void).cxx_destruct;	// IMP=0x00200000001228f8
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)notifyDidStopStream:(id)arg1;	// IMP=0x0010000000122835
- (void)notifyWillStopStream:(id)arg1;	// IMP=0x00100000001227a8
- (void)notifyDidStartStreamWithContext:(id)arg1 audioProviderUUID:(id)arg2 successfully:(_Bool)arg3 option:(id)arg4;	// IMP=0x00100000001226bc
- (void)notifyWillStartStreamWithContext:(id)arg1 audioProviderUUID:(id)arg2 option:(id)arg3;	// IMP=0x00100000001225d7
- (void);	// IMP=0x001000000012254a
- (void)registerObserver:(id)arg1;	// IMP=0x00100000001224bd
- (id)init;	// IMP=0x0010000000122436

@end

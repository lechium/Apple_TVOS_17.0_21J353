//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMFTimer, NSString;

__attribute__((visibility("hidden")))
@interface HMDEventRouterTimer : NSObject
{
    CDUnknownBlockType _timerFireHandler;	// 8 = 0x8
    HMFTimer *_timer;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000b4a69a
@property(readonly) HMFTimer *timer; // @synthesize timer=_timer;
@property(readonly) CDUnknownBlockType timerFireHandler; // @synthesize timerFireHandler=_timerFireHandler;
@property(readonly, nonatomic) double timeInterval;
- (void)timerDidFire:(id)arg1;	// IMP=0x0000000000b4a5ef
- (void)suspend;	// IMP=0x0000000000b4a5b2
- (void)resume;	// IMP=0x0000000000b4a575
- (id)initWithQueue:(id)arg1 interval:(double)arg2 timerFireHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000b4a484

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SDSmartCoverMonitor : NSObject
{
    _Bool _smartCoverIsClosed;	// 8 = 0x8
    _Bool _flap1StateIsEngaged;	// 9 = 0x9
    _Bool _openStateIsEngaged;	// 10 = 0xa
    struct os_unfair_lock_s _lock;	// 12 = 0xc
    struct __IOHIDEventSystemClient *_mHIDClient;	// 16 = 0x10
}

@property(readonly) _Bool smartCoverIsClosed; // @synthesize smartCoverIsClosed=_smartCoverIsClosed;
- (unsigned int)getSmartCoverState:(struct __CFArray *)arg1 usage:(unsigned int)arg2;	// IMP=0x001000000000cbac
- (_Bool)isSmartCoverClosed:(struct __IOHIDEventSystemClient *)arg1;	// IMP=0x001000000000ca6d
- (void)handleEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x001000000000c9c3
- (void)handleButtonEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x001000000000c7f9
- (void)updateSmartCoverIsClosed:(_Bool)arg1;	// IMP=0x001000000000c727
- (id)description;	// IMP=0x001000000000c687
- (void)installSmartCoverMonitor;	// IMP=0x001000000000c62b
- (void)dealloc;	// IMP=0x001000000000c5ec
- (id)init;	// IMP=0x001000000000c587
- (void)postNotification:(id)arg1;	// IMP=0x001000000000c515

@end


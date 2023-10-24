//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSTimer;

@interface BKSystemAppHeartbeat : NSObject
{
    NSTimer *_timer;	// 8 = 0x8
    unsigned long long _firedCount;	// 16 = 0x10
    unsigned long long _numberOfTimesToFire;	// 24 = 0x18
    double _interval;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000012141
- (void)start;	// IMP=0x00100000000120bc
- (void)_handleTimer:(id)arg1;	// IMP=0x0010000000012057
- (void)dealloc;	// IMP=0x0010000000012015
- (id)initWithFireCount:(unsigned long long)arg1 interval:(double)arg2;	// IMP=0x0010000000011fc9
- (id)init;	// IMP=0x0010000000011faa

@end

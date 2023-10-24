//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString;
@protocol OS_dispatch_queue;

@interface PowerManagerIdleTracker : NSObject
{
    _Bool _active;	// 8 = 0x8
    _Bool _enabled;	// 9 = 0x9
    _Bool _firstTime;	// 10 = 0xa
    double _interval;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    CDUnknownBlockType _block;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
    unsigned long long _userActivityNotificationRef;	// 48 = 0x30
    NSDate *_startTime;	// 56 = 0x38
}

+ (unsigned long long)setup:(id)arg1 interval:(double)arg2;	// IMP=0x00400000000038be
+ (id)idleTracker:(id)arg1 queue:(id)arg2 interval:(double)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x00100000000034ed
- (void).cxx_destruct;	// IMP=0x00200000000041f8
@property _Bool firstTime; // @synthesize firstTime=_firstTime;
@property(retain) NSDate *startTime; // @synthesize startTime=_startTime;
@property unsigned long long userActivityNotificationRef; // @synthesize userActivityNotificationRef=_userActivityNotificationRef;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(copy) CDUnknownBlockType block; // @synthesize block=_block;
@property(readonly) NSString *name; // @synthesize name=_name;
@property double interval; // @synthesize interval=_interval;
@property _Bool enabled; // @synthesize enabled=_enabled;
@property _Bool active; // @synthesize active=_active;
- (void)invalidate;	// IMP=0x0010000000003e23
- (void)dealloc;	// IMP=0x00100000000037d2
- (id)init:(id)arg1 queue:(id)arg2 interval:(double)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x0010000000003587

@end


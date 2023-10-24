//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString, NSTimer;

__attribute__((visibility("hidden")))
@interface UIDelayedAction : NSObject
{
    id m_target;	// 8 = 0x8
    SEL m_action;	// 16 = 0x10
    id m_userInfo;	// 24 = 0x18
    double m_delay;	// 32 = 0x20
    NSTimer *m_timer;	// 40 = 0x28
    _Bool m_canceled;	// 48 = 0x30
    NSString *m_runLoopMode;	// 56 = 0x38
    NSDate *m_startDate;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000023ce
@property(readonly) _Bool _canceled; // @synthesize _canceled=m_canceled;
@property(readonly) NSDate *_startDate; // @synthesize _startDate=m_startDate;
@property(retain) id userInfo; // @synthesize userInfo=m_userInfo;
@property(retain) id target; // @synthesize target=m_target;
- (void)timerFired:(id)arg1;	// IMP=0x0000000000002332
- (double)delay;	// IMP=0x0000000000002327
- (_Bool)scheduled;	// IMP=0x0000000000002307
- (void)unschedule;	// IMP=0x00000000000022d5
- (void)cancel;	// IMP=0x00000000000022bf
- (void)touchWithDelay:(double)arg1;	// IMP=0x00000000000021a0
- (void)touch;	// IMP=0x0000000000002185
- (void)dealloc;	// IMP=0x0000000000002131
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 userInfo:(id)arg3 delay:(double)arg4;	// IMP=0x0000000000002112
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 userInfo:(id)arg3 delay:(double)arg4 mode:(id)arg5;	// IMP=0x0000000000002014
- (id)init;	// IMP=0x0000000000001f88

@end

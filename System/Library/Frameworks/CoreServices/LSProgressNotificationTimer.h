//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableSet, NSTimer;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface LSProgressNotificationTimer : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSTimer *_timer;	// 16 = 0x10
    NSDate *_lastFiredDate;	// 24 = 0x18
    NSMutableSet *_applications;	// 32 = 0x20
    double _minInterval;	// 40 = 0x28
    double _latency;	// 48 = 0x30
    SEL _appObserverSelector;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000015a501
@property SEL appObserverSelector; // @synthesize appObserverSelector=_appObserverSelector;
@property(readonly, nonatomic) double latency; // @synthesize latency=_latency;
@property(readonly, nonatomic) double minInterval; // @synthesize minInterval=_minInterval;
@property(retain, nonatomic) NSMutableSet *applications; // @synthesize applications=_applications;
@property(retain, nonatomic) NSDate *lastFiredDate; // @synthesize lastFiredDate=_lastFiredDate;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
- (id)description;	// IMP=0x000000000015a408
- (void)sendMessage:(id)arg1;	// IMP=0x0000000000159f64
- (void)notifyObservers:(id)arg1 withApplications:(id)arg2;	// IMP=0x0000000000159b3b
- (void)clear;	// IMP=0x0000000000159b25
- (void)removeApplication:(id)arg1;	// IMP=0x0000000000159972
- (void)addApplication:(id)arg1;	// IMP=0x0000000000159922
- (void)stopTimer;	// IMP=0x000000000015986b
- (void)dealloc;	// IMP=0x0000000000159829
- (id)initWithQueue:(id)arg1;	// IMP=0x0000000000159758

@end


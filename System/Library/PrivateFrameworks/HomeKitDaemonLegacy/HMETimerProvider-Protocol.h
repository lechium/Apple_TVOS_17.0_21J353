//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSObject;
@protocol HMETimer, OS_dispatch_queue;

@protocol HMETimerProvider
- (NSDate *)currentDate;
- (NSDate *)dateWithTimeIntervalSinceNow:(double)arg1;
- (id <HMETimer>)timerWithQueue:(NSObject<OS_dispatch_queue> *)arg1 interval:(double)arg2 timerFireHandler:(void (^)(void))arg3;
@end


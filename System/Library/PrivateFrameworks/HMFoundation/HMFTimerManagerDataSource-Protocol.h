//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/NSObject-Protocol.h>

@class HMFTimer;

@protocol HMFTimerManagerDataSource <NSObject>
@property(readonly, nonatomic) double currentTime;
- (HMFTimer *)timerWithTimeInterval:(double)arg1 options:(unsigned long long)arg2;
@end


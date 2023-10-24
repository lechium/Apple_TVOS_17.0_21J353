//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SHRange;

__attribute__((visibility("hidden")))
@interface SHQueryMediaTimelineAdjustmentValue : NSObject
{
    SHRange *_timeRange;	// 8 = 0x8
    double _timelineShiftDuration;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000c7d5
@property(readonly, nonatomic) double timelineShiftDuration; // @synthesize timelineShiftDuration=_timelineShiftDuration;
@property(readonly, nonatomic) SHRange *timeRange; // @synthesize timeRange=_timeRange;
- (id)initWithTimeRange:(id)arg1 timelineShiftDuration:(double)arg2;	// IMP=0x000000000000c745

@end


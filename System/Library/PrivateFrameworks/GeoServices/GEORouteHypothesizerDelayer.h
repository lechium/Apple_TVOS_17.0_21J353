//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEORouteHypothesizer, GEOXPCActivity, geo_isolater;

__attribute__((visibility("hidden")))
@interface GEORouteHypothesizerDelayer : NSObject
{
    struct __CFBinaryHeap *_minHeap;	// 8 = 0x8
    GEORouteHypothesizer *_nextHypothesizer;	// 16 = 0x10
    geo_isolater *_isolater;	// 24 = 0x18
    GEOXPCActivity *_activity;	// 32 = 0x20
}

+ (void)checkin;	// IMP=0x0060000000781cd7
- (void).cxx_destruct;	// IMP=0x000000000078276a
- (void)dealloc;	// IMP=0x0000000000782730
- (void)delayStartOfHypothesizer:(id)arg1;	// IMP=0x0000000000782644
- (void)_setNextHypothesizer:(id)arg1;	// IMP=0x00000000007822b5
- (void)_startValidHypothesizers;	// IMP=0x0000000000781fc8
- (id)init;	// IMP=0x0000000000781d1b

@end

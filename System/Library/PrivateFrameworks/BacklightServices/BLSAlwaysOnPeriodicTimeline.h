//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "BLSAlwaysOnTimeline.h"

@class NSDate;

__attribute__((visibility("hidden")))
@interface BLSAlwaysOnPeriodicTimeline : BLSAlwaysOnTimeline
{
    double _periodicInterval;	// 24 = 0x18
    NSDate *_periodicStart;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000012b7a
- (id)unconfiguredEntriesForDateInterval:(id)arg1 previousEntry:(id)arg2;	// IMP=0x00000000000127e8
- (long long)requestedFidelityForStartEntryInDateInterval:(id)arg1 withPreviousEntry:(id)arg2;	// IMP=0x00000000000127ba
- (id)initWithUpdateInterval:(double)arg1 startDate:(id)arg2 identifier:(id)arg3 configure:(CDUnknownBlockType)arg4;	// IMP=0x0000000000012721

@end


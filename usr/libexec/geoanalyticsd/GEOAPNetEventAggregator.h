//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface GEOAPNetEventAggregator : NSObject
{
}

+ (id)sharedAggregator;	// IMP=0x0040000000002225
- (void)startAggregation;	// IMP=0x00400000000053ec
- (void)runAggregationForDate:(id)arg1;	// IMP=0x00100000000027e7
- (void)_computeDistributionStatsOver:(id)arg1 statsResultsBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000000227a

@end

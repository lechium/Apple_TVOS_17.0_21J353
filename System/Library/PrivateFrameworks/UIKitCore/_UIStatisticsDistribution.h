//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _UIStatisticsDistribution
{
}

- (void)recordTimingForObject:(id)arg1;	// IMP=0x000000000126b583
- (void)cancelTimingForObject:(id)arg1;	// IMP=0x000000000126b56c
- (void)startTimingForObject:(id)arg1;	// IMP=0x000000000126b4dd
- (_Bool)isTimingForObject:(id)arg1;	// IMP=0x000000000126b4ac
- (void)recordDistributionValue:(double)arg1;	// IMP=0x000000000126b49a
- (void)resetDistributionToValue:(double)arg1;	// IMP=0x000000000126b488
- (void)resetDistribution;	// IMP=0x000000000126b476

@end


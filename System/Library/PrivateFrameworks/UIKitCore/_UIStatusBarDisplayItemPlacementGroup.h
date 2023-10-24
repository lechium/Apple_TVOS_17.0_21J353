//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UIStatusBarDisplayItemPlacementGroup : NSObject
{
    NSArray *_placements;	// 8 = 0x8
    long long _minimumPriority;	// 16 = 0x10
    long long _maximumPriority;	// 24 = 0x18
}

+ (id)groupWithPriority:(long long)arg1 placements:(id)arg2;	// IMP=0x0060000000f3211a
- (void).cxx_destruct;	// IMP=0x0000000000f32510
@property(readonly, nonatomic) long long maximumPriority; // @synthesize maximumPriority=_maximumPriority;
@property(readonly, nonatomic) long long minimumPriority; // @synthesize minimumPriority=_minimumPriority;
@property(copy, nonatomic) NSArray *placements; // @synthesize placements=_placements;
@property(nonatomic) _Bool enabled;

@end


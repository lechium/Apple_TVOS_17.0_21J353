//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, _UIStatusBarDisplayItemPlacement, _UIStatusBarRegion;

__attribute__((visibility("hidden")))
@interface _UIStatusBarDisplayItemPlacementState : NSObject
{
    _UIStatusBarDisplayItemPlacement *_placement;	// 8 = 0x8
    _UIStatusBarRegion *_region;	// 16 = 0x10
    NSMutableArray *_relations;	// 24 = 0x18
}

+ (id)stateForDisplayItemPlacement:(id)arg1 region:(id)arg2;	// IMP=0x0010000000f9d6f4
- (void).cxx_destruct;	// IMP=0x0000000000f9dba6
@property(retain, nonatomic) NSMutableArray *relations; // @synthesize relations=_relations;
@property(readonly, nonatomic) __weak _UIStatusBarRegion *region; // @synthesize region=_region;
@property(readonly, nonatomic) _UIStatusBarDisplayItemPlacement *placement; // @synthesize placement=_placement;
- (id)description;	// IMP=0x0000000000f9d96b
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled;
@property(readonly, nonatomic) _Bool canBeEnabled;
@property(readonly, nonatomic, getter=areRelationsFulfilled) _Bool relationsFulfilled;
@property(readonly, nonatomic) long long priority;

@end


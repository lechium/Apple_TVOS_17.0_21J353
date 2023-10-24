//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIScrollViewScrollingAnimatorState : NSObject
{
    unsigned long long _granularity;	// 8 = 0x8
    unsigned long long _direction;	// 16 = 0x10
    struct CGPoint _offset;	// 24 = 0x18
    struct CGPoint _maximumVelocity;	// 40 = 0x28
    struct CGPoint _force;	// 56 = 0x38
}

@property(nonatomic) unsigned long long direction; // @synthesize direction=_direction;
@property(nonatomic) unsigned long long granularity; // @synthesize granularity=_granularity;
@property(nonatomic) struct CGPoint force; // @synthesize force=_force;
@property(nonatomic) struct CGPoint maximumVelocity; // @synthesize maximumVelocity=_maximumVelocity;
@property(nonatomic) struct CGPoint offset; // @synthesize offset=_offset;

@end


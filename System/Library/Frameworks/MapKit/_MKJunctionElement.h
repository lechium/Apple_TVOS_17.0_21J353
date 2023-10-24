//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _MKJunctionElement : NSObject
{
    struct CGPoint _leftBasePoint;	// 8 = 0x8
    struct CGPoint _rightBasePoint;	// 24 = 0x18
    double _angle;	// 40 = 0x28
}

@property(nonatomic) double angle; // @synthesize angle=_angle;
@property(nonatomic) struct CGPoint rightBasePoint; // @synthesize rightBasePoint=_rightBasePoint;
@property(nonatomic) struct CGPoint leftBasePoint; // @synthesize leftBasePoint=_leftBasePoint;
- (id)description;	// IMP=0x00000000001fe028
- (struct CGPoint)rightEdgePointAtDistanceFromBase:(double)arg1;	// IMP=0x00000000001fdfbc
- (struct CGPoint)leftEdgePointAtDistanceFromBase:(double)arg1;	// IMP=0x00000000001fdf50

@end


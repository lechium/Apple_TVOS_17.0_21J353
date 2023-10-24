//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIViewCubicTimingFunction : NSObject
{
    struct CGPoint _point1;	// 8 = 0x8
    struct CGPoint _point2;	// 24 = 0x18
}

- (id)description;	// IMP=0x000000000011ef3a
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000011ee11
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000011ed88
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000011ec91
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000011ec34
- (id)_mediaTimingFunction;	// IMP=0x000000000011ec07
@property(readonly, nonatomic) struct CGPoint controlPoint2;
@property(readonly, nonatomic) struct CGPoint controlPoint1;
- (id)initWithControlPoint1:(struct CGPoint)arg1 controlPoint2:(struct CGPoint)arg2;	// IMP=0x000000000011eb7c
- (id)init;	// IMP=0x000000000011eaf0

@end

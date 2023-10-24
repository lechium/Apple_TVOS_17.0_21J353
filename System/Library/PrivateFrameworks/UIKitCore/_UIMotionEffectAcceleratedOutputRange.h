//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIMotionEffectAcceleratedOutputRange : NSObject
{
    struct UIOffset _referenceOffset;	// 8 = 0x8
    struct CGPoint _referenceAcceleration;	// 24 = 0x18
    struct CGPoint _acceleration;	// 40 = 0x28
}

@property(readonly, nonatomic) struct CGPoint acceleration; // @synthesize acceleration=_acceleration;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000d2a9a5
- (unsigned long long)hash;	// IMP=0x0000000000d2a783
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000d2a6b2
- (id)description;	// IMP=0x0000000000d2a5bb
- (void)reset;	// IMP=0x0000000000d2a59c
- (struct UIOffset)acceleratedOutputForViewerOffset:(struct UIOffset)arg1 accelerationBoostFactor:(struct CGPoint)arg2;	// IMP=0x0000000000d2a4fb
- (void)setAcceleration:(struct CGPoint)arg1 fixingOutputForViewerOffset:(struct UIOffset)arg2;	// IMP=0x0000000000d2a3af
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000d2a301
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000d2a21e
- (id)init;	// IMP=0x0000000000d2a1c0

@end

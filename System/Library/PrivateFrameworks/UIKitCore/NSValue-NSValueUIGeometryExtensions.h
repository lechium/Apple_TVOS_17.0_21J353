//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSValue.h>

@interface NSValue (NSValueUIGeometryExtensions)
+ (id)valueWithUIOffset:(struct UIOffset)arg1;	// IMP=0x00200000008b1fbe
+ (id)valueWithDirectionalEdgeInsets:(struct NSDirectionalEdgeInsets)arg1;	// IMP=0x00200000008b1f8a
+ (id)valueWithNSDirectionalEdgeInsets:(struct NSDirectionalEdgeInsets)arg1;	// IMP=0x00200000008b1f71
+ (id)valueWithUIEdgeInsets:(struct UIEdgeInsets)arg1;	// IMP=0x00200000008b1f3d
+ (id)valueWithCGAffineTransform:(struct CGAffineTransform)arg1;	// IMP=0x00200000008b1f09
+ (id)valueWithCGRect:(struct CGRect)arg1;	// IMP=0x00200000008b1ed5
+ (id)valueWithCGSize:(struct CGSize)arg1;	// IMP=0x00200000008b1e90
+ (id)valueWithCGVector:(struct CGVector)arg1;	// IMP=0x00200000008b1e4b
+ (id)valueWithCGPoint:(struct CGPoint)arg1;	// IMP=0x00200000008b1e06
+ (id)valueWithUIKBHandwritingPoint:(struct)arg1;	// IMP=0x0020000000a0e0ae
+ (id)ui_valueWithPlatformPoint:(struct CGPoint)arg1;	// IMP=0x0020000000cbbecf
+ (id)_valueWithPressTrigger:(struct _UIPressTrigger)arg1;	// IMP=0x0020000000ff2f84
+ (id)ui_valueWithPlatformSize:(struct CGSize)arg1;	// IMP=0x00200000010f2127
@property(readonly, nonatomic) struct UIOffset UIOffsetValue;
@property(readonly, nonatomic) struct NSDirectionalEdgeInsets directionalEdgeInsetsValue;
@property(readonly, nonatomic) struct UIEdgeInsets UIEdgeInsetsValue;
@property(readonly, nonatomic) struct CGAffineTransform CGAffineTransformValue;
@property(readonly, nonatomic) struct CGRect CGRectValue;
@property(readonly, nonatomic) struct CGSize CGSizeValue;
@property(readonly, nonatomic) struct CGVector CGVectorValue;
@property(readonly, nonatomic) struct CGPoint CGPointValue;
@property(readonly) CDStruct_19cde01f UIKBHandwritingPointValue;
- (struct CGPoint)ui_platformPointValue;	// IMP=0x0010000000cbbebd
- (struct _UIPressTrigger)_UIPressTriggerValue;	// IMP=0x0010000000ff2fb8
- (struct CGSize)ui_platformSizeValue;	// IMP=0x00100000010f2115
@end

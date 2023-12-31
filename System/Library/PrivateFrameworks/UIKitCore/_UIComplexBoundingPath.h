//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _UIBoundingPathBitmap;

__attribute__((visibility("hidden")))
@interface _UIComplexBoundingPath
{
    double _scale;	// 8 = 0x8
    long long _orientation;	// 16 = 0x10
    _UIBoundingPathBitmap *_bitmap;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000008e544c
- (void).cxx_destruct;	// IMP=0x00000000008ec729
- (id)_imageRepresentation;	// IMP=0x00000000008ec338
- (id)description;	// IMP=0x00000000008ec25c
- (struct UIEdgeInsets)_centerEdgeInsetsOfBoundingPathAndRect:(struct CGRect)arg1;	// IMP=0x00000000008ebf64
- (struct CGRect)_rectTuckedAgainstEdge:(unsigned long long)arg1 ofBoundingPathAndRect:(struct CGRect)arg2 withSize:(double)arg3 cornerRadii:(struct UIRectCornerRadii)arg4 minimumPadding:(double)arg5;	// IMP=0x00000000008eb98c
- (struct CGRect)_portaitPixelRectWithPixelMinimumPaddingFromBoundingPath:(double)arg1 againstPortraitEdge:(unsigned long long)arg2 fromPortraitPixelRect:(struct CGRect)arg3 withPortraitPixelCornerRadii:(struct _UIIntegralCornerRadii)arg4;	// IMP=0x00000000008ea2bc
- (struct CGRect)_rectTuckedInCorner:(unsigned long long)arg1 ofBoundingPathAndRect:(struct CGRect)arg2 withSize:(struct CGSize)arg3 cornerRadii:(struct UIRectCornerRadii)arg4 minimumPadding:(double)arg5;	// IMP=0x00000000008e9cd4
- (struct CGRect)_portaitPixelRectWithPixelMinimumPaddingFromBoundingPath:(double)arg1 inPortaitCorner:(unsigned long long)arg2 fromPortraitPixelRect:(struct CGRect)arg3 withPortraitPixelCornerRadii:(struct _UIIntegralCornerRadii)arg4;	// IMP=0x00000000008e8778
- (struct CGRect)_largestInscribedRectInBoundingPathAndRect:(struct CGRect)arg1 withCenter:(struct CGPoint)arg2 aspectRatio:(double)arg3;	// IMP=0x00000000008e825a
- (struct CGRect)_largestInscribedPortraitPixelRectInBoundingPathWithPortraitPixelRect:(struct CGRect)arg1 portraitAspectRatio:(double)arg2;	// IMP=0x00000000008e79b1
- (struct CGRect)_inscribedRectInBoundingPathAndRect:(struct CGRect)arg1 byInsettingRect:(struct CGRect)arg2 onEdges:(unsigned long long)arg3 withOptions:(unsigned long long)arg4;	// IMP=0x00000000008e7329
- (struct _UIIntegralRect)_rectByVerticallyInsettingPortraitPixelRect:(struct _UIIntegralRect)arg1 onPortraitEdges:(unsigned long long)arg2 performCompleteTest:(_Bool)arg3;	// IMP=0x00000000008e6f3e
- (struct _UIIntegralRect)_rectByHorizontallyInsettingPortraitPixelRect:(struct _UIIntegralRect)arg1 onPortraitEdges:(unsigned long long)arg2 performCompleteTest:(_Bool)arg3;	// IMP=0x00000000008e6974
- (_Bool)isNonRectangular;	// IMP=0x00000000008e696c
- (void)setCoordinateSpace:(id)arg1;	// IMP=0x00000000008e68cb
- (_Bool)validateForCoordinateSpace;	// IMP=0x00000000008e6840
- (_Bool)_validateBitmap:(id)arg1 withOrientation:(long long)arg2 scale:(double)arg3 forCoordinateSpace:(id)arg4;	// IMP=0x00000000008e61a9
- (id)boundingPathForCoordinateSpace:(id)arg1 withCornerRadii:(struct UIRectCornerRadii)arg2 orientation:(long long)arg3 scale:(double)arg4;	// IMP=0x00000000008e5bb4
- (id)boundingPathForCoordinateSpace:(id)arg1;	// IMP=0x00000000008e5b66
- (id)initWithRectangularCoordinateSpace:(id)arg1 orientation:(long long)arg2 scale:(double)arg3;	// IMP=0x00000000008e5994
- (id)initWithCoordinateSpace:(id)arg1 orientation:(long long)arg2 scale:(double)arg3 boundingPathBitmap:(id)arg4;	// IMP=0x00000000008e574e
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000008e5515
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000008e5454

@end


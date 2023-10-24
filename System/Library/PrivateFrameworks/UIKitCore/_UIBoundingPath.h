//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol UICoordinateSpace;

__attribute__((visibility("hidden")))
@interface _UIBoundingPath : NSObject
{
    id <UICoordinateSpace> _coordinateSpace;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000008ecfc0
- (void).cxx_destruct;	// IMP=0x00000000008ee14d
@property(nonatomic) __weak id <UICoordinateSpace> coordinateSpace; // @synthesize coordinateSpace=_coordinateSpace;
- (id)debugQuickLookObject;	// IMP=0x00000000008ee114
- (id)_imageRepresentation;	// IMP=0x00000000008ee0fb
- (struct UIEdgeInsets)_centerEdgeInsetsOfBoundingPathAndRect:(struct CGRect)arg1;	// IMP=0x00000000008ee0e8
- (struct CGRect)_rectTuckedAgainstEdge:(unsigned long long)arg1 ofBoundingRect:(struct CGRect)arg2 withSize:(double)arg3 minimumPadding:(double)arg4;	// IMP=0x00000000008edd94
- (struct CGRect)_rectTuckedInCorner:(unsigned long long)arg1 ofBoundingRect:(struct CGRect)arg2 withSize:(struct CGSize)arg3 minimumPadding:(double)arg4;	// IMP=0x00000000008ed766
- (struct CGRect)_largestInscribedRectInBoundingRect:(struct CGRect)arg1 withCenter:(struct CGPoint)arg2 aspectRatio:(double)arg3;	// IMP=0x00000000008ed72e
- (struct CGRect)_inscribedRectInBoundingRect:(struct CGRect)arg1 byInsettingRect:(struct CGRect)arg2 onEdges:(unsigned long long)arg3;	// IMP=0x00000000008ed2f6
- (struct CGRect)_rectTuckedAgainstEdge:(unsigned long long)arg1 ofBoundingPathAndRect:(struct CGRect)arg2 withSize:(double)arg3 cornerRadii:(struct UIRectCornerRadii)arg4 minimumPadding:(double)arg5;	// IMP=0x00000000008ed2d8
- (struct CGRect)_rectTuckedInCorner:(unsigned long long)arg1 ofBoundingPathAndRect:(struct CGRect)arg2 withSize:(struct CGSize)arg3 cornerRadii:(struct UIRectCornerRadii)arg4 minimumPadding:(double)arg5;	// IMP=0x00000000008ed2ba
- (struct CGRect)_largestInscribedRectInBoundingPathAndRect:(struct CGRect)arg1 withCenter:(struct CGPoint)arg2 aspectRatio:(double)arg3;	// IMP=0x00000000008ed29c
- (struct CGRect)_inscribedRectInBoundingPathAndRect:(struct CGRect)arg1 byInsettingRect:(struct CGRect)arg2 onEdges:(unsigned long long)arg3 withOptions:(unsigned long long)arg4;	// IMP=0x00000000008ed27e
@property(readonly, nonatomic) _Bool isNonRectangular;
- (id)boundingPathForCoordinateSpace:(id)arg1 withCornerRadii:(struct UIRectCornerRadii)arg2 orientation:(long long)arg3 scale:(double)arg4;	// IMP=0x00000000008ed1ae
- (id)boundingPathForCoordinateSpace:(id)arg1;	// IMP=0x00000000008ed0e6
- (_Bool)validateForCoordinateSpace;	// IMP=0x00000000008ed0de
- (id)initWithCoordinateSpace:(id)arg1;	// IMP=0x00000000008ecffd
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000008ecfce
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000008ecfc8

@end


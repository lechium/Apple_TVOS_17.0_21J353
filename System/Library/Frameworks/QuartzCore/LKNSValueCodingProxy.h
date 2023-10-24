//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface LKNSValueCodingProxy
{
    int _kind;	// 8 = 0x8
    union {
        struct CGPoint point;
        struct CGSize size;
        struct CGRect rect;
        struct CATransform3D transform;
        struct CAPoint3D point3d;
        struct CACornerRadii corner_radii;
        struct CAColorMatrix color_matrix;
        struct CGAffineTransform affine_transform;
    } _u;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x006000000002088c
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001fee4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001f754
- (id)decodedObject;	// IMP=0x000000000001f586
- (id)initWithObject:(id)arg1;	// IMP=0x000000000001f097

@end

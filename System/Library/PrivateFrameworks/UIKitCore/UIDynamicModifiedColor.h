//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIDynamicColor;

__attribute__((visibility("hidden")))
@interface UIDynamicModifiedColor
{
    UIDynamicColor *_baseColor;	// 24 = 0x18
    double _alphaComponent;	// 32 = 0x20
    long long _contrast;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x006000000089cfd7
- (void).cxx_destruct;	// IMP=0x000000000089d6c2
- (id)description;	// IMP=0x000000000089d5a4
- (id)_highContrastDynamicColor;	// IMP=0x000000000089d53c
- (id)colorWithAlphaComponent:(double)arg1;	// IMP=0x000000000089d4ca
- (id)_resolvedColorWithTraitCollection:(id)arg1;	// IMP=0x000000000089d1ec
- (_Bool)_isDynamicTintColor;	// IMP=0x000000000089d1cf
- (unsigned long long)hash;	// IMP=0x000000000089d166
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000089d0af
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000089d0a4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000089cfdf
- (id)initWithBaseColor:(id)arg1 alphaComponent:(double)arg2 contrast:(long long)arg3;	// IMP=0x000000000089ceaf

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIColor;

__attribute__((visibility("hidden")))
@interface _UIVibrancyEffectModernVibrancyImpl
{
    NSString *_filterType;	// 8 = 0x8
    UIColor *_inputColor1;	// 16 = 0x10
    UIColor *_inputColor2;	// 24 = 0x18
    UIColor *_compositingColor;	// 32 = 0x20
    _Bool _inputReversed;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000016183f
- (void)appendDescriptionTo:(id)arg1;	// IMP=0x0000000000161772
- (void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3;	// IMP=0x0000000000161662
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001613f7
- (unsigned long long)hash;	// IMP=0x00000000001613da
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001612ec
- (id)implementationReplacingTintColor:(id)arg1;	// IMP=0x00000000001611d0
- (id)initWithFilter:(id)arg1 inputColor1:(id)arg2 inputColor2:(id)arg3 compositingColor:(id)arg4 inputReversed:(_Bool)arg5;	// IMP=0x0000000000161057

@end


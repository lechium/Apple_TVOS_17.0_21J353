//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSBundle, NSString;

__attribute__((visibility("hidden")))
@interface _UIBlurEffectCoreMaterialImpl
{
    long long _style;	// 8 = 0x8
    NSString *_lightMaterial;	// 16 = 0x10
    NSString *_darkMaterial;	// 24 = 0x18
    NSBundle *_bundle;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000159313
- (void)appendDescriptionTo:(id)arg1;	// IMP=0x0000000000159253
- (_Bool)_needsUpdateForTransitionFromEnvironment:(id)arg1 toEnvironment:(id)arg2 usage:(long long)arg3;	// IMP=0x000000000015919f
- (void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3;	// IMP=0x00000000001590b6
- (id)implementationForUserInterfaceStyle:(long long)arg1;	// IMP=0x00000000001590ad
- (_Bool)canProvideCoreMaterialVibrancyEffect;	// IMP=0x000000000015908f
- (_Bool)canProvideVibrancyEffect;	// IMP=0x0000000000159071
- (_Bool)invertAutomaticStyle;	// IMP=0x0000000000159069
- (id)tintColor;	// IMP=0x0000000000159061
- (long long)style;	// IMP=0x0000000000159050
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000158ec3
- (unsigned long long)hash;	// IMP=0x0000000000158eb2
- (id)initWithLightMaterial:(id)arg1 darkMaterial:(id)arg2 bundle:(id)arg3;	// IMP=0x0000000000158dcb
- (id)initWithStyle:(long long)arg1;	// IMP=0x0000000000158d87
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000158d33

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIBlurEffectImpl : NSObject
{
}

+ (id)implementationFromCoder:(id)arg1;	// IMP=0x008000000015713b
- (void)appendDescriptionTo:(id)arg1;	// IMP=0x0000000000157569
- (_Bool)_needsUpdateForTransitionFromEnvironment:(id)arg1 toEnvironment:(id)arg2 usage:(long long)arg3;	// IMP=0x00000000001574ab
- (void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3;	// IMP=0x00000000001574a5
- (id)implementationForUserInterfaceStyle:(long long)arg1;	// IMP=0x000000000015749c
- (_Bool)canProvideCoreMaterialVibrancyEffect;	// IMP=0x0000000000157494
- (_Bool)canProvideVibrancyEffect;	// IMP=0x000000000015748c
- (_Bool)invertAutomaticStyle;	// IMP=0x0000000000157484
- (id)tintColor;	// IMP=0x000000000015747c
- (long long)style;	// IMP=0x000000000015746c
- (void)setEffect:(id)arg1;	// IMP=0x0000000000157466
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001573e9
- (unsigned long long)hash;	// IMP=0x000000000015736c
- (_Bool)requiresCopying;	// IMP=0x0000000000157364
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000015735e

@end


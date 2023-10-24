//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIColor;

__attribute__((visibility("hidden")))
@interface UIDynamicCatalogSystemColor
{
    long long _cuiColorName;	// 24 = 0x18
    struct os_unfair_lock_s _colorCacheLock;	// 32 = 0x20
    UIColor *_cachedColor;	// 40 = 0x28
    unsigned long long _cachedThemeKey;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000089e759
- (id)description;	// IMP=0x000000000089e6b7
- (id)_resolvedColorWithTraitCollection:(id)arg1;	// IMP=0x000000000089e329
- (unsigned long long)hash;	// IMP=0x000000000089e2e5
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000089e22b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000089e220
- (id)initWithName:(id)arg1 coreUIColorName:(long long)arg2;	// IMP=0x000000000089e09a

@end


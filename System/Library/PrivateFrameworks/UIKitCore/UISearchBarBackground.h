//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSString, UIColor, UIImage;

__attribute__((visibility("hidden")))
@interface UISearchBarBackground
{
    UIColor *_barTintColor;	// 144 = 0x90
    NSMutableDictionary *_customBackgroundImages;	// 152 = 0x98
    long long _barPosition;	// 160 = 0xa0
    unsigned long long _searchBarStyle;	// 168 = 0xa8
    long long _barStyle;	// 176 = 0xb0
    long long _barTranslucence;	// 184 = 0xb8
    _Bool _usesEmbeddedAppearance;	// 192 = 0xc0
    _Bool _usesContiguousBarBackground;	// 193 = 0xc1
}

- (void).cxx_destruct;	// IMP=0x0000000000251229
@property(retain, nonatomic) UIColor *barTintColor; // @synthesize barTintColor=_barTintColor;
- (void)_dynamicUserInterfaceTraitDidChange;	// IMP=0x00000000002511d7
- (void)didMoveToWindow;	// IMP=0x0000000000251196
- (void)_updateBackgroundImageIfPossible;	// IMP=0x00000000002510f3
@property(nonatomic) _Bool usesContiguousBarBackground;
- (_Bool)_hasCustomBackgroundImage;	// IMP=0x000000000025109c
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0000000000250ff4
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x0000000000250f4c
- (id)_backgroundImageForBarPosition:(long long)arg1 barMetrics:(long long)arg2;	// IMP=0x0000000000250ee8
- (void)_setBackgroundImage:(id)arg1 forBarPosition:(long long)arg2 barMetrics:(long long)arg3;	// IMP=0x0000000000250caf
@property(readonly, nonatomic) UIImage *backgroundImage;
@property(readonly, nonatomic) UIImage *backgroundImagePrompt;
- (void)_updateBackgroundImage;	// IMP=0x00000000002508d5
- (id)_createBackgroundImageForBarStyle:(long long)arg1 alpha:(double)arg2;	// IMP=0x0000000000250161
@property(nonatomic) unsigned long long searchBarStyle;
@property(nonatomic) long long barStyle;
@property(nonatomic) _Bool usesEmbeddedAppearance;
@property(nonatomic, getter=isTranslucent) _Bool translucent;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000024febd
- (long long)_barPosition;	// IMP=0x000000000024feac
- (void)_setBarPosition:(long long)arg1;	// IMP=0x000000000024fe87

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


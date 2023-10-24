//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIColor, UIView;

__attribute__((visibility("hidden")))
@interface _UIUCBPopoverBarButtonVisualProviderIOS
{
    UIView *_selectionBackgroundView;	// 40 = 0x28
    UIColor *_selectionBackgroundTintColor;	// 48 = 0x30
    UIColor *_selectionTintColor;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000001a9d23
@property(retain, nonatomic) UIColor *selectionTintColor; // @synthesize selectionTintColor=_selectionTintColor;
@property(retain, nonatomic) UIColor *selectionBackgroundTintColor; // @synthesize selectionBackgroundTintColor=_selectionBackgroundTintColor;
- (void)updateButton:(id)arg1 forSelectedState:(_Bool)arg2;	// IMP=0x00000000001a9c33
- (void)configureButton:(id)arg1 withAppearanceDelegate:(id)arg2 fromBarItem:(id)arg3;	// IMP=0x00000000001a9926
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001a985b
- (unsigned long long)hash;	// IMP=0x00000000001a97e2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001a976c
- (long long)_securePasteButtonSite;	// IMP=0x00000000001a9761
- (id)init;	// IMP=0x00000000001a9695

@end


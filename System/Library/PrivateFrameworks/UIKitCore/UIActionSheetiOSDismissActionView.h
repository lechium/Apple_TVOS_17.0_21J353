//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIButton;

__attribute__((visibility("hidden")))
@interface UIActionSheetiOSDismissActionView
{
    _Bool _usesShortCompactVerticalLayout;	// 128 = 0x80
    UIButton *_dismissButton;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x000000000044518e
@property(nonatomic) _Bool usesShortCompactVerticalLayout; // @synthesize usesShortCompactVerticalLayout=_usesShortCompactVerticalLayout;
@property(retain, nonatomic) UIButton *dismissButton; // @synthesize dismissButton=_dismissButton;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000004450ae
- (double)_heightForTraitCollection:(id)arg1;	// IMP=0x000000000044503f
@property(copy, nonatomic) NSString *title;
- (void)_setupDismissButton;	// IMP=0x0000000000444d7c
- (id)initWithContinuousCornerRadius:(double)arg1;	// IMP=0x0000000000444d11

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LPButtonStyle, LPCaptionButtonPresentationProperties, LPCircularProgressIndicator, UIButton, UISegmentedControl;

__attribute__((visibility("hidden")))
@interface LPCaptionBarButtonView
{
    LPCaptionButtonPresentationProperties *_properties;	// 8 = 0x8
    LPButtonStyle *_style;	// 16 = 0x10
    UIButton *_button;	// 24 = 0x18
    UIButton *_collapsedButton;	// 32 = 0x20
    UISegmentedControl *_segmentedControl;	// 40 = 0x28
    LPCircularProgressIndicator *_progressIndicator;	// 48 = 0x30
    _Bool _collapsed;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000966f2
@property(nonatomic, getter=isCollapsed) _Bool collapsed; // @synthesize collapsed=_collapsed;
- (_Bool)_menuButtonShowsSingleImage;	// IMP=0x000000000009659a
- (_Bool)_menuButtonShowsChevron;	// IMP=0x000000000009646c
- (_Bool)_menuButtonShowsIndicator;	// IMP=0x0000000000096404
- (_Bool)_menuButtonShowsImages;	// IMP=0x00000000000963fc
- (id)createUIActionsFromLPActionsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000095f8e
- (void)configureMenuButton:(id)arg1;	// IMP=0x000000000009512b
- (void)configureSegmentedControl:(id)arg1;	// IMP=0x000000000009510f
- (void)configurePillButton:(id)arg1;	// IMP=0x0000000000094d28
- (id)createCollapsedButton;	// IMP=0x0000000000094b99
- (id)createButton;	// IMP=0x0000000000094554
- (id)createSegmentedControl;	// IMP=0x0000000000093fe5
- (void)selectAndPerformAction:(id)arg1;	// IMP=0x0000000000093dc9
- (_Bool)shouldShowDownloadingIndicator;	// IMP=0x0000000000093d5e
- (void)updateProgressIndicator;	// IMP=0x0000000000093caa
- (void)createProgressIndicator;	// IMP=0x0000000000093bb9
- (void)removeTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x0000000000093b30
- (void)addTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x0000000000093aa7
- (struct CGSize)collapsedSizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000093a8a
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000093869
- (void)layoutComponentView;	// IMP=0x00000000000933cc
- (id)initWithHost:(id)arg1 properties:(id)arg2 style:(id)arg3;	// IMP=0x0000000000093131
- (id)initWithHost:(id)arg1;	// IMP=0x0000000000093123

@end


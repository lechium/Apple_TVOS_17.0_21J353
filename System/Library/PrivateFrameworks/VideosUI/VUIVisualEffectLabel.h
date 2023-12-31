//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSString, UIVisualEffectView, VUILabel;

__attribute__((visibility("hidden")))
@interface VUIVisualEffectLabel : UIView
{
    _Bool _disableClippingOnTallScripts;	// 8 = 0x8
    VUILabel *_label;	// 16 = 0x10
    UIVisualEffectView *_visualEffectView;	// 24 = 0x18
    unsigned long long _visualEffectLabelType;	// 32 = 0x20
    long long _blurEffectStyle;	// 40 = 0x28
}

+ (long long)_backdropStyleForVisualEffectType:(unsigned long long)arg1 traitCollection:(id)arg2;	// IMP=0x001000000003add2
+ (id)labelWithType:(unsigned long long)arg1 label:(id)arg2 traitCollection:(id)arg3 existingVisualEffectLabel:(id)arg4;	// IMP=0x001000000003a958
- (void).cxx_destruct;	// IMP=0x000000000003b043
@property(nonatomic) long long blurEffectStyle; // @synthesize blurEffectStyle=_blurEffectStyle;
@property(nonatomic) unsigned long long visualEffectLabelType; // @synthesize visualEffectLabelType=_visualEffectLabelType;
@property(retain, nonatomic) UIVisualEffectView *visualEffectView; // @synthesize visualEffectView=_visualEffectView;
@property(nonatomic) _Bool disableClippingOnTallScripts; // @synthesize disableClippingOnTallScripts=_disableClippingOnTallScripts;
@property(retain, nonatomic) VUILabel *label; // @synthesize label=_label;
- (void)_configureVisualEffectForTraitCollection;	// IMP=0x000000000003ae59
- (double)vui_baselineOffsetFromBottom;	// IMP=0x000000000003adb5
- (double)topMarginToLabel:(id)arg1 withBaselineMargin:(double)arg2;	// IMP=0x000000000003ad98
@property(readonly, nonatomic) double vuiBaselineHeight;
- (void)_updateContentWithNewLabel:(id)arg1 oldLabel:(id)arg2;	// IMP=0x000000000003ace8
- (void)layoutSubviews;	// IMP=0x000000000003ab9e
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000003ab81
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000003a7bf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


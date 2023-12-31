//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class MISSING_TYPE, UISlider, UISliderDataModel;

__attribute__((visibility("hidden")))
@interface _UISliderFluidVisualElement : UIView
{
    MISSING_TYPE *slider;	// 8 = 0x8
    MISSING_TYPE *data;	// 16 = 0x10
    MISSING_TYPE *clipView;	// 24 = 0x18
    MISSING_TYPE *minimumTrackView;	// 32 = 0x20
    MISSING_TYPE *maximumTrackView;	// 40 = 0x28
    MISSING_TYPE *minimumTrackEffectView;	// 48 = 0x30
    MISSING_TYPE *maximumTrackEffectView;	// 56 = 0x38
    MISSING_TYPE *minimumView;	// 64 = 0x40
    MISSING_TYPE *maximumView;	// 72 = 0x48
    MISSING_TYPE *usingSliderStyling;	// 80 = 0x50
    MISSING_TYPE *changeWithVolumeButtons;	// 81 = 0x51
    MISSING_TYPE *fluidInteraction;	// 88 = 0x58
    MISSING_TYPE *expansionGesture;	// 96 = 0x60
    MISSING_TYPE *isInteractivelyChanging;	// 104 = 0x68
    MISSING_TYPE *stretchLimit;	// 112 = 0x70
    MISSING_TYPE *paddingAroundImage;	// 120 = 0x78
    MISSING_TYPE *defaultSliderHeight;	// 128 = 0x80
    MISSING_TYPE *defaultExpansionFactor;	// 136 = 0x88
    MISSING_TYPE *fluidUpdateSource;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x000000000002e340
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000000002e290
- (void)handleExpansionGesture:(id)arg1;	// IMP=0x000000000002c7c0
@property(nonatomic) struct CGRect bounds;
@property(nonatomic) struct CGRect frame;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000002b150
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;	// IMP=0x0000000000030d30
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002ad00
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000002acd0
@property(nonatomic) unsigned long long fluidUpdateSource; // @synthesize fluidUpdateSource;
@property(nonatomic) _Bool changeWithVolumeButtons; // @synthesize changeWithVolumeButtons;
@property(nonatomic, retain) UISliderDataModel *data; // @synthesize data;
@property(nonatomic) __weak UISlider *slider; // @synthesize slider;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UIBlurEffect, UIColor, UIFont, UISegmentedControl, UITraitCollection, UIVibrancyEffect, UIView;
@protocol UISegmentBezelView, UISegmentProtocol;

@protocol UISegmentedControlStyleProvider <NSObject>
@property(readonly, nonatomic) _Bool usesContinuousCurveCorners;
@property(readonly, nonatomic) double mostlyInsideMargin;
@property(readonly, nonatomic) _Bool hasShadowWithSelectedSegmentEffect;
@property(readonly, nonatomic) UIVibrancyEffect *unselectedSegmentContentDefaultVibrancyEffect;
@property(readonly, nonatomic) UIVibrancyEffect *selectedSegmentContentDefaultVibrancyEffect;
@property(readonly, nonatomic) UIBlurEffect *selectedSegmentDefaultBlurEffect;
@property(readonly, nonatomic) UIVibrancyEffect *selectedSegmentDefaultVibrancyEffect;
@property(readonly, nonatomic) double defaultInterSegmentSpacing;
@property(readonly, nonatomic) _Bool supportsAXPopover;
@property(readonly, nonatomic) _Bool supportsDynamicTypeByDefault;
@property(readonly, nonatomic) UIColor *defaultBackgroundTintColor;
@property(readonly, nonatomic) _Bool hasTransparentBackgroundByDefault;
@property(readonly, nonatomic) _Bool limitInternalLayoutAndInteractionToDefaultHeight;
@property(readonly, nonatomic) double segmentHidingFinalScaleFactor;
@property(readonly, nonatomic) double segmentSelectionScaleFactor;
@property(readonly, nonatomic) double defaultTextContentPaddingWidth;
@property(readonly, nonatomic) double defaultContentPaddingWidth;
@property(readonly, nonatomic) _Bool useTVStyleFocusSelection;
@property(readonly, nonatomic) _Bool animateSlidingSelectionByDefault;
@property(readonly, nonatomic) _Bool useSelectionIndicatorStyling;
@property(readonly, nonatomic) _Bool useGeneratedImages;
- (void)touchesEnded;
- (void)touchesBegan;
- (UIColor *)fontColorForSegment:(UIView<UISegmentProtocol> *)arg1 enabled:(_Bool)arg2 selected:(_Bool)arg3 state:(unsigned long long)arg4;
- (UIFont *)fontForControlSize:(int)arg1 selected:(_Bool)arg2;
- (struct UIEdgeInsets)alignmentInsetsForControlSize:(int)arg1 bounds:(struct CGRect)arg2 traitCollection:(UITraitCollection *)arg3;
- (double)dividerWidthForControlSize:(int)arg1;
- (double)selectionIndicatorInsetForControlSize:(int)arg1;
- (double)cornerRadiusForControlSize:(int)arg1;
- (UIView *)createSelectedSegmentEffectShadowView;
- (UIView<UISegmentBezelView> *)createSegmentBezelView;
- (UIView *)createBackdropView;
- (double)defaultHeightForControlSize:(int)arg1 traitCollection:(UITraitCollection *)arg2;
- (struct UIEdgeInsets)contentInsetsForControlSize:(int)arg1 position:(unsigned int)arg2 bounds:(struct CGRect)arg3 traitCollection:(UITraitCollection *)arg4;

@optional
@property(readonly, nonatomic) UIVibrancyEffect *highlightedSegmentDefaultVibrancyEffect;
@property(readonly, nonatomic) _Bool animateHighlightingSelectionByDefault;
- (void)updateSegmentedControl:(UISegmentedControl *)arg1 fromTraitCollection:(UITraitCollection *)arg2;
- (void)setActiveSegmentControl:(UISegmentedControl *)arg1;
@end


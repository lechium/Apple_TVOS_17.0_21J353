//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIButtonVisualProvider-Protocol.h>

@class UIImageView, UILabel;
@protocol _UIButtonConfigurationShim;

@protocol UIButtonModernVisualProvider <UIButtonVisualProvider>
@property(nonatomic) double previousLastBaselineOffsetForAttributeLowering;
@property(nonatomic) double previousFirstBaselineOffsetForAttributeLowering;
@property(nonatomic) _Bool vendsBaselineInformationToAutoLayout;
@property(readonly, nonatomic) _Bool hasBaseline;
@property(readonly, nonatomic) _Bool hasMultilineText;
@property(nonatomic) double widthForMultilineTextLayout;
- (void)alignmentRectInsetsHaveChangedForChildImageView:(UIImageView *)arg1;
- (void)invalidateLayoutData;
- (void)updateBaselineInformationDependentOnBounds;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (struct CGSize)intrinsicContentSize;
- (UILabel *)subtitleViewCreateIfNeeded:(_Bool)arg1;
- (void)applyConfiguration;
- (void)updateConfigurationIfNecessary;
- (void)setNeedsUpdateConfiguration;
- (void)automaticallyUpdateConfigurationIfNecessary:(id <_UIButtonConfigurationShim>)arg1;
@end


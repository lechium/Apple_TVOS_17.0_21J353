//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SystemStatusUI/NSObject-Protocol.h>

@class BSAnimationSettings, NSArray, NSOrderedSet, NSSet, NSString, STMutableStatusBarData, STStatusBarData, STUIStatusBar, STUIStatusBarAnimation, STUIStatusBarDisplayItem, STUIStatusBarIdentifier, STUIStatusBarItem, STUIStatusBarRegion, STUIStatusBarStyleAttributes, UIFont, UIView;
@protocol STUIStatusBarActionable;

@protocol STUIStatusBarVisualProvider <NSObject>
+ (_Bool)requiresIterativeOverflowLayout;
+ (_Bool)scalesWithScreenNativeScale;
+ (struct CGSize)intrinsicContentSizeForOrientation:(long long)arg1;
@property(readonly, nonatomic) UIFont *clockFont;
@property(nonatomic) __weak STUIStatusBar *statusBar;
- (STUIStatusBarStyleAttributes *)styleAttributesForStyle:(long long)arg1;
- (NSArray *)orderedDisplayItemPlacementsInRegionWithIdentifier:(NSString *)arg1;
- (NSArray *)setupInContainerView:(UIView *)arg1;

@optional
+ (double)referenceScreenScale;
+ (struct CGSize)intrinsicLockScreenContentSizeForOrientation:(long long)arg1;
@property(readonly, nonatomic) _Bool canFixupDisplayItemAttributes;
- (_Bool)showSensorActivityIndicatorWithoutPortalView;
- (NSSet *)displayItemIdentifiersForPartWithIdentifier:(NSString *)arg1;
- (NSSet *)regionIdentifiersForPartWithIdentifier:(NSString *)arg1;
- (void)actionable:(id <STUIStatusBarActionable>)arg1 highlighted:(_Bool)arg2 initialPress:(_Bool)arg3;
- (STUIStatusBarAnimation *)removalAnimationForDisplayItemWithIdentifier:(STUIStatusBarIdentifier *)arg1 itemAnimation:(STUIStatusBarAnimation *)arg2;
- (STUIStatusBarAnimation *)additionAnimationForDisplayItemWithIdentifier:(STUIStatusBarIdentifier *)arg1 itemAnimation:(STUIStatusBarAnimation *)arg2;
- (STUIStatusBarStyleAttributes *)overriddenStyleAttributesForDisplayItemWithIdentifier:(STUIStatusBarIdentifier *)arg1;
- (struct CGRect)clockBoundsForLayoutItem:(STUIStatusBarDisplayItem *)arg1;
- (void)itemCreated:(STUIStatusBarItem *)arg1;
- (void)statusBarEnabledPartsUpdated;
- (void)statusBarRegionsUpdated;
- (void)dataUpdated:(STStatusBarData *)arg1;
- (NSOrderedSet *)region:(STUIStatusBarRegion *)arg1 willSetDisplayItems:(NSOrderedSet *)arg2;
- (NSArray *)willUpdateWithData:(STMutableStatusBarData *)arg1;
- (void)updateLumaTracking:(_Bool)arg1;
- (void)sizeUpdatedFromSize:(struct CGSize)arg1;
- (void)avoidanceFrameUpdatedFromFrame:(struct CGRect)arg1 withAnimationSettings:(BSAnimationSettings *)arg2 options:(unsigned long long)arg3;
- (void)styleUpdatedFromStyle:(long long)arg1;
- (void)orientationUpdatedFromOrientation:(long long)arg1;
- (void)modeUpdatedFromMode:(long long)arg1;
@end


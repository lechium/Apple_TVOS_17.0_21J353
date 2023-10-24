//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIFont, _UIStatusBar, _UIStatusBarRegion, _UIStatusBarVisualProvider_PillRegionCoordinator;

__attribute__((visibility("hidden")))
@interface _UIStatusBarVisualProvider_CarPlay : NSObject
{
    _Bool _showingSensorActivityIndicator;	// 8 = 0x8
    _Bool _showingPill;	// 9 = 0x9
    _UIStatusBar *_statusBar;	// 16 = 0x10
    _UIStatusBarVisualProvider_PillRegionCoordinator *_pillRegionCoordinator;	// 24 = 0x18
    _UIStatusBarRegion *_timeRegion;	// 32 = 0x20
    _UIStatusBarRegion *_radarRegion;	// 40 = 0x28
}

+ (_Bool)requiresIterativeOverflowLayout;	// IMP=0x0010000000f5ffc1
+ (_Bool)scalesWithScreenNativeScale;	// IMP=0x0010000000f5ffb9
+ (struct CGSize)intrinsicContentSizeForOrientation:(long long)arg1;	// IMP=0x0010000000f5ffa8
+ (Class)visualProviderSubclassForScreen:(id)arg1 visualProviderInfo:(id)arg2;	// IMP=0x0010000000f5ff0a
- (void).cxx_destruct;	// IMP=0x0000000000f60f53
@property(nonatomic) _Bool showingPill; // @synthesize showingPill=_showingPill;
@property(nonatomic) _Bool showingSensorActivityIndicator; // @synthesize showingSensorActivityIndicator=_showingSensorActivityIndicator;
@property(retain, nonatomic) _UIStatusBarRegion *radarRegion; // @synthesize radarRegion=_radarRegion;
@property(retain, nonatomic) _UIStatusBarRegion *timeRegion; // @synthesize timeRegion=_timeRegion;
@property(retain, nonatomic) _UIStatusBarVisualProvider_PillRegionCoordinator *pillRegionCoordinator; // @synthesize pillRegionCoordinator=_pillRegionCoordinator;
@property(nonatomic) __weak _UIStatusBar *statusBar; // @synthesize statusBar=_statusBar;
- (_Bool)showSensorActivityIndicatorWithoutPortalView;	// IMP=0x0000000000f60eaf
- (id)setupInContainerView:(id)arg1;	// IMP=0x0000000000f60ea2
- (id)overriddenStyleAttributesForDisplayItemWithIdentifier:(id)arg1;	// IMP=0x0000000000f60d41
- (id)orderedDisplayItemPlacementsInRegionWithIdentifier:(id)arg1;	// IMP=0x0000000000f60d34
- (id)_animationForPillTime;	// IMP=0x0000000000f60d10
- (id)_animationForSensorIndicator;	// IMP=0x0000000000f60c6f
- (id)_defaultScaleAnimationWithIdentifier:(id)arg1;	// IMP=0x0000000000f60be1
- (void)actionable:(id)arg1 highlighted:(_Bool)arg2 initialPress:(_Bool)arg3;	// IMP=0x0000000000f60aa7
- (id)removalAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2;	// IMP=0x0000000000f6083f
- (id)additionAnimationForDisplayItemWithIdentifier:(id)arg1 itemAnimation:(id)arg2;	// IMP=0x0000000000f605d7
- (id)willUpdateWithData:(id)arg1;	// IMP=0x0000000000f60406
- (id)styleAttributesForStyle:(long long)arg1;	// IMP=0x0000000000f60165
- (double)animatedTypeDisplayItemSpacingFactorForCellularType:(long long)arg1;	// IMP=0x0000000000f60157
- (id)condensedFontForCellularType:(long long)arg1 defaultFont:(id)arg2 baselineOffset:(double *)arg3;	// IMP=0x0000000000f60141
- (id)stringForCellularType:(long long)arg1 condensed:(_Bool)arg2;	// IMP=0x0000000000f60115
- (void)itemCreated:(id)arg1;	// IMP=0x0000000000f60088
@property(nonatomic) _Bool expanded;
- (id)init;	// IMP=0x0000000000f5ffd1
@property(readonly, nonatomic) UIFont *clockFont;

// Remaining properties
@property(readonly, nonatomic) _Bool canFixupDisplayItemAttributes;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


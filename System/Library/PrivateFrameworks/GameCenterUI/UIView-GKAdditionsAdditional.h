//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@interface UIView (GKAdditionsAdditional)
+ (id)_gkViewFromNib;	// IMP=0x00200000000d7344
+ (id)_gkStandardBackdropView;	// IMP=0x00200000000e8ac6
- (id)_gkAncestryAffectingVisualLayout;	// IMP=0x001000000000935d
- (id)_gkAncestryDescription;	// IMP=0x0010000000009236
- (id)_gkRecursiveDescriptionForValue:(id)arg1 forKey:(id)arg2;	// IMP=0x0010000000009221
- (id)_gkRecursiveDescriptionForValue:(id)arg1 forKey:(id)arg2 depth:(long long)arg3;	// IMP=0x0010000000009048
- (id)_gkRecursiveDescriptionForKey:(id)arg1 depth:(long long)arg2;	// IMP=0x0010000000008eb4
- (id)_gkRecursiveDescriptionForKey:(id)arg1;	// IMP=0x0010000000008ea0
- (void)_gkRecursivelyApplyBlock:(CDUnknownBlockType)arg1 depth:(long long)arg2;	// IMP=0x0010000000008dac
- (void)_gkSetNeedsRender;	// IMP=0x00100000000934b6
- (void)_gkRemoveAllConstraints;	// IMP=0x00100000000ac885
- (void)_gkUseAsModalSheetBackgroundWithGroupName:(id)arg1;	// IMP=0x00100000000e8eee
- (void)_gkApplyBackdropViewIfNeededWithGroupName:(id)arg1;	// IMP=0x00100000000e8d56
- (void)_gkApplyBackdropViewWithGroupName:(id)arg1;	// IMP=0x00100000000e8cd7
- (id)_gkBackdropView;	// IMP=0x00100000000e8c43
- (id)_gkApplyFakeStatusBarView;	// IMP=0x00100000000e8b3c
- (void)_gkSetDrawsAsKnockout:(_Bool)arg1 inBackdrop:(id)arg2;	// IMP=0x00100000000e8a0e
- (void)_gkSetDrawsAsBackdropOverlay:(_Bool)arg1;	// IMP=0x00100000000e89d8
@property(nonatomic, readonly) double lastBaselineMaxY;
@property(nonatomic, readonly) double lastBaselineFromBottom;
@property(nonatomic, readonly) double firstBaselineFromTop;
@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSString, PXViewSpec;

@interface UIView (PXLayoutParticipant)
+ (struct CGSize)px_videoOverlayButtonSizeWithConfiguration:(id)arg1;	// IMP=0x00100000002432c3
+ (struct CGSize)px_videoOverlayButtonSize;	// IMP=0x001000000024325d
+ (id)px_videoOverlayButtonWithStyle:(long long)arg1;	// IMP=0x0010000000243246
+ (id)px_videoOverlayButtonWithStyle:(long long)arg1 allowBackdropStatisticsSupression:(_Bool)arg2;	// IMP=0x00100000002431c1
+ (id)px_videoOverlayButtonWithConfiguration:(id)arg1;	// IMP=0x0010000000243102
+ (void)px_preloadResourcesForVideoOverlayButtonWithStyle:(long long)arg1;	// IMP=0x001000000024302e
+ (id)px_contentLoadingView;	// IMP=0x0010000000a52307
+ (id)px_circularGlyphViewWithName:(id)arg1 backgroundColor:(id)arg2;	// IMP=0x0010000000a5211e
+ (void)px_animateUsingDefaultDampedEaseInEaseOutWithDuration:(double)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000a51fed
+ (void)_px_animateView:(id)arg1 toCenter:(struct CGPoint)arg2 bounds:(struct CGRect)arg3 transform:(struct CGAffineTransform)arg4 withInitialVelocity:(struct PXDisplayVelocity)arg5 usingSpringAnimation:(CDUnknownBlockType)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x0010000000a51148
+ (void)px_animateView:(id)arg1 toCenter:(struct CGPoint)arg2 bounds:(struct CGRect)arg3 transform:(struct CGAffineTransform)arg4 usingDefaultDampedSpringWithDelay:(double)arg5 initialVelocity:(struct PXDisplayVelocity)arg6 options:(unsigned long long)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x0010000000a510b0
+ (void)px_animateView:(id)arg1 toCenter:(struct CGPoint)arg2 bounds:(struct CGRect)arg3 transform:(struct CGAffineTransform)arg4 withDuration:(double)arg5 delay:(double)arg6 usingSpringWithDamping:(double)arg7 initialVelocity:(struct PXDisplayVelocity)arg8 options:(unsigned long long)arg9 completion:(CDUnknownBlockType)arg10;	// IMP=0x0010000000a5100e
- (_Bool)shouldReloadForUserData:(id)arg1;	// IMP=0x001000000010dd6f
@property(readonly, nonatomic) _Bool shouldReuseWhenInvisible;
- (void)pxg_shiftPosition:(struct CGPoint)arg1;	// IMP=0x001000000010dd1d
- (void)pxg_configureWithTexture:(id)arg1 geometry:(CDStruct_4f725fed *)arg2 info:(CDStruct_12471299 *)arg3 style:(CDStruct_a79e78a9 *)arg4 textureInfo:(CDStruct_37a3040a *)arg5 resizableCapInsets:(CDStruct_818bb265)arg6 reusableViewInfo:(id)arg7 screenScale:(double)arg8 separateLayers:(_Bool)arg9;	// IMP=0x001000000010d230
- (void)pxg_prepareForReuse;	// IMP=0x001000000010d200
- (void)pxg_becomeReusable;	// IMP=0x001000000010d16f
- (void)pxg_removeFromSuperview;	// IMP=0x001000000010d15d
- (_Bool)pxg_hasSuperview;	// IMP=0x001000000010d12a
- (void)pxg_addToHostingView:(id)arg1;	// IMP=0x001000000010d09e
- (void)pxg_addToScrollViewController:(id)arg1;	// IMP=0x001000000010d012
@property(retain, nonatomic, setter=px_setSpec:) PXViewSpec *px_spec;
- (void)px_transferToSuperview:(id)arg1;	// IMP=0x0010000000a50bd1
- (struct CGAffineTransform)px_convertTransform:(struct CGAffineTransform)arg1 toView:(id)arg2;	// IMP=0x0010000000a50b71
- (struct CGAffineTransform)px_convertTransform:(struct CGAffineTransform)arg1 fromView:(id)arg2;	// IMP=0x0010000000a50811
- (void)px_enumerateSuperviewsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000a50768
- (void)px_enumerateDescendantSubviewsPassingTest:(CDUnknownBlockType)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000a504cb
- (void)px_enumerateDescendantSubviewsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000a504af
- (id)px_ancestorSharedWithView:(id)arg1;	// IMP=0x0010000000a503ca
- (id)px_ancestorViewPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x0010000000a50352
- (id)px_ancestorViewOfClass:(Class)arg1;	// IMP=0x0010000000a502f4
- (_Bool)px_isAncestorOfFocusEnvironment:(id)arg1;	// IMP=0x0010000000a5026e
@property(readonly, nonatomic) _Bool px_hasHiddenAncestor;
- (void)px_addFullBoundsSubview:(id)arg1;	// IMP=0x0010000000a4ff19
@property(readonly, nonatomic) struct UIEdgeInsets px_peripheryInsets;
@property(readonly, nonatomic) _Bool px_hasRightToLeftLayoutDirection;
@property(readonly, nonatomic) double px_screenScale;
@property(readonly, nonatomic) _Bool px_intersectsWindowBounds;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) struct CGRect frame;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end


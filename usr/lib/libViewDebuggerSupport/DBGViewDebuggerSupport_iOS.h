//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface DBGViewDebuggerSupport_iOS
{
}

+ (id)viewForLastBaselineLayoutPointerForView:(id)arg1;	// IMP=0x0010000000023fa4
+ (id)viewForFirstBaselineLayoutPointerForView:(id)arg1;	// IMP=0x0010000000023ef9
+ (double)lastBaselineOffsetFromBottomForView:(id)arg1;	// IMP=0x0010000000023d0f
+ (double)firstBaselineOffsetFromTopForView:(id)arg1;	// IMP=0x0010000000023b24
+ (_Bool)ibShouldIgnoreScrollableContentHeightAmbiguityForRepresentationOfItem:(id)arg1;	// IMP=0x0010000000023a9b
+ (_Bool)ibShouldIgnoreScrollableContentWidthAmbiguityForRepresentationOfItem:(id)arg1;	// IMP=0x0010000000023a12
+ (unsigned long long)ambiguityStatusMaskForView:(id)arg1;	// IMP=0x00100000000235b7
+ (_Bool)_viewHasAmbiguousLayout:(id)arg1;	// IMP=0x00100000000234f2
+ (void)addLayoutInfoForView:(id)arg1 toDict:(id)arg2;	// IMP=0x0010000000022e90
+ (void)addViewBasics:(id)arg1 toDict:(id)arg2;	// IMP=0x0010000000022add
+ (void)addFrameBasics:(id)arg1 toDict:(id)arg2;	// IMP=0x0010000000022927
+ (id)_renderEffectViewUsingDrawHierarchyInRect:(id)arg1;	// IMP=0x0010000000021e19
+ (_Bool)_isEffectView:(id)arg1;	// IMP=0x0010000000021c6b
+ (id)snapshotView:(id)arg1 errorString:(id *)arg2;	// IMP=0x001000000002174d
+ (_Bool)isViewSubclass:(id)arg1;	// IMP=0x001000000002170b
+ (_Bool)isWindowSubclass:(id)arg1;	// IMP=0x00100000000216c9
+ (id)subviewsForView:(id)arg1;	// IMP=0x00100000000215db
+ (id)layerForView:(id)arg1;	// IMP=0x00100000000215c6
+ (id)_messagesUIExtensionViews;	// IMP=0x0010000000021425
+ (id)additionalRootLevelViewsToArchive;	// IMP=0x0010000000021413
+ (double)screenBackingScaleForView:(id)arg1;	// IMP=0x0010000000021364
+ (double)screenBackingScaleForWindow:(id)arg1;	// IMP=0x0010000000021311
+ (id)titleForWindow:(id)arg1;	// IMP=0x00100000000212ff
+ (_Bool)isHiddenForWindow:(id)arg1;	// IMP=0x00100000000212ea
+ (id)windowContentViewForWindow:(id)arg1;	// IMP=0x00100000000212d4
+ (id)appWindows;	// IMP=0x001000000002127d
+ (id)snapshotMethodForView:(id)arg1;	// IMP=0x00100000000211fc
+ (id)primaryWindowFromWindows:(id)arg1;	// IMP=0x0010000000020fda
+ (id)displayNameForView:(id)arg1;	// IMP=0x0010000000020ddd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


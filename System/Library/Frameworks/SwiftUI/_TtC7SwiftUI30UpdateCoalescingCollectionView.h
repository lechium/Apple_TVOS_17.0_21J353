//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionView.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC7SwiftUI30UpdateCoalescingCollectionView : UICollectionView
{
    MISSING_TYPE *safeAreaTransitionState;	// 8 = 0x8
    MISSING_TYPE *helper;	// 24 = 0x18
    MISSING_TYPE *cachedIdealSize;	// 32 = 0x20
    MISSING_TYPE *visibleCellsUpdate;	// 56 = 0x38
    MISSING_TYPE *postUpdateInvalidations;	// 72 = 0x48
    MISSING_TYPE *ignoreGraphUpdates;	// 80 = 0x50
    MISSING_TYPE *pendingGraphUpdate;	// 84 = 0x54
    MISSING_TYPE *pendingScrollTarget;	// 85 = 0x55
    MISSING_TYPE *pendingDeselectedItem;	// 1651466079 = 0x626f5f5f
    MISSING_TYPE *_lastUpdateSeed;	// 0 = 0x0
    MISSING_TYPE *bridgedState;	// 1936941420 = 0x7373616c
    MISSING_TYPE *eventState;	// 1094999903 = 0x41445f5f
}

+ (_Bool)_isFromSwiftUI;	// IMP=0x0060000000ccc58c
- (void).cxx_destruct;	// IMP=0x0000000000cce880
@property(nonatomic, readonly) _Bool _wantsConstraintBasedLayout;
- (void)didMoveToWindow;	// IMP=0x0000000000cce827
@property(nonatomic, readonly) _Bool canBecomeFirstResponder;
- (void)safeAreaInsetsDidChange;	// IMP=0x0000000000cce67b
- (void)performBatchUpdates:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000cce0c5
- (void)layoutSubviews;	// IMP=0x0000000000ccd871
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000ccd68a
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;	// IMP=0x0000000000ccd4b2
@property(nonatomic) struct CGSize contentSize;
@property(nonatomic) struct CGRect bounds;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_$s8VideosUI17VUIViewControllerCN.h"

@class MISSING_TYPE, NSArray;

__attribute__((visibility("hidden")))
@interface _TtC8VideosUI19StackViewController : _$s8VideosUI17VUIViewControllerCN
{
    MISSING_TYPE *peekingEnabled;	// 8 = 0x8
    MISSING_TYPE *collectionImpressioner;	// 16 = 0x10
    MISSING_TYPE *minYOffsetForPeeking;	// 56 = 0x38
    MISSING_TYPE *maxYOffsetForPeeking;	// 72 = 0x48
    MISSING_TYPE *cardTransitionInProgress;	// 81 = 0x51
    MISSING_TYPE *stackType;	// 82 = 0x52
    MISSING_TYPE *$__lazy_storage_$_collectionView;	// 88 = 0x58
    MISSING_TYPE *supplementaryHeaderTypeToKindMap;	// 96 = 0x60
    MISSING_TYPE *supplementaryFooterTypeToKindMap;	// 104 = 0x68
    MISSING_TYPE *supplementaryKindToReuseIdentifierMap;	// 112 = 0x70
    MISSING_TYPE *$__lazy_storage_$_dataSource;	// 120 = 0x78
    MISSING_TYPE *templateViewModel;	// 128 = 0x80
    MISSING_TYPE *collectionViewModel;	// 136 = 0x88
    MISSING_TYPE *$__lazy_storage_$_prototypeCells;	// 144 = 0x90
    MISSING_TYPE *$__lazy_storage_$_supplementaryCells;	// 152 = 0x98
    MISSING_TYPE *sectionViewModels;	// 160 = 0xa0
    MISSING_TYPE *$__lazy_storage_$_hostingCellViewControllers;	// 168 = 0xa8
    MISSING_TYPE *cellConfigurator;	// 176 = 0xb0
    MISSING_TYPE *cellActionInterceptor;	// 192 = 0xc0
    MISSING_TYPE *sectionMetrics;	// 208 = 0xd0
    MISSING_TYPE *currentFocusedIndexPath;	// 0 = 0x0
    MISSING_TYPE *lastFocusedIndexPath;	// 1651466079 = 0x626f5f5f
    MISSING_TYPE *lastFocusedIndexPathContentOffset;	// 1869898601 = 0x6f746369
    MISSING_TYPE *dynamicSectionMetricsWidthMap;	// 1094999903 = 0x41445f5f
    MISSING_TYPE *$__lazy_storage_$_pendingHeaderAdjustments;	// 2303256201 = 0x8948e689
    MISSING_TYPE *focusedIndexPathForHeaderAdjustment;	// 1414745679 = 0x54534e4f
    MISSING_TYPE *scrollViewBeingObservedForHeaderAdjustment;	// 11091504 = 0xa93e30
    MISSING_TYPE *headerAdjustmentOnScrollWorkItem;	// 1440 = 0x5a0
    MISSING_TYPE *_showcasePercentage;	// 2792293173 = 0xa66f0335
    MISSING_TYPE *showcasePercentageContentTopAdjustment;	// 11091504 = 0xa93e30
    MISSING_TYPE *_showcaseHeight;	// 3905390920 = 0xe8c78948
    MISSING_TYPE *verticalPaginationMonitor;	// 1220970825 = 0x48c68949
    MISSING_TYPE *nextFocusedViewFromCollectionView;	// 2303197349 = 0x894800a5
    MISSING_TYPE *contextMenuInteractor;	// 3905390920 = 0xe8c78948
}

- (void).cxx_destruct;	// IMP=0x00000000007b65ae
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000007b67c5
- (void)dealloc;	// IMP=0x00000000007b6591
- (_Bool)shouldUpdateFocusInContext:(id)arg1;	// IMP=0x00000000007b5383
- (void)vui_viewDidLayoutSubviews;	// IMP=0x00000000007b49d4
- (void)vui_viewDidAppear:(_Bool)arg1;	// IMP=0x00000000007b4931
- (void)vui_viewDidDisappear:(_Bool)arg1;	// IMP=0x00000000007b44b4
- (void)vui_viewDidLoad;	// IMP=0x00000000007b43f0
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000007b3fc9
@property(nonatomic, readonly) NSArray *preferredFocusEnvironments;
- (void)_observeScrollViewDidScroll:(id)arg1;	// IMP=0x00000000006b9be7

@end


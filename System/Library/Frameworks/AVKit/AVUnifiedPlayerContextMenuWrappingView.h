//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class AVUnifiedPlayerContextMenuView, NSArray, UICollectionView;
@protocol AVUnifiedPlayerContextMenuViewDelegate;

__attribute__((visibility("hidden")))
@interface AVUnifiedPlayerContextMenuWrappingView : UIView
{
    AVUnifiedPlayerContextMenuView *_contextMenuView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000afe73
@property(readonly, nonatomic) AVUnifiedPlayerContextMenuView *contextMenuView; // @synthesize contextMenuView=_contextMenuView;
- (id)preferredFocusEnvironments;	// IMP=0x00000000000afe3b
- (void)layoutSubviews;	// IMP=0x00000000000afd6e
- (void)flipHorizontalAxisIfNeededMatchingCollectionView:(id)arg1;	// IMP=0x00000000000afcc9
@property(readonly, nonatomic) UIView *viewForAnimatingOpacity;
@property(readonly, nonatomic) UIView *viewForAnimatingTransform;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000afa50
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00000000000aff17
@property(nonatomic) __weak id <AVUnifiedPlayerContextMenuViewDelegate> delegate;
@property(readonly, nonatomic) NSArray *collectionViews;
@property(readonly, nonatomic) UICollectionView *focusableCollectionView;
@property(readonly, nonatomic) UICollectionView *clippedCollectionView;

@end

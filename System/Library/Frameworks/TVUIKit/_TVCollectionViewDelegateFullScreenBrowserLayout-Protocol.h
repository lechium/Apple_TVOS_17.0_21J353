//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVUIKit/UICollectionViewDelegate-Protocol.h>

@class NSIndexPath, UICollectionView, _TVCollectionViewFullScreenBrowserLayout;

@protocol _TVCollectionViewDelegateFullScreenBrowserLayout <UICollectionViewDelegate>

@optional
- (void)collectionView:(UICollectionView *)arg1 centerIndexPathTransitionStateDidChangeForLayout:(_TVCollectionViewFullScreenBrowserLayout *)arg2;
- (void)collectionView:(UICollectionView *)arg1 centerIndexPathDidChangeForLayout:(_TVCollectionViewFullScreenBrowserLayout *)arg2;
- (_Bool)collectionView:(UICollectionView *)arg1 shouldShowItemAtIndexPath:(NSIndexPath *)arg2;
@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class UICollectionView;

__attribute__((visibility("hidden")))
@interface VUIShelfView : UIView
{
    UIView *_headerView;	// 8 = 0x8
    UICollectionView *_collectionView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001cbd3d
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000001cbbde
- (void)layoutSubviews;	// IMP=0x00000000001cb902

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, UICollectionView, UIImage, UIImageView;

__attribute__((visibility("hidden")))
@interface _TVAlertTemplateView : UIView
{
    UIImage *_bgImage;	// 8 = 0x8
    UIImageView *_bgImageView;	// 16 = 0x10
    NSArray *_viewsAbove;	// 24 = 0x18
    UICollectionView *_collectionView;	// 32 = 0x20
    NSArray *_viewsBelow;	// 40 = 0x28
    struct UIEdgeInsets _padding;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000017938e
@property(retain, nonatomic) NSArray *viewsBelow; // @synthesize viewsBelow=_viewsBelow;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) NSArray *viewsAbove; // @synthesize viewsAbove=_viewsAbove;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
- (void)layoutSubviews;	// IMP=0x000000000017866a
- (void)setBgImage:(id)arg1;	// IMP=0x00000000001781ca

@end


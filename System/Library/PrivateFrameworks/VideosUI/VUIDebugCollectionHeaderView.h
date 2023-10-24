//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionReusableView.h>

@class VUILabel, VUISeparatorView, VUITextLayout;

__attribute__((visibility("hidden")))
@interface VUIDebugCollectionHeaderView : UICollectionReusableView
{
    VUITextLayout *_titleLayout;	// 8 = 0x8
    VUILabel *_titleLabel;	// 16 = 0x10
    VUISeparatorView *_separatorView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000024c96
@property(retain, nonatomic) VUISeparatorView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) VUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) VUITextLayout *titleLayout; // @synthesize titleLayout=_titleLayout;
- (void)layoutSubviews;	// IMP=0x0000000000024a2c
- (void)configureHeaderViewWithTitle:(id)arg1;	// IMP=0x00000000000249f1
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000247fd

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIImage, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface MKFirstPartyPhotoBigAttributionView
{
    UIImageView *_glyphView;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000010108a
- (void)didEndAnimatingActivityIndicatorView;	// IMP=0x0000000000101065
- (void)willStartAnimatingActivityIndicatorView;	// IMP=0x0000000000101045
- (void)didUpdateMapItem;	// IMP=0x000000000010103f
- (void)didUpdateAttributionViewType;	// IMP=0x0000000000100fad
@property(readonly, nonatomic) UIImage *glyphImage;
@property(readonly, nonatomic) NSString *titleText;
- (void)_setupConstraints;	// IMP=0x000000000010089c
- (void)_setupSubviews;	// IMP=0x000000000010068f
- (id)initWithContext:(long long)arg1;	// IMP=0x0000000000100621

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, _TVImageView;

__attribute__((visibility("hidden")))
@interface _TVLoadingView : UIView
{
    _Bool _shouldShowSpinner;	// 8 = 0x8
    _TVImageView *_backgroundImageView;	// 16 = 0x10
    UIView *_loadingTitleLabel;	// 24 = 0x18
    UIActivityIndicatorView *_spinnerView;	// 32 = 0x20
    UIView *_spinnerContainer;	// 40 = 0x28
    UIView *_labelContainer;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000f26bb
@property(readonly, nonatomic) __weak UIView *labelContainer; // @synthesize labelContainer=_labelContainer;
@property(readonly, nonatomic) __weak UIView *spinnerContainer; // @synthesize spinnerContainer=_spinnerContainer;
@property(nonatomic) _Bool shouldShowSpinner; // @synthesize shouldShowSpinner=_shouldShowSpinner;
@property(readonly, nonatomic) __weak UIActivityIndicatorView *spinnerView; // @synthesize spinnerView=_spinnerView;
@property(nonatomic) __weak UIView *loadingTitleLabel; // @synthesize loadingTitleLabel=_loadingTitleLabel;
@property(readonly, nonatomic) __weak _TVImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
- (void)_showSpinner;	// IMP=0x00000000000f2470
- (_Bool)canBecomeFocused;	// IMP=0x00000000000f2468
- (void)layoutSubviews;	// IMP=0x00000000000f1f98
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000f1d27

@end


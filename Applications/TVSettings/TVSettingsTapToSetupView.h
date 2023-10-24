//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSArray, NSString, UIActivityIndicatorView, UIImageView, UILabel;

@interface TVSettingsTapToSetupView : UIView
{
    NSString *_title;	// 8 = 0x8
    NSString *_instructions;	// 16 = 0x10
    NSString *_footer;	// 24 = 0x18
    UILabel *_titleLabel;	// 32 = 0x20
    UILabel *_bodyLabel;	// 40 = 0x28
    UILabel *_footerLabel;	// 48 = 0x30
    UIImageView *_imageView;	// 56 = 0x38
    UIActivityIndicatorView *_spinnerView;	// 64 = 0x40
    NSArray *_constraints;	// 72 = 0x48
    UIView *_contentAreaView;	// 80 = 0x50
    UILabel *_spinnerStatusLabel;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0020000000066e6f
@property(readonly, nonatomic) UILabel *spinnerStatusLabel; // @synthesize spinnerStatusLabel=_spinnerStatusLabel;
@property(readonly, nonatomic) UIView *contentAreaView; // @synthesize contentAreaView=_contentAreaView;
@property(readonly, copy, nonatomic) NSArray *constraints; // @synthesize constraints=_constraints;
@property(readonly, nonatomic) UIActivityIndicatorView *spinnerView; // @synthesize spinnerView=_spinnerView;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) UILabel *footerLabel; // @synthesize footerLabel=_footerLabel;
@property(readonly, nonatomic) UILabel *bodyLabel; // @synthesize bodyLabel=_bodyLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSString *footer; // @synthesize footer=_footer;
@property(retain, nonatomic) NSString *instructions; // @synthesize instructions=_instructions;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)_setActivityIndicatorIsInProgress:(_Bool)arg1;	// IMP=0x0010000000066ce4
- (void)_updateCompositingEffects;	// IMP=0x0010000000066b03
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0010000000066ac2
- (void)stopAnimatingSpinner;	// IMP=0x0010000000066aae
- (void)startAnimatingSpinnerWithStatus:(id)arg1;	// IMP=0x0010000000066a70
- (void)startAnimatingSpinner;	// IMP=0x0010000000066a24
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x001000000006485c

@end


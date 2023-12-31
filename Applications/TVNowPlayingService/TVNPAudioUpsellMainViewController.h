//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class PBSAudioUpsellConfiguration, UIActivityIndicatorView, UIButton, UIImageView, UILabel, UILayoutGuide, UIView;
@protocol TVNPAudioUpsellMainViewControllerDelegate;

@interface TVNPAudioUpsellMainViewController : UIViewController
{
    id <TVNPAudioUpsellMainViewControllerDelegate> _delegate;	// 8 = 0x8
    PBSAudioUpsellConfiguration *_configuration;	// 16 = 0x10
    UIView *_lockupView;	// 24 = 0x18
    UILabel *_titleLabel;	// 32 = 0x20
    UILabel *_descriptionLabel;	// 40 = 0x28
    UIButton *_primaryButton;	// 48 = 0x30
    UIButton *_secondaryButton;	// 56 = 0x38
    UILabel *_footerLabel;	// 64 = 0x40
    UIImageView *_imageView;	// 72 = 0x48
    UILabel *_settingUpLabel;	// 80 = 0x50
    UIActivityIndicatorView *_spinnerView;	// 88 = 0x58
    UILayoutGuide *_settingUpGuide;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x002000000002edd0
@property(readonly, nonatomic) UILayoutGuide *settingUpGuide; // @synthesize settingUpGuide=_settingUpGuide;
@property(readonly, nonatomic) UIActivityIndicatorView *spinnerView; // @synthesize spinnerView=_spinnerView;
@property(readonly, nonatomic) UILabel *settingUpLabel; // @synthesize settingUpLabel=_settingUpLabel;
- (id)imageView;	// IMP=0x001000000002ed50
@property(readonly, nonatomic) UILabel *footerLabel; // @synthesize footerLabel=_footerLabel;
@property(readonly, nonatomic) UIButton *secondaryButton; // @synthesize secondaryButton=_secondaryButton;
@property(readonly, nonatomic) UIButton *primaryButton; // @synthesize primaryButton=_primaryButton;
@property(readonly, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIView *lockupView; // @synthesize lockupView=_lockupView;
@property(readonly, nonatomic) PBSAudioUpsellConfiguration *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) __weak id <TVNPAudioUpsellMainViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_imageForHomePodVariant:(unsigned long long)arg1;	// IMP=0x001000000002eb20
- (void)dismissPrompt;	// IMP=0x001000000002eac0
- (void)_handleSkipButton;	// IMP=0x001000000002e950
- (void)_handleAcceptButton;	// IMP=0x001000000002db10
- (void)_configureButtonsAndLabels;	// IMP=0x001000000002d350
- (long long)overrideUserInterfaceStyle;	// IMP=0x001000000002d330
- (id)preferredFocusEnvironments;	// IMP=0x001000000002d1d0
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x001000000002d150
- (void)viewDidLoad;	// IMP=0x001000000002a8c0
- (id)initWithConfiguration:(id)arg1;	// IMP=0x001000000002a7e0

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class NSString, PBCFUserNotification, UIButton, UIImageView, UILabel, UIStackView, UIView;
@protocol PBUserNotificationViewControllerDelegate;

@interface PBExternalLinkingViewController : UIViewController
{
    id <PBUserNotificationViewControllerDelegate> _delegate;	// 8 = 0x8
    PBCFUserNotification *_notification;	// 16 = 0x10
    UIStackView *_textAndButtonsStackView;	// 24 = 0x18
    UIStackView *_buttonsStackView;	// 32 = 0x20
    UILabel *_titleLabel;	// 40 = 0x28
    UILabel *_subtitleLabel;	// 48 = 0x30
    UIView *_QRCodeContainerView;	// 56 = 0x38
    UIImageView *_QRCodeImageView;	// 64 = 0x40
    UILabel *_QRCodeCaptionLabel;	// 72 = 0x48
    UIButton *_defaultButton;	// 80 = 0x50
    UIButton *_alternateButton;	// 88 = 0x58
    UIButton *_otherButton;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x002000000018bfda
@property(readonly, nonatomic) UIButton *otherButton; // @synthesize otherButton=_otherButton;
@property(readonly, nonatomic) UIButton *alternateButton; // @synthesize alternateButton=_alternateButton;
@property(readonly, nonatomic) UIButton *defaultButton; // @synthesize defaultButton=_defaultButton;
@property(readonly, nonatomic) UILabel *QRCodeCaptionLabel; // @synthesize QRCodeCaptionLabel=_QRCodeCaptionLabel;
@property(readonly, nonatomic) UIImageView *QRCodeImageView; // @synthesize QRCodeImageView=_QRCodeImageView;
@property(readonly, nonatomic) UIView *QRCodeContainerView; // @synthesize QRCodeContainerView=_QRCodeContainerView;
@property(readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIStackView *buttonsStackView; // @synthesize buttonsStackView=_buttonsStackView;
@property(readonly, nonatomic) UIStackView *textAndButtonsStackView; // @synthesize textAndButtonsStackView=_textAndButtonsStackView;
@property(retain, nonatomic) PBCFUserNotification *notification; // @synthesize notification=_notification;
@property(nonatomic) __weak id <PBUserNotificationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_QRCodeImageForURLString:(id)arg1;	// IMP=0x001000000018bba0
- (id)_attributedStringForCaptionString:(id)arg1;	// IMP=0x001000000018b874
- (long long)_buttonRoleForActionStyle:(long long)arg1;	// IMP=0x001000000018b854
- (struct CGColor *)_secondaryLabelCGColor;	// IMP=0x001000000018b7a4
- (void)_updateContent;	// IMP=0x001000000018b316
- (void)otherButtonPressed;	// IMP=0x001000000018b2b4
- (void)alternateButtonPressed;	// IMP=0x001000000018b252
- (void)defaultButtonPressed;	// IMP=0x001000000018b1f0
- (void)viewDidLoad;	// IMP=0x00100000001899ae
- (id)init;	// IMP=0x00100000001897fc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


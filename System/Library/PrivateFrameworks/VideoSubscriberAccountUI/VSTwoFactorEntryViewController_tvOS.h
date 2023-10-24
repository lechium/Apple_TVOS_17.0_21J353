//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSArray, NSString, TVSUIDigitGroupView, UIActivityIndicatorView, UIButton, UIImageView, UILabel, UISystemInputViewController, UITextField, UIView, VSFontCenter, VSTwoFactorEntryViewModel;
@protocol VSAuthenticationViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface VSTwoFactorEntryViewController_tvOS : UIViewController
{
    _Bool _cancellationAllowed;	// 8 = 0x8
    id <VSAuthenticationViewControllerDelegate> _delegate;	// 16 = 0x10
    VSTwoFactorEntryViewModel *_viewModel;	// 24 = 0x18
    UIImageView *_logoView;	// 32 = 0x20
    UILabel *_titlelabel;	// 40 = 0x28
    UILabel *_descriptionLabel;	// 48 = 0x30
    UITextField *_twoFactorTextField;	// 56 = 0x38
    TVSUIDigitGroupView *_digitGroupView;	// 64 = 0x40
    UISystemInputViewController *_inputViewController;	// 72 = 0x48
    UIView *_inputView;	// 80 = 0x50
    NSArray *_buttons;	// 88 = 0x58
    UIButton *_doneButton;	// 96 = 0x60
    UIActivityIndicatorView *_activityIndicator;	// 104 = 0x68
    VSFontCenter *_fontCenter;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x00000000000129ce
@property(retain, nonatomic) VSFontCenter *fontCenter; // @synthesize fontCenter=_fontCenter;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
@property(retain, nonatomic) UIView *inputView; // @synthesize inputView=_inputView;
@property(retain, nonatomic) UISystemInputViewController *inputViewController; // @synthesize inputViewController=_inputViewController;
@property(retain, nonatomic) TVSUIDigitGroupView *digitGroupView; // @synthesize digitGroupView=_digitGroupView;
@property(retain, nonatomic) UITextField *twoFactorTextField; // @synthesize twoFactorTextField=_twoFactorTextField;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *titlelabel; // @synthesize titlelabel=_titlelabel;
@property(retain, nonatomic) UIImageView *logoView; // @synthesize logoView=_logoView;
@property(nonatomic, getter=isCancellationAllowed) _Bool cancellationAllowed; // @synthesize cancellationAllowed=_cancellationAllowed;
@property(retain, nonatomic) VSTwoFactorEntryViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <VSAuthenticationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000012638
- (void)setValidating:(_Bool)arg1;	// IMP=0x0000000000012426
- (void)_stopObservingViewModel:(id)arg1;	// IMP=0x0000000000012379
- (void)_startObservingViewModel:(id)arg1;	// IMP=0x00000000000122b4
- (void)addSystemInputViewController;	// IMP=0x0000000000012112
- (id)_buttonBackgroundColor;	// IMP=0x000000000001209d
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;	// IMP=0x0000000000011f9f
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000011e5c
- (_Bool)_enableAutomaticKeyboardPressDone;	// IMP=0x0000000000011e54
- (_Bool)_disableAutomaticKeyboardUI;	// IMP=0x0000000000011e4c
- (void)templateButtonPressed:(id)arg1;	// IMP=0x0000000000011da2
- (void)donePressed:(id)arg1;	// IMP=0x0000000000011d60
- (void)twoFactorCodeDidChange:(id)arg1;	// IMP=0x0000000000011c00
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000000011a6d
- (id)preferredFocusEnvironments;	// IMP=0x0000000000011942
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000000011909
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000000118d0
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000001185e
- (void)dealloc;	// IMP=0x00000000000117e9
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000117b0
- (void)viewDidLoad;	// IMP=0x000000000000ec08
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000000eb98

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) struct CGSize preferredLogoSize;
@property(readonly) Class superclass;

@end

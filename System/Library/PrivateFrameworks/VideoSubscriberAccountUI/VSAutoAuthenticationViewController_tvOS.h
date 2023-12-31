//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSString, UITapGestureRecognizer, VSActivityIndicatorViewController, VSAutoAuthenticationView, VSAutoAuthenticationViewModel;
@protocol VSAuthenticationViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface VSAutoAuthenticationViewController_tvOS : UIViewController
{
    _Bool _cancellationAllowed;	// 8 = 0x8
    id <VSAuthenticationViewControllerDelegate> _delegate;	// 16 = 0x10
    VSAutoAuthenticationViewModel *_viewModel;	// 24 = 0x18
    VSAutoAuthenticationView *_autoAuthenticationView;	// 32 = 0x20
    UITapGestureRecognizer *_menuRecognizer;	// 40 = 0x28
    VSActivityIndicatorViewController *_signingInIndicatorViewController;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000001c91b
@property(retain, nonatomic) VSActivityIndicatorViewController *signingInIndicatorViewController; // @synthesize signingInIndicatorViewController=_signingInIndicatorViewController;
@property(retain, nonatomic) UITapGestureRecognizer *menuRecognizer; // @synthesize menuRecognizer=_menuRecognizer;
@property(retain, nonatomic) VSAutoAuthenticationView *autoAuthenticationView; // @synthesize autoAuthenticationView=_autoAuthenticationView;
@property(retain, nonatomic) VSAutoAuthenticationViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <VSAuthenticationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isCancellationAllowed) _Bool cancellationAllowed; // @synthesize cancellationAllowed=_cancellationAllowed;
- (void)_showAutoAuthenticationView;	// IMP=0x000000000001c80f
- (void)_hideAutoAuthenticationView;	// IMP=0x000000000001c7cd
- (void)_hideSigningInIndicatorViewController;	// IMP=0x000000000001c72d
- (void)_showSigningInIndicatorViewController;	// IMP=0x000000000001c510
- (void)_presentError:(id)arg1;	// IMP=0x000000000001c476
- (void)_menuButtonPressed:(id)arg1;	// IMP=0x000000000001c42a
- (void)_stopObservingViewModel:(id)arg1;	// IMP=0x000000000001c3b1
- (void)_startObservingViewModel:(id)arg1;	// IMP=0x000000000001c32c
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000001be62
- (void)autoAuthenticationViewDidSelectManualSignIn:(id)arg1;	// IMP=0x000000000001be25
- (void)autoAuthenticationViewDidSelectSignIn:(id)arg1;	// IMP=0x000000000001bde3
@property(readonly, nonatomic) struct CGSize preferredLogoSize;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000001bc9e
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000000001bc65
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000001bc2c
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000001bbf3
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000001bbba
- (void)viewDidLoad;	// IMP=0x000000000001b8bf
- (void)dealloc;	// IMP=0x000000000001b876
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000001b7dc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


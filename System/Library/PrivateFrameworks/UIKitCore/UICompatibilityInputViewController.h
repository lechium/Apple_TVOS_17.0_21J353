//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIInputViewController.h"

@class NSArray, NSString, UIKeyboard, UIKeyboardInputMode, UILayoutGuide, UIViewController;
@protocol UITextCursorAssertion;

__attribute__((visibility("hidden")))
@interface UICompatibilityInputViewController : UIInputViewController
{
    UIKeyboardInputMode *_inputMode;	// 456 = 0x1c8
    UIKeyboard *_deferredSystemView;	// 464 = 0x1d0
    UIKeyboardInputMode *_incomingExtensionInputMode;	// 472 = 0x1d8
    double _incomingExtensionInputModeTime;	// 480 = 0x1e0
    double _lastSuspendedTime;	// 488 = 0x1e8
    double _currentResumeTime;	// 496 = 0x1f0
    _Bool _shouldRegenerateSizingConstraints;	// 504 = 0x1f8
    _Bool _shouldSuppressRemoteInputController;	// 505 = 0x1f9
    _Bool _tearingDownInputController;	// 506 = 0x1fa
    double _resetInputModeTime;	// 512 = 0x200
    unsigned long long _latestDelayTime;	// 520 = 0x208
    UILayoutGuide *_focusSafeAreaLayoutGuide;	// 528 = 0x210
    UIViewController *_inputController;	// 536 = 0x218
    NSArray *_internalEdgeMatchConstraints;	// 544 = 0x220
    id <UITextCursorAssertion> _blinkAssertion;	// 552 = 0x228
}

+ (id)inputSnapshotViewForInputMode:(id)arg1 orientation:(long long)arg2;	// IMP=0x00100000009bb5c6
+ (void)applicationDidReceiveMemoryWarning:(id)arg1;	// IMP=0x00100000009bb5ad
+ (_Bool)_requiresProxyInterface;	// IMP=0x00100000009bac5a
+ (id)deferredInputModeControllerWithKeyboard:(id)arg1;	// IMP=0x00100000009ba70a
+ (id)inputViewControllerWithView:(id)arg1;	// IMP=0x00100000009ba4be
- (void).cxx_destruct;	// IMP=0x00000000009bf022
@property(retain, nonatomic) id <UITextCursorAssertion> blinkAssertion; // @synthesize blinkAssertion=_blinkAssertion;
@property(retain, nonatomic) NSArray *internalEdgeMatchConstraints; // @synthesize internalEdgeMatchConstraints=_internalEdgeMatchConstraints;
@property(retain, nonatomic) UIViewController *inputController; // @synthesize inputController=_inputController;
@property(readonly, nonatomic) UILayoutGuide *focusSafeAreaLayoutGuide;
- (void)_tvUpdateAppearanceForUserInterfaceStyle;	// IMP=0x00000000009bead8
- (void)viewDidLayoutSubviews;	// IMP=0x00000000009bea2e
- (void)didFinishTranslation;	// IMP=0x00000000009be8fc
- (void)finishSplitTransition:(_Bool)arg1;	// IMP=0x00000000009be755
- (void)willBeginTranslation;	// IMP=0x00000000009be475
- (void)didRotateFromInterfaceOrientation:(long long)arg1;	// IMP=0x00000000009be31b
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;	// IMP=0x00000000009be264
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;	// IMP=0x00000000009be088
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000009bdfdd
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000009bdf2e
- (id)_keyboardForThisViewController;	// IMP=0x00000000009bdeb4
- (id)_keyboard;	// IMP=0x00000000009bdd12
- (id)childCompatibilityController;	// IMP=0x00000000009bdc98
- (void)keyboardWillChangeFromDelegate:(id)arg1 toDelegate:(id)arg2;	// IMP=0x00000000009bdbd1
- (id)preferredFocusedView;	// IMP=0x00000000009bdb81
- (void)setInputMode:(id)arg1;	// IMP=0x00000000009bc798
- (void)setTearingDownInputController;	// IMP=0x00000000009bc787
- (void)validateInputModeIsDisplayed;	// IMP=0x00000000009bc73f
- (void)assertCurrentInputModeIfNecessary;	// IMP=0x00000000009bc66d
- (void)resetInputMode;	// IMP=0x00000000009bc58b
- (void)resetInputModeInMainThread;	// IMP=0x00000000009bc22d
- (id)_systemViewControllerForInputMode:(id)arg1;	// IMP=0x00000000009bc0e5
- (void)shouldUpdateInputMode:(id)arg1;	// IMP=0x00000000009bbf41
- (void)tearDownInputController;	// IMP=0x00000000009bbd48
- (void)removeSnapshotView;	// IMP=0x00000000009bbbea
- (void)addSnapshotViewForInputMode:(id)arg1;	// IMP=0x00000000009bb92d
- (void)takeSnapshotView;	// IMP=0x00000000009bb666
- (void)rebuildChildConstraints;	// IMP=0x00000000009bb0de
- (void)generateCompatibleSizeConstraintsIfNecessary;	// IMP=0x00000000009baf63
- (void)didMoveToParentViewController:(id)arg1;	// IMP=0x00000000009baeeb
- (void)willResume:(id)arg1;	// IMP=0x00000000009badff
- (void)isHosted:(id)arg1;	// IMP=0x00000000009badde
- (void)didSuspend:(id)arg1;	// IMP=0x00000000009baccf
- (void)killIncomingExtension;	// IMP=0x00000000009bac62
- (id)_compatView;	// IMP=0x00000000009babe0
- (id)_compatibilityController;	// IMP=0x00000000009bab73
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;	// IMP=0x00000000009bab6b
- (_Bool)shouldAutomaticallyForwardRotationMethods;	// IMP=0x00000000009bab63
- (void)dealloc;	// IMP=0x00000000009baa55
- (_Bool)_canShowWhileLocked;	// IMP=0x00000000009baa4d
- (void)loadView;	// IMP=0x00000000009ba9a9
- (id)_initAsDeferredController;	// IMP=0x00000000009ba824
- (void)setDeferredSystemView:(id)arg1;	// IMP=0x00000000009ba7cb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

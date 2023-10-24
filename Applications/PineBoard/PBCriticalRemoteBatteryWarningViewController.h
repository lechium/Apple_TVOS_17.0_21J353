//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class NSObject, PBSystemGestureHandle, TVSUITextAlertButton, TVSUITextAlertController;
@protocol OS_dispatch_source;

@interface PBCriticalRemoteBatteryWarningViewController : UIViewController
{
    NSObject<OS_dispatch_source> *_countdownTimerSource;	// 8 = 0x8
    unsigned long long _countdownSecondsLeft;	// 16 = 0x10
    PBSystemGestureHandle *_disallowSleepGesture;	// 24 = 0x18
    PBSystemGestureHandle *_allowSleepGesture;	// 32 = 0x20
    TVSUITextAlertController *_textAlertController;	// 40 = 0x28
    TVSUITextAlertButton *_allowSleepButton;	// 48 = 0x30
    unsigned long long _timeout;	// 56 = 0x38
    CDUnknownBlockType _dismissalCompletion;	// 64 = 0x40
}

+ (id)_initialAllowSleepButtonTitle;	// IMP=0x00400000000e2afe
- (void).cxx_destruct;	// IMP=0x00200000000e2c24
@property(copy, nonatomic) CDUnknownBlockType dismissalCompletion; // @synthesize dismissalCompletion=_dismissalCompletion;
@property(nonatomic) unsigned long long timeout; // @synthesize timeout=_timeout;
- (void)_updateAllowSleepButtonTitle;	// IMP=0x00100000000e2b22
- (void)_countdownTimerFired;	// IMP=0x00100000000e2a69
- (void)_cancelCountdownTimer;	// IMP=0x00100000000e2a11
- (void)_startCountdownTimerIfNecessary;	// IMP=0x00100000000e28b1
- (void)_dismissViewControllerWithAllowSleep:(_Bool)arg1;	// IMP=0x00100000000e2848
- (void)_handleMenuButton:(id)arg1;	// IMP=0x00100000000e27a1
- (id)preferredFocusEnvironments;	// IMP=0x00100000000e2727
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00100000000e24e6
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000000e2428
- (void)viewDidLoad;	// IMP=0x00100000000e1ca3
- (void)dealloc;	// IMP=0x00100000000e1bd2
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00100000000e1b8f

@end


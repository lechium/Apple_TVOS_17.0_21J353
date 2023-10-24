//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIAlertController.h>

@class NSString, PBCFUserNotification, PBCFUserNotificationWaitViewSpec;
@protocol PBUserNotificationViewControllerDelegate;

@interface PBUserNotificationViewControllerAlert : UIAlertController
{
    _Bool _inWaitMode;	// 8 = 0x8
    PBCFUserNotification *_notification;	// 16 = 0x10
    id <PBUserNotificationViewControllerDelegate> _delegate;	// 24 = 0x18
    PBCFUserNotificationWaitViewSpec *_waitViewSpec;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000217a96
@property(retain, nonatomic) PBCFUserNotificationWaitViewSpec *waitViewSpec; // @synthesize waitViewSpec=_waitViewSpec;
@property(nonatomic) __weak id <PBUserNotificationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PBCFUserNotification *notification; // @synthesize notification=_notification;
- (unsigned long long)waitActionButtonIndex;	// IMP=0x0010000000217974
- (void)_didSelectButtonAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000217516
- (void)updateWithNotification:(id)arg1;	// IMP=0x0010000000216690
- (void)_handleHomeButton:(id)arg1;	// IMP=0x0010000000216332
- (void)_handleMenuButton;	// IMP=0x001000000021625c
- (void)viewDidLoad;	// IMP=0x0010000000216131

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UINavigationController.h>

@class NSString, PBCFUserNotification, UIViewController;
@protocol PBUserNotificationViewController, PBUserNotificationViewControllerDelegate;

@interface PBUserNotificationNavigationController : UINavigationController
{
    id <PBUserNotificationViewControllerDelegate> _delegate;	// 8 = 0x8
    UIViewController<PBUserNotificationViewController> *_userNotificationViewController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000218177
@property(retain, nonatomic) UIViewController<PBUserNotificationViewController> *userNotificationViewController; // @synthesize userNotificationViewController=_userNotificationViewController;
@property(nonatomic) __weak id <PBUserNotificationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didCancelUserNotificationViewController:(id)arg1;	// IMP=0x00100000002180c0
- (void)userNotificationViewController:(id)arg1 didSelectButtonIndex:(unsigned long long)arg2;	// IMP=0x0010000000218059
@property(retain, nonatomic) PBCFUserNotification *notification;
- (id)initWithUserNotificationViewController:(id)arg1;	// IMP=0x0010000000217f38

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


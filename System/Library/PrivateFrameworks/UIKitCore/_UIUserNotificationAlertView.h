//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIAlertView.h"

__attribute__((visibility("hidden")))
@interface _UIUserNotificationAlertView : UIAlertView
{
    struct __CFUserNotification *_userNotification;	// 8 = 0x8
    struct __CFRunLoopSource *_userNotificationRunLoopSource;	// 16 = 0x10
    id _strongDelegate;	// 24 = 0x18
    id _retainedSelf;	// 32 = 0x20
}

+ (void)initialize;	// IMP=0x0060000001293964
- (void).cxx_destruct;	// IMP=0x000000000129492e
- (void)dealloc;	// IMP=0x00000000012948d2
- (void)dismissWithClickedButtonIndex:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x0000000001294838
- (void)_removeObservervations;	// IMP=0x00000000012947c3
- (void)_cancelUserNotification;	// IMP=0x00000000012946f9
- (void)cancelAlertView;	// IMP=0x0000000001294664
- (void)setRemoteViewController:(id)arg1;	// IMP=0x00000000012945d7
- (void)setHostedWindow:(id)arg1;	// IMP=0x000000000129454a
- (long long)addButtonWithTitle:(id)arg1;	// IMP=0x00000000012944ba
- (id)textFieldAtIndex:(long long)arg1;	// IMP=0x0000000001294445
- (_Bool)isVisible;	// IMP=0x0000000001294430
- (void)show;	// IMP=0x00000000012939bb

@end


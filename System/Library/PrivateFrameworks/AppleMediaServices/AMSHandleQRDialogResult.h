//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface AMSHandleQRDialogResult : NSObject
{
}

+ (_Bool)_isDismissQRDialogEnabled;	// IMP=0x00800000002b1842
+ (id)_dismissalIdentifierFromDialogResult:(id)arg1;	// IMP=0x00800000002b1620
+ (void)_removeQRDialogDismissalObserverForIdentifier:(id)arg1;	// IMP=0x00800000002b13c5
+ (void)_observeQRDialogDismissalNotificationForIdentifier:(id)arg1 dialog:(id)arg2;	// IMP=0x00800000002b10cd
+ (void)handleQRDialogPresentationForRequest:(id)arg1 result:(id)arg2 logKey:(id)arg3;	// IMP=0x00800000002b0bb9

@end

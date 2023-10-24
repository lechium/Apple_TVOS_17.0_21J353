//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ANNotificationProvider, NSString;

@interface ANNotificationController : NSObject
{
    ANNotificationProvider *_notificationProvider;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000005964
- (id)_clientSideNotifierWithMachServiceName:(id)arg1;	// IMP=0x0010000000005664
- (void)notificationProvider:(id)arg1 didDismissNotification:(id)arg2;	// IMP=0x0010000000005335
- (void)notificationProvider:(id)arg1 didActivateNotification:(id)arg2;	// IMP=0x0010000000004fbc
- (void)removeNotificationsWithEventID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000004c98
- (void)removeNotificationWithID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000004c44
- (void)addNotification:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000004c2e
- (id)init;	// IMP=0x0010000000004bc4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

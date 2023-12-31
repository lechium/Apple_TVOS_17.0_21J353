//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UNUserNotificationCenter;
@protocol ANNotificationProviderDelegate;

@interface ANNotificationProvider : NSObject
{
    id <ANNotificationProviderDelegate> _delegate;	// 8 = 0x8
    UNUserNotificationCenter *_notificationCenter;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000043f2
@property(retain, nonatomic) UNUserNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property __weak id <ANNotificationProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000004266
- (void)deliveredNotifications:(CDUnknownBlockType)arg1;	// IMP=0x001000000000413b
- (void)removeNotificationWithIdentifier:(id)arg1;	// IMP=0x0010000000003fdb
- (id)_notificationContent:(id)arg1;	// IMP=0x0010000000003e24
- (void)postNotification:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000003bba
- (id)init;	// IMP=0x0010000000003b26
- (id)initForSectionWithID:(id)arg1;	// IMP=0x0010000000003b14

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


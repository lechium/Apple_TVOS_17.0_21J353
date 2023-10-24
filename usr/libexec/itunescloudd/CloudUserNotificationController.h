//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UNUserNotificationCenter;
@protocol OS_dispatch_queue;

@interface CloudUserNotificationController : NSObject
{
    UNUserNotificationCenter *_center;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_centerQueue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000004a1fc
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *centerQueue; // @synthesize centerQueue=_centerQueue;
@property(retain, nonatomic) UNUserNotificationCenter *center; // @synthesize center=_center;
- (id)_createBag;	// IMP=0x001000000004a19f
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000004a072
- (void)userNotificationCenter:(id)arg1 didChangeSettings:(id)arg2;	// IMP=0x0010000000049e98
- (id)init;	// IMP=0x0010000000049d49

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AVNotificationSubscription : NSObject
{
    NSObject *_object;	// 8 = 0x8
    id _observerToken;	// 16 = 0x10
    CDUnknownBlockType _callback;	// 24 = 0x18
    struct OpaqueFigSimpleMutex *_cancelMutex;	// 32 = 0x20
}

@property(readonly, copy) NSString *description;
- (void)cancel;	// IMP=0x0000000000089e96
- (void)dealloc;	// IMP=0x0000000000089e22
- (id)initWithObject:(id)arg1 notificationName:(id)arg2 callbackBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000089c9c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


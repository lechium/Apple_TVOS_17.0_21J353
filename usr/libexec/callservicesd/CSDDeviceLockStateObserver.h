//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue, TUNotifyObserver;

@interface CSDDeviceLockStateObserver : NSObject
{
    _Bool _hasBeenUnlocked;	// 8 = 0x8
    CDUnknownBlockType _hasBeenUnlockedBlock;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    NSMutableArray *_firstUnlockCallbacks;	// 32 = 0x20
    id <TUNotifyObserver> _notifyObserver;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000015e372
@property(retain, nonatomic) id <TUNotifyObserver> notifyObserver; // @synthesize notifyObserver=_notifyObserver;
@property(nonatomic) _Bool hasBeenUnlocked; // @synthesize hasBeenUnlocked=_hasBeenUnlocked;
@property(retain, nonatomic) NSMutableArray *firstUnlockCallbacks; // @synthesize firstUnlockCallbacks=_firstUnlockCallbacks;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(copy, nonatomic) CDUnknownBlockType hasBeenUnlockedBlock; // @synthesize hasBeenUnlockedBlock=_hasBeenUnlockedBlock;
- (void)performBlockAfterFirstUnlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000015e093
- (void)_handleDeviceFirstUnlockNotification;	// IMP=0x001000000015dec8
- (void)_refreshHasBeenUnlocked;	// IMP=0x001000000015dd7c
- (id)initWithQueue:(id)arg1;	// IMP=0x001000000015dd65
- (id)initWithNotifyObserver:(id)arg1 queue:(id)arg2;	// IMP=0x001000000015dbb6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


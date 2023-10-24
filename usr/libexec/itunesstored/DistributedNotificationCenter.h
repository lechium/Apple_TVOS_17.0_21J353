//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface DistributedNotificationCenter : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    NSMutableDictionary *_observers;	// 16 = 0x10
}

+ (void)unregisterObserverWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0040000000123e17
+ (void)registerObserverWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000123b72
+ (void)observeXPCServer:(id)arg1;	// IMP=0x0010000000123b17
+ (MISSING_TYPE *)defaultCenter;	// IMP=0x001000000012385e
- (void)_saveRegisteredPortNames;	// IMP=0x002000000012431c
- (void)_removeObserverWithPortName:(id)arg1 notificationName:(id)arg2;	// IMP=0x0010000000124275
- (void)_handleMessage:(id)arg1 connection:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000124175
- (void)_addObserverWithPortName:(id)arg1 notificationName:(id)arg2;	// IMP=0x00100000001240c7
- (void)postNotificationName:(struct __CFString *)arg1;	// IMP=0x00100000001238db
- (void)dealloc;	// IMP=0x001000000012381a
- (id)init;	// IMP=0x0010000000123552

@end


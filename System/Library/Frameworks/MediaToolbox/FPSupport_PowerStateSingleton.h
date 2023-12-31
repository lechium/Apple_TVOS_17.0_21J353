//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FPSupport_PowerStateSingleton : NSObject
{
    NSObject<OS_dispatch_queue> *_notificationQ;	// 8 = 0x8
}

+ (id)sharedFPSupportPowerStateSingleton;	// IMP=0x0060000000223ce3
- (void)dealloc;	// IMP=0x0000000000223e71
- (id)init;	// IMP=0x0000000000223de3
- (void)postNotification;	// IMP=0x0000000000223d6a
- (void)_didChangePowerState:(id)arg1;	// IMP=0x0000000000223d58

@end


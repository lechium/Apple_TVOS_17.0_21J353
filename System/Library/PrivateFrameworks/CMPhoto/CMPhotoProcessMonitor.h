//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CMPhotoProcessMonitor : NSObject
{
}

+ (_Bool)isForegroundApp;	// IMP=0x0000000000098e26
+ (_Bool)isManagedByRunningBoard;	// IMP=0x0000000000098e1e
+ (id)getShared;	// IMP=0x0000000000098e16
- (int)unregisterBackgroundNotificationForContext:(void *)arg1;	// IMP=0x0000000000098e9e
- (int)registerBackgroundNotificationHandlerForContext:(void *)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000098e93
- (int)releaseAssertionForContext:(void *)arg1;	// IMP=0x0000000000098e88
- (int)takeAssertionUntilTime:(unsigned long long)arg1 forContext:(void *)arg2;	// IMP=0x0000000000098e7d
- (void)_takeOSTransactionForContext:(void *)arg1;	// IMP=0x0000000000098e77
- (void)_takeRBSAssertionForContext:(void *)arg1 until:(unsigned long long)arg2 maxLength:(unsigned long long)arg3;	// IMP=0x0000000000098e71
- (void)waitForPendingNotifications;	// IMP=0x0000000000098e6b
- (void)dealloc;	// IMP=0x0000000000098e3c
- (id)init;	// IMP=0x0000000000098e2e

@end


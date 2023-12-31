//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IMTimer, NSMutableDictionary;

@interface IDSDeviceHeartbeatCenter : NSObject
{
    IMTimer *_getDependentHeartbeatTimer;	// 8 = 0x8
    NSMutableDictionary *_usersToHeartbeatDatesMap;	// 16 = 0x10
    _Bool _isSetup;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x0020000000007458
- (void).cxx_destruct;	// IMP=0x002000000000920b
- (void)systemDidWake;	// IMP=0x00100000000091f9
- (void)_cleanupKeychain;	// IMP=0x001000000000913b
- (_Bool)_fetchExpiryDatesIfNecessary;	// IMP=0x0010000000008cf4
- (void)accountsChanged;	// IMP=0x001000000000877c
- (void)_updateExpiry:(double)arg1 forUser:(id)arg2;	// IMP=0x0010000000008437
- (void)resetExpiryForUser:(id)arg1;	// IMP=0x0010000000008366
- (void)_updateDependentRegistrations;	// IMP=0x00100000000082b4
- (void)_heartbeatTimerFiredOnMain;	// IMP=0x0010000000008235
- (void)_scheduleRescueHeartBeat;	// IMP=0x00100000000080ba
- (void)_updateDependentRegistrationTimerFiredOnMain;	// IMP=0x001000000000803b
- (_Bool)_scheduleDependentRegistrations;	// IMP=0x0010000000007e6e
- (void)invalidateTimer;	// IMP=0x0010000000007e3c
- (void)printInfo;	// IMP=0x0010000000007a7c
- (void)dealloc;	// IMP=0x00100000000079fa
- (id)_getNextExpirationDate;	// IMP=0x0010000000007680
- (void)_heartBeat;	// IMP=0x00100000000075ae
- (void)setup;	// IMP=0x0010000000007557
- (id)init;	// IMP=0x00100000000074ad

@end


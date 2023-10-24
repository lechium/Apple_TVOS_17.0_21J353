//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BaseBoard/BSTransaction.h>

@class BSWatchdog, NSDate, NSObject, NSString, VSIdentityProviderInfoCenter;
@protocol OS_os_log;

@interface PBSetTopBoxQueryTransaction : BSTransaction
{
    NSString *_bundleIdentifier;	// 8 = 0x8
    NSString *_previousBundleIdentifier;	// 16 = 0x10
    NSObject<OS_os_log> *_log;	// 24 = 0x18
    VSIdentityProviderInfoCenter *_identityProviderInfoCenter;	// 32 = 0x20
    BSWatchdog *_watchdog;	// 40 = 0x28
    NSDate *_completionDate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000011fa2a
@property(readonly, nonatomic) NSDate *completionDate; // @synthesize completionDate=_completionDate;
@property(readonly, nonatomic) BSWatchdog *watchdog; // @synthesize watchdog=_watchdog;
@property(readonly, nonatomic) VSIdentityProviderInfoCenter *identityProviderInfoCenter; // @synthesize identityProviderInfoCenter=_identityProviderInfoCenter;
@property(readonly, nonatomic) NSString *previousBundleIdentifier; // @synthesize previousBundleIdentifier=_previousBundleIdentifier;
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void)_didComplete;	// IMP=0x001000000011f85b
- (void)_begin;	// IMP=0x001000000011f272
- (_Bool)_canBeInterrupted;	// IMP=0x001000000011f26a
- (double)watchdogTimeout;	// IMP=0x001000000011f25c
- (_Bool)shouldWatchdog:(id *)arg1;	// IMP=0x001000000011f254
@property(readonly, nonatomic, getter=isFresh) _Bool fresh;
- (id)init;	// IMP=0x001000000011f18c
- (id)initWithLog:(id)arg1 identityProviderInfoCenter:(id)arg2 currentBundleIdentifier:(id)arg3;	// IMP=0x001000000011f0b2

@end

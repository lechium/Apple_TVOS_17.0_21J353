//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APSPowerAssertion, NSString;

@interface APSWakeStateManager : NSObject
{
    struct __IOPMConnection *_powerManagementConnection;	// 8 = 0x8
    APSPowerAssertion *_wakeStateChangePowerAssertion;	// 16 = 0x10
    _Bool _inFullWake;	// 24 = 0x18
    _Bool _inDarkWake;	// 25 = 0x19
    _Bool _wasInFullWake;	// 26 = 0x1a
    _Bool _wasInDarkWake;	// 27 = 0x1b
    _Bool _isWaking;	// 28 = 0x1c
    unsigned int _token;	// 32 = 0x20
    struct __CFRunLoopSource *_ioRunLoopSource;	// 40 = 0x28
    struct IONotificationPort *_ioNotifyPort;	// 48 = 0x30
    unsigned int _ioConnectHandle;	// 56 = 0x38
    unsigned int _ioNotification;	// 60 = 0x3c
    _Bool _isClamshellClosed;	// 64 = 0x40
}

+ (id)wakeStateManager;	// IMP=0x0020000000046b97
- (void).cxx_destruct;	// IMP=0x0020000000046c08
- (_Bool)wasInFullWake;	// IMP=0x0010000000046c00
- (_Bool)wasInDarkWake;	// IMP=0x0010000000046bf8
- (_Bool)supportsDarkWakeForActivePowerSource;	// IMP=0x0010000000046bf0
- (_Bool)isWaking;	// IMP=0x0010000000046be8
- (_Bool)isGoingToSleep;	// IMP=0x0010000000046be0
- (_Bool)isClamshellClosed;	// IMP=0x0010000000046bd8
- (_Bool)inFullWake;	// IMP=0x0010000000046bd0
- (_Bool)inDarkWake;	// IMP=0x0010000000046bc8
- (void)acknowledgePowerChangeEvent;	// IMP=0x0010000000046bc2
- (void)prepareForSleep;	// IMP=0x0010000000046bbc
- (void)prepareForFullWake;	// IMP=0x0010000000046bb6
- (void)prepareForDarkWake;	// IMP=0x0010000000046bb0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

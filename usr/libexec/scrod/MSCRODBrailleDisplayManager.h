//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ScreenReaderOutput/SCROBrailleDisplayManager.h>

@class NSMutableArray, RadiosPreferences;

@interface MSCRODBrailleDisplayManager : SCROBrailleDisplayManager
{
    struct {
        unsigned int rootPort;
        struct IONotificationPort *notifyPortRef;
        unsigned int notifierObject;
    } _sleepWake;	// 224 = 0xe0
    int _notifyLockStateToken;	// 248 = 0xf8
    int _blankScreenToken;	// 252 = 0xfc
    int _keybagLockStateToken;	// 256 = 0x100
    _Bool _isInDisconnectedState;	// 260 = 0x104
    _Bool _isScreenBlank;	// 261 = 0x105
    _Bool _isScreenUILocked;	// 262 = 0x106
    NSMutableArray *_displays;	// 264 = 0x108
    _Bool _airplaneMode;	// 272 = 0x110
    _Bool _isBrailleSystemSleeping;	// 273 = 0x111
    RadiosPreferences *_radiosPrefs;	// 280 = 0x118
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00200000000034b4
+ (void)initialize;	// IMP=0x001000000000345d
+ (id)sharedManager;	// IMP=0x001000000000344c
- (void).cxx_destruct;	// IMP=0x0020000000009487
@property(nonatomic) _Bool isBrailleSystemSleeping; // @synthesize isBrailleSystemSleeping=_isBrailleSystemSleeping;
@property(retain, nonatomic) RadiosPreferences *radiosPrefs; // @synthesize radiosPrefs=_radiosPrefs;
@property(nonatomic) _Bool airplaneMode; // @synthesize airplaneMode=_airplaneMode;
- (id)brailleInputManager;	// IMP=0x0010000000009409
- (id)newBrailleDisplayCommandDispatcher;	// IMP=0x00100000000093e8
- (void)airplaneModeChanged;	// IMP=0x0010000000009311
- (void)_registerHasBlankedScreenNotification;	// IMP=0x0010000000008c5c
- (void)_updateScreenUILock:(int)arg1 screenBlank:(int)arg2;	// IMP=0x00100000000086a3
- (void)_handleSystemSleep;	// IMP=0x0010000000008685
- (void)_delayedHandleSystemSleep;	// IMP=0x0010000000008001
- (void)_wakeFromSleep;	// IMP=0x0010000000007fe3
- (void)_delayedWakeFromSleep;	// IMP=0x0010000000007f3f
- (void)_reallyDelayedWakeFromSleep;	// IMP=0x0010000000007cf6
- (_Bool)_hasActiveDisplay;	// IMP=0x0010000000007a9f
- (_Bool)_hasUserInteractedWithDeviceRecently;	// IMP=0x00100000000079d0
- (void)setLastUserInteractionTime:(double)arg1;	// IMP=0x001000000000782c
- (unsigned int)_rootPowerPort;	// IMP=0x001000000000781c
- (_Bool)_registerSleepNotifications;	// IMP=0x00100000000076c9
- (_Bool)isConfigured;	// IMP=0x001000000000750b
- (void)_saveBluetoothDisplayConfiguration:(id)arg1;	// IMP=0x0010000000007214
- (_Bool)_brailleConfigMatch:(id)arg1 withConfig:(id)arg2;	// IMP=0x00100000000070e9
- (id)driverConfiguration;	// IMP=0x0010000000006f1f
- (void)_removeBluetoothDriverWithIOElement:(id)arg1 removeFromPreferences:(_Bool)arg2;	// IMP=0x0010000000005fb4
- (void)_removeBluetoothDriverWithAddress:(id)arg1;	// IMP=0x0010000000005f34
- (void)removeBluetoothDriverWithAddress:(id)arg1;	// IMP=0x0010000000005e8e
- (void)_loadBluetoothDriverFromPreferences;	// IMP=0x0010000000004ee5
- (void)_loadBluetoothDriverWithAddress:(id)arg1;	// IMP=0x00100000000043d2
- (void)loadBluetoothDriverWithAddress:(id)arg1;	// IMP=0x00100000000043b3
- (id)_displayWithIOElement:(id)arg1 driverIdentifier:(id)arg2 delegate:(id)arg3;	// IMP=0x00100000000042f8
- (void)_delayedPowerChangedNotification:(id)arg1;	// IMP=0x0010000000003fa0
- (void)powerChangedNotification:(id)arg1;	// IMP=0x0010000000003f81
- (void)_setupBluetooth;	// IMP=0x0010000000003eae
- (void)_eventQueue_setShowEightDotBraille:(_Bool)arg1;	// IMP=0x0010000000003e4e
- (void)_eventQueue_setContractionMode:(int)arg1;	// IMP=0x0010000000003def
- (void)_eventQueue_setMasterStatusCellIndex:(long long)arg1;	// IMP=0x0010000000003d68
- (void)_eventQueue_setVirtualStatusAlignment:(int)arg1;	// IMP=0x0010000000003ce5
- (void)_eventQueue_brailleDriverDisconnected:(id)arg1;	// IMP=0x0010000000003b52
- (void)invalidate;	// IMP=0x0010000000003b11
- (void)_eventQueue_begin;	// IMP=0x0010000000003a19
- (void)handleSettingsChange:(id)arg1;	// IMP=0x0010000000003927
- (id)init;	// IMP=0x00100000000034f1

@end


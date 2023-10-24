//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CUSystemMonitor, NEVPNConnection, NSData, NSDate, NSMutableDictionary, NSURL, NSUUID, SDProximityController, SDStatusMonitor, SFBLEScanner, SFDeviceDiscovery, SFDeviceRepairService, SFDeviceRepairSession, SFPINPairSession, SFService, SFWiFiHealthMonitor;
@protocol OS_dispatch_queue, OS_dispatch_source, PBSMediaRemoteServiceInterface;

@interface SDSetupAgent : NSObject
{
    NSData *_bleAuthTagFilter;	// 8 = 0x8
    _Bool _clientEnabled;	// 16 = 0x10
    SFDeviceDiscovery *_deviceDiscovery;	// 24 = 0x18
    NSMutableDictionary *_devices;	// 32 = 0x20
    _Bool _hsa2Enabled;	// 40 = 0x28
    id <PBSMediaRemoteServiceInterface> _pbsMediaService;	// 48 = 0x30
    id _pinPairDialogToken;	// 56 = 0x38
    SFService *_pinPairService;	// 64 = 0x40
    SFPINPairSession *_pinPairSession;	// 72 = 0x48
    NSUUID *_pinPairUUID;	// 80 = 0x50
    int _profilesNotifyToken;	// 88 = 0x58
    _Bool _pwsAutoGrantingEnabled;	// 92 = 0x5c
    _Bool _pwsGrantingEnabled;	// 93 = 0x5d
    _Bool _scanEligible;	// 94 = 0x5e
    int _scanSeconds;	// 96 = 0x60
    NSObject<OS_dispatch_source> *_scanTimer;	// 104 = 0x68
    _Bool _serverEnabled;	// 112 = 0x70
    NSURL *_setupURL;	// 120 = 0x78
    _Bool _shouldScan;	// 128 = 0x80
    SDStatusMonitor *_statusMonitor;	// 136 = 0x88
    CUSystemMonitor *_systemMonitor;	// 144 = 0x90
    NSMutableDictionary *_triggeredDevices;	// 152 = 0x98
    _Bool _triggeredUIAppleTVPair;	// 160 = 0xa0
    _Bool _triggeredUIAppleTVSetup;	// 161 = 0xa1
    _Bool _renableB238SetupAfterWiFi;	// 162 = 0xa2
    _Bool _triggeredUIB238Setup;	// 163 = 0xa3
    _Bool _triggeredUIiOSSetup;	// 164 = 0xa4
    _Bool _triggeredUIRepair;	// 165 = 0xa5
    _Bool _triggeredUIWatchSetup;	// 166 = 0xa6
    _Bool _triggeredUIWHASetup;	// 167 = 0xa7
    _Bool _triggeredUIDovePeace;	// 168 = 0xa8
    _Bool _triggeredUIAuthenticateAccounts;	// 169 = 0xa9
    NEVPNConnection *_vpnCnx;	// 176 = 0xb0
    unsigned long long _watchFastScanLastEndTicks;	// 184 = 0xb8
    NSObject<OS_dispatch_source> *_watchFastScanTimer;	// 192 = 0xc0
    NSMutableDictionary *_watchSetupDevices;	// 200 = 0xc8
    _Bool _watchMigrationEnabled;	// 208 = 0xd0
    unsigned long long _watchMigrationLastTicks;	// 216 = 0xd8
    _Bool _watchSetupEnabled;	// 224 = 0xe0
    SFBLEScanner *_watchSetupScanner;	// 232 = 0xe8
    SDProximityController *_proximityController;	// 240 = 0xf0
    _Bool _cdpEnabled;	// 248 = 0xf8
    int _iTunesNotifyToken;	// 252 = 0xfc
    CUSystemMonitor *_manateeMonitor;	// 256 = 0x100
    _Bool _manateeProblem;	// 264 = 0x108
    unsigned long long _problemFlags;	// 272 = 0x110
    int _problemNotifyToken;	// 280 = 0x118
    _Bool _repairEnabled;	// 284 = 0x11c
    SFDeviceRepairService *_repairService;	// 288 = 0x120
    SFDeviceRepairSession *_repairSession;	// 296 = 0x128
    _Bool _repairSilent;	// 304 = 0x130
    NSObject<OS_dispatch_source> *_repairTimer;	// 312 = 0x138
    SFWiFiHealthMonitor *_wifiHealthMonitor;	// 320 = 0x140
    _Bool _wifiBad;	// 328 = 0x148
    _Bool _wifiBad8021x;	// 329 = 0x149
    int _cnsNotifyToken;	// 332 = 0x14c
    _Bool _cnsNeedsUI;	// 336 = 0x150
    NSDate *_lastRenewalAttempt;	// 344 = 0x158
    _Bool _prefRepairAccounts;	// 352 = 0x160
    _Bool _prefRepairHomeKit;	// 353 = 0x161
    _Bool _prefRepairVPN;	// 354 = 0x162
    _Bool _prefRepairWiFi;	// 355 = 0x163
    _Bool _preventRepair;	// 356 = 0x164
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 360 = 0x168
}

+ (id)sharedSetupAgent;	// IMP=0x00200000000359ec
- (void).cxx_destruct;	// IMP=0x00200000000429e6
@property(nonatomic) _Bool preventRepair; // @synthesize preventRepair=_preventRepair;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)testProxCardKit:(id)arg1;	// IMP=0x0010000000042898
- (void)testUIAppleTVSetup:(id)arg1;	// IMP=0x0010000000042667
- (void)testSetupUIWHA:(id)arg1;	// IMP=0x001000000004238e
- (void)testSetupUIWatch:(id)arg1;	// IMP=0x001000000004223b
- (void)testSetupUIPasswordSharing:(id)arg1;	// IMP=0x0010000000041fec
- (void)testSetupUIiOS:(id)arg1;	// IMP=0x0010000000041dc0
- (long long)extractParameter:(id)arg1 inString:(id)arg2;	// IMP=0x0010000000041bde
- (void)testSetupUIB238:(id)arg1;	// IMP=0x001000000004162e
- (void)testRepairUI:(id)arg1;	// IMP=0x001000000004142e
- (void)testPINHide;	// IMP=0x00100000000413ca
- (void)testPINShow:(id)arg1;	// IMP=0x001000000004131d
- (void)testPairUI:(id)arg1;	// IMP=0x00100000000410ec
- (void)testNFCUI:(id)arg1;	// IMP=0x0010000000040f96
- (void)testHomeKitDeviceDetected:(id)arg1;	// IMP=0x0010000000040e8c
- (void)proximityDeviceDidTrigger:(id)arg1;	// IMP=0x0010000000040b13
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0010000000040a02
- (void)_repairVPNError:(id)arg1;	// IMP=0x0010000000040935
- (void)_repairUpdateIDSCache;	// IMP=0x0010000000040886
- (void)_repairSilentProgress:(unsigned int)arg1 info:(id)arg2;	// IMP=0x0010000000040613
- (void)_repairSilentStart:(id)arg1;	// IMP=0x001000000004024f
- (void)_repairProblemFlagsChanged;	// IMP=0x0010000000040190
- (void)_repairProblemCheck;	// IMP=0x00100000000400e3
- (void)_repairHandleManateeChanged;	// IMP=0x0010000000040059
- (void)_repairHandleCompletion;	// IMP=0x001000000003ffad
- (void)_repairEnsuredStopped;	// IMP=0x001000000003fd8e
- (void)_repairEnsuredStarted;	// IMP=0x001000000003ee48
- (void)_pwsHandleProgressEvent:(unsigned int)arg1 info:(id)arg2;	// IMP=0x001000000003ec45
- (void)_pwsHandleUserResponse:(int)arg1 device:(id)arg2 info:(id)arg3;	// IMP=0x001000000003ebb8
- (void)_pinPairHandleHidePIN;	// IMP=0x001000000003eb21
- (void)_pinPairHandleShowPIN:(id)arg1;	// IMP=0x001000000003e6d5
- (void)_pinPairHandleRequest:(id)arg1;	// IMP=0x001000000003e265
- (void)_ensureServerStopped;	// IMP=0x001000000003e0d8
- (void)_ensureServerStarted;	// IMP=0x001000000003dd1a
- (void)_wifiStateChanged;	// IMP=0x001000000003dc81
- (void)_watchFound:(id)arg1;	// IMP=0x001000000003d6c9
- (void)_watchFastScanStop;	// IMP=0x001000000003d5eb
- (void)_watchFastScanStartIfAllowed:(id)arg1;	// IMP=0x001000000003d463
- (void)_uiStopIfNeededWithDevice:(id)arg1;	// IMP=0x001000000003d3fa
- (void)_uiStartForMacWithDevice:(id)arg1 label:(id)arg2 extraInfo:(id)arg3;	// IMP=0x001000000003d359
- (void)_uiStartWithDevice:(id)arg1 viewControllerName:(id)arg2 xpcEndpoint:(id)arg3 label:(id)arg4 extraInfo:(id)arg5;	// IMP=0x001000000003d340
- (void)_uiStartWithDevice:(id)arg1 viewControllerName:(id)arg2 xpcEndpoint:(id)arg3 label:(id)arg4 unlessApps:(id)arg5 extraInfo:(id)arg6;	// IMP=0x001000000003d258
- (void)_uiStartWithDevice:(id)arg1 viewControllerName:(id)arg2 label:(id)arg3 unlessApps:(id)arg4 extraInfo:(id)arg5;	// IMP=0x001000000003d234
- (void)_uiStartWiFiPasswordSharing:(id)arg1;	// IMP=0x001000000003cf2a
- (void)_uiStartAuthenticateAccounts:(id)arg1;	// IMP=0x001000000003cef6
- (void)_uiStartProxCardKitTest:(id)arg1 extraInfo:(id)arg2;	// IMP=0x001000000003cec6
- (void)_uiStartSetupWHA:(id)arg1;	// IMP=0x001000000003ce92
- (void)_uiStartSetupWatch:(id)arg1;	// IMP=0x001000000003cd9a
- (_Bool)_deviceHandlesDovePeaceSetup;	// IMP=0x001000000003cd6d
- (void)_uiStartSetupDovePeace:(id)arg1 autoStart:(_Bool)arg2;	// IMP=0x001000000003cbc6
- (void)_uiStartSetupiOS:(id)arg1 autoStart:(_Bool)arg2;	// IMP=0x001000000003ca14
- (void)_uiStartSetupB238:(id)arg1 extraInfo:(id)arg2;	// IMP=0x001000000003c8f7
- (void)_uiStartRepair:(id)arg1 flags:(unsigned int)arg2;	// IMP=0x001000000003c801
- (void)_uiStartPair:(id)arg1 extraInfo:(id)arg2;	// IMP=0x001000000003c7cd
- (void)_uiStartHomeKitDeviceDetectedWithURL:(id)arg1;	// IMP=0x001000000003c69a
- (void)_uiStartAppleTVSetup:(id)arg1 extraInfo:(id)arg2;	// IMP=0x001000000003c57c
- (_Bool)_uiShowing;	// IMP=0x001000000003c574
- (void)_uiLockStatusChanged;	// IMP=0x001000000003c476
- (_Bool)_shouldOfferPassword:(id)arg1;	// IMP=0x001000000003bf26
- (void)_screenStateChanged;	// IMP=0x001000000003be28
- (_Bool)_screenLocked;	// IMP=0x001000000003bdf9
- (void)_scanTimerFired;	// IMP=0x001000000003bd41
- (void)_resetTriggers;	// IMP=0x001000000003bce4
- (void)_iTunesAccountsChanged;	// IMP=0x001000000003bc64
- (void)_hsa2Changed;	// IMP=0x001000000003bbda
- (void)_appleAccountSignIn:(id)arg1;	// IMP=0x001000000003bb0f
- (void)_postDeviceSetupNotificationForDevice:(id)arg1 present:(_Bool)arg2;	// IMP=0x001000000003b94b
- (void)_launchAppWithMachServiceName:(id)arg1;	// IMP=0x001000000003b6ee
- (void)_deviceLost:(id)arg1;	// IMP=0x001000000003b5e8
- (void)_deviceFound:(id)arg1;	// IMP=0x0010000000039ba4
- (void)_ensureClientStopped;	// IMP=0x00100000000398c6
- (void)_ensureClientStarted;	// IMP=0x001000000003899d
- (void)_update;	// IMP=0x0010000000038910
@property(readonly, nonatomic) _Bool uiShowing;
- (void)triggerHomeKitDeviceDetectedWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000038614
- (void)showDevicePickerWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000383bf
- (void)setupDevice:(id)arg1 homeIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000382d3
- (void)retriggerProximitySetup:(CDUnknownBlockType)arg1;	// IMP=0x0010000000037e75
- (void)repairDevice:(id)arg1 flags:(unsigned int)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000037d7c
- (_Bool)reenableProxCardType:(unsigned char)arg1;	// IMP=0x00100000000379c5
- (void)prefsChanged;	// IMP=0x0010000000037195
- (void)_openSetupURL:(id)arg1;	// IMP=0x001000000003712c
- (void)openSetupURL:(id)arg1;	// IMP=0x00100000000370c3
- (void)nfcTagReaderUIActivateWithEndpoint:(id)arg1 params:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000036e4a
- (void)_invalidate;	// IMP=0x0010000000036db1
- (void)invalidate;	// IMP=0x0010000000036d4d
- (void)_activate;	// IMP=0x0010000000036c0f
- (void)activate;	// IMP=0x0010000000036ba9
- (id)descriptionWithLevel:(int)arg1;	// IMP=0x0010000000035bdb
- (id)description;	// IMP=0x0010000000035bc4
- (void)dealloc;	// IMP=0x0010000000035aba
- (id)init;	// IMP=0x0010000000035a43

@end

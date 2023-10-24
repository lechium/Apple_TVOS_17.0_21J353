//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class CLTimer, NSMutableArray, NSMutableSet, NSString, WPAirPlaySolo;

@interface CLATVAirplayMonitor : CLIntersiloService
{
    _Bool _power;	// 8 = 0x8
    NSMutableSet *_clients;	// 16 = 0x10
    WPAirPlaySolo *_airplaySolo;	// 24 = 0x18
    CLTimer *_scanDeliveryDelayTimer;	// 32 = 0x20
    NSMutableArray *_bufferedDevices;	// 40 = 0x28
}

+ (id)getSilo;	// IMP=0x00200000004bf575
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000004bf55c
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000004bf4ff
@property(retain, nonatomic) NSMutableArray *bufferedDevices; // @synthesize bufferedDevices=_bufferedDevices;
@property(retain, nonatomic) CLTimer *scanDeliveryDelayTimer; // @synthesize scanDeliveryDelayTimer=_scanDeliveryDelayTimer;
@property(nonatomic) _Bool power; // @synthesize power=_power;
@property(retain, nonatomic) WPAirPlaySolo *airplaySolo; // @synthesize airplaySolo=_airplaySolo;
@property(retain, nonatomic) NSMutableSet *clients; // @synthesize clients=_clients;
- (void)airPlaySolo:(id)arg1 failedToStartScanningWithError:(id)arg2;	// IMP=0x00100000004c0aa9
- (void)airPlaySoloStoppedScanning:(id)arg1;	// IMP=0x00100000004c0920
- (void)airPlaySoloStartedScanning:(id)arg1;	// IMP=0x00100000004c0797
- (void)airPlaySolo:(id)arg1 foundDevice:(id)arg2 withData:(id)arg3;	// IMP=0x00100000004c008a
- (void)airPlaySoloDidUpdateState:(id)arg1;	// IMP=0x00100000004c0050
- (void)sendBufferedScanNotifications;	// IMP=0x00100000004bff54
- (void)stopScan;	// IMP=0x00100000004bff21
- (void)startScan;	// IMP=0x00100000004bfbc7
- (void)withClients:(CDUnknownBlockType)arg1;	// IMP=0x00100000004bfaaa
- (id)init;	// IMP=0x00100000004bfa6d
- (void)getPowerWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000004bfa45
- (void)stopMonitoringDevicesForClient:(byref id)arg1;	// IMP=0x00100000004bf9ca
- (void)startMonitoringDevicesForClient:(byref id)arg1;	// IMP=0x00100000004bf980
- (void)removeClient:(byref id)arg1;	// IMP=0x00100000004bf929
- (void)addClient:(byref id)arg1;	// IMP=0x00100000004bf8d2
- (void)dealloc;	// IMP=0x00100000004bf894
- (void)releaseData;	// IMP=0x00100000004bf82a
- (void)endService;	// IMP=0x00100000004bf7ef
- (void)beginServiceWithAirPlaySolo:(id)arg1;	// IMP=0x00100000004bf623
- (void)beginService;	// IMP=0x00100000004bf5d1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end

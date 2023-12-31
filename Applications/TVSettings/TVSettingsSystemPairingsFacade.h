//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CUPairingManager, NSArray, NSMutableDictionary, SFService, _TtC10TVSettings27RemotePairingPairingManager;

@interface TVSettingsSystemPairingsFacade : NSObject
{
    _Bool _didRegisterForRemotePairingDarwinNotifications;	// 8 = 0x8
    NSArray *_pairedDevicesInDisplayOrder;	// 16 = 0x10
    NSMutableDictionary *_identifierToDeviceMap;	// 24 = 0x18
    CUPairingManager *_pairingManager;	// 32 = 0x20
    _TtC10TVSettings27RemotePairingPairingManager *_remotePairingPairingManager;	// 40 = 0x28
    SFService *_pairingAdvertisingService;	// 48 = 0x30
}

+ (id)sharedInstance;	// IMP=0x004000000000a1c8
- (void).cxx_destruct;	// IMP=0x002000000000b9a1
@property(nonatomic) _Bool didRegisterForRemotePairingDarwinNotifications; // @synthesize didRegisterForRemotePairingDarwinNotifications=_didRegisterForRemotePairingDarwinNotifications;
@property(retain, nonatomic) SFService *pairingAdvertisingService; // @synthesize pairingAdvertisingService=_pairingAdvertisingService;
@property(retain, nonatomic) _TtC10TVSettings27RemotePairingPairingManager *remotePairingPairingManager; // @synthesize remotePairingPairingManager=_remotePairingPairingManager;
@property(retain, nonatomic) CUPairingManager *pairingManager; // @synthesize pairingManager=_pairingManager;
@property(retain, nonatomic) NSMutableDictionary *identifierToDeviceMap; // @synthesize identifierToDeviceMap=_identifierToDeviceMap;
@property(copy, nonatomic) NSArray *pairedDevicesInDisplayOrder; // @synthesize pairedDevicesInDisplayOrder=_pairedDevicesInDisplayOrder;
- (void)dealloc;	// IMP=0x001000000000b8db
- (_Bool)removeDeviceWithPairedPeer:(id)arg1;	// IMP=0x001000000000b7f9
- (id)deviceWithRemotePairingPairedHost:(id)arg1 createIfNecessary:(_Bool)arg2;	// IMP=0x001000000000b6fa
- (id)deviceWithPairedPeer:(id)arg1 isDevicePairing:(_Bool)arg2 createIfNecessary:(_Bool)arg3;	// IMP=0x001000000000b5f3
- (void)_clearDevices:(_Bool)arg1;	// IMP=0x001000000000b5a1
- (void)_peerChanged:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x001000000000b514
- (void)_peerRemoved:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x001000000000b4e6
- (void)_peerAdded:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x001000000000b4a5
- (void)_updateDeviceDisplayFromDeviceMap;	// IMP=0x001000000000b39b
- (void)_updateFromCoreUtilsPairedPeers:(id)arg1 isDevice:(_Bool)arg2;	// IMP=0x001000000000b23a
- (void)_updateFromRemotePairingPairedHosts:(id)arg1;	// IMP=0x001000000000b0f3
- (void)removeCoreUtilsPairingWithIdentifier:(id)arg1 isDevice:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x001000000000af32
- (void)unpairDevice:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000abfa
- (_Bool)deviceStillPaired:(id)arg1;	// IMP=0x001000000000ab8f
- (void)_queryPairedPeers;	// IMP=0x001000000000a7f9
- (void)_configurePairingManager;	// IMP=0x001000000000a415
- (void)_destroyPairingManager;	// IMP=0x001000000000a3e3
- (void)stopAdvertising;	// IMP=0x001000000000a3b1
- (void)startAdvertising;	// IMP=0x001000000000a327
- (void)remotePairingPairedHostsChanged;	// IMP=0x001000000000a315
- (void)startScanningIfNeeded;	// IMP=0x001000000000a2e4
- (id)init;	// IMP=0x001000000000a24d

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreBluetooth/CBPeripheral.h>

@interface CBPeripheral (TVSettings)
+ (long long)tvs_previousRemoteType;	// IMP=0x0080000000086bd6
- (id)_tvs_previouslyAdvertisedOrConnectedPeripheralInfo;	// IMP=0x0010000000086ed4
- (id)_getFirmwarePropertyFromIOReg:(id)arg1;	// IMP=0x0010000000086ecc
- (id)_tvs_previouslyConnectedPeripheralInfo;	// IMP=0x0010000000086e00
- (void)tvs_rememberAdvertisingBluetoothGamepad;	// IMP=0x0010000000086a59
- (void)tvs_rememberAdvertisingBluetoothRemoteWithRemoteType:(long long)arg1;	// IMP=0x0010000000086839
- (_Bool)tvs_supportsDevFW;	// IMP=0x00100000000867e4
- (id)tvs_hardwareVersion;	// IMP=0x00100000000867cb
- (id)tvs_multiTouchFirmwareVersion;	// IMP=0x00100000000867b2
- (id)tvs_firmwareVersion;	// IMP=0x00100000000865f3
- (unsigned long long)tvs_vendorIdentifierAndProductIdentifier:(unsigned long long *)arg1;	// IMP=0x001000000008658b
- (unsigned long long)tvs_vendorIdentifier;	// IMP=0x0010000000086577
- (_Bool)tvs_isBluetoothGamepad;	// IMP=0x001000000008652e
- (long long)tvs_bluetoothRemoteType;	// IMP=0x00100000000864a4
- (_Bool)tvs_isGenericBluetoothRemote;	// IMP=0x001000000008648a
- (_Bool)tvs_isBluetoothRemote;	// IMP=0x0010000000086441
- (_Bool)tvs_wasPreviouslyConnected;	// IMP=0x001000000008640e
@end

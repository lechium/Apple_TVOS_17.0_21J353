//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CBCentralManager, CBPeripheral, CBUUID, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface BleConnection : NSObject
{
    unsigned char _currentMode;	// 8 = 0x8
    _Bool _found;	// 9 = 0x9
    struct SetupDiscriminator _deviceDiscriminator;	// 10 = 0xa
    NSObject<OS_dispatch_queue> *_chipWorkQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_workQueue;	// 24 = 0x18
    CBCentralManager *_centralManager;	// 32 = 0x20
    CBPeripheral *_peripheral;	// 40 = 0x28
    CBUUID *_shortServiceUUID;	// 48 = 0x30
    NSObject<OS_dispatch_source> *_timer;	// 56 = 0x38
    NSMutableDictionary *_cachedPeripherals;	// 64 = 0x40
    void *_appState;	// 72 = 0x48
    CDUnknownFunctionPointerType _onConnectionComplete;	// 80 = 0x50
    CDUnknownFunctionPointerType _onConnectionError;	// 88 = 0x58
    struct BleScannerDelegate *_scannerDelegate;	// 96 = 0x60
    struct BleLayer *_mBleLayer;	// 104 = 0x68
}

+ (void)fillServiceWithCharacteristicUuids:(id)arg1 svcId:(struct ChipBleUUID *)arg2 charId:(struct ChipBleUUID *)arg3;	// IMP=0x00100000009c4c40
- (id).cxx_construct;	// IMP=0x00000000009c5bf0
- (void).cxx_destruct;	// IMP=0x00000000009c5b50
@property(nonatomic) struct BleLayer *mBleLayer; // @synthesize mBleLayer=_mBleLayer;
@property(nonatomic) struct BleScannerDelegate *scannerDelegate; // @synthesize scannerDelegate=_scannerDelegate;
@property(nonatomic) CDUnknownFunctionPointerType onConnectionError; // @synthesize onConnectionError=_onConnectionError;
@property(nonatomic) CDUnknownFunctionPointerType onConnectionComplete; // @synthesize onConnectionComplete=_onConnectionComplete;
@property(nonatomic) void *appState; // @synthesize appState=_appState;
@property(nonatomic) struct SetupDiscriminator deviceDiscriminator; // @synthesize deviceDiscriminator=_deviceDiscriminator;
@property(nonatomic) _Bool found; // @synthesize found=_found;
@property(retain, nonatomic) NSMutableDictionary *cachedPeripherals; // @synthesize cachedPeripherals=_cachedPeripherals;
@property(readonly, nonatomic) unsigned char currentMode; // @synthesize currentMode=_currentMode;
@property(readonly, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) CBUUID *shortServiceUUID; // @synthesize shortServiceUUID=_shortServiceUUID;
@property(retain, nonatomic) CBPeripheral *peripheral; // @synthesize peripheral=_peripheral;
@property(retain, nonatomic) CBCentralManager *centralManager; // @synthesize centralManager=_centralManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *chipWorkQueue; // @synthesize chipWorkQueue=_chipWorkQueue;
- (void)setBleLayer:(struct BleLayer *)arg1;	// IMP=0x00000000009c5730
- (void)removePeripheralsFromCache;	// IMP=0x00000000009c49d0
- (void)removePeripheralFromCache:(id)arg1;	// IMP=0x00000000009c4650
- (void)addPeripheralToCache:(id)arg1 data:(id)arg2;	// IMP=0x00000000009c3570
- (void)updateWithPeripheral:(id)arg1;	// IMP=0x00000000009c3390
- (void)updateWithDiscriminator:(const struct SetupDiscriminator *)arg1;	// IMP=0x00000000009c2cf0
- (void)updateWithDelegate:(struct BleScannerDelegate *)arg1;	// IMP=0x00000000009c27f0
- (void)connect:(id)arg1;	// IMP=0x00000000009c2720
- (void)stopScanning;	// IMP=0x00000000009c26d0
- (void)startScanning;	// IMP=0x00000000009c2560
- (void)stop;	// IMP=0x00000000009c2360
- (void)start;	// IMP=0x00000000009c2300
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3;	// IMP=0x00000000009c1730
- (void)peripheral:(id)arg1 didUpdateNotificationStateForCharacteristic:(id)arg2 error:(id)arg3;	// IMP=0x00000000009c0fd0
- (void)peripheral:(id)arg1 didWriteValueForCharacteristic:(id)arg2 error:(id)arg3;	// IMP=0x00000000009c0960
- (void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3;	// IMP=0x00000000009c05d0
- (void)peripheral:(id)arg1 didDiscoverServices:(id)arg2;	// IMP=0x00000000009bfc10
- (void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;	// IMP=0x00000000009bfb40
- (_Bool)checkDiscriminator:(unsigned short)arg1;	// IMP=0x00000000009bfa70
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;	// IMP=0x00000000009be910
- (void)centralManagerDidUpdateState:(id)arg1;	// IMP=0x00000000009be0e0
- (void)dispatchConnectionComplete:(id)arg1;	// IMP=0x00000000009bdf80
- (void)dispatchConnectionError:(struct ChipError)arg1;	// IMP=0x00000000009bde20
- (void)clearTimer;	// IMP=0x00000000009bddd0
- (void)setupTimer:(unsigned long long)arg1;	// IMP=0x00000000009bdc00
- (_Bool)isConnecting;	// IMP=0x00000000009bdbd0
- (_Bool)isScanning;	// IMP=0x00000000009bdba0
- (_Bool)isScanningWithoutDelegate;	// IMP=0x00000000009bdb70
- (id)initWithDiscriminator:(const struct SetupDiscriminator *)arg1 queue:(id)arg2;	// IMP=0x00000000009bda50
- (id)initWithDelegate:(struct BleScannerDelegate *)arg1 queue:(id)arg2;	// IMP=0x00000000009bd900
- (id)initWithQueue:(id)arg1;	// IMP=0x00000000009bd6d0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


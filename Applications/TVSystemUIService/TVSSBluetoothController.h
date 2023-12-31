//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSNumber, NSString, TVSObserverSet, TVSSBluetoothControllerConfiguration, UIImage;
@protocol TVPSBluetoothDeviceManaging;

@interface TVSSBluetoothController : NSObject
{
    _Bool _isDiscoveringPairableDevices;	// 8 = 0x8
    NSDictionary *_pairedDeviceByIdentifier;	// 16 = 0x10
    NSDictionary *;	// 24 = 0x18
    TVSObserverSet *_pairedDeviceObservers;	// 32 = 0x20
    TVSObserverSet *_pairableDeviceObservers;	// 40 = 0x28
    TVSSBluetoothControllerConfiguration *_configuration;	// 48 = 0x30
    NSArray *_pairedDevices;	// 56 = 0x38
    NSArray *_pairableDevices;	// 64 = 0x40
    NSObject<TVPSBluetoothDeviceManaging> *_bluetoothManager;	// 72 = 0x48
}

+ (id)_deviceLookupDictionaryFromDevices:(id)arg1;	// IMP=0x00200000000f12c0
+ (id)_sortedDevices:(id)arg1;	// IMP=0x00100000000f1140
+ (id)_deviceSortDescriptors;	// IMP=0x00100000000f1080
- (void).cxx_destruct;	// IMP=0x00100000000f15f0
@property(readonly, nonatomic) NSObject<TVPSBluetoothDeviceManaging> *bluetoothManager; // @synthesize bluetoothManager=_bluetoothManager;
@property(readonly, copy, nonatomic) NSArray *pairableDevices; // @synthesize pairableDevices=_pairableDevices;
@property(readonly, copy, nonatomic) NSArray *pairedDevices; // @synthesize pairedDevices=_pairedDevices;
@property(readonly, nonatomic) TVSSBluetoothControllerConfiguration *configuration; // @synthesize configuration=_configuration;
- (void)_updatePairableDevicesAndNotify:(_Bool)arg1;	// IMP=0x00100000000f0df0
- (void)_updatePairedDevices;	// IMP=0x00100000000f0c00
- (void)_updateDiscoveringPairableDevices;	// IMP=0x00100000000f09f0
- (void)bluetoothDeviceManager:(id)arg1 didUpdatePairedDevices:(id)arg2;	// IMP=0x00100000000f0930
- (void)bluetoothDeviceManager:(id)arg1 didUpdatePairableDevices:(id)arg2;	// IMP=0x00100000000f0870
- (void)unpairDeviceWithIdentifier:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000f0730
- (void)disconnectDeviceWithIdentifier:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000f05f0
- (void)connectDeviceWithIdentifier:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000f04b0
- (id)deviceForIdentifier:(id)arg1;	// IMP=0x00100000000f03e0
- (void)removePairableDevicesObserver:(id)arg1;	// IMP=0x00100000000f0150
- (void)addPairableDevicesObserver:(id)arg1;	// IMP=0x00100000000efeb0
- (void)removePairedDevicesObserver:(id)arg1;	// IMP=0x00100000000efc30
- (void)addPairedDevicesObserver:(id)arg1;	// IMP=0x00100000000ef9b0
@property(readonly, copy, nonatomic) NSArray *connectedPairedDevices;
- (void)dealloc;	// IMP=0x00100000000ef8a0
- (id)initWithConfiguration:(id)arg1;	// IMP=0x00100000000ef470
- (id)initWithConfiguration:(id)arg1 bluetoothManagerProvider:(CDUnknownBlockType)arg2;	// IMP=0x00100000000eeb50
@property(nonatomic) _Bool contentIsSelected;
@property(readonly, nonatomic) UIImage *contentImage;
@property(readonly, nonatomic) NSString *contentTitle;

// Remaining properties
@property(readonly, nonatomic) NSArray *contentChildIdentifiers;
@property(readonly, nonatomic) UIImage *contentImage1;
@property(readonly, nonatomic) UIImage *contentImage2;
@property(readonly, nonatomic) UIImage *contentImage3;
@property(readonly, nonatomic) UIImage *contentImage4;
@property(nonatomic) _Bool contentIsDisabled;
@property(retain, nonatomic) NSNumber *contentPercentage;
@property(readonly, nonatomic) NSString *contentText1;
@property(readonly, nonatomic) NSString *contentText2;
@property(readonly, nonatomic) NSString *contentText3;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


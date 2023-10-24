//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADMobileBluetoothDeviceDataSource;

@interface ADBluetoothManager : NSObject
{
    ADMobileBluetoothDeviceDataSource *_dataSource;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00400000002f271b
- (void).cxx_destruct;	// IMP=0x00200000002f270b
- (id)wirelessSplitterSession;	// IMP=0x00100000002f26f5
- (void)getPairedDevicesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002f26df
- (void)getConnectedDevicesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002f26c9
- (id)deviceWithUID:(id)arg1;	// IMP=0x00100000002f26b3
- (id)deviceWithAddress:(id)arg1;	// IMP=0x00100000002f260d
- (id)deviceWithRecordingInfo:(id)arg1;	// IMP=0x00100000002f24b9
- (void)prewarmDeviceWithIdentifier:(id)arg1;	// IMP=0x00100000002f2413
- (id)_init;	// IMP=0x00100000002f23bd

@end


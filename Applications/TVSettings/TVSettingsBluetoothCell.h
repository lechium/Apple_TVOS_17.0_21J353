//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSettingKit/TSKTableViewTextCell.h>

@class TVSBluetoothDevice, UIImageView;

@interface TVSettingsBluetoothCell : TSKTableViewTextCell
{
    UIImageView *_batteryIconView;	// 8 = 0x8
    TVSBluetoothDevice *_bluetoothDevice;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000f7119
@property(retain, nonatomic) TVSBluetoothDevice *bluetoothDevice; // @synthesize bluetoothDevice=_bluetoothDevice;
- (void)_updateBatteryImage;	// IMP=0x00100000000f6f43
- (void)_updateAccessoryTintColor;	// IMP=0x00100000000f6ded
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00100000000f6d91
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00100000000f6ccc
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00100000000f6c0c
- (void)layoutSubviews;	// IMP=0x00100000000f681d
- (void)prepareForReuse;	// IMP=0x00100000000f66b5
- (void)dealloc;	// IMP=0x00100000000f6675
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00100000000f655a

@end


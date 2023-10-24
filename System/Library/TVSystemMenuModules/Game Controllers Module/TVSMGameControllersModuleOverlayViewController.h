//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSObject, NSString, UICollectionViewDiffableDataSource;
@protocol TVPSBluetoothDeviceManaging, TVSMModuleOverlayContentViewControllerDelegate;

@interface TVSMGameControllersModuleOverlayViewController : UIViewController
{
    _Bool _observingDevices;	// 8 = 0x8
    id <TVSMModuleOverlayContentViewControllerDelegate> _delegate;	// 16 = 0x10
    NSObject<TVPSBluetoothDeviceManaging> *_bluetoothDeviceManager;	// 24 = 0x18
    UICollectionViewDiffableDataSource *_diffableDataSource;	// 32 = 0x20
}

+ (id)_batteryLevelForDevice:(id)arg1;	// IMP=0x001000000000a8d0
+ (id)_displayNameForDevice:(id)arg1;	// IMP=0x001000000000a780
+ (id)_sectionIdentifierForDiffableDataSourceItemIdentifier:(id)arg1;	// IMP=0x0010000000009c70
+ (id)_deviceIdentifierForDiffableDataSourceItemIdentifier:(id)arg1;	// IMP=0x0010000000009bd0
+ (id)_diffableDataSourceItemIdentifierComponents:(id)arg1;	// IMP=0x0010000000009b50
+ (id)_diffableDataSourceItemIdentifierForDevice:(id)arg1 sectionIdentifier:(id)arg2;	// IMP=0x0010000000009a50
- (void).cxx_destruct;	// IMP=0x000000000000c9b0
@property(nonatomic, getter=isObservingDevices) _Bool observingDevices; // @synthesize observingDevices=_observingDevices;
@property(readonly, nonatomic) UICollectionViewDiffableDataSource *diffableDataSource; // @synthesize diffableDataSource=_diffableDataSource;
@property(readonly, nonatomic) NSObject<TVPSBluetoothDeviceManaging> *bluetoothDeviceManager; // @synthesize bluetoothDeviceManager=_bluetoothDeviceManager;
@property(nonatomic) __weak id <TVSMModuleOverlayContentViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_presentAlertWithError:(id)arg1 forDevice:(id)arg2;	// IMP=0x000000000000bc30
- (void)_unpairDevice:(id)arg1;	// IMP=0x000000000000ba30
- (void)_connectDevice:(id)arg1;	// IMP=0x000000000000b830
- (void)_disconnectDevice:(id)arg1;	// IMP=0x000000000000b630
- (void)_handlePairedDevicesUpdate:(id)arg1 pairableDevicesUpdate:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000000000aa20
- (void)_configureCell:(id)arg1 withDevice:(id)arg2;	// IMP=0x000000000000a430
- (id)_deviceForDiffableDataSourceItemIdentifier:(id)arg1;	// IMP=0x000000000000a350
- (id)_deviceCellWithItemIdentifier:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x000000000000a210
- (id)_settingsCellAtIndexPath:(id)arg1;	// IMP=0x000000000000a060
- (id)_sectionIdentifierAtIndex:(long long)arg1;	// IMP=0x0000000000009f40
- (id)_indexPathForFocusedCell;	// IMP=0x0000000000009db0
- (id)_collectionView;	// IMP=0x0000000000009d40
- (id)_overlayView;	// IMP=0x0000000000009d10
- (void)_handleLongPressSelect:(id)arg1;	// IMP=0x0000000000008f60
- (void)_handleMenuPress:(id)arg1;	// IMP=0x0000000000008ee0
- (void)_handleWillEnterForegroundNotification:(id)arg1;	// IMP=0x0000000000008e20
- (void)_handleDidEnterBackgroundNotification:(id)arg1;	// IMP=0x0000000000008d70
- (void)bluetoothDeviceManager:(id)arg1 didUpdatePairedDevices:(id)arg2;	// IMP=0x0000000000008ca0
- (void)bluetoothDeviceManager:(id)arg1 didUpdatePairableDevices:(id)arg2;	// IMP=0x0000000000008bd0
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x0000000000008a60
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0000000000008790
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;	// IMP=0x00000000000085e0
- (void)viewDidLoad;	// IMP=0x0000000000007bc0
- (void)loadView;	// IMP=0x0000000000007b70
- (void)dealloc;	// IMP=0x0000000000007aa0
- (id)initWithBluetoothDeviceManager:(id)arg1;	// IMP=0x0000000000007950
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000078e0
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000007850

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

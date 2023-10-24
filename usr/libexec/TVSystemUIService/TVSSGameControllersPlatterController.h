//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSystemPanelUI/TVSPPlatterController.h>

@class NSString, TVSSBluetoothController;

@interface TVSSGameControllersPlatterController : TVSPPlatterController
{
    TVSSBluetoothController *_bluetoothController;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000001243c0
@property(readonly, nonatomic) TVSSBluetoothController *bluetoothController; // @synthesize bluetoothController=_bluetoothController;
- (void)_presentAlertWithError:(id)arg1 forGameController:(id)arg2;	// IMP=0x0010000000123a50
- (void)_unpairGameController:(id)arg1;	// IMP=0x0010000000123840
- (void)_disconnectGameController:(id)arg1;	// IMP=0x0010000000123630
- (void)_connectGameController:(id)arg1;	// IMP=0x0010000000123420
- (id)_unpairActionForGameController:(id)arg1;	// IMP=0x00100000001231a0
- (void)_updateRenderersWithGameControllers:(id)arg1;	// IMP=0x0010000000122ed0
- (void)_updateLayoutAndReloadContent:(_Bool)arg1;	// IMP=0x0010000000122d70
- (id)_layout;	// IMP=0x00100000001222d0
- (void)_launchSettingsWithURLPath:(id)arg1;	// IMP=0x0010000000122160
- (id)_gameControllerForRendererIdentifier:(id)arg1;	// IMP=0x00100000001220a0
- (void)bluetoothControllerPairableDevicesDidUpdate:(id)arg1;	// IMP=0x0010000000122040
- (void)bluetoothControllerPairedDevicesDidUpdate:(id)arg1;	// IMP=0x0010000000121fe0
- (id)contextMenuConfigurationForRenderer:(id)arg1;	// IMP=0x0010000000121cd0
- (void)rendererWasSelected:(id)arg1 context:(id)arg2;	// IMP=0x0010000000121ac0
- (void)dealloc;	// IMP=0x0010000000121a40
- (id)initWithBluetoothController:(id)arg1;	// IMP=0x0010000000120860

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


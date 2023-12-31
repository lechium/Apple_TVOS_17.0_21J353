//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString, TVSSBluetoothRemoteController, TVSSDoNotDisturbController, TVSSSensorActivityController;

@interface TVSSStatusMenuItemProvider
{
    TVSSBluetoothRemoteController *_bluetoothRemoteController;	// 8 = 0x8
    TVSSDoNotDisturbController *_doNotDisturbController;	// 16 = 0x10
    TVSSSensorActivityController *_sensorActivityController;	// 24 = 0x18
    NSDictionary *_cyclingMenuItemsDictionary;	// 32 = 0x20
}

+ (id)_cyclingMenuItemsSortOrderDictionary;	// IMP=0x00200000000df5e0
- (void).cxx_destruct;	// IMP=0x00200000000e0080
- (id)_doNotDisturbMenuItem;	// IMP=0x00100000000dff20
- (_Bool)_isDoNotDisturbEnabled;	// IMP=0x00100000000dfee0
- (id)_remotePowerStateMenuItem;	// IMP=0x00100000000dfd50
- (id)_remotePowerStateContentWithPowerState:(unsigned long long)arg1;	// IMP=0x00100000000dfaf0
- (unsigned long long)_currentRemotePowerState;	// IMP=0x00100000000df9c0
- (_Bool)_remoteHasNotablePowerState;	// IMP=0x00100000000df970
- (id)_remotePowerStateMenuItemIdentifierForPowerState:(unsigned long long)arg1;	// IMP=0x00100000000df8a0
- (id)_currentRemotePowerStateMenuItem;	// IMP=0x00100000000df750
- (id)_sortedCyclingMenuItems;	// IMP=0x00100000000df1d0
- (void)_updateCyclingMenuItems;	// IMP=0x00100000000df060
- (id)_newCyclingVisualContent;	// IMP=0x00100000000defc0
- (_Bool)_isLocationActive;	// IMP=0x00100000000def50
- (_Bool)updateVisualContentForMenuItem:(id)arg1;	// IMP=0x00100000000dee40
- (id)log;	// IMP=0x00100000000ded80
- (id)newMenuItem;	// IMP=0x00100000000dece0
- (_Bool)shouldShowMenuItem;	// IMP=0x00100000000dec40
- (void)bluetoothRemoteController:(id)arg1 didUpdateCurrentRemote:(id)arg2;	// IMP=0x00100000000debc0
- (void)doNotDisturbControllerDidUpdate:(id)arg1;	// IMP=0x00100000000deb60
- (void)sensorActivityControllerDidUpdate:(id)arg1;	// IMP=0x00100000000deb00
- (void)dealloc;	// IMP=0x00100000000dea60
- (id)initWithDoNotDisturbController:(id)arg1 bluetoothRemoteController:(id)arg2 sensorActivityController:(id)arg3;	// IMP=0x00100000000dda20

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


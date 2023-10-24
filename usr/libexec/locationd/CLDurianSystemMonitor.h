//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol CLDurianSystemMonitorDelegate, CLIntersiloUniverse, CLRoutineMonitorServiceProtocol;

@interface CLDurianSystemMonitor : NSObject
{
    struct unique_ptr<CLDaemonStatus_Type::Client, std::default_delete<CLDaemonStatus_Type::Client>> _daemonStatusClient;	// 8 = 0x8
    struct unique_ptr<CLWifiService_Type::Client, std::default_delete<CLWifiService_Type::Client>> _wifiServiceClient;	// 16 = 0x10
    struct unique_ptr<CLBluetoothService_Type::Client, std::default_delete<CLBluetoothService_Type::Client>> _bluetoothServiceClient;	// 24 = 0x18
    struct unique_ptr<CLDataProtectionManager_Type::Client, std::default_delete<CLDataProtectionManager_Type::Client>> _dataProtectionClient;	// 32 = 0x20
    _Bool _btStreaming;	// 40 = 0x28
    _Bool _wifiNetworkCritical;	// 41 = 0x29
    int _isCoexImpacted;	// 44 = 0x2c
    _Bool _isAssociatedTo2GHzWiFi;	// 48 = 0x30
    int _audioStreamNotificationToken;	// 52 = 0x34
    id <CLRoutineMonitorServiceProtocol> _routineMonitor;	// 56 = 0x38
    _Bool valid;	// 64 = 0x40
    id <CLDurianSystemMonitorDelegate> _delegate;	// 72 = 0x48
    id <CLIntersiloUniverse> _universe;	// 80 = 0x50
}

- (id).cxx_construct;	// IMP=0x0020000000df7302
- (void).cxx_destruct;	// IMP=0x0010000000df7290
@property(retain) id <CLIntersiloUniverse> universe; // @synthesize universe=_universe;
@property(nonatomic) id <CLDurianSystemMonitorDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool valid; // @synthesize valid;
- (void)_onDataProtectionNotification:(int)arg1 data:(NotificationData_6933e140)arg2;	// IMP=0x0010000000df7070
- (void)fetchLOIVisitAtStart;	// IMP=0x0010000000df6c18
- (void)onVisit:(id)arg1;	// IMP=0x0010000000df6a92
- (void)_onBluetoothServiceNotification:(int)arg1 data:(struct NotificationData)arg2;	// IMP=0x0010000000df670f
- (void)_onWifiServiceNotification:(int)arg1 data:(struct NotificationData)arg2;	// IMP=0x0010000000df6559
- (void)_onDaemonStatusNotification:(int)arg1 data:(union NotificationData)arg2;	// IMP=0x0010000000df61df
- (void)_unregisterForNotifications;	// IMP=0x0010000000df60df
- (void)_registerForNotifications;	// IMP=0x0010000000df5aee
- (void)_checkAudioStreamState;	// IMP=0x0010000000df5975
- (void)_recomputeCoexImpactedStateAndNotifyClients;	// IMP=0x0010000000df5838
@property(readonly) int coexImpactState;
- (void)dealloc;	// IMP=0x0010000000df57d5
- (id)initWithUniverse:(id)arg1;	// IMP=0x0010000000df56db
- (id)init;	// IMP=0x0010000000df56b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


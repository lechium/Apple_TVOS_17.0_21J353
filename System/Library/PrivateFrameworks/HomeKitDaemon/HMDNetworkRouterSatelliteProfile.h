//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface HMDNetworkRouterSatelliteProfile
{
    unsigned long long _networkStatus;	// 16 = 0x10
    long long _satelliteStatus;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000a11cef
+ (id)logCategory;	// IMP=0x0060000000a11cbf
@property(nonatomic) long long satelliteStatus; // @synthesize satelliteStatus=_satelliteStatus;
@property(nonatomic) unsigned long long networkStatus; // @synthesize networkStatus=_networkStatus;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000a10d4a
- (void)_readAndUpdateCharacteristic;	// IMP=0x0000000000a10cd9
- (void)_readAndProcessCharacteristics:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000a107da
- (void)handleAccessoryConfigured:(id)arg1;	// IMP=0x0000000000a107c8
- (void)__handleAccessoryConnected;	// IMP=0x0000000000a10757
- (void)_registerForRemoteNotifications;	// IMP=0x0000000000a106e6
- (void)handleAccessoryIsReachable:(id)arg1;	// IMP=0x0000000000a106ad
- (void)handleCharacteristicsChangedNotification:(id)arg1;	// IMP=0x0000000000a105f5
- (void)_handleCharacteristicsChangedPayload:(id)arg1;	// IMP=0x0000000000a1036f
- (void)_handleCharacteristicChanges:(id)arg1;	// IMP=0x0000000000a1008a
- (void)__updateSatelliteStatus:(id)arg1;	// IMP=0x0000000000a10014
- (void)_updateNetworkStatus;	// IMP=0x0000000000a0fecf
- (void)__notifyClientsOfNetworkStatusUpdate:(unsigned long long)arg1;	// IMP=0x0000000000a0fd35
- (void)handleInitialState;	// IMP=0x0000000000a0fcaf
- (void)registerForMessages;	// IMP=0x0000000000a0fc59
- (void)_registerForNotifications;	// IMP=0x0000000000a0fae8
- (id)runtimeState;	// IMP=0x0000000000a0f9ad
- (void)dealloc;	// IMP=0x0000000000a0f96f
- (void)unconfigure;	// IMP=0x0000000000a0f8c4
- (id)description;	// IMP=0x0000000000a0f80a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000a0f72e
- (id)initWithRouterSatelliteService:(id)arg1 msgDispatcher:(id)arg2;	// IMP=0x0000000000a0f4b7

@end


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

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000008d00ab
+ (id)logCategory;	// IMP=0x00600000008d007b
@property(nonatomic) long long satelliteStatus; // @synthesize satelliteStatus=_satelliteStatus;
@property(nonatomic) unsigned long long networkStatus; // @synthesize networkStatus=_networkStatus;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000008cf106
- (void)_readAndUpdateCharacteristic;	// IMP=0x00000000008cf095
- (void)_readAndProcessCharacteristics:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000008ceb96
- (void)handleAccessoryConfigured:(id)arg1;	// IMP=0x00000000008ceb84
- (void)__handleAccessoryConnected;	// IMP=0x00000000008ceb13
- (void)_registerForRemoteNotifications;	// IMP=0x00000000008ceaa2
- (void)handleAccessoryIsReachable:(id)arg1;	// IMP=0x00000000008cea69
- (void)handleCharacteristicsChangedNotification:(id)arg1;	// IMP=0x00000000008ce9b1
- (void)_handleCharacteristicsChangedPayload:(id)arg1;	// IMP=0x00000000008ce72b
- (void)_handleCharacteristicChanges:(id)arg1;	// IMP=0x00000000008ce446
- (void)__updateSatelliteStatus:(id)arg1;	// IMP=0x00000000008ce3d0
- (void)_updateNetworkStatus;	// IMP=0x00000000008ce28b
- (void)__notifyClientsOfNetworkStatusUpdate:(unsigned long long)arg1;	// IMP=0x00000000008ce0f1
- (void)handleInitialState;	// IMP=0x00000000008ce06b
- (void)registerForMessages;	// IMP=0x00000000008ce015
- (void)_registerForNotifications;	// IMP=0x00000000008cdea4
- (id)runtimeState;	// IMP=0x00000000008cdd69
- (void)dealloc;	// IMP=0x00000000008cdd2b
- (void)unconfigure;	// IMP=0x00000000008cdc80
- (id)description;	// IMP=0x00000000008cdbc6
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000008cdaea
- (id)initWithRouterSatelliteService:(id)arg1 msgDispatcher:(id)arg2;	// IMP=0x00000000008cd873

@end


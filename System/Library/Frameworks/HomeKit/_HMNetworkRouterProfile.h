//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "_HMAccessoryProfile.h"

@class NSSet;
@protocol _HMNetworkRouterProfileDelegate;

__attribute__((visibility("hidden")))
@interface _HMNetworkRouterProfile : _HMAccessoryProfile
{
    _Bool _satellite;	// 12 = 0xc
    unsigned long long _networkStatus;	// 16 = 0x10
    NSSet *_identifiersForSatelliteProfiles;	// 24 = 0x18
    id <_HMNetworkRouterProfileDelegate> _delegate;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000000fe03f
- (void).cxx_destruct;	// IMP=0x00000000000fdfd6
@property(nonatomic) __weak id <_HMNetworkRouterProfileDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000fde01
- (void)handleRuntimeStateUpdate:(id)arg1;	// IMP=0x00000000000fdcde
- (void)_handleNetworkStatusUpdated:(id)arg1;	// IMP=0x00000000000fdc8f
- (void)__handleNetworkStatusUpdated:(id)arg1;	// IMP=0x00000000000fdc21
- (void)_handleSatelliteProfilesUpdated:(id)arg1;	// IMP=0x00000000000fd9ee
- (_Bool)checkForUpdatedNetworkStatus:(unsigned long long)arg1;	// IMP=0x00000000000fd888
- (_Bool)checkForUpdatedIdentifiersForSatellites:(id)arg1;	// IMP=0x00000000000fd6ed
- (id)messageReceiveQueue;	// IMP=0x00000000000fd69d
- (id)messageDestination;	// IMP=0x00000000000fd634
- (id)messageTargetUUID;	// IMP=0x00000000000fd5e4
- (void)setIdentifiersForSatelliteProfiles:(id)arg1;	// IMP=0x00000000000fd567
@property(readonly) NSSet *identifiersForSatelliteProfiles; // @synthesize identifiersForSatelliteProfiles=_identifiersForSatelliteProfiles;
- (void)setSatellite:(_Bool)arg1;	// IMP=0x00000000000fd4ed
@property(readonly, getter=isSatellite) _Bool satellite; // @synthesize satellite=_satellite;
- (void)setNetworkStatus:(unsigned long long)arg1;	// IMP=0x00000000000fd481
@property(readonly) unsigned long long networkStatus; // @synthesize networkStatus=_networkStatus;
- (void)_registerNotificationHandlers;	// IMP=0x00000000000fd388

@end

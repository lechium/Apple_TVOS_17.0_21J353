//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@protocol HMDPrimaryResidentDiscoveryManagerDelegate, HMDResidentDeviceManagerContext;

@protocol HMDPrimaryResidentDiscoveryManager <NSObject>
@property __weak id <HMDPrimaryResidentDiscoveryManagerDelegate> delegate;
- (void)cancel;
- (void)discoverPrimaryResident;
- (void)configureWithContext:(id <HMDResidentDeviceManagerContext>)arg1;
@end

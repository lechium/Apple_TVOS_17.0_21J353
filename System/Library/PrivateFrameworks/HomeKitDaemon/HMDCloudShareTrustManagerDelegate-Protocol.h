//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMBShareUserID, HMDCloudShareTrustManager, NSUUID;

@protocol HMDCloudShareTrustManagerDelegate <NSObject>
- (void)cloudShareTrustManager:(HMDCloudShareTrustManager *)arg1 didRemoveUserWithUUID:(NSUUID *)arg2;
- (void)didRemoveTrustZoneInCloudShareTrustManager:(HMDCloudShareTrustManager *)arg1;
- (void)didFinishConfiguringForCloudShareTrustManager:(HMDCloudShareTrustManager *)arg1;
- (void)cloudShareTrustManager:(HMDCloudShareTrustManager *)arg1 didFetchOwnerCloudShareID:(HMBShareUserID *)arg2;
@end


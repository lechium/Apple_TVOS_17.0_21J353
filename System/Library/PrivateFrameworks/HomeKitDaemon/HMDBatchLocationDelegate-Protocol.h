//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMDLocationDelegate-Protocol.h>

@class CLLocation;

@protocol HMDBatchLocationDelegate <HMDLocationDelegate>
- (void)didDetermineBatchLocation:(CLLocation *)arg1;
- (void)getReachableIPAccessory:(unsigned long long *)arg1 btleAccessory:(unsigned long long *)arg2 mediaAccessory:(unsigned long long *)arg3;
@end


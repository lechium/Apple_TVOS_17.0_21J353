//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMFWiFiManager, HMFWiFiNetworkInfo, NSNotificationCenter;
@protocol HMDAppleMediaAccessoryInfoControllerDataSource, HMDAppleMediaAccessoryInfoControllerDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDAppleMediaAccessoryInfoController : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    id <HMDAppleMediaAccessoryInfoControllerDataSource> _dataSource;	// 16 = 0x10
    id <HMDAppleMediaAccessoryInfoControllerDelegate> _delegate;	// 24 = 0x18
    NSNotificationCenter *_notificationCenter;	// 32 = 0x20
    HMFWiFiNetworkInfo *_lastWifiNetworkInfo;	// 40 = 0x28
    HMFWiFiManager *_wifiManager;	// 48 = 0x30
}

+ (id)logCategory;	// IMP=0x00600000006555e8
- (void).cxx_destruct;	// IMP=0x00000000006547ce
@property(retain) HMFWiFiManager *wifiManager; // @synthesize wifiManager=_wifiManager;
@property(retain) HMFWiFiNetworkInfo *lastWifiNetworkInfo; // @synthesize lastWifiNetworkInfo=_lastWifiNetworkInfo;
@property(retain) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly) __weak id <HMDAppleMediaAccessoryInfoControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) __weak id <HMDAppleMediaAccessoryInfoControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)_notifyDelegateWifiInfoUpdated:(id)arg1;	// IMP=0x0000000000654527
- (void)_postUpdateSoftwareVersionIfDifferent:(id)arg1;	// IMP=0x00000000006543b4
- (void)_postUpdateWifiNetworkInfoIfDifferent:(id)arg1;	// IMP=0x0000000000654209
- (id)currentWifiNetworkInfo;	// IMP=0x000000000065413c
- (void)handleCurrentNetworkChangedNotification:(id)arg1;	// IMP=0x0000000000653ee8
- (void)configure;	// IMP=0x0000000000653d61
- (id)initWithQueue:(id)arg1 dataSource:(id)arg2 delegate:(id)arg3 notificationCenter:(id)arg4 wifiManager:(id)arg5;	// IMP=0x0000000000653c5e

@end


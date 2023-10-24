//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMFWiFiNetworkInfo, NSString;
@protocol HMDAppleMediaAccessoryInfoSubscriberDataSource, HMDAppleMediaAccessoryInfoSubscriberDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDAppleMediaAccessoryInfoSubscriber : NSObject
{
    id <HMDAppleMediaAccessoryInfoSubscriberDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
    id <HMDAppleMediaAccessoryInfoSubscriberDataSource> _dataSource;	// 24 = 0x18
    HMFWiFiNetworkInfo *_receivedWifiInfo;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x0010000000b26a05
- (void).cxx_destruct;	// IMP=0x0000000000b26610
@property(retain) HMFWiFiNetworkInfo *receivedWifiInfo; // @synthesize receivedWifiInfo=_receivedWifiInfo;
@property(readonly) __weak id <HMDAppleMediaAccessoryInfoSubscriberDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property __weak id <HMDAppleMediaAccessoryInfoSubscriberDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didReceiveEvent:(id)arg1 topic:(id)arg2;	// IMP=0x0000000000b25fc7
- (void)didReceiveCachedEvent:(id)arg1 topic:(id)arg2 source:(id)arg3;	// IMP=0x0000000000b25fb5
- (void)subscribeToWiFiInfoUpdate;	// IMP=0x0000000000b25dcf
- (id)initWithQueue:(id)arg1 dataSource:(id)arg2;	// IMP=0x0000000000b25d35

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


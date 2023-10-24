//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DoNotDisturbServer/DNDSLifetimeMonitor-Protocol.h>

@class CLLocationManager, NSObject;
@protocol DNDSLifetimeMonitorDelegate, DNDSLocationLifetimeMonitorDataSource, OS_dispatch_queue;

@protocol DNDSAggregateLocationLifetimeMonitor <DNDSLifetimeMonitor>
@property(readonly, nonatomic) unsigned long long availableRegions;
@property(nonatomic) __weak id <DNDSLifetimeMonitorDelegate> delegate;
@property(nonatomic) __weak id <DNDSLocationLifetimeMonitorDataSource> dataSource;
@property(readonly, nonatomic) CLLocationManager *locationManager;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@end


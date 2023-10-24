//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Radio/NSObject-Protocol.h>

@class ICEnvironmentMonitor;

@protocol ICEnvironmentMonitorObserver <NSObject>

@optional
- (void)environmentMonitorDidChangeThermalLevel:(ICEnvironmentMonitor *)arg1;
- (void)environmentMonitorDidChangeTelephonyStatus:(ICEnvironmentMonitor *)arg1;
- (void)environmentMonitorDidChangeBatteryLevel:(ICEnvironmentMonitor *)arg1;
- (void)environmentMonitorDidChangePower:(ICEnvironmentMonitor *)arg1;
- (void)environmentMonitorDidChangeNetworkType:(ICEnvironmentMonitor *)arg1;
- (void)environmentMonitorDidChangeNetworkReachability:(ICEnvironmentMonitor *)arg1;
@end


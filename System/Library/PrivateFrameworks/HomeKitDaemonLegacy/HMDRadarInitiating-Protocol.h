//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/NSObject-Protocol.h>

@class NSString;

@protocol HMDRadarInitiating <NSObject>
- (void)requestRadarWithMessage:(NSString *)arg1 radarTitle:(NSString *)arg2 componentName:(NSString *)arg3 componentVersion:(NSString *)arg4 componentID:(NSString *)arg5;
- (void)requestRadarWithMessage:(NSString *)arg1 radarTitle:(NSString *)arg2;
@end


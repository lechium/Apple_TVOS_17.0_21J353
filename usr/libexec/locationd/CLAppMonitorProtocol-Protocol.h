//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CLNotifierServiceProtocol-Protocol.h"

@class NSArray, NSDictionary, NSString;

@protocol CLAppMonitorProtocol <CLNotifierServiceProtocol>
- (void)checkApplications:(NSArray *)arg1 withReply:(void (^)(NSArray *, NSArray *))arg2;
- (int)syncgetAppType:(NSString *)arg1;
- (void)onApplicationsUninstalled:(NSArray *)arg1;
- (void)onApplicationsInstalled:(NSArray *)arg1;
- (void)onApplicationStateChange:(NSDictionary *)arg1;
- (void)isApplicationInstalledIncludingPairedDevices:(NSString *)arg1 withReply:(void (^)(_Bool))arg2;
- (_Bool)syncgetIsApplicationInstalledLocally:(struct __CFString *)arg1;
- (_Bool)syncgetForegroundApp:(void *)arg1;
- (_Bool)syncgetDoSync:(void (^)(void *))arg1;
- (void)doAsync:(void (^)(void *))arg1 withReply:(void (^)(void))arg2;
- (void)doAsync:(void (^)(void *))arg1;
@end


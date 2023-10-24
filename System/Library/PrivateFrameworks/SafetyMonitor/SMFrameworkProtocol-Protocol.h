//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafetyMonitor/NSObject-Protocol.h>

@class NSDate, NSError, NSUUID, SMCache, SMReceiverSessionStatus, SMSessionManagerState;

@protocol SMFrameworkProtocol <NSObject>
- (void)onReceiverSafetyCacheChangeForSessionID:(NSUUID *)arg1 phoneCache:(SMCache *)arg2 watchCache:(SMCache *)arg3;
- (void)onReceiverSessionStatusChangeForSessionID:(NSUUID *)arg1 sessionStatus:(SMReceiverSessionStatus *)arg2;
- (void)onInitiatorSafetyCacheChangeForSessionID:(NSUUID *)arg1 phoneCache:(SMCache *)arg2 watchCache:(SMCache *)arg3 cacheExpiryDate:(NSDate *)arg4 cacheReleaseDate:(NSDate *)arg5;
- (void)onSessionStateChanged:(SMSessionManagerState *)arg1 forActiveDevice:(_Bool)arg2 withError:(NSError *)arg3;
@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StatusKitAgentCore/NSObject-Protocol.h>

@class NSArray, NSData, NSDate, NSString, SKAPresenceEncryptionKey, SKAPresenceMembershipKey;

@protocol SKAChannelManaging <NSObject>
- (NSDate *)serverTime;
- (void)disableActivityTracking;
- (void)enableActivityTracking;
- (void)unsubscribeFromPresenceChannels:(NSArray *)arg1;
- (void)subscribeToPresenceChannels:(NSArray *)arg1;
- (void)activePresenceChannelSubscriptionsWithCompletion:(void (^)(NSArray *))arg1;
- (void)unsubscribeFromStatusChannels:(NSArray *)arg1;
- (void)subscribeToStatusChannels:(NSArray *)arg1;
- (void)activeStatusChannelSubscriptionsWithCompletion:(void (^)(NSArray *))arg1;
- (void)pollActiveParticipantsForChannel:(NSString *)arg1 membershipKey:(SKAPresenceMembershipKey *)arg2 serverKey:(SKAPresenceEncryptionKey *)arg3 withChannelToken:(NSData *)arg4 serviceIdentifier:(NSString *)arg5 completion:(void (^)(NSError *, unsigned long long, NSArray *))arg6;
- (void)releasePresenceOnChannel:(NSString *)arg1 membershipKey:(SKAPresenceMembershipKey *)arg2 serverKey:(SKAPresenceEncryptionKey *)arg3 timestamp:(NSDate *)arg4 withChannelToken:(NSData *)arg5 serviceIdentifier:(NSString *)arg6 completion:(void (^)(NSError *))arg7;
- (void)assertPresence:(NSData *)arg1 onChannel:(NSString *)arg2 membershipKey:(SKAPresenceMembershipKey *)arg3 serverKey:(SKAPresenceEncryptionKey *)arg4 timestamp:(NSDate *)arg5 withChannelToken:(NSData *)arg6 serviceIdentifier:(NSString *)arg7 isRefresh:(_Bool)arg8 completion:(void (^)(NSError *, double, unsigned long long, NSArray *))arg9;
- (void)publishData:(NSData *)arg1 onChannel:(NSString *)arg2 withChannelToken:(NSData *)arg3 publishInitiateTime:(NSDate *)arg4 isPendingPublish:(_Bool)arg5 isScheduledPublish:(_Bool)arg6 retryCount:(unsigned long long)arg7 completion:(void (^)(NSError *))arg8;
- (void)createPresenceChannelWithMembershipKey:(SKAPresenceMembershipKey *)arg1 serverKey:(SKAPresenceEncryptionKey *)arg2 serviceIdentifier:(NSString *)arg3 completion:(void (^)(NSString *, NSData *, NSError *))arg4;
- (void)createChannelWithCompletion:(void (^)(NSString *, NSData *, NSError *))arg1;
@end


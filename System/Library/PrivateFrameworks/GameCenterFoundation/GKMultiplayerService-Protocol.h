//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameCenterFoundation/NSObject-Protocol.h>

@class GKInviteInternal, GKMatchRequestInternal, GKPlayerInternal, GKTTRLogRequestInfo, GKTransportContext, GKUpdateInviteInfo, NSArray, NSData, NSDictionary, NSString;

@protocol GKMultiplayerService <NSObject>
- (oneway void)uploadLogsForRadar:(NSString *)arg1 from:(NSString *)arg2 handler:(void (^)(void))arg3;
- (oneway void)fileMultiplayerTTRWithCallBackIdentifier:(NSString *)arg1 descriptionAddition:(NSString *)arg2 handler:(void (^)(void))arg3;
- (oneway void)rolloutPseudonyms;
- (oneway void)fetchTransportOverrideWithHandler:(void (^)(NSArray *, NSArray *))arg1;
- (oneway void)isGameCenterMultiplayerGameForBundleID:(NSString *)arg1 handler:(void (^)(_Bool, NSError *))arg2;
- (oneway void)fetchOnDeviceMultiplayerBundleIDsWithHandler:(void (^)(NSArray *, NSError *))arg1;
- (oneway void)fetchDevicePushToken:(void (^)(NSData *))arg1;
- (oneway void)nearbyInviteWasCancelled:(NSDictionary *)arg1;
- (oneway void)presentNearbyInvite:(NSDictionary *)arg1;
- (oneway void)sendDataToParticipant:(NSString *)arg1 deviceID:(NSString *)arg2 data:(NSData *)arg3 usePeerDiscovery:(_Bool)arg4 handler:(void (^)(NSError *))arg5;
- (oneway void)forgetParticipant:(NSString *)arg1 deviceID:(NSString *)arg2 handler:(void (^)(void))arg3;
- (oneway void)setupNearbyDiscovery;
- (oneway void)stopNearbyAdvertisingWithHandler:(void (^)(void))arg1;
- (oneway void)startNearbyAdvertisingWithDiscoveryInfo:(NSDictionary *)arg1 handler:(void (^)(NSError *))arg2;
- (oneway void)stopNearbyBrowsingWithHandler:(void (^)(void))arg1;
- (oneway void)startNearbyBrowsingWithPlayerID:(NSString *)arg1 handler:(void (^)(void))arg2;
- (oneway void)updateCacheWithNearbyProfileDictionary:(NSDictionary *)arg1 handler:(void (^)(GKPlayerInternal *))arg2;
- (oneway void)cancelRelayRequest:(NSDictionary *)arg1 handler:(void (^)(NSDictionary *, NSError *))arg2;
- (oneway void)updateRelayRequest:(NSDictionary *)arg1 handler:(void (^)(NSDictionary *, NSError *))arg2;
- (oneway void)initiateRelayRequest:(NSDictionary *)arg1 handler:(void (^)(NSDictionary *, NSError *))arg2;
- (oneway void)requestTTRLogsWith:(GKTTRLogRequestInfo *)arg1 handler:(void (^)(NSError *))arg2;
- (oneway void)sendInvitationUpdate:(GKUpdateInviteInfo *)arg1 handler:(void (^)(NSError *))arg2;
- (oneway void)sendReconnectInvitation:(NSString *)arg1 toPlayer:(GKPlayerInternal *)arg2 connectionData:(NSData *)arg3 sessionToken:(NSData *)arg4 pushToken:(NSData *)arg5 handler:(void (^)(NSError *))arg6;
- (oneway void)removeInviteSessionIfNeeded;
- (oneway void)removeInviteSession;
- (oneway void)getInviteSessionTokenWithHandler:(void (^)(NSData *, NSError *))arg1;
- (oneway void)getPlayersToInviteWithHandlerV2:(void (^)(NSArray *, NSError *))arg1;
- (oneway void)hasCanceledMultiplayerInitiateBulletinForSessionToken:(NSData *)arg1 handler:(void (^)(_Bool))arg2;
- (oneway void)getAcceptedGameInviteWithHandler:(void (^)(GKInviteInternal *, NSError *))arg1;
- (oneway void)declineGameInvite:(GKInviteInternal *)arg1 reason:(long long)arg2 handler:(void (^)(void))arg3;
- (oneway void)acceptGameInvite:(GKInviteInternal *)arg1 transportContext:(GKTransportContext *)arg2 handler:(void (^)(GKInviteAcceptResponse *, NSError *))arg3;
- (oneway void)getMultiPlayerGroups:(void (^)(NSMutableArray *, NSError *))arg1;
- (oneway void)putMultiPlayerGroup:(NSString *)arg1 participants:(NSArray *)arg2 playedAt:(long long)arg3 bundleID:(NSString *)arg4 numberOfAutomatched:(long long)arg5 handler:(void (^)(NSError *))arg6;
- (oneway void)cancelGameInviteWithHandler:(void (^)(void))arg1;
- (oneway void)removePlayersFromGameInviteV2:(NSArray *)arg1 handler:(void (^)(void))arg2;
- (oneway void)hasExistingInviteSessionWithHandler:(void (^)(_Bool))arg1;
- (oneway void)setShareInvitees:(NSArray *)arg1;
- (oneway void)loadCloudKitShareURLWithPlayer:(GKPlayerInternal *)arg1 matchRequest:(GKMatchRequestInternal *)arg2 transportContext:(GKTransportContext *)arg3 handler:(void (^)(GKInviteInitiateResponse *, NSError *))arg4;
- (oneway void)invitePlayersForMatchRequest:(GKMatchRequestInternal *)arg1 devicePushTokenMap:(NSDictionary *)arg2 isNearbyInvite:(_Bool)arg3 transportContext:(GKTransportContext *)arg4 handler:(void (^)(GKInviteInitiateResponse *, NSError *))arg5;
- (oneway void)getCompatibilityMatrix:(NSDictionary *)arg1 handler:(void (^)(NSArray *, NSError *))arg2;
- (oneway void)getFlowRateForQueue:(NSString *)arg1 handler:(void (^)(unsigned long long, NSError *))arg2;
- (oneway void)getOverallFlowRateWithHandler:(void (^)(unsigned long long, NSError *))arg1;
- (oneway void)getFlowRateForPlayerGroup:(long long)arg1 handler:(void (^)(unsigned long long, NSError *))arg2;
- (oneway void)cancelOutstandingMatchRequestWithHandler:(void (^)(void))arg1;
- (oneway void)getPlayersForMatchRequest:(GKMatchRequestInternal *)arg1 playerCount:(long long)arg2 rematchID:(NSString *)arg3 transportContext:(GKTransportContext *)arg4 handler:(void (^)(GKMatchResponse *, NSError *))arg5;
@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WatchListKit/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSString, WLKFederatedPunchout, WLKPlaybackSummary;

@protocol WLKConnectionServerProtocol <NSObject>
- (void)performSportsFavoritesAction:(unsigned long long)arg1 ids:(NSArray *)arg2 caller:(NSString *)arg3 completion:(void (^)(NSArray *, NSDate *, NSError *))arg4;
- (void)performSportsFavoritesAction:(unsigned long long)arg1 favoritesSyncEnabled:(_Bool)arg2 caller:(NSString *)arg3 completion:(void (^)(_Bool, NSError *))arg4;
- (void)reportFederatedPunchout:(WLKFederatedPunchout *)arg1;
- (void)refreshSubscriptionData:(_Bool)arg1;
- (void)fetchSubscriptionData:(_Bool)arg1 callerProcessID:(int)arg2 completion:(void (^)(WLKSubscriptionData *, NSError *))arg3;
- (void)clearOffers:(void (^)(NSError *))arg1;
- (void)fetchOffers:(_Bool)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)removeOfferByBadgeId:(NSString *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)saveOffer:(NSDictionary *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)prewarm;
- (void)ping;
- (void)fetchLocationAuthorizationStatus:(void (^)(long long))arg1;
- (void)fetchSettings:(void (^)(NSDictionary *, NSError *))arg1;
- (void)postSettings:(NSDictionary *)arg1 replyHandler:(void (^)(_Bool, NSError *))arg2;
- (void)writeSettingsStore:(NSDictionary *)arg1 replyHandler:(void (^)(_Bool))arg2;
- (void)readSettingsStore:(void (^)(NSDictionary *))arg1;
- (void)fetchApplications:(void (^)(NSDictionary *))arg1;
- (void)deletePlaybackActivityWithIdentifier:(NSString *)arg1 bundleID:(NSString *)arg2;
- (void)requestConsentForBundleID:(NSString *)arg1 forceAuth:(_Bool)arg2 replyHandler:(void (^)(_Bool))arg3;
- (void)checkPendingPlaybackReports;
- (void)endPlaybackSession:(NSString *)arg1;
- (void)reportPlayback:(WLKPlaybackSummary *)arg1 sessionID:(NSString *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)reportPlayback:(WLKPlaybackSummary *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)requestDecoratedNowPlayingSummaries:(void (^)(NSDictionary *))arg1;
- (void)requestNowPlayingSummaries:(void (^)(NSArray *))arg1;
@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "GKProfileService-Protocol.h"

@class NSArray, NSData, NSDate, NSDictionary, NSNumber, NSString;

@protocol GKProfileServicePrivate <GKProfileService>
- (oneway void)cacheScopedIds:(NSArray *)arg1 forPlayerId:(NSString *)arg2;
- (oneway void)clearScopedIdsCacheWithHandler:(void (^)(NSError *))arg1;
- (oneway void)getProfilesForPlayerIDs:(NSArray *)arg1 fetchOptions:(unsigned long long)arg2 handler:(void (^)(NSArray *, NSError *))arg3;
- (oneway void)setArcadeSubscriptionExpiration:(NSDate *)arg1 handler:(void (^)(NSError *))arg2;
- (oneway void)setGlobalFriendListAccess:(int)arg1 handler:(void (^)(NSError *))arg2;
- (oneway void)getProfilePrivacyWithHandler:(void (^)(int))arg1;
- (oneway void)setProfilePrivacy:(int)arg1 handler:(void (^)(NSError *))arg2;
- (oneway void)setPrivacyNoticeVersion:(unsigned long long)arg1 handler:(void (^)(NSError *))arg2;
- (oneway void)invalidateCachedProfileForLocalPlayerWithHandler:(void (^)(void))arg1;
- (oneway void)getTermsAndConditionsURLWithHandler:(void (^)(NSString *, NSError *))arg1;
- (oneway void)getSuggestionsForNickname:(NSString *)arg1 suggestionsCount:(long long)arg2 handler:(void (^)(NSArray *, NSError *))arg3;
- (oneway void)setPlayerNickname:(NSString *)arg1 suggestionsCount:(long long)arg2 handler:(void (^)(NSArray *, long long, NSError *))arg3;
- (oneway void)setFindable:(_Bool)arg1 handler:(void (^)(NSError *))arg2;
- (oneway void)deletePhotoWithHandler:(void (^)(NSError *))arg1;
- (oneway void)setPhotoData:(NSData *)arg1 avatarType:(NSNumber *)arg2 handler:(void (^)(NSError *))arg3;
- (oneway void)cachePhotos:(NSDictionary *)arg1 avatarType:(NSNumber *)arg2 fileNames:(NSDictionary *)arg3 handler:(void (^)(void))arg4;
- (oneway void)setStatus:(NSString *)arg1 handler:(void (^)(NSError *))arg2;
@end


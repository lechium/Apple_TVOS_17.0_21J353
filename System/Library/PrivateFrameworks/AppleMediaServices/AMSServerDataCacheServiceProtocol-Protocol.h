//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ACAccount, NSDictionary, NSNumber, NSSet, NSString;

@protocol AMSServerDataCacheServiceProtocol
- (void)tearDownCacheForAccountDSID:(NSNumber *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)setUpCacheForAccountDSID:(NSNumber *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)setUpCacheForAccount:(ACAccount *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)updateCacheForAccountDSID:(NSNumber *)arg1 withCacheTypeIDs:(NSSet *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)updateCacheForAccountDSID:(NSNumber *)arg1 withCachePayload:(NSDictionary *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)granularNotificationSettingsForAccountDSID:(NSNumber *)arg1 bundleID:(NSString *)arg2 networkPolicy:(long long)arg3 completion:(void (^)(NSDictionary *, NSError *))arg4;
- (void)reminderEventsForAccountDSID:(NSNumber *)arg1 service:(NSString *)arg2 eventType:(NSString *)arg3 networkPolicy:(long long)arg4 completion:(void (^)(NSArray *, NSError *))arg5;
- (void)dataForAccountDSID:(NSNumber *)arg1 cacheTypeID:(NSString *)arg2 networkPolicy:(long long)arg3 completion:(void (^)(NSDictionary *, NSError *))arg4;
@end


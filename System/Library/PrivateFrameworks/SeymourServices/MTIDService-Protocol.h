//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SeymourServices/NSObject-Protocol.h>

@class MTPromise, NSArray, NSDictionary, NSString;

@protocol MTIDService <NSObject>
@property(copy, nonatomic) NSString *applicationBundleIdentifierOverrideForNetworkAttribution;
- (MTPromise *)resetIDForTopics:(NSArray *)arg1 options:(NSDictionary *)arg2;
- (MTPromise *)IDFieldsForTopic:(NSString *)arg1 options:(NSDictionary *)arg2;
- (void)performMaintenanceWithCompletion:(void (^)(NSError *))arg1;
- (void)queryIDForTopic:(NSString *)arg1 type:(long long)arg2 options:(NSDictionary *)arg3 completion:(void (^)(id <MTID>, NSError *))arg4;
- (void)resetIDForTopics:(NSArray *)arg1 options:(NSDictionary *)arg2 completion:(void (^)(NSError *))arg3;
- (void)IDFieldsForTopic:(NSString *)arg1 options:(NSDictionary *)arg2 completion:(void (^)(NSDictionary *, NSError *))arg3;
@end


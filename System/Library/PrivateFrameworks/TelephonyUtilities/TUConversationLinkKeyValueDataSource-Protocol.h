//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TelephonyUtilities/NSObject-Protocol.h>

@class NSString;

@protocol TUConversationLinkKeyValueDataSource <NSObject>
- (NSString *)stringForKey:(NSString *)arg1 error:(id *)arg2;
- (void)stringForKey:(NSString *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (void)setString:(NSString *)arg1 forKey:(NSString *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (_Bool)setString:(NSString *)arg1 forKey:(NSString *)arg2 error:(id *)arg3;
- (long long)integerForKey:(NSString *)arg1 error:(id *)arg2;
- (void)integerForKey:(NSString *)arg1 completion:(void (^)(long long, NSError *))arg2;
- (void)setInteger:(long long)arg1 forKey:(NSString *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (_Bool)setInteger:(long long)arg1 forKey:(NSString *)arg2 error:(id *)arg3;
@end


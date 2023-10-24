//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BaseBoard/NSObject-Protocol.h>

@class NSArray, NSError, NSObject, NSString;
@protocol NSSecureCoding;

@protocol BSErrorConfiguring <NSObject>
- (void)setCodeDescription:(NSString *)arg1;
- (void)setUnderlyingErrors:(NSArray *)arg1;
- (void)setUnderlyingError:(NSError *)arg1;
- (void)setUserInfoValue:(NSObject<NSSecureCoding> *)arg1 forKey:(NSString *)arg2;
- (void)setFailureReason:(NSString *)arg1;
- (void)setFailureDescription:(NSString *)arg1;
@end

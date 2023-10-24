//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSArray, NSData, NSDictionary, NSObject, NSString;

@protocol GCUserDefaults <NSObject>
- (void)removeObserver:(NSObject *)arg1 forKeyPath:(NSString *)arg2;
- (void)removeObserver:(NSObject *)arg1 forKeyPath:(NSString *)arg2 context:(void *)arg3;
- (void)addObserver:(NSObject *)arg1 forKeyPath:(NSString *)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (void)setBool:(_Bool)arg1 forKey:(NSString *)arg2;
- (_Bool)boolForKey:(NSString *)arg1;
- (void)setDouble:(double)arg1 forKey:(NSString *)arg2;
- (double)doubleForKey:(NSString *)arg1;
- (void)setFloat:(float)arg1 forKey:(NSString *)arg2;
- (float)floatForKey:(NSString *)arg1;
- (long long)integerForKey:(NSString *)arg1;
- (NSData *)dataForKey:(NSString *)arg1;
- (NSDictionary *)dictionaryForKey:(NSString *)arg1;
- (NSArray *)arrayForKey:(NSString *)arg1;
- (NSString *)stringForKey:(NSString *)arg1;
- (void)setObject:(id)arg1 forKey:(NSString *)arg2;
- (id)objectForKey:(NSString *)arg1;
@end


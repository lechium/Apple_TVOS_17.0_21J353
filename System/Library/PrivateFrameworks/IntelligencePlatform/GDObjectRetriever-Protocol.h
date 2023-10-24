//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GDGraphQuery, NSString;

@protocol GDObjectRetriever
- (void)enumerateObjectsWithQuery:(GDGraphQuery *)arg1 block:(void (^)(id, _Bool *))arg2;
- (void)enumerateIdentifiersWithQuery:(GDGraphQuery *)arg1 block:(void (^)(NSString *, _Bool *))arg2;
- (void)enumerateObjectsWithBlock:(void (^)(id, _Bool *))arg1;
- (void)enumerateIdentifiersWithBlock:(void (^)(NSString *, _Bool *))arg1;
- (id)objectForIdentifier:(NSString *)arg1;
@end


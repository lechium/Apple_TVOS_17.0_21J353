//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Koa/NSObject-Protocol.h>

@class KVProfileInfo, NSData;

@protocol KVProfileReader <NSObject>
+ (id)new;
- (_Bool)enumerateDatasetsWithError:(id *)arg1 usingBlock:(_Bool (^)(NSObject<KVDatasetReader> *))arg2;
- (KVProfileInfo *)profileInfo;
- (NSData *)data;
- (id)init;
@end


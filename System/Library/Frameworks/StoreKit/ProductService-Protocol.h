//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;
@protocol ProductResponseReceiver;

@protocol ProductService
- (void)productsWithRequest:(NSData *)arg1 responseReceiver:(id <ProductResponseReceiver>)arg2 reply:(void (^)(NSError *))arg3;
@end


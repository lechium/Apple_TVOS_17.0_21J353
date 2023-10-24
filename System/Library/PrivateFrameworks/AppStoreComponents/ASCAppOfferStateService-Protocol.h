//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppStoreComponents/NSObject-Protocol.h>

@class ASCAdamID, ASCMetricsActivity, ASCOfferContext, NSArray, NSString;
@protocol ASCOffer;

@protocol ASCAppOfferStateService <NSObject>
- (void)reinstallWatchSystemAppWithBundleID:(NSString *)arg1 withReplyHandler:(void (^)(NSError *))arg2;
- (void)reinstallWatchAppWithID:(ASCAdamID *)arg1 withReplyHandler:(void (^)(NSError *))arg2;
- (void)performActionOfOffer:(id <ASCOffer>)arg1 withActivity:(ASCMetricsActivity *)arg2 inContext:(ASCOfferContext *)arg3 withReplyHandler:(void (^)(NSError *))arg4;
- (void)stopObservingStateOfOffers:(NSArray *)arg1;
- (void)startObservingStateOfOffers:(NSArray *)arg1;
@end


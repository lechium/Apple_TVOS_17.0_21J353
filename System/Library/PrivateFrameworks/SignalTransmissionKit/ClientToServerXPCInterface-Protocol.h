//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

@protocol ClientToServerXPCInterface
- (void)defineChannelForDescriptor:(NSString *)arg1 schema:(NSData *)arg2 completion:(void (^)(NSError *))arg3;
- (void)stopObservingChannelsWithCompletion:(void (^)(NSError *))arg1;
- (void)beginObservingChannelsWithCompletion:(void (^)(NSError *))arg1;
- (void)flushChannelWithID:(unsigned long long)arg1 completion:(void (^)(NSError *))arg2;
- (void)stopConsumingMessagesFromID:(unsigned long long)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)beginConsumingMessagesFromID:(unsigned long long)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)producerIdForDescriptor:(NSString *)arg1 completion:(void (^)(unsigned long long, NSError *))arg2;
- (void)consumerIdForDescriptor:(NSString *)arg1 completion:(void (^)(unsigned long long, NSError *))arg2;
- (void)clientToServerWithPlaybackMessage:(NSData *)arg1 completion:(void (^)(NSError *))arg2;
- (void)clientToServerWithMessage:(NSData *)arg1 completion:(void (^)(NSError *))arg2;
@end


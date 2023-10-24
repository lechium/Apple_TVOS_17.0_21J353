//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMEEvent, HMEMessageDatagramServer, NSArray, NSString;
@protocol HMEMessageDatagramConnection;

@protocol HMEMessageDatagramServerDelegate
- (void)server:(HMEMessageDatagramServer *)arg1 logMetricsForEventTopic:(NSString *)arg2 eventSize:(unsigned long long)arg3 isCached:(_Bool)arg4;
- (void)server:(HMEMessageDatagramServer *)arg1 logMetricsForMessageDatagramFragmentation:(_Bool)arg2 isFragmented:(_Bool)arg3;
- (_Bool)shouldAllowEvent:(HMEEvent *)arg1 topic:(NSString *)arg2 connection:(id <HMEMessageDatagramConnection>)arg3;
- (void)server:(HMEMessageDatagramServer *)arg1 connectionDidFail:(id <HMEMessageDatagramConnection>)arg2;
- (void)server:(HMEMessageDatagramServer *)arg1 connectionDidExpire:(id <HMEMessageDatagramConnection>)arg2;
- (void)server:(HMEMessageDatagramServer *)arg1 connectionDidConnect:(id <HMEMessageDatagramConnection>)arg2;
- (void)server:(HMEMessageDatagramServer *)arg1 sendEvents:(NSArray *)arg2 cachedEvents:(NSArray *)arg3 connection:(id <HMEMessageDatagramConnection>)arg4 completion:(void (^)(NSError *))arg5;
@end


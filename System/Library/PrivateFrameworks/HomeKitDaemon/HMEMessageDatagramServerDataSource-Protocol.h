//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMEMessageDatagramServer, NSArray, NSError, NSSet, NSString;
@protocol HMEMessageDatagramConnection, HMETimerProvider;

@protocol HMEMessageDatagramServerDataSource <NSObject>
- (NSArray *)server:(HMEMessageDatagramServer *)arg1 forwardingTopicsForTopics:(NSArray *)arg2;
- (NSArray *)server:(HMEMessageDatagramServer *)arg1 expandedTopicsForTopics:(NSArray *)arg2;
- (NSSet *)server:(HMEMessageDatagramServer *)arg1 upstreamTopicsForTopic:(NSString *)arg2;
- (double)serverDebounceTimeInterval:(HMEMessageDatagramServer *)arg1;
- (_Bool)serverSupportFragmentCachedEvents:(HMEMessageDatagramServer *)arg1;
- (unsigned long long)serverFragmentEventsDataSize:(HMEMessageDatagramServer *)arg1;
- (_Bool)server:(HMEMessageDatagramServer *)arg1 shouldProcessEventsForConnection:(id <HMEMessageDatagramConnection>)arg2 shouldLogState:(_Bool)arg3;
- (id <HMETimerProvider>)serverTimerProvider:(HMEMessageDatagramServer *)arg1;
- (_Bool)server:(HMEMessageDatagramServer *)arg1 isConnectionTerminatingError:(NSError *)arg2;
- (double)server:(HMEMessageDatagramServer *)arg1 timeoutIntervalForConnection:(id <HMEMessageDatagramConnection>)arg2;
@end


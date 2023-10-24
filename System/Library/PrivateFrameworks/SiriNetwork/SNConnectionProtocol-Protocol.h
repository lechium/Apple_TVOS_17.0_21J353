//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSError, NSObject;
@protocol OS_dispatch_data;

@protocol SNConnectionProtocol
- (void)getSNConnectionMetrics:(_Bool)arg1 completion:(void (^)(SNConnectionMetrics *))arg2;
- (void)cancelSynchronously:(_Bool)arg1 isOnConnectionQueue:(_Bool)arg2 completion:(void (^)(void))arg3;
- (void)setSendPings:(_Bool)arg1;
- (void)sendData:(NSObject<OS_dispatch_data> *)arg1;
- (NSError *)start;
@end


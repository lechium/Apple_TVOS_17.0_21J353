//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RunningBoard/NSObject-Protocol.h>

@class NSObject, RBSXPCMessage;
@protocol OS_dispatch_queue;

@protocol RBProcessMonitorObserverConnection <NSObject>
- (void)sendMessage:(RBSXPCMessage *)arg1 replyQueue:(NSObject<OS_dispatch_queue> *)arg2 completion:(void (^)(NSError *))arg3;
@end

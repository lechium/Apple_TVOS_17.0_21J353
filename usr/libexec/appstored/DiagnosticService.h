//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, UnfairLock;

@interface DiagnosticService : NSObject
{
    NSMutableSet *_listenerConnections;	// 8 = 0x8
    UnfairLock *_listenerLock;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000001393c0
- (void)sendCommandWithDetailedReplyHandler:(long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000138549
- (void)sendCommandWithReplyHandler:(long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000137cce
- (void)pingWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000137860
- (void)addSubscriberWithEndpoint:(id)arg1;	// IMP=0x00100000001374a3
- (void)activeClientsWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000013748e
- (id)init;	// IMP=0x00100000001371fc

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADNotifyAndPushContextCollector, NSXPCConnection;

@interface ADPushContextReceiver : NSObject
{
    int _pid;	// 8 = 0x8
    ADNotifyAndPushContextCollector *_collector;	// 16 = 0x10
    NSXPCConnection *_connection;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000002965bc
- (oneway void)sendContext:(id)arg1;	// IMP=0x00100000002964ad
- (id)initWithCollector:(id)arg1 pid:(int)arg2 connection:(id)arg3;	// IMP=0x001000000029640e

@end

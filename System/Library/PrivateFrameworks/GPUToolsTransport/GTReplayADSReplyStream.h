//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GTBulkDataServiceXPCProxy, GTReplayRequestToken;
@protocol OS_os_log;

__attribute__((visibility("hidden")))
@interface GTReplayADSReplyStream : NSObject
{
    NSObject<OS_os_log> *_log;	// 8 = 0x8
    CDUnknownBlockType _callback;	// 16 = 0x10
    GTBulkDataServiceXPCProxy *_bulkDataProxy;	// 24 = 0x18
    GTReplayRequestToken *_token;	// 32 = 0x20
    unsigned long long dispatcherId;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000002294e
@property unsigned long long dispatcherId; // @synthesize dispatcherId;
- (void)dispatchMessage:(id)arg1 replyConnection:(id)arg2;	// IMP=0x0000000000022677
- (id)initWithCallback:(CDUnknownBlockType)arg1 bulkDataProxy:(id)arg2 andToken:(id)arg3;	// IMP=0x0000000000022592

@end


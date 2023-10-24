//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFWatchdogTimer, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface ADDeviceSyncMessageSendingContext : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSString *_deviceIdentifier;	// 16 = 0x10
    AFWatchdogTimer *_watchdogTimer;	// 24 = 0x18
    CDUnknownBlockType _completion;	// 32 = 0x20
    unsigned long long _numberOfActiveMessageSenders;	// 40 = 0x28
    NSMutableArray *_errors;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000fdc67
- (void)_finalizeWithError:(id)arg1;	// IMP=0x00100000000fdbfc
- (void)_finalizeWithResponseMessage:(id)arg1;	// IMP=0x00100000000fdb91
- (void)_addError:(id)arg1;	// IMP=0x00100000000fdb2b
- (void)_cancelWatchdogTimer;	// IMP=0x00100000000fdaed
- (void)_handleWatchdogTimeout;	// IMP=0x00100000000fda78
- (void)_endSendingWithMessageSender:(id)arg1 replyMessage:(id)arg2 error:(id)arg3;	// IMP=0x00100000000fd974
- (void)_beginSendingWithMessageSender:(id)arg1;	// IMP=0x00100000000fd93f
- (void)endSendingWithMessageSender:(id)arg1 replyMessage:(id)arg2 error:(id)arg3;	// IMP=0x00100000000fd85a
- (void)beginSendingWithMessageSender:(id)arg1;	// IMP=0x00100000000fd7cd
- (id)initWithQueue:(id)arg1 deviceIdentifier:(id)arg2 timeoutDuration:(double)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000fd620
- (void)dealloc;	// IMP=0x00100000000fd594

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_io, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface NWURLSessionRequestBodyFile : NSObject
{
    int _error;	// 8 = 0x8
    NSObject<OS_dispatch_io> *_io;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    long long _bytesSent;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000002166d0
- (void)close;	// IMP=0x00000000002166b0
- (void)readMinimumIncompleteLength:(unsigned long long)arg1 maximumLength:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000002164a0
@property(readonly, nonatomic) long long countOfBytesSent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


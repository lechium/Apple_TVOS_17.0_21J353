//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCConnection;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AMSHTTPArchiveService : NSObject
{
    NSXPCConnection *_connection;	// 8 = 0x8
    CDUnknownBlockType _errorHandler;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
}

+ (id)_sharedProxy;	// IMP=0x00600000002b5e85
+ (void)recordTrafficWithTaskInfo:(id)arg1;	// IMP=0x00600000002b551b
- (void).cxx_destruct;	// IMP=0x00000000002b620e
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(copy, nonatomic) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)_removeRemoteConnection;	// IMP=0x00000000002b5e2b
- (id)_createRemoteConnection;	// IMP=0x00000000002b58fe
- (id)_createProxy;	// IMP=0x00000000002b55c2
- (void)dealloc;	// IMP=0x00000000002b5584
- (id)init;	// IMP=0x00000000002b54c3

@end


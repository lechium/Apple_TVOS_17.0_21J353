//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol GTRemoteConnectionProvider, GTURLAccessProvider, OS_dispatch_queue, OS_dispatch_semaphore, OS_os_log;

__attribute__((visibility("hidden")))
@interface GTFileWriterService : NSObject
{
    NSObject<OS_os_log> *_log;	// 8 = 0x8
    NSMutableDictionary *_sessions;	// 16 = 0x10
    id <GTRemoteConnectionProvider> _remoteConnectionProvider;	// 24 = 0x18
    unsigned long long _sessionCounts;	// 32 = 0x20
    NSString *_deviceUDID;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_fileTransferQueue;	// 48 = 0x30
    id <GTURLAccessProvider> _urlAccessProvider;	// 56 = 0x38
    NSObject<OS_dispatch_semaphore> *_writeSem;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000001cacc
- (_Bool)_finishSession:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x000000000001c9d0
- (void)writeFileData:(id)arg1 sessionID:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000001c911
- (void)beginTransferSessionWithFileEntries:(id)arg1 basePath:(id)arg2 toDevice:(id)arg3 options:(id)arg4 sessionID:(unsigned long long)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x000000000001bd1f
- (void)initiateTransfer:(id)arg1 basePath:(id)arg2 fromDevice:(id)arg3 toURL:(id)arg4 options:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x000000000001b45a
- (void)startTransfer:(id)arg1 basePath:(id)arg2 fromDevice:(id)arg3 options:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000001b1a5
- (void)initiateTransfer:(id)arg1 basePath:(id)arg2 fromDevice:(id)arg3 options:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000001b075
- (id)initWithRemoteConnectionProvider:(id)arg1 deviceUDID:(id)arg2 urlAccessProvider:(id)arg3;	// IMP=0x000000000001aef3

@end


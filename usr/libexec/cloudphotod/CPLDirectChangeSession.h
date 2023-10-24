//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudPhotoLibrary/CPLPlatformObject.h>

@class CPLResetReason, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface CPLDirectChangeSession : CPLPlatformObject
{
    NSObject<OS_dispatch_queue> *_lock;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 16 = 0x10
    CPLResetReason *_tentativeReason;	// 24 = 0x18
    _Bool _beganClientWork;	// 32 = 0x20
    _Bool _tearedDown;	// 33 = 0x21
}

+ (id)selfCrashResetReason;	// IMP=0x00200000000a9ddc
- (void).cxx_destruct;	// IMP=0x00200000000a9f85
- (void)discardTentativeResetReason;	// IMP=0x00100000000a9f3c
- (void)registerTentativeResetReason;	// IMP=0x00100000000a9ea8
- (_Bool)tearedDown;	// IMP=0x00100000000a9d2c
- (void)dispatchCallback:(CDUnknownBlockType)arg1;	// IMP=0x00100000000a9c73
- (void)tearDownWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000a98ce
- (void)endClientWork;	// IMP=0x00100000000a9745
- (void)finalizeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000a9682
- (void)beginSessionWithKnownLibraryVersion:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000a95ac
- (_Bool)processSessionContext:(id)arg1 inStore:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000a9491
- (void)beginClientWork;	// IMP=0x00100000000a92e8
- (id)clientWorkDescription;	// IMP=0x00100000000a922e
- (id)initWithAbstractObject:(id)arg1;	// IMP=0x00100000000a9175

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


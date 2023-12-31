//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, VCMediaRecorderDelegate;

__attribute__((visibility("hidden")))
@interface VCMediaRecorderManager : NSObject
{
    NSMutableDictionary *_streamTokenList;	// 8 = 0x8
    id _delegate;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x0010000000156ddf
- (id)newRequestWithArguments:(id)arg1 state:(unsigned char)arg2;	// IMP=0x0000000000159155
- (void)streamTokenDidCleanupAllRequests:(long long)arg1;	// IMP=0x0000000000159008
- (void)streamToken:(long long)arg1 didUpdateCapabilities:(unsigned int)arg2;	// IMP=0x0000000000158f60
- (void)streamToken:(long long)arg1 didFinishRequest:(id)arg2 didSucceed:(_Bool)arg3;	// IMP=0x0000000000158ed6
- (void)saveImage:(id)arg1 movie:(id)arg2;	// IMP=0x0000000000158c72
- (void)streamToken:(long long)arg1 didEndProcessingRequest:(id)arg2 stillImageURL:(id)arg3 movieURL:(id)arg4 error:(id)arg5;	// IMP=0x00000000001589f1
- (void)streamToken:(long long)arg1 didStartProcessingRequest:(id)arg2 error:(id)arg3;	// IMP=0x0000000000158954
- (void)notifyClientsWithStreamToken:(long long)arg1 service:(char *)arg2 arguments:(id)arg3;	// IMP=0x0000000000158515
- (void)deregisterBlocksFromService;	// IMP=0x000000000015843c
- (void)registerBlocksForService;	// IMP=0x0000000000157522
- (id)newClientContextWithStreamToken:(long long)arg1 error:(id *)arg2;	// IMP=0x0000000000157436
- (id)mediaRecorderFromClientContext:(id)arg1;	// IMP=0x00000000001573a5
- (void)dispatchedUnregisterMediaRecorderWithStreamToken:(long long)arg1;	// IMP=0x000000000015725e
- (void)unregisterMediaRecorderWithStreamToken:(long long)arg1;	// IMP=0x00000000001571cf
- (void)dispatchedRegisterMediaRecorder:(id)arg1 withStreamToken:(long long)arg2;	// IMP=0x0000000000156fe8
- (void)registerMediaRecorder:(id)arg1 withStreamToken:(long long)arg2;	// IMP=0x0000000000156f50
@property(nonatomic) id <VCMediaRecorderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;	// IMP=0x0000000000156eb2
- (id)init;	// IMP=0x0000000000156e24

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, RPCompanionLinkClient;

__attribute__((visibility("hidden")))
@interface HMDRapportDeviceClientWrapper : NSObject
{
    RPCompanionLinkClient *_client;	// 8 = 0x8
    long long _activateState;	// 16 = 0x10
    NSMutableArray *_requestQueue;	// 24 = 0x18
}

+ (id)logCategory;	// IMP=0x00100000009d80a8
- (void).cxx_destruct;	// IMP=0x00000000009d7f0c
- (void)_completeQueuedRequestsWithError:(id)arg1;	// IMP=0x00000000009d7c0b
- (void)_queueRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000009d795e
- (void)sendRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000009d76c0
- (void)invalidate;	// IMP=0x00000000009d75f8
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000009d7299
- (id)initWithClient:(id)arg1;	// IMP=0x00000000009d7214

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


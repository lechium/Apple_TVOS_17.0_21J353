//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSFileAccessArbiter, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface NSFileAccessSubarbiter : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSFileAccessArbiter *_realSubarbiter;	// 16 = 0x10
}

- (oneway void)tiePresenterForID:(id)arg1 toItemAtURL:(id)arg2;	// IMP=0x00000000007d6026
- (oneway void)writerWithPurposeID:(id)arg1 didVersionChangeOfKind:(id)arg2 toItemAtURL:(id)arg3 withClientID:(id)arg4 name:(id)arg5;	// IMP=0x00000000007d5de5
- (oneway void)writerWithPurposeID:(id)arg1 didChangeItemAtURL:(id)arg2;	// IMP=0x00000000007d5d6a
- (oneway void)writerWithPurposeID:(id)arg1 didMakeItemDisappearAtURL:(id)arg2;	// IMP=0x00000000007d5cef
- (oneway void)writerWithPurposeID:(id)arg1 didChangeUbiquityAttributes:(id)arg2 ofItemAtURL:(id)arg3;	// IMP=0x00000000007d5b8f
- (oneway void)writerWithPurposeID:(id)arg1 didChangeSharingOfItemAtURL:(id)arg2;	// IMP=0x00000000007d5a37
- (oneway void)writerWithPurposeID:(id)arg1 didChangeUbiquityOfItemAtURL:(id)arg2;	// IMP=0x00000000007d58df
- (oneway void)writerWithPurposeID:(id)arg1 didReconnectItemAtURL:(id)arg2;	// IMP=0x00000000007d5864
- (oneway void)writerWithPurposeID:(id)arg1 didDisconnectItemAtURL:(id)arg2;	// IMP=0x00000000007d57e9
- (oneway void)writerWithPurposeID:(id)arg1 didMoveItemAtURL:(id)arg2 toURL:(id)arg3;	// IMP=0x00000000007d562d
- (oneway void)cancelAccessClaimForID:(id)arg1;	// IMP=0x00000000007d54de
- (oneway void)revokeSubarbitrationClaimForID:(id)arg1;	// IMP=0x00000000007d54d8
- (void)grantSubarbitrationClaim:(id)arg1 withServer:(id)arg2;	// IMP=0x00000000007d54a4
- (oneway void)revokeAccessClaimForID:(id)arg1;	// IMP=0x00000000007d540f
- (id)grantAccessClaim:(id)arg1 synchronouslyIfPossible:(_Bool)arg2;	// IMP=0x00000000007d525a
- (void)stopArbitrating;	// IMP=0x00000000007d5244
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00000000007d51d0
- (void)dealloc;	// IMP=0x00000000007d5164
- (id)initWithQueue:(id)arg1 listener:(id)arg2;	// IMP=0x00000000007d50c0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFTwoArgumentSafetyBlock, NSString, NSXPCConnection;
@protocol AFRelinquishableAssertion, OS_dispatch_queue;

@interface ADAudioSessionAssertionConnection : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    int _processIdentifier;	// 16 = 0x10
    id <AFRelinquishableAssertion> _assertion;	// 24 = 0x18
    NSXPCConnection *_xpcConnection;	// 32 = 0x20
    AFTwoArgumentSafetyBlock *_relinquishmentHandler;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000fc62f
- (void)_clearXPCConnection;	// IMP=0x00100000000fc534
- (void)_relinquishAssertionWithContext:(id)arg1 error:(id)arg2 options:(unsigned long long)arg3;	// IMP=0x00100000000fc3f6
- (void)_finalizeWithContext:(id)arg1 error:(id)arg2;	// IMP=0x00100000000fc26a
- (void)invalidate;	// IMP=0x00100000000fc18b
- (oneway void)relinquishAudioSessionWithContext:(id)arg1 error:(id)arg2 options:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000fbf8d
- (oneway void)acquireAudioSessionWithContext:(id)arg1 relinquishmentHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000fbe27
- (void)dealloc;	// IMP=0x00100000000fbcc8
@property(readonly, copy) NSString *description;
- (id)initWithXPCConnection:(id)arg1;	// IMP=0x00100000000fba90

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


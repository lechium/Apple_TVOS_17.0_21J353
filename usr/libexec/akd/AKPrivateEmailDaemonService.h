//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKClient, NSString;

@interface AKPrivateEmailDaemonService : NSObject
{
    AKClient *_client;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000005f2df
@property(readonly, nonatomic) AKClient *client; // @synthesize client=_client;
- (_Bool)_verifyEntitlements;	// IMP=0x001000000005f17e
- (void)_cacheFetchedPrivateEmail:(id)arg1 keyAlreadyHashed:(_Bool)arg2 error:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000005f05a
- (void)_performFetchSiwAHmeRequestWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000005efed
- (void)_performRegisterRequestWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000005ef80
- (void)_performRequestForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000005ef13
- (void)fetchSignInWithApplePrivateEmailWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000005eea6
- (void)removePrivateEmailWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000005ecb5
- (void)removePrivateEmailKey:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000005ec23
- (void)privateEmailListVersionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000005eb03
- (void)deletePrivateEmailDatabaseWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000005e9c5
- (void)presentPrivateEmailUIForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000005e813
- (void)listAllPrivateEmailsForAltDSID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000005e540
- (void)getContextForRequestContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000005e218
- (void)registerPrivateEmailWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000005e1ab
- (void)registerPrivateEmailForAltDSID:(id)arg1 withKey:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000005e0fc
- (void)fetchPrivateEmailWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000005da63
- (void)fetchPrivateEmailForAltDSID:(id)arg1 withKey:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000005d9c1
- (void)lookupPrivateEmailWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000005d62d
- (void)lookupPrivateEmailForAltDSID:(id)arg1 withKey:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000005d58b
- (void)dealloc;	// IMP=0x001000000005d55c
- (id)initWithClient:(id)arg1;	// IMP=0x001000000005d4f1
- (id)init;	// IMP=0x001000000005d4c6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


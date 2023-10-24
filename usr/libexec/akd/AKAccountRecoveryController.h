//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKAuthenticationUILiaison, AKClient, AKRequestDispatcher;

@interface AKAccountRecoveryController : NSObject
{
    AKAuthenticationUILiaison *_authUILiaison;	// 8 = 0x8
    AKClient *_client;	// 16 = 0x10
    AKRequestDispatcher *_requestDispatcher;	// 24 = 0x18
}

+ (_Bool)shouldProcessServerUIRequest:(id)arg1;	// IMP=0x004000000001613e
- (void).cxx_destruct;	// IMP=0x00200000000180a5
- (id)_recoveryContextFromServerInfo:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000017f4c
- (void)persistMasterKeyVerifier:(id)arg1 withContext:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000017cfd
- (void)verifyMasterKey:(id)arg1 withContext:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000174d5
- (void)renewRecoveryTokenWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000016d2d
- (void)retrieveRecoveryDataForServerContext:(id)arg1 recoveryInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000161c2
- (id)initWithUILiaison:(id)arg1 client:(id)arg2;	// IMP=0x00100000000160a7
- (id)initWithUILiaison:(id)arg1 client:(id)arg2 requestDispatcher:(id)arg3;	// IMP=0x0010000000015fef

@end


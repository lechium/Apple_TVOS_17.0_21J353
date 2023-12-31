//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMMTRMatterKeypair : HMFObject
{
    _Bool _initialized;	// 8 = 0x8
    struct __SecKey *_privateKey;	// 16 = 0x10
    struct __SecKey *_publicKey;	// 24 = 0x18
    NSString *_keychainAccount;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x00100000000296b7
- (void).cxx_destruct;	// IMP=0x00000000000296a4
@property(retain) NSString *keychainAccount; // @synthesize keychainAccount=_keychainAccount;
@property(readonly) struct __SecKey *publicKey; // @synthesize publicKey=_publicKey;
@property(readonly) struct __SecKey *privateKey; // @synthesize privateKey=_privateKey;
@property _Bool initialized; // @synthesize initialized=_initialized;
- (_Bool)_reloadWithData:(id)arg1;	// IMP=0x0000000000029390
- (id)_getPrivateKeydata;	// IMP=0x0000000000028f68
- (_Bool)_generateKeys;	// IMP=0x0000000000028c23
- (_Bool)_storePrivateKeyData:(id)arg1;	// IMP=0x00000000000289a4
- (_Bool)reload;	// IMP=0x00000000000286cf
- (struct __SecKey *)pubkey;	// IMP=0x00000000000286bd
- (id)signMessageECDSA_DER:(id)arg1;	// IMP=0x00000000000285a1
- (_Bool)deserialize:(id)arg1;	// IMP=0x00000000000284d8
- (id)serialize;	// IMP=0x0000000000028262
- (_Bool)initialize;	// IMP=0x0000000000027f87
- (id)initWithAccount:(id)arg1;	// IMP=0x0000000000027ee7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


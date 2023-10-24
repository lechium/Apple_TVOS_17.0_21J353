//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MCSelfSignedCertificatePayloadHandler
{
    struct __SecIdentity *_identity;	// 40 = 0x28
}

- (struct __SecIdentity *)copyIdentityImmediatelyWithInteractionClient:(id)arg1 outError:(id *)arg2;	// IMP=0x002000000007d030
- (id)generateSelfSignedCertificatePublicKey:(struct __SecKey *)arg1 privateKey:(struct __SecKey *)arg2 keyUsage:(unsigned int)arg3 extendedKeyUsage:(id)arg4 lifetime:(unsigned long long)arg5 outCert:(struct __SecCertificate **)arg6;	// IMP=0x001000000007cc51
- (id)_createKeyPairType:(id)arg1 size:(unsigned long long)arg2 hardwareBound:(_Bool)arg3 outPublicKey:(struct __SecKey **)arg4 outPrivateKey:(struct __SecKey **)arg5;	// IMP=0x001000000007c9fa
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x001000000007c603
- (void)dealloc;	// IMP=0x001000000007c5bd

@end


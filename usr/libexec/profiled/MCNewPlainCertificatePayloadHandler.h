//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MCNewPlainCertificatePayloadHandler
{
    struct __SecIdentity *_identity;	// 40 = 0x28
}

- (struct __SecIdentity *)copyIdentityImmediatelyWithInteractionClient:(id)arg1 outError:(id *)arg2;	// IMP=0x002000000002dc03
- (id)_malformedCertificateError;	// IMP=0x001000000002db30
- (id)_cannotStoreRootCertificateError;	// IMP=0x001000000002da5d
- (id)_cannotStoreCertificateError;	// IMP=0x001000000002d98a
- (id)_tooManyCertificatesError;	// IMP=0x001000000002d8b7
- (id)_invalidPasscodeError;	// IMP=0x001000000002d7e4
- (int)_grantPartialNonSSLTrustPolicyForCertificate:(struct __SecCertificate *)arg1;	// IMP=0x001000000002d58f
- (void)_revertFullSSLTrustIfNeeded;	// IMP=0x001000000002ce0f
- (void)remove;	// IMP=0x001000000002cd8c
- (void)unsetAside;	// IMP=0x001000000002cb94
- (void)setAside;	// IMP=0x001000000002cb56
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x001000000002c5e6
- (id)_storeCertificate:(struct __SecCertificate *)arg1 allowSSLTrust:(_Bool)arg2 outError:(id *)arg3;	// IMP=0x001000000002bc45
- (_Bool)preflightUserInputResponses:(id)arg1 outError:(id *)arg2;	// IMP=0x001000000002baf3
- (struct __SecIdentity *)_copyContentsOfPKCS12DataWithPasscode:(id)arg1 outError:(id *)arg2;	// IMP=0x001000000002b93b
- (void)dealloc;	// IMP=0x001000000002b8f5
- (id)userInputFields;	// IMP=0x001000000002b752

@end


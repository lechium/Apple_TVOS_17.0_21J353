//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MCNewWAPIIdentityCertificatePayloadHandler
{
}

- (void)remove;	// IMP=0x0040000000072f80
- (void)unsetAside;	// IMP=0x0010000000072ee4
- (void)setAside;	// IMP=0x0010000000072dde
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x00100000000729c0
- (_Bool)_storePEMDataInKeychain:(id)arg1 UUID:(id)arg2 outError:(id *)arg3;	// IMP=0x00100000000726f5
- (id)_cannotStoreCertificateError;	// IMP=0x0010000000072622
- (id)_cannotStorePEMDataError;	// IMP=0x001000000007254f
- (id)_malformedCertificateError;	// IMP=0x001000000007247c

@end


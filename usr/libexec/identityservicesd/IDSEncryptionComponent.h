//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IDSEncryptionController;

@interface IDSEncryptionComponent
{
    IDSEncryptionController *_encryptionController;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000016a998
- (_Bool)_shouldIgnoreAutoBugCaptureForECFailure:(id)arg1;	// IMP=0x001000000016a90b
- (_Bool)_shouldAutoBugCaptureForECError:(id)arg1;	// IMP=0x001000000016a8ee
- (_Bool)shouldForwardErrorForEncryptionType:(long long)arg1 forceECC:(_Bool)arg2;	// IMP=0x001000000016a8dc
- (id)runIndividuallyWithInput:(id)arg1;	// IMP=0x0010000000168fcc
- (id)initWithEncryptionController:(id)arg1;	// IMP=0x0010000000168f5e

@end


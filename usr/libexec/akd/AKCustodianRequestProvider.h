//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AKCustodianContext;

@interface AKCustodianRequestProvider
{
    _Bool _authenticatedRequest;	// 8 = 0x8
    _Bool _signWithIdentityToken;	// 9 = 0x9
    AKCustodianContext *_custodianContext;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000002959b
@property(retain, nonatomic) AKCustodianContext *custodianContext; // @synthesize custodianContext=_custodianContext;
@property(nonatomic) _Bool signWithIdentityToken; // @synthesize signWithIdentityToken=_signWithIdentityToken;
@property(nonatomic) _Bool authenticatedRequest; // @synthesize authenticatedRequest=_authenticatedRequest;
- (_Bool)validateResponseData:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000029305
- (id)_bodyForTrustedContactsDataSync;	// IMP=0x0010000000028f31
- (id)_bodyForEmbargoEndFeedback;	// IMP=0x0010000000028bde
- (id)_bodyForCustodianUpdateRecoveryKeyRequest;	// IMP=0x0010000000028999
- (id)_bodyForFinalizeCustodianRequest;	// IMP=0x0010000000028789
- (id)_bodyForAddAndRevokeCustodianRequest;	// IMP=0x001000000002863a
- (id)_bodyForRecoveryCircle;	// IMP=0x0010000000027dd8
- (id)authKitBody;	// IMP=0x0010000000027acc
- (_Bool)signRequest:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000276a8
- (unsigned long long)requestBodyType;	// IMP=0x001000000002769d
- (unsigned long long)expectedResponseType;	// IMP=0x0010000000027692
- (id)initWithContext:(id)arg1 urlBagKey:(id)arg2;	// IMP=0x001000000002767d
- (id)initWithContext:(id)arg1;	// IMP=0x0010000000027612

@end


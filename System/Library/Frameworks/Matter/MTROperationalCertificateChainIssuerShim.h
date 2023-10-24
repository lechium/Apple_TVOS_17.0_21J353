//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol MTRNOCChainIssuer;

@interface MTROperationalCertificateChainIssuerShim : NSObject
{
    _Bool _shouldSkipAttestationCertificateValidation;	// 8 = 0x8
    id <MTRNOCChainIssuer> _nocChainIssuer;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000a963c
@property(readonly, nonatomic) _Bool shouldSkipAttestationCertificateValidation; // @synthesize shouldSkipAttestationCertificateValidation=_shouldSkipAttestationCertificateValidation;
@property(readonly, nonatomic) id <MTRNOCChainIssuer> nocChainIssuer; // @synthesize nocChainIssuer=_nocChainIssuer;
- (void)issueOperationalCertificateForRequest:(id)arg1 attestationInfo:(id)arg2 controller:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000a9081
- (id)initWithIssuer:(id)arg1;	// IMP=0x00000000000a8ffd

@end


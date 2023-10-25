//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface PallasResponseVerifier : NSObject
{
    double _issuanceDate;	// 8 = 0x8
    struct __SecKey *_leafPublicKey;	// 16 = 0x10
    struct __CFString *_keyAlg;	// 24 = 0x18
}

@property(readonly) struct __CFString *keyAlg; // @synthesize keyAlg=_keyAlg;
@property(readonly) struct __SecKey *leafPublicKey; // @synthesize leafPublicKey=_leafPublicKey;
@property(readonly) double issuanceDate; // @synthesize issuanceDate=_issuanceDate;
- (_Bool)verifyResponse:(id)arg1 signature:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000065c79
- (_Bool)verifyCerts:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000065924
- (_Bool)determineAlg:(id)arg1;	// IMP=0x00000000000658a0
- (id)init;	// IMP=0x0000000000065865

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSError, NSString;

__attribute__((visibility("hidden")))
@interface SecJWSDecoder : NSObject
{
    NSString *_keyID;	// 8 = 0x8
    NSData *_payload;	// 16 = 0x10
    NSError *_verificationError;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000d1b27
@property(readonly, nonatomic) NSError *verificationError; // @synthesize verificationError=_verificationError;
@property(readonly, nonatomic) NSData *payload; // @synthesize payload=_payload;
@property(readonly, nonatomic) NSString *keyID; // @synthesize keyID=_keyID;
- (id)dataWithBase64URLEncodedString:(id)arg1;	// IMP=0x00000000000d1a0d
- (id)_createASN1SignatureFromJWSSignature:(id)arg1;	// IMP=0x00000000000d1a05
- (void)_validateJWSSignature:(id)arg1 ofHeader:(id)arg2 andPayload:(id)arg3 withPublicKey:(struct __SecKey *)arg4;	// IMP=0x00000000000d18b3
- (_Bool)_validateJWSProtectedHeader:(id)arg1;	// IMP=0x00000000000d13ec
- (id)initWithJWSCompactEncodedString:(id)arg1 keyID:(id)arg2 publicKey:(struct __SecKey *)arg3;	// IMP=0x00000000000d109b

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IDSFoundation/IDSBaseMessage.h>

@class NSData;

@interface IDSValidationCertificateMessage : IDSBaseMessage
{
    NSData *_responseCertificateData;	// 232 = 0xe8
    NSData *_pushToken;	// 240 = 0xf0
}

- (void).cxx_destruct;	// IMP=0x00200000002c37fa
@property(copy, nonatomic) NSData *pushToken; // @synthesize pushToken=_pushToken;
@property(copy, nonatomic) NSData *responseCertificateData; // @synthesize responseCertificateData=_responseCertificateData;
- (void)handleResponseDictionary:(id)arg1;	// IMP=0x00100000002c371f
- (id)additionalMessageHeaders;	// IMP=0x00100000002c369d
- (id)messageBody;	// IMP=0x00100000002c3684
- (id)requiredKeys;	// IMP=0x00100000002c366b
- (id)bagKey;	// IMP=0x00100000002c365e
- (long long)responseCommand;	// IMP=0x00100000002c3653
- (long long)command;	// IMP=0x00100000002c3648
- (_Bool)wantsHTTPGet;	// IMP=0x00100000002c3640
- (_Bool)wantsBinaryPush;	// IMP=0x00100000002c3638
- (_Bool)wantsCompressedBody;	// IMP=0x00100000002c3630
- (_Bool)wantsHTTPHeaders;	// IMP=0x00100000002c3628
- (_Bool)wantsBagKey;	// IMP=0x00100000002c3620
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000002c356f
- (id)init;	// IMP=0x00100000002c34a7

@end


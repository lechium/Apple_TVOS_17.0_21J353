//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString;

@interface IDSProfileGetDefaultInvitationContext
{
    _Bool _responseValidated;	// 232 = 0xe8
    NSString *_responseBasePhoneNumber;	// 240 = 0xf0
    NSString *_responseRegionID;	// 248 = 0xf8
    NSDictionary *_responseExtraInfo;	// 256 = 0x100
}

- (void).cxx_destruct;	// IMP=0x00200000000461b0
@property _Bool responseValidated; // @synthesize responseValidated=_responseValidated;
@property(copy) NSDictionary *responseExtraInfo; // @synthesize responseExtraInfo=_responseExtraInfo;
@property(copy) NSString *responseRegionID; // @synthesize responseRegionID=_responseRegionID;
@property(copy) NSString *responseBasePhoneNumber; // @synthesize responseBasePhoneNumber=_responseBasePhoneNumber;
- (void)handleResponseDictionary:(id)arg1;	// IMP=0x0010000000045fa3
- (double)anisetteHeadersTimeout;	// IMP=0x0010000000045f95
- (id)messageBody;	// IMP=0x0010000000045f7c
- (id)requiredKeys;	// IMP=0x0010000000045f63
- (id)bagKey;	// IMP=0x0010000000045f56
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000045e5a
- (id)init;	// IMP=0x0010000000045e06

@end


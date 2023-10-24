//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FTServices/FTIDSMessage.h>

@class NSArray, NSString;

@interface IDSHomeKitCloudRelayConsentTokensMessage : FTIDSMessage
{
    NSString *_serviceUserID;	// 232 = 0xe8
    NSArray *_accessoryIDs;	// 240 = 0xf0
    NSString *_adminID;	// 248 = 0xf8
    NSString *_expiry;	// 256 = 0x100
    NSArray *responseConsentTokens;	// 264 = 0x108
    NSArray *_responseConsentTokens;	// 272 = 0x110
}

- (void).cxx_destruct;	// IMP=0x002000000032a12a
@property(copy) NSArray *responseConsentTokens; // @synthesize responseConsentTokens=_responseConsentTokens;
@property(copy) NSString *expiry; // @synthesize expiry=_expiry;
@property(copy) NSString *adminID; // @synthesize adminID=_adminID;
@property(copy) NSArray *accessoryIDs; // @synthesize accessoryIDs=_accessoryIDs;
@property(copy) NSString *serviceUserID; // @synthesize serviceUserID=_serviceUserID;
- (void)handleResponseDictionary:(id)arg1;	// IMP=0x001000000032a013
- (id)bagKey;	// IMP=0x001000000032a006
- (id)messageBody;	// IMP=0x0010000000329ee4
- (id)additionalMessageHeaders;	// IMP=0x0010000000329dac
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000329c43

@end


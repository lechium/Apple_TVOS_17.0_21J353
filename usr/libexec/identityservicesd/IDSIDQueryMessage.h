//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FTServices/FTIDSMessage.h>

@class NSArray, NSDictionary, NSString;

@interface IDSIDQueryMessage : FTIDSMessage
{
    _Bool _resultExpected;	// 232 = 0xe8
    _Bool _isForced;	// 233 = 0xe9
    NSArray *_uris;	// 240 = 0xf0
    NSString *_weight;	// 248 = 0xf8
    NSDictionary *_responseIdentities;	// 256 = 0x100
    NSString *_requiredForMessaging;	// 264 = 0x108
}

- (void).cxx_destruct;	// IMP=0x0020000000234519
@property _Bool isForced; // @synthesize isForced=_isForced;
@property _Bool resultExpected; // @synthesize resultExpected=_resultExpected;
@property(copy) NSString *requiredForMessaging; // @synthesize requiredForMessaging=_requiredForMessaging;
@property(copy) NSDictionary *responseIdentities; // @synthesize responseIdentities=_responseIdentities;
@property(copy) NSString *weight; // @synthesize weight=_weight;
@property(copy, setter=setURIs:) NSArray *uris; // @synthesize uris=_uris;
- (double)anisetteHeadersTimeout;	// IMP=0x001000000023442b
- (void)handleResponseDictionary:(id)arg1;	// IMP=0x001000000023438f
- (void)handleResponseHeaders:(id)arg1;	// IMP=0x0010000000234389
- (_Bool)requiresPushTokenKeys;	// IMP=0x0010000000234381
- (_Bool)hasRequiredKeys:(id *)arg1;	// IMP=0x001000000023422c
- (id)messageBody;	// IMP=0x00100000002341ae
- (id)requiredKeys;	// IMP=0x0010000000234195
- (id)bagKey;	// IMP=0x0010000000234188
- (id)dataUsageBundleIdentifier;	// IMP=0x0010000000234180
- (_Bool)wantsBodySignature;	// IMP=0x0010000000234178
- (_Bool)allowDualDelivery;	// IMP=0x0010000000234170
- (_Bool)wantsHTTPGet;	// IMP=0x0010000000234168
- (_Bool)wantsManagedRetries;	// IMP=0x0010000000234160
- (id)additionalMessageHeaders;	// IMP=0x0010000000233fe3
- (id)additionalQueryStringParameters;	// IMP=0x0010000000233f22
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000233dc1
- (id)init;	// IMP=0x0010000000233d6d

@end


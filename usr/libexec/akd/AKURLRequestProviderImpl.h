//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKAppleIDAuthenticationContext, AKClient, NSData, NSDictionary, NSString, NSURL;

@interface AKURLRequestProviderImpl : NSObject
{
    _Bool _shouldCacheResource;	// 8 = 0x8
    _Bool __denyVirtualInterfaces;	// 9 = 0x9
    NSDictionary *authKitBody;	// 16 = 0x10
    AKClient *_client;	// 24 = 0x18
    NSString *_urlBagKey;	// 32 = 0x20
    NSURL *_requestURL;	// 40 = 0x28
    NSData *_authKitBodyData;	// 48 = 0x30
    NSString *_dataCenterIdentifier;	// 56 = 0x38
    AKAppleIDAuthenticationContext *_context;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0020000000015cb6
- (void)setContext:(id)arg1;	// IMP=0x0010000000015ca5
- (id)context;	// IMP=0x0010000000015c9b
@property(nonatomic) _Bool _denyVirtualInterfaces; // @synthesize _denyVirtualInterfaces=__denyVirtualInterfaces;
@property(copy, nonatomic) NSString *dataCenterIdentifier; // @synthesize dataCenterIdentifier=_dataCenterIdentifier;
@property(copy, nonatomic) NSData *authKitBodyData; // @synthesize authKitBodyData=_authKitBodyData;
@property(nonatomic) _Bool shouldCacheResource; // @synthesize shouldCacheResource=_shouldCacheResource;
@property(copy, nonatomic) NSURL *requestURL; // @synthesize requestURL=_requestURL;
@property(readonly, copy, nonatomic) NSString *urlBagKey; // @synthesize urlBagKey=_urlBagKey;
@property(retain, nonatomic) AKClient *client; // @synthesize client=_client;
@property(copy, nonatomic) NSDictionary *authKitBody; // @synthesize authKitBody;
- (_Bool)appendRequestUrlQueryParameterNamed:(id)arg1 value:(id)arg2;	// IMP=0x0010000000015a69
- (_Bool)signRequest:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000015a24
- (id)serverCompatibleRequestBodyWithPayload:(id)arg1;	// IMP=0x0010000000015952
@property(readonly, copy, nonatomic) NSDictionary *serverCompatibleRequestBody;
- (_Bool)_validateErrorCode:(id)arg1 withKey:(id)arg2;	// IMP=0x001000000001584d
- (_Bool)_validateResponseBodyFormat;	// IMP=0x00100000000157de
- (_Bool)_validateDataExists:(id)arg1;	// IMP=0x001000000001573c
- (_Bool)_validateJSONResponseData:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000015559
- (_Bool)validateResponseData:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000150da
- (id)_errorFromResponseDictionary:(id)arg1;	// IMP=0x0010000000014cbc
- (id)responseDictionaryWithData:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000014af7
- (unsigned long long)requestBodyType;	// IMP=0x0010000000014aef
- (unsigned long long)expectedResponseType;	// IMP=0x0010000000014ae7
- (id)buildRequest:(id *)arg1;	// IMP=0x0010000000014574
- (void)_setRequestURL;	// IMP=0x00100000000144da
- (id)initWithContext:(id)arg1 urlBagKey:(id)arg2 shouldCacheResource:(_Bool)arg3;	// IMP=0x0010000000014457
- (id)initWithContext:(id)arg1 urlBagKey:(id)arg2;	// IMP=0x0010000000014442
- (id)initWithContext:(id)arg1;	// IMP=0x00100000000143b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


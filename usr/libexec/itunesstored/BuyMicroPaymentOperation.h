//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class MicroPaymentQueueResponse, NSData, NSManagedObjectID, NSNumber, NSString, StoreKitClientIdentity;
@protocol BuyMicroPaymentOperationDelegate;

@interface BuyMicroPaymentOperation : ISOperation
{
    NSString *_applicationUsername;	// 96 = 0x60
    NSString *_buyParameters;	// 104 = 0x68
    NSData *_clientAuditTokenData;	// 112 = 0x70
    StoreKitClientIdentity *_clientIdentity;	// 120 = 0x78
    NSString *_partnerIdentifier;	// 128 = 0x80
    NSString *_partnerTransactionIdentifier;	// 136 = 0x88
    NSString *_productIdentifier;	// 144 = 0x90
    long long _quantity;	// 152 = 0x98
    NSData *_requestData;	// 160 = 0xa0
    MicroPaymentQueueResponse *_response;	// 168 = 0xa8
    _Bool _simulatesAskToBuyInSandbox;	// 176 = 0xb0
    NSString *_originatingStorefront;	// 184 = 0xb8
    NSManagedObjectID *_paymentID;	// 192 = 0xc0
    NSString *_discountIdentifier;	// 200 = 0xc8
    NSString *_discountKeyIdentifier;	// 208 = 0xd0
    NSString *_discountNonceString;	// 216 = 0xd8
    NSString *_discountSignature;	// 224 = 0xe0
    NSNumber *_discountTimestamp;	// 232 = 0xe8
}

- (void).cxx_destruct;	// IMP=0x0020000000042d07
@property(retain) NSNumber *discountTimestamp; // @synthesize discountTimestamp=_discountTimestamp;
@property(retain) NSString *discountSignature; // @synthesize discountSignature=_discountSignature;
@property(retain) NSString *discountNonceString; // @synthesize discountNonceString=_discountNonceString;
@property(retain) NSString *discountKeyIdentifier; // @synthesize discountKeyIdentifier=_discountKeyIdentifier;
@property(retain) NSString *discountIdentifier; // @synthesize discountIdentifier=_discountIdentifier;
@property(copy) NSManagedObjectID *paymentID; // @synthesize paymentID=_paymentID;
@property(copy) NSString *originatingStorefront; // @synthesize originatingStorefront=_originatingStorefront;
- (id)_fullBuyParametersWithAppProxy:(id)arg1;	// IMP=0x0010000000042306
- (id)_appProxy;	// IMP=0x0010000000041ec7
- (void)run;	// IMP=0x0010000000041225
- (_Bool)purchaseOperation:(id)arg1 shouldContinueWithNewStorefront:(id)arg2;	// IMP=0x001000000004113d
@property _Bool simulatesAskToBuyInSandbox;
@property(copy) NSData *requestData;
@property long long quantity;
@property(copy) NSString *productIdentifier;
@property(copy) NSString *partnerTransactionIdentifier;
@property(copy) NSString *partnerIdentifier;
@property(retain) StoreKitClientIdentity *clientIdentity;
- (void)setClientAuditTokenData:(id)arg1;	// IMP=0x0010000000040e0a
@property(copy) NSString *buyParameters;
@property(copy) NSString *applicationUsername;
@property(readonly) MicroPaymentQueueResponse *response;
- (id)clientAuditTokenData;	// IMP=0x0010000000040a4d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property __weak id <BuyMicroPaymentOperationDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


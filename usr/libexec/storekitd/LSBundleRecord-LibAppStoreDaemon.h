//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreServices/LSBundleRecord.h>

@class NSURL;

@interface LSBundleRecord (LibAppStoreDaemon)
- (id)_lib_receiptName;	// IMP=0x001000000008e6ef
@property(readonly) NSURL *lib_receiptURL;
@property(nonatomic, readonly) _Bool sk_isAppStoreSigned;
@property(nonatomic, readonly) _Bool sk_isAlmond;
@property(nonatomic, readonly) _Bool sk_getTaskAllowed;
- (_Bool)sk_canMakeExternalPurchaseForCountryCodes:(id)arg1;	// IMP=0x00100000000c71b0
- (id)sk_firstExternalLinkURLForCountryCodes:(id)arg1 mode:(long long)arg2;	// IMP=0x00100000000c6620
@property(nonatomic, readonly) _Bool sk_allowExternalPurchase;
@property(nonatomic, readonly) _Bool sk_allowExternalLink;
@property(nonatomic, readonly) NSURL *sk_advertisingAttributionReportURL;
@end


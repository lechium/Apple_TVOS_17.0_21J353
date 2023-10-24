//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TVHKAsynchronousOperation.h"

@class NSDictionary, NSError, NSOperation, NSString;

__attribute__((visibility("hidden")))
@interface TVHKStoreProductOperation : TVHKAsynchronousOperation
{
    unsigned long long _storeID;	// 8 = 0x8
    unsigned long long _storefrontID;	// 16 = 0x10
    NSDictionary *_response;	// 24 = 0x18
    NSError *_error;	// 32 = 0x20
    NSString *_title;	// 40 = 0x28
    NSOperation *_currentSubOperation;	// 48 = 0x30
}

+ (id)new;	// IMP=0x00600000000037cf
- (void).cxx_destruct;	// IMP=0x0000000000004d5e
@property(retain, nonatomic) NSOperation *currentSubOperation; // @synthesize currentSubOperation=_currentSubOperation;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSDictionary *response; // @synthesize response=_response;
@property(nonatomic) unsigned long long storefrontID; // @synthesize storefrontID=_storefrontID;
@property(nonatomic) unsigned long long storeID; // @synthesize storeID=_storeID;
- (void)_handleProductResponse:(id)arg1;	// IMP=0x0000000000004a09
- (void)_startFetchProductOperationWithURL:(id)arg1;	// IMP=0x000000000000470c
- (id)_productURLFromLookupResults:(id)arg1 forStoreID:(id)arg2;	// IMP=0x0000000000004449
- (void)_startLookupOperationWithStoreID:(unsigned long long)arg1;	// IMP=0x0000000000004061
- (id)_productURLFromSearchResults:(id)arg1;	// IMP=0x0000000000003dca
- (void)_startSearchOperationWithTitle:(id)arg1 andType:(unsigned long long)arg2;	// IMP=0x0000000000003a50
- (void)cancel;	// IMP=0x00000000000039d2
- (void)executionDidBegin;	// IMP=0x0000000000003952
- (id)initWithItemTitle:(id)arg1 mediaCategoryType:(unsigned long long)arg2;	// IMP=0x000000000000386d
- (id)init;	// IMP=0x00000000000037fe

@end


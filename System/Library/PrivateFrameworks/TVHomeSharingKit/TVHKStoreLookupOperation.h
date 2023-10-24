//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TVHKAsynchronousOperation.h"

@class NSDictionary, NSError, NSString, SSVPlatformRequestOperation;

__attribute__((visibility("hidden")))
@interface TVHKStoreLookupOperation : TVHKAsynchronousOperation
{
    NSString *_storeIDString;	// 8 = 0x8
    NSString *_storefrontIDString;	// 16 = 0x10
    unsigned long long _storeID;	// 24 = 0x18
    unsigned long long _storefrontID;	// 32 = 0x20
    NSDictionary *_results;	// 40 = 0x28
    NSError *_error;	// 48 = 0x30
    SSVPlatformRequestOperation *_platformOperation;	// 56 = 0x38
}

+ (id)new;	// IMP=0x006000000000749e
- (void).cxx_destruct;	// IMP=0x0000000000007cc9
@property(retain, nonatomic) SSVPlatformRequestOperation *platformOperation; // @synthesize platformOperation=_platformOperation;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) NSDictionary *results; // @synthesize results=_results;
@property(nonatomic) unsigned long long storefrontID; // @synthesize storefrontID=_storefrontID;
@property(readonly, nonatomic) unsigned long long storeID; // @synthesize storeID=_storeID;
- (id)_countryCode;	// IMP=0x0000000000007a18
- (void)cancel;	// IMP=0x000000000000799a
- (void)executionDidBegin;	// IMP=0x0000000000007667
@property(readonly, copy, nonatomic) NSString *storefrontIDString; // @synthesize storefrontIDString=_storefrontIDString;
@property(readonly, copy, nonatomic) NSString *storeIDString; // @synthesize storeIDString=_storeIDString;
- (id)initWithStoreID:(unsigned long long)arg1;	// IMP=0x000000000000753c
- (id)init;	// IMP=0x00000000000074cd

@end

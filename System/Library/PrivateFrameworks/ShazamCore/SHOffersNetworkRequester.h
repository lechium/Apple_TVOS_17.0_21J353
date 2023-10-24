//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SHStorefront;

__attribute__((visibility("hidden")))
@interface SHOffersNetworkRequester : NSObject
{
    SHStorefront *_storefront;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000008144
@property(readonly, nonatomic) SHStorefront *storefront; // @synthesize storefront=_storefront;
- (void)fetchOffersAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000007e63
- (id)endpointURLWithHost:(id)arg1 path:(id)arg2 storefront:(id)arg3;	// IMP=0x0000000000007d70
- (void)offersWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000000777a

@end


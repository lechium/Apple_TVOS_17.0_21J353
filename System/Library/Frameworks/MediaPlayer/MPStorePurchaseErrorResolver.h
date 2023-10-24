//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MPAVErrorResolver.h"

@class NSNumber;

__attribute__((visibility("hidden")))
@interface MPStorePurchaseErrorResolver : MPAVErrorResolver
{
    NSNumber *_storeAccountIdentifier;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000250838
@property(readonly, copy, nonatomic) NSNumber *storeAccountIdentifier; // @synthesize storeAccountIdentifier=_storeAccountIdentifier;
- (void)resolveError:(id)arg1;	// IMP=0x0000000000250813
- (id)initWithStoreAccountIdentifier:(id)arg1;	// IMP=0x00000000002507a5

@end


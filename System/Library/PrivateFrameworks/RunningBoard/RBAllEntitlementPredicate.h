//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "RBEntitlementPredicate.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface RBAllEntitlementPredicate : RBEntitlementPredicate
{
    NSDictionary *_predicate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000004ff73
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004ff68
- (id)description;	// IMP=0x000000000004fec6
- (id)allEntitlements;	// IMP=0x000000000004fd66
- (unsigned long long)count;	// IMP=0x000000000004fc5a
- (_Bool)matchesEntitlements:(id)arg1;	// IMP=0x000000000004fae2
- (id)initWithDictionary:(id)arg1 forDomain:(id)arg2 attribute:(id)arg3 errors:(id)arg4;	// IMP=0x000000000004f5f7

@end


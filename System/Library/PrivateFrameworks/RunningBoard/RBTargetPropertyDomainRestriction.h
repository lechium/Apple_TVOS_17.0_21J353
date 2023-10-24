//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "RBDomainRestriction.h"

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface RBTargetPropertyDomainRestriction : RBDomainRestriction
{
    NSString *_property;	// 8 = 0x8
    NSNumber *_numberValue;	// 16 = 0x10
    NSString *_stringValue;	// 24 = 0x18
}

+ (id)domainRestrictionForDictionary:(id)arg1 withError:(id *)arg2;	// IMP=0x0060000000077c81
- (void).cxx_destruct;	// IMP=0x00000000000787d1
- (id)description;	// IMP=0x0000000000078732
- (unsigned long long)hash;	// IMP=0x0000000000078715
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000078619
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007860e
- (id)allEntitlements;	// IMP=0x00000000000785f5
- (_Bool)allowsContext:(id)arg1 withError:(id *)arg2;	// IMP=0x00000000000781fc
- (id)_initWithProperty:(id)arg1 value:(id)arg2;	// IMP=0x0000000000077b2a

@end

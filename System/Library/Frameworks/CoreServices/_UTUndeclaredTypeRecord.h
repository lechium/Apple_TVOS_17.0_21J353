//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UTTypeRecord.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface _UTUndeclaredTypeRecord : UTTypeRecord
{
    NSString *_identifier;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000158234
- (void).cxx_destruct;	// IMP=0x000000000015846e
- (id)identifier;	// IMP=0x0000000000158458
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000158402
- (id)awakeAfterUsingCoder:(id)arg1;	// IMP=0x000000000015833d
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000158296
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000015823c
- (id)_persistentIdentifierWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const void *)arg4;	// IMP=0x000000000015813c
- (void)_enumerateRelatedTypesWithMaximumDegreeOfSeparation:(long long)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000000158136
- (void)_enumerateRelatedTypeUnitsOrDynamicIdsWithContext:(struct LSContext *)arg1 unitID:(unsigned int)arg2 maximumDegreeOfSeparation:(long long)arg3 block:(CDUnknownBlockType)arg4;	// IMP=0x0000000000158130
- (_Bool)conformsToTypeIdentifier:(id)arg1;	// IMP=0x00000000001580d4
- (id)declaration;	// IMP=0x0000000000158057
- (_Bool)isInPublicDomain;	// IMP=0x0000000000157ff8
- (id)version;	// IMP=0x0000000000157ff0
- (id)_initWithContext:(struct LSContext *)arg1 identifier:(id)arg2;	// IMP=0x0000000000157f56

@end


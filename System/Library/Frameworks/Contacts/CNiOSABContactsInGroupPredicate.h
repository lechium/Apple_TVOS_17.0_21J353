//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNPredicate.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABContactsInGroupPredicate : CNPredicate
{
    NSString *_parentGroupIdentifier;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000c1c69
- (void).cxx_destruct;	// IMP=0x00000000000c210b
@property(readonly, copy, nonatomic) NSString *parentGroupIdentifier; // @synthesize parentGroupIdentifier=_parentGroupIdentifier;
@property(readonly, copy) NSString *description;
- (id)cn_ABQSLPredicateForAddressBook:(void *)arg1 fetchRequest:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000c1f77
- (struct __CFArray *)cn_copyPeopleInAddressBook:(void *)arg1 fetchRequest:(id)arg2 matchInfos:(id *)arg3 environment:(id)arg4 error:(struct __CFError **)arg5;	// IMP=0x00000000000c1dda
- (_Bool)cn_supportsEncodedFetching;	// IMP=0x00000000000c1dd2
- (_Bool)cn_supportsNativeBatchFetch;	// IMP=0x00000000000c1dca
- (_Bool)cn_supportsNativeSorting;	// IMP=0x00000000000c1dc2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000c1d45
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000c1c71
- (id)initWithParentGroupIdentifier:(id)arg1;	// IMP=0x00000000000c1bb4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

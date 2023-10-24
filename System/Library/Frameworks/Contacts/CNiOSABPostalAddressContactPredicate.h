//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNPredicate.h"

@class CNPostalAddress, NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABPostalAddressContactPredicate : CNPredicate
{
    CNPostalAddress *_postalAddress;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000f20bf
- (void).cxx_destruct;	// IMP=0x00000000000f2723
@property(copy, nonatomic) CNPostalAddress *postalAddress; // @synthesize postalAddress=_postalAddress;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000f2513
- (id)cn_ABQSLPredicateForAddressBook:(void *)arg1 fetchRequest:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000f250b
- (id)cn_copyPeopleInAddressBook:(void *)arg1 fetchRequest:(id)arg2 matchInfos:(id *)arg3 environment:(id)arg4 nserror:(id *)arg5;	// IMP=0x00000000000f2314
- (struct __CFArray *)cn_copyPeopleInAddressBook:(void *)arg1 fetchRequest:(id)arg2 matchInfos:(id *)arg3 environment:(id)arg4 error:(struct __CFError **)arg5;	// IMP=0x00000000000f2230
- (_Bool)cn_supportsEncodedFetching;	// IMP=0x00000000000f2228
- (_Bool)cn_supportsNativeBatchFetch;	// IMP=0x00000000000f2220
- (_Bool)cn_supportsNativeSorting;	// IMP=0x00000000000f2218
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000f219b
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000f20c7
- (id)initWithPostalAddress:(id)arg1;	// IMP=0x00000000000f202e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end


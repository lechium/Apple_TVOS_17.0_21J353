//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNPredicate.h"

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface CNiOSABEKParticipantPredicate : CNPredicate
{
    NSString *_name;	// 24 = 0x18
    NSURL *_URL;	// 32 = 0x20
    NSString *_emailAddress;	// 40 = 0x28
    NSString *_customDescription;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000011cb38
- (void).cxx_destruct;	// IMP=0x000000000011d488
@property(copy, nonatomic) NSString *customDescription; // @synthesize customDescription=_customDescription;
@property(copy, nonatomic) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)cn_ABQSLPredicateForAddressBook:(void *)arg1 fetchRequest:(id)arg2 error:(id *)arg3;	// IMP=0x000000000011d2c3
- (struct __CFArray *)cn_copyPeopleInAddressBook:(void *)arg1 fetchRequest:(id)arg2 matchInfos:(id *)arg3 environment:(id)arg4 error:(struct __CFError **)arg5;	// IMP=0x000000000011cfb8
- (_Bool)cn_supportsEncodedFetching;	// IMP=0x000000000011cfb0
- (_Bool)cn_supportsNativeBatchFetch;	// IMP=0x000000000011cfa8
- (_Bool)cn_supportsNativeSorting;	// IMP=0x000000000011cfa0
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000011cd18
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000011cb40
- (id)initWithName:(id)arg1 URL:(id)arg2 emailAddress:(id)arg3 customDescription:(id)arg4;	// IMP=0x000000000011ca0f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

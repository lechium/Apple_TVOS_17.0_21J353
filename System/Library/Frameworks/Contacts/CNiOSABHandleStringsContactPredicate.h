//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABHandleStringsContactPredicate
{
}

+ (id)peopleForPredicate:(id)arg1 sortOrder:(unsigned int)arg2 addressBook:(void *)arg3;	// IMP=0x001000000007966d
- (id)cn_ABQSLPredicateForAddressBook:(void *)arg1 fetchRequest:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000796c1
- (id)handlesPredicateWithMap:(id)arg1;	// IMP=0x000000000007950e
- (struct __CFArray *)cn_copyPeopleInAddressBook:(void *)arg1 fetchRequest:(id)arg2 matchInfos:(id *)arg3 environment:(id)arg4 error:(struct __CFError **)arg5;	// IMP=0x000000000007929c
- (_Bool)cn_supportsEncodedFetching;	// IMP=0x0000000000079074
- (_Bool)cn_supportsNativeBatchFetch;	// IMP=0x000000000007906c
- (_Bool)cn_supportsNativeSorting;	// IMP=0x0000000000079064

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


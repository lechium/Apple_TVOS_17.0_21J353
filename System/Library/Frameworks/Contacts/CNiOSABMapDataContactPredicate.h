//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNPredicate.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABMapDataContactPredicate : CNPredicate
{
    NSString *_mapString;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000011c6a4
- (void).cxx_destruct;	// IMP=0x000000000011c9fc
@property(readonly, copy, nonatomic) NSString *mapString; // @synthesize mapString=_mapString;
@property(readonly, copy) NSString *description;
- (id)cn_ABQSLPredicateForAddressBook:(void *)arg1 fetchRequest:(id)arg2 error:(id *)arg3;	// IMP=0x000000000011c91b
- (struct __CFArray *)cn_copyPeopleInAddressBook:(void *)arg1 fetchRequest:(id)arg2 matchInfos:(id *)arg3 environment:(id)arg4 error:(struct __CFError **)arg5;	// IMP=0x000000000011c815
- (_Bool)cn_supportsEncodedFetching;	// IMP=0x000000000011c80d
- (_Bool)cn_supportsNativeBatchFetch;	// IMP=0x000000000011c805
- (_Bool)cn_supportsNativeSorting;	// IMP=0x000000000011c7fd
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000011c780
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000011c6ac
- (id)initWithString:(id)arg1;	// IMP=0x000000000011c62a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

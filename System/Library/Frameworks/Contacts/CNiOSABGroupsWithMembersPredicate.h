//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNPredicate.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABGroupsWithMembersPredicate : CNPredicate
{
    _Bool _includeAllParentGroups;	// 24 = 0x18
    unsigned int _recordType;	// 28 = 0x1c
    NSArray *_recordIdentifiers;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000047f57
- (void).cxx_destruct;	// IMP=0x000000000004823f
@property(readonly, nonatomic) _Bool includeAllParentGroups; // @synthesize includeAllParentGroups=_includeAllParentGroups;
@property(readonly, nonatomic) unsigned int recordType; // @synthesize recordType=_recordType;
@property(readonly, copy, nonatomic) NSArray *recordIdentifiers; // @synthesize recordIdentifiers=_recordIdentifiers;
- (struct __CFArray *)cn_copyGroupsInAddressBook:(void *)arg1 error:(struct __CFError **)arg2;	// IMP=0x000000000004818e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000480ce
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000047f5f
- (id)initWithContact:(id)arg1 includeAllParentGroups:(_Bool)arg2;	// IMP=0x0000000000047dd2
- (id)initWithGroup:(id)arg1 includeAllParentGroups:(_Bool)arg2;	// IMP=0x0000000000047c98

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


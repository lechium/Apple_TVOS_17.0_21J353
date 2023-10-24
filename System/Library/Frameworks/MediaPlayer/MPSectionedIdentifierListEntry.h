//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPSectionedIdentifierListEntryPositionKey, NSArray, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface MPSectionedIdentifierListEntry : NSObject
{
    NSMutableArray *_nextEntries;	// 8 = 0x8
    _Bool _dataSourceRemoved;	// 16 = 0x10
    MPSectionedIdentifierListEntryPositionKey *_positionKey;	// 24 = 0x18
    NSString *_sectionIdentifier;	// 32 = 0x20
    NSString *_hostedSectionIdentifier;	// 40 = 0x28
    MPSectionedIdentifierListEntry *_previousEntry;	// 48 = 0x30
    long long _branchDepth;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000006d675
- (void).cxx_destruct;	// IMP=0x000000000006d62e
@property(nonatomic) long long branchDepth; // @synthesize branchDepth=_branchDepth;
@property(nonatomic) __weak MPSectionedIdentifierListEntry *previousEntry; // @synthesize previousEntry=_previousEntry;
@property(copy, nonatomic) NSString *hostedSectionIdentifier; // @synthesize hostedSectionIdentifier=_hostedSectionIdentifier;
@property(readonly, nonatomic) NSString *sectionIdentifier; // @synthesize sectionIdentifier=_sectionIdentifier;
@property(readonly, nonatomic) MPSectionedIdentifierListEntryPositionKey *positionKey; // @synthesize positionKey=_positionKey;
@property(readonly, nonatomic) NSArray *nextEntries; // @synthesize nextEntries=_nextEntries;
@property(readonly, nonatomic, getter=isDataSourceRemoved) _Bool dataSourceRemoved; // @synthesize dataSourceRemoved=_dataSourceRemoved;
- (void)setDataSourceRemoved;	// IMP=0x000000000006d5a9
- (void)prepareForDealloc;	// IMP=0x000000000006d593
- (void)addNextEntry:(id)arg1;	// IMP=0x000000000006d57d
- (void)addBranch:(id)arg1 forceBranchDepthIncrease:(_Bool)arg2;	// IMP=0x000000000006d0a8
- (id)trackingEntryResult;	// IMP=0x000000000006d078
- (id)itemResult;	// IMP=0x000000000006d048
@property(readonly, nonatomic) long long entryType;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000006cf8e
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006ce60
- (id)_stateDumpObject;	// IMP=0x000000000006cc44
@property(readonly, copy) NSString *description;
- (id)initWithPositionKey:(id)arg1 sectionIdentifier:(id)arg2;	// IMP=0x000000000006cae5
- (id)encodableNextEntriesWithExclusiveAccessToken:(id)arg1;	// IMP=0x0000000000244bca

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


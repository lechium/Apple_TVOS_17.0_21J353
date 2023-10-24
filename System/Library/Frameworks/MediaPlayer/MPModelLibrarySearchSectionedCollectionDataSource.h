//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPLibraryObjectDatabase, MPModelLibrarySearchRequest, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface MPModelLibrarySearchSectionedCollectionDataSource : NSObject
{
    MPLibraryObjectDatabase *_lod;	// 8 = 0x8
    NSArray *_resultContainers;	// 16 = 0x10
    MPModelLibrarySearchRequest *_request;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000026d1ab
@property(copy, nonatomic) MPModelLibrarySearchRequest *request; // @synthesize request=_request;
@property(readonly, copy, nonatomic) NSArray *resultContainers; // @synthesize resultContainers=_resultContainers;
- (long long)searchWeightForIndexPath:(id)arg1;	// IMP=0x000000000026cc0f
- (_Bool)hasMoreResultsForSectionAtIndex:(long long)arg1;	// IMP=0x000000000026c989
- (id)identifiersForItemAtIndexPath:(id)arg1;	// IMP=0x000000000026c1c9
- (id)itemAtIndexPath:(id)arg1;	// IMP=0x000000000026bcc4
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;	// IMP=0x000000000026ba18
- (id)sectionAtIndex:(unsigned long long)arg1;	// IMP=0x000000000026b9b0
- (unsigned long long)numberOfSections;	// IMP=0x000000000026b99a
- (id)initWithEntitiesQueryResultContainers:(id)arg1 libraryObjectDatabase:(id)arg2;	// IMP=0x000000000026b8c6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

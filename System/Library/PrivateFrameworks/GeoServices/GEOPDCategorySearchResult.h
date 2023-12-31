//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOMapRegion, GEOPDPlaceSummaryLayoutMetadata, GEOPDRelatedSearchSuggestion, GEOPDResultRefinementGroup, GEOPDSCategorySearchResultSection, GEOPDSSearchAutoRedoThreshold, GEOPDSearchClientBehavior, GEOPDSearchSectionList, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDCategorySearchResult : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOPDSSearchAutoRedoThreshold *_autoRedoSearchThreshold;	// 24 = 0x18
    NSMutableArray *_browseCategorys;	// 32 = 0x20
    GEOPDSCategorySearchResultSection *_categorySearchResultSection;	// 40 = 0x28
    GEOPDRelatedSearchSuggestion *_defaultRelatedSearchSuggestion;	// 48 = 0x30
    GEOMapRegion *_displayMapRegion;	// 56 = 0x38
    GEOPDPlaceSummaryLayoutMetadata *_placeSummaryLayoutMetadata;	// 64 = 0x40
    NSMutableArray *_relatedEntitySections;	// 72 = 0x48
    NSMutableArray *_relatedSearchSuggestions;	// 80 = 0x50
    NSMutableArray *_resultDetourInfos;	// 88 = 0x58
    GEOPDResultRefinementGroup *_resultRefinementGroup;	// 96 = 0x60
    GEOPDSearchClientBehavior *_searchClientBehavior;	// 104 = 0x68
    NSMutableArray *_searchTierMetadatas;	// 112 = 0x70
    GEOPDSearchSectionList *_sectionList;	// 120 = 0x78
    unsigned int _readerMarkPos;	// 128 = 0x80
    unsigned int _readerMarkLength;	// 132 = 0x84
    struct os_unfair_lock_s _readerLock;	// 136 = 0x88
    int _searchResultViewType;	// 140 = 0x8c
    _Bool _disableAddingAdditionalPaddingOnViewport;	// 144 = 0x90
    _Bool _enablePartialClientization;	// 145 = 0x91
    _Bool _enableStructuredRapAffordance;	// 146 = 0x92
    _Bool _isChainResultSet;	// 147 = 0x93
    struct {
        unsigned int has_searchResultViewType:1;
        unsigned int has_disableAddingAdditionalPaddingOnViewport:1;
        unsigned int has_enablePartialClientization:1;
        unsigned int has_enableStructuredRapAffordance:1;
        unsigned int has_isChainResultSet:1;
        unsigned int read_unknownFields:1;
        unsigned int read_autoRedoSearchThreshold:1;
        unsigned int read_browseCategorys:1;
        unsigned int read_categorySearchResultSection:1;
        unsigned int read_defaultRelatedSearchSuggestion:1;
        unsigned int read_displayMapRegion:1;
        unsigned int read_placeSummaryLayoutMetadata:1;
        unsigned int read_relatedEntitySections:1;
        unsigned int read_relatedSearchSuggestions:1;
        unsigned int read_resultDetourInfos:1;
        unsigned int read_resultRefinementGroup:1;
        unsigned int read_searchClientBehavior:1;
        unsigned int read_searchTierMetadatas:1;
        unsigned int read_sectionList:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 148 = 0x94
}

- (void).cxx_destruct;	// IMP=0x0000000000533bbe
- (unsigned long long)hash;	// IMP=0x0000000000533929
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000533569
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000532c5a
- (void)writeTo:(id)arg1;	// IMP=0x000000000053203e
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000053202f
- (id)jsonRepresentation;	// IMP=0x00000000005315be
- (id)dictionaryRepresentation;	// IMP=0x0000000000530393
- (id)description;	// IMP=0x00000000005302e4
- (id)initWithData:(id)arg1;	// IMP=0x000000000052d421
- (id)init;	// IMP=0x000000000052d3c5

@end


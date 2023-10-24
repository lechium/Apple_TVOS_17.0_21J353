//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface MPPMediaQuery : PBCodable
{
    int _entityOrder;	// 8 = 0x8
    NSMutableArray *_filterPredicates;	// 16 = 0x10
    int _groupingType;	// 24 = 0x18
    NSMutableArray *_staticEntityIdentifiers;	// 32 = 0x20
    int _staticEntityType;	// 40 = 0x28
    _Bool _filteringDisabled;	// 44 = 0x2c
    _Bool _includeNonLibraryEntities;	// 45 = 0x2d
    struct {
        unsigned int entityOrder:1;
        unsigned int groupingType:1;
        unsigned int staticEntityType:1;
        unsigned int filteringDisabled:1;
        unsigned int includeNonLibraryEntities:1;
    } _has;	// 48 = 0x30
}

+ (Class)staticEntityIdentifiersType;	// IMP=0x001000000019d1e1
+ (Class)filterPredicatesType;	// IMP=0x001000000019d1d0
- (void).cxx_destruct;	// IMP=0x000000000019d19f
@property(nonatomic) _Bool includeNonLibraryEntities; // @synthesize includeNonLibraryEntities=_includeNonLibraryEntities;
@property(retain, nonatomic) NSMutableArray *staticEntityIdentifiers; // @synthesize staticEntityIdentifiers=_staticEntityIdentifiers;
@property(nonatomic) _Bool filteringDisabled; // @synthesize filteringDisabled=_filteringDisabled;
@property(retain, nonatomic) NSMutableArray *filterPredicates; // @synthesize filterPredicates=_filterPredicates;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000019ce64
- (unsigned long long)hash;	// IMP=0x000000000019cd5d
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000019cbbc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000019c810
- (void)copyTo:(id)arg1;	// IMP=0x000000000019c63d
- (void)writeTo:(id)arg1;	// IMP=0x000000000019c370
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000019be88
- (id)dictionaryRepresentation;	// IMP=0x000000000019b7a1
- (id)description;	// IMP=0x000000000019b6f2
@property(nonatomic) _Bool hasIncludeNonLibraryEntities;
- (int)StringAsStaticEntityType:(id)arg1;	// IMP=0x000000000019b63c
- (id)staticEntityTypeAsString:(int)arg1;	// IMP=0x000000000019b5e6
@property(nonatomic) _Bool hasStaticEntityType;
@property(nonatomic) int staticEntityType; // @synthesize staticEntityType=_staticEntityType;
- (id)staticEntityIdentifiersAtIndex:(unsigned long long)arg1;	// IMP=0x000000000019b55c
- (unsigned long long)staticEntityIdentifiersCount;	// IMP=0x000000000019b53f
- (void)addStaticEntityIdentifiers:(id)arg1;	// IMP=0x000000000019b4d5
- (void)clearStaticEntityIdentifiers;	// IMP=0x000000000019b4b8
- (int)StringAsEntityOrder:(id)arg1;	// IMP=0x000000000019b41b
- (id)entityOrderAsString:(int)arg1;	// IMP=0x000000000019b3d0
@property(nonatomic) _Bool hasEntityOrder;
@property(nonatomic) int entityOrder; // @synthesize entityOrder=_entityOrder;
@property(nonatomic) _Bool hasFilteringDisabled;
- (int)StringAsGroupingType:(id)arg1;	// IMP=0x000000000019b138
- (id)groupingTypeAsString:(int)arg1;	// IMP=0x000000000019b025
@property(nonatomic) _Bool hasGroupingType;
@property(nonatomic) int groupingType; // @synthesize groupingType=_groupingType;
- (id)filterPredicatesAtIndex:(unsigned long long)arg1;	// IMP=0x000000000019af9d
- (unsigned long long)filterPredicatesCount;	// IMP=0x000000000019af80
- (void)addFilterPredicates:(id)arg1;	// IMP=0x000000000019af16
- (void)clearFilterPredicates;	// IMP=0x000000000019aef9

@end

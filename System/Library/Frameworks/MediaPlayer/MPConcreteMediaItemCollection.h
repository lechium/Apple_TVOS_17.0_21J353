//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MPMediaItemCollection.h"

@class MPConcreteMediaEntityPropertiesCache, MPMediaItem, MPMediaQuery;

__attribute__((visibility("hidden")))
@interface MPConcreteMediaItemCollection : MPMediaItemCollection
{
    long long _identifier;	// 8 = 0x8
    MPMediaQuery *_itemsQuery;	// 16 = 0x10
    long long _grouping;	// 24 = 0x18
    MPMediaItem *_representativeItem;	// 32 = 0x20
    MPConcreteMediaEntityPropertiesCache *_propertiesCache;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000011ffef
+ (id)createUncachedMediaItemCollectionWithIdentifier:(long long)arg1 valuesForProperties:(id)arg2 itemsQuery:(id)arg3 grouping:(long long)arg4 representativeItemIdentifier:(long long)arg5;	// IMP=0x001000000011ff58
- (void).cxx_destruct;	// IMP=0x000000000011f8ff
- (void)_enumerateItemPersistentIDsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000011f8e2
- (unsigned long long)count;	// IMP=0x000000000011f8c5
- (id)representativeItem;	// IMP=0x000000000011f3e4
- (id)items;	// IMP=0x000000000011f3c7
- (id)itemsQuery;	// IMP=0x000000000011f3b2
- (void)setValue:(id)arg1 forProperty:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000011f1df
- (_Bool)setValue:(id)arg1 forProperty:(id)arg2;	// IMP=0x000000000011f0b9
- (id)valuesForProperties:(id)arg1;	// IMP=0x000000000011ee2e
- (id)valueForProperty:(id)arg1;	// IMP=0x000000000011ec14
- (void)enumerateValuesForProperties:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000011e9ed
- (id)_tokenBinaryIdentifierAsString;	// IMP=0x000000000011e8cd
- (unsigned long long)persistentID;	// IMP=0x000000000011e8bc
- (id)mediaLibrary;	// IMP=0x000000000011e89f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000011e7b0
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000011e647
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000011e63c
- (void)invalidateCachedProperties;	// IMP=0x000000000011e61f
@property(readonly, retain, nonatomic) MPConcreteMediaEntityPropertiesCache *cachedPropertyValues;
- (long long)groupingType;	// IMP=0x000000000011e5f9
- (void)dealloc;	// IMP=0x000000000011e51e
- (unsigned long long)hash;	// IMP=0x000000000011e502
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000011e497
- (id)initWithMultiverseIdentifier:(id)arg1 library:(id)arg2;	// IMP=0x000000000011dc51
- (id)initWithIdentifier:(long long)arg1 itemsQuery:(id)arg2 grouping:(long long)arg3;	// IMP=0x000000000011dc26
- (id)initWithIdentifier:(long long)arg1 valuesForProperties:(id)arg2 itemsQuery:(id)arg3 grouping:(long long)arg4 representativeItemIdentifier:(long long)arg5;	// IMP=0x000000000011da53
- (id)_initWithIdentifier:(long long)arg1 valuesForProperties:(id)arg2 itemsQuery:(id)arg3 grouping:(long long)arg4 representativeItemIdentifier:(long long)arg5 propertiesCache:(id)arg6;	// IMP=0x000000000011d8dd

@end

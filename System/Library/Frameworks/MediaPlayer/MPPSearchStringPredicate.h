//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface MPPSearchStringPredicate : PBCodable
{
    NSMutableArray *_properties;	// 8 = 0x8
    NSString *_searchString;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000017fbb8
@property(retain, nonatomic) NSMutableArray *properties; // @synthesize properties=_properties;
@property(retain, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
- (unsigned long long)hash;	// IMP=0x000000000017fb21
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000017fa84
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000017f8ac
- (void)copyTo:(id)arg1;	// IMP=0x000000000017f79e
- (void)writeTo:(id)arg1;	// IMP=0x000000000017f625
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000017f618
- (id)dictionaryRepresentation;	// IMP=0x000000000017f595
- (id)description;	// IMP=0x000000000017f4e6
- (id)propertiesAtIndex:(unsigned long long)arg1;	// IMP=0x000000000017f4c9
- (unsigned long long)propertiesCount;	// IMP=0x000000000017f4ac
- (void)addProperties:(id)arg1;	// IMP=0x000000000017f442
- (void)clearProperties;	// IMP=0x000000000017f425
@property(readonly, nonatomic) _Bool hasSearchString;
- (void)dealloc;	// IMP=0x000000000017f3b9

@end


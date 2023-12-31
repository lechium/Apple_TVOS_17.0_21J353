//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEODirectionsCollectionRequest : PBRequest
{
    NSMutableArray *_requestElements;	// 8 = 0x8
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0010000000d9b131
+ (Class)requestElementsType;	// IMP=0x0010000000d9ab4e
- (void).cxx_destruct;	// IMP=0x0000000000d9bd5f
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000d9bbf3
- (unsigned long long)hash;	// IMP=0x0000000000d9bbb8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000d9baff
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000d9b93b
- (void)copyTo:(id)arg1;	// IMP=0x0000000000d9b865
- (Class)responseClass;	// IMP=0x0000000000d9b854
- (unsigned int)requestTypeCode;	// IMP=0x0000000000d9b849
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x0000000000d9b6fe
- (void)clearSensitiveFields:(unsigned long long)arg1;	// IMP=0x0000000000d9b5de
- (void)writeTo:(id)arg1;	// IMP=0x0000000000d9b4a8
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000d9b2c2
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000d9b12b
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000d9b119
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000d9ae9a
- (id)jsonRepresentation;	// IMP=0x0000000000d9ae8b
- (id)dictionaryRepresentation;	// IMP=0x0000000000d9ac0e
- (id)description;	// IMP=0x0000000000d9ab5f
- (id)requestElementsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000d9ab31
- (unsigned long long)requestElementsCount;	// IMP=0x0000000000d9ab14
- (void)addRequestElements:(id)arg1;	// IMP=0x0000000000d9aaaa
- (void)clearRequestElements;	// IMP=0x0000000000d9aa8d
@property(retain, nonatomic) NSMutableArray *requestElements;

@end


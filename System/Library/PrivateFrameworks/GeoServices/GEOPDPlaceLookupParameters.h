//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPlaceLookupParameters : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    CDStruct_62a50c50 _muids;	// 24 = 0x18
    NSMutableArray *_identifiers;	// 48 = 0x30
    unsigned int _readerMarkPos;	// 56 = 0x38
    unsigned int _readerMarkLength;	// 60 = 0x3c
    struct os_unfair_lock_s _readerLock;	// 64 = 0x40
    int _resultProviderId;	// 68 = 0x44
    _Bool _enablePartialClientization;	// 72 = 0x48
    struct {
        unsigned int has_resultProviderId:1;
        unsigned int has_enablePartialClientization:1;
        unsigned int read_unknownFields:1;
        unsigned int read_muids:1;
        unsigned int read_identifiers:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 76 = 0x4c
}

+ (Class)identifierType;	// IMP=0x00100000005b76b2
- (void).cxx_destruct;	// IMP=0x00000000005b76c3
- (id)identifierAtIndex:(unsigned long long)arg1;	// IMP=0x00000000005b7681
- (unsigned long long)identifiersCount;	// IMP=0x00000000005b7655
- (void)addIdentifier:(id)arg1;	// IMP=0x00000000005b7613
- (void)clearIdentifiers;	// IMP=0x00000000005b75eb
@property(retain, nonatomic) NSMutableArray *identifiers;
- (unsigned long long)hash;	// IMP=0x00000000005b7431
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005b7311
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000005b6fc5
- (void)writeTo:(id)arg1;	// IMP=0x00000000005b6cbe
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000005b6caf
- (id)jsonRepresentation;	// IMP=0x00000000005b68bc
- (id)dictionaryRepresentation;	// IMP=0x00000000005b63ff
- (id)description;	// IMP=0x00000000005b6350
- (void)dealloc;	// IMP=0x00000000005b574e
- (id)initWithData:(id)arg1;	// IMP=0x00000000005b56f2
- (id)init;	// IMP=0x00000000005b5696
- (id)initWithIdentifiers:(id)arg1 resultProviderID:(int)arg2;	// IMP=0x000000000138144a

@end


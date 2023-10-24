//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOLocalizedString, GEOPDCaptionedPhoto, GEOPDMapsIdentifier, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPublisher : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSMutableArray *_collectionIds;	// 24 = 0x18
    GEOLocalizedString *_name;	// 32 = 0x20
    GEOPDCaptionedPhoto *_photo;	// 40 = 0x28
    NSMutableArray *_publisherDescriptions;	// 48 = 0x30
    GEOPDMapsIdentifier *_publisherId;	// 56 = 0x38
    unsigned int _readerMarkPos;	// 64 = 0x40
    unsigned int _readerMarkLength;	// 68 = 0x44
    struct os_unfair_lock_s _readerLock;	// 72 = 0x48
    int _errorState;	// 76 = 0x4c
    unsigned int _numCollections;	// 80 = 0x50
    struct {
        unsigned int has_errorState:1;
        unsigned int has_numCollections:1;
        unsigned int read_unknownFields:1;
        unsigned int read_collectionIds:1;
        unsigned int read_name:1;
        unsigned int read_photo:1;
        unsigned int read_publisherDescriptions:1;
        unsigned int read_publisherId:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 84 = 0x54
}

- (void).cxx_destruct;	// IMP=0x0000000000cc6a40
- (unsigned long long)hash;	// IMP=0x0000000000cc6934
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000cc677e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000cc62d5
- (void)writeTo:(id)arg1;	// IMP=0x0000000000cc5ec6
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000cc5eb7
- (id)jsonRepresentation;	// IMP=0x0000000000cc5650
- (id)dictionaryRepresentation;	// IMP=0x0000000000cc4cfb
- (id)description;	// IMP=0x0000000000cc4c4c
- (id)initWithData:(id)arg1;	// IMP=0x0000000000cc38e0
- (id)init;	// IMP=0x0000000000cc3884
- (id)publisherDescription;	// IMP=0x0000000000a3d6c6

@end

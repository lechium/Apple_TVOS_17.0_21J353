//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDResultRefinementMetadata, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDResultRefinementToggle : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSString *_displayName;	// 24 = 0x18
    GEOPDResultRefinementMetadata *_metadata;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    int _evChargingConnectorType;	// 52 = 0x34
    unsigned int _selectionSequenceNumber;	// 56 = 0x38
    int _toggleType;	// 60 = 0x3c
    _Bool _isSelected;	// 64 = 0x40
    _Bool _selectionFromView;	// 65 = 0x41
    _Bool _showAsSelected;	// 66 = 0x42
    struct {
        unsigned int has_evChargingConnectorType:1;
        unsigned int has_selectionSequenceNumber:1;
        unsigned int has_toggleType:1;
        unsigned int has_isSelected:1;
        unsigned int has_selectionFromView:1;
        unsigned int has_showAsSelected:1;
        unsigned int read_unknownFields:1;
        unsigned int read_displayName:1;
        unsigned int read_metadata:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 68 = 0x44
}

- (void).cxx_destruct;	// IMP=0x0000000000e21a55
- (unsigned long long)hash;	// IMP=0x0000000000e2192b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000e2173e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000e214cc
- (void)writeTo:(id)arg1;	// IMP=0x0000000000e21255
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000e21246
- (id)jsonRepresentation;	// IMP=0x0000000000e21136
- (id)dictionaryRepresentation;	// IMP=0x0000000000e20c3a
- (id)description;	// IMP=0x0000000000e20b8b
- (id)initWithData:(id)arg1;	// IMP=0x0000000000e1fd79
- (id)init;	// IMP=0x0000000000e1fd1d

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOLatLng, GEOPDSearchTokenSet, NSMutableArray, NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOPDSearchBusinessIntent : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    CDStruct_62a50c50 _keywordMuids;	// 16 = 0x10
    unsigned long long _businessId;	// 40 = 0x28
    GEOLatLng *_center;	// 48 = 0x30
    NSMutableArray *_keywordMappings;	// 56 = 0x38
    NSString *_name;	// 64 = 0x40
    GEOPDSearchTokenSet *_tokenSet;	// 72 = 0x48
    unsigned int _readerMarkPos;	// 80 = 0x50
    unsigned int _readerMarkLength;	// 84 = 0x54
    struct os_unfair_lock_s _readerLock;	// 88 = 0x58
    int _businessType;	// 92 = 0x5c
    struct {
        unsigned int has_businessId:1;
        unsigned int has_businessType:1;
        unsigned int read_keywordMuids:1;
        unsigned int read_center:1;
        unsigned int read_keywordMappings:1;
        unsigned int read_name:1;
        unsigned int read_tokenSet:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000a96ebd
- (unsigned long long)hash;	// IMP=0x0000000000a96db9
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000a96c10
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000a96894
- (void)writeTo:(id)arg1;	// IMP=0x0000000000a9650a
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000a964fb
- (id)jsonRepresentation;	// IMP=0x0000000000a95e17
- (id)dictionaryRepresentation;	// IMP=0x0000000000a957c1
- (id)description;	// IMP=0x0000000000a95712
- (void)dealloc;	// IMP=0x0000000000a94892
- (id)initWithData:(id)arg1;	// IMP=0x0000000000a94836
- (id)init;	// IMP=0x0000000000a947da

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDSearchTokenSet, NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOPDSearchQueryTokenizerMetadata : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    GEOPDSearchTokenSet *_tokenSet;	// 16 = 0x10
    NSString *_tokenizerName;	// 24 = 0x18
    unsigned int _readerMarkPos;	// 32 = 0x20
    unsigned int _readerMarkLength;	// 36 = 0x24
    struct os_unfair_lock_s _readerLock;	// 40 = 0x28
    int _tokenizerType;	// 44 = 0x2c
    struct {
        unsigned int has_tokenizerType:1;
        unsigned int read_tokenSet:1;
        unsigned int read_tokenizerName:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000afc3cb
- (unsigned long long)hash;	// IMP=0x0000000000afc34d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000afc24c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000afc07e
- (void)writeTo:(id)arg1;	// IMP=0x0000000000afbec6
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000afbeb7
- (id)jsonRepresentation;	// IMP=0x0000000000afbae3
- (id)dictionaryRepresentation;	// IMP=0x0000000000afb7cb
- (id)description;	// IMP=0x0000000000afb71c
- (id)initWithData:(id)arg1;	// IMP=0x0000000000afb176
- (id)init;	// IMP=0x0000000000afb11a

@end


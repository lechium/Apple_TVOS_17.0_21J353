//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOSuggestionEntryList : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSString *_localizedSectionHeader;	// 24 = 0x18
    NSMutableArray *_suggestionEntries;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    int _contentType;	// 52 = 0x34
    _Bool _showSectionHeader;	// 56 = 0x38
    struct {
        unsigned int has_contentType:1;
        unsigned int has_showSectionHeader:1;
        unsigned int read_unknownFields:1;
        unsigned int read_localizedSectionHeader:1;
        unsigned int read_suggestionEntries:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 60 = 0x3c
}

- (void).cxx_destruct;	// IMP=0x0000000000fff601
- (unsigned long long)hash;	// IMP=0x0000000000fff55b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000fff42b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000fff0d8
- (void)writeTo:(id)arg1;	// IMP=0x0000000000ffede1
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000ffedd2
- (id)jsonRepresentation;	// IMP=0x0000000000ffecc2
- (id)dictionaryRepresentation;	// IMP=0x0000000000ffe759
- (id)description;	// IMP=0x0000000000ffe6aa
- (id)initWithData:(id)arg1;	// IMP=0x0000000000ffdbb9
- (id)init;	// IMP=0x0000000000ffdb5d

@end


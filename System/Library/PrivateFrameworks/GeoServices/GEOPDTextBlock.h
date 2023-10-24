//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTextBlock : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSString *_text;	// 24 = 0x18
    NSString *_title;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_text:1;
        unsigned int read_title:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 52 = 0x34
}

+ (id)textBlockForPlaceData:(id)arg1;	// IMP=0x0010000000a3c53c
- (void).cxx_destruct;	// IMP=0x0000000000cfedf4
- (unsigned long long)hash;	// IMP=0x0000000000cfed9d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000cfeccb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000cfeb1d
- (void)writeTo:(id)arg1;	// IMP=0x0000000000cfe976
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000cfe967
- (id)jsonRepresentation;	// IMP=0x0000000000cfe78f
- (id)dictionaryRepresentation;	// IMP=0x0000000000cfe5a5
- (id)description;	// IMP=0x0000000000cfe4f6
- (id)initWithData:(id)arg1;	// IMP=0x0000000000cfdd68
- (id)init;	// IMP=0x0000000000cfdd0c

@end

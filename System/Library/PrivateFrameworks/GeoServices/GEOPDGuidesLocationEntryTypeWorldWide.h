//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDCaptionedPhoto, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDGuidesLocationEntryTypeWorldWide : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSMutableArray *_guideLocationImages;	// 24 = 0x18
    NSString *_name;	// 32 = 0x20
    GEOPDCaptionedPhoto *_photo;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_guideLocationImages:1;
        unsigned int read_name:1;
        unsigned int read_photo:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 60 = 0x3c
}

- (void).cxx_destruct;	// IMP=0x0000000000c5549c
- (unsigned long long)hash;	// IMP=0x0000000000c55425
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c55327
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c5501e
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c54d53
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c54d44
- (id)jsonRepresentation;	// IMP=0x0000000000c54c34
- (id)dictionaryRepresentation;	// IMP=0x0000000000c547c9
- (id)description;	// IMP=0x0000000000c5471a
- (id)initWithData:(id)arg1;	// IMP=0x0000000000c53a29
- (id)init;	// IMP=0x0000000000c539cd

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDAppClipParams, GEOPDExtensionParams, GEOPDQuickLinkActionDataParams, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDLink : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOPDAppClipParams *_appClipParams;	// 24 = 0x18
    GEOPDExtensionParams *_extensionParams;	// 32 = 0x20
    GEOPDQuickLinkActionDataParams *_quickLinkParams;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    int _linkType;	// 60 = 0x3c
    struct {
        unsigned int has_linkType:1;
        unsigned int read_unknownFields:1;
        unsigned int read_appClipParams:1;
        unsigned int read_extensionParams:1;
        unsigned int read_quickLinkParams:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000c62691
- (unsigned long long)hash;	// IMP=0x0000000000c625f0
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c624c0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c622b3
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c62060
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c62051
- (id)jsonRepresentation;	// IMP=0x0000000000c61cd2
- (id)dictionaryRepresentation;	// IMP=0x0000000000c6193e
- (id)description;	// IMP=0x0000000000c6188f
- (id)initWithData:(id)arg1;	// IMP=0x0000000000c60cd8
- (id)init;	// IMP=0x0000000000c60c7c

@end

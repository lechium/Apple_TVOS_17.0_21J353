//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDCaptionedPhoto, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDGuideLocationImage : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    GEOPDCaptionedPhoto *_image;	// 16 = 0x10
    int _imageType;	// 24 = 0x18
    struct {
        unsigned int has_imageType:1;
    } _flags;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x0000000000c50b0e
- (unsigned long long)hash;	// IMP=0x0000000000c50ac1
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c50a06
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c5095e
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c508dd
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c508ce
- (id)jsonRepresentation;	// IMP=0x0000000000c505b1
- (id)dictionaryRepresentation;	// IMP=0x0000000000c5034b
- (id)description;	// IMP=0x0000000000c5029c

@end


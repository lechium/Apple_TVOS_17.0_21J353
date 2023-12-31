//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDLensProjection, GEOPDOrientedPosition, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOPDCameraMetadata : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    CDStruct_9f2792e4 _textureIds;	// 16 = 0x10
    GEOPDLensProjection *_lensProjection;	// 40 = 0x28
    GEOPDOrientedPosition *_position;	// 48 = 0x30
    unsigned int _readerMarkPos;	// 56 = 0x38
    unsigned int _readerMarkLength;	// 60 = 0x3c
    struct os_unfair_lock_s _readerLock;	// 64 = 0x40
    int _cameraNumber;	// 68 = 0x44
    int _imageHeight;	// 72 = 0x48
    int _imageWidth;	// 76 = 0x4c
    struct {
        unsigned int has_cameraNumber:1;
        unsigned int has_imageHeight:1;
        unsigned int has_imageWidth:1;
        unsigned int read_textureIds:1;
        unsigned int read_lensProjection:1;
        unsigned int read_position:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000001137e1b
- (unsigned long long)hash;	// IMP=0x0000000001137d44
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000001137bd1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000011379aa
- (void)writeTo:(id)arg1;	// IMP=0x0000000001137785
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000001137778
- (id)jsonRepresentation;	// IMP=0x0000000001136a19
- (id)dictionaryRepresentation;	// IMP=0x00000000011365bf
- (id)description;	// IMP=0x0000000001136510
- (void)dealloc;	// IMP=0x0000000001135b38
- (id)initWithData:(id)arg1;	// IMP=0x0000000001135adc
- (id)init;	// IMP=0x0000000001135a80

@end


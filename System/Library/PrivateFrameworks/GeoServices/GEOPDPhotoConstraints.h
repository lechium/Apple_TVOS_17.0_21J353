//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOPDPhotoConstraints : PBCodable
{
    unsigned long long _maxPixels;	// 8 = 0x8
    NSMutableArray *_mediaTypes;	// 16 = 0x10
    unsigned long long _minPixels;	// 24 = 0x18
    float _maxAspectRatio;	// 32 = 0x20
    unsigned int _maxNumberOfPhotos;	// 36 = 0x24
    struct {
        unsigned int has_maxPixels:1;
        unsigned int has_minPixels:1;
        unsigned int has_maxAspectRatio:1;
        unsigned int has_maxNumberOfPhotos:1;
    } _flags;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000001414b03
- (unsigned long long)hash;	// IMP=0x0000000001414964
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000141483c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000001414609
- (void)writeTo:(id)arg1;	// IMP=0x000000000141443d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000001414430
- (id)jsonRepresentation;	// IMP=0x0000000001413ff8
- (id)dictionaryRepresentation;	// IMP=0x0000000001413db3
- (id)description;	// IMP=0x0000000001413d04

@end

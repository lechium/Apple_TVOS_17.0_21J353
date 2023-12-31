//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface GEOMapLayerDataServiceVersion : PBCodable
{
    unsigned int _dataVersion;	// 8 = 0x8
    unsigned int _formatVersion;	// 12 = 0xc
    unsigned int _patchVersion;	// 16 = 0x10
    struct {
        unsigned int has_dataVersion:1;
        unsigned int has_formatVersion:1;
        unsigned int has_patchVersion:1;
    } _flags;	// 20 = 0x14
}

- (unsigned long long)hash;	// IMP=0x0000000001196b2c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000001196a5a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000011969c4
- (void)writeTo:(id)arg1;	// IMP=0x0000000001196931
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000001196924
- (id)jsonRepresentation;	// IMP=0x0000000001196915
- (id)dictionaryRepresentation;	// IMP=0x0000000001196772
- (id)description;	// IMP=0x00000000011966c3

@end


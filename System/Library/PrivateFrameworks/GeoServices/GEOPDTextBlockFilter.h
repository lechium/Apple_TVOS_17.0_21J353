//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTextBlockFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000cff242
- (unsigned long long)hash;	// IMP=0x0000000000cff23a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000cff1f7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000cff19a
- (void)writeTo:(id)arg1;	// IMP=0x0000000000cff17d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000cff170
- (id)jsonRepresentation;	// IMP=0x0000000000cff060
- (id)dictionaryRepresentation;	// IMP=0x0000000000cfeef6
- (id)description;	// IMP=0x0000000000cfee47

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDCollectionIdsFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000b887cf
- (unsigned long long)hash;	// IMP=0x0000000000b887c7
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b88784
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b88727
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b8870a
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b886fd
- (id)jsonRepresentation;	// IMP=0x0000000000b88441
- (id)dictionaryRepresentation;	// IMP=0x0000000000b882d7
- (id)description;	// IMP=0x0000000000b88228

@end


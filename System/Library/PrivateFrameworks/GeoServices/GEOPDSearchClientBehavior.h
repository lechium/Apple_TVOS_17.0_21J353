//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSearchClientBehavior : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    _Bool _shouldEnableRedoSearch;	// 16 = 0x10
    struct {
        unsigned int has_shouldEnableRedoSearch:1;
    } _flags;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x00000000006258c2
- (unsigned long long)hash;	// IMP=0x0000000000625897
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000006257f5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000625775
- (void)writeTo:(id)arg1;	// IMP=0x0000000000625710
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000625703
- (id)jsonRepresentation;	// IMP=0x000000000062552d
- (id)dictionaryRepresentation;	// IMP=0x0000000000625358
- (id)description;	// IMP=0x00000000006252a9

@end


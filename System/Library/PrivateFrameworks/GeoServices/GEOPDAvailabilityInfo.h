//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDAvailabilityInfo : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    unsigned int _availableNum;	// 16 = 0x10
    int _status;	// 20 = 0x14
    unsigned int _totalNum;	// 24 = 0x18
    struct {
        unsigned int has_availableNum:1;
        unsigned int has_status:1;
        unsigned int has_totalNum:1;
    } _flags;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x0000000000b586e1
- (unsigned long long)hash;	// IMP=0x0000000000b5867c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b585aa
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b584f2
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b58444
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b58437
- (id)jsonRepresentation;	// IMP=0x0000000000b57af8
- (id)dictionaryRepresentation;	// IMP=0x0000000000b57840
- (id)description;	// IMP=0x0000000000b57791

@end

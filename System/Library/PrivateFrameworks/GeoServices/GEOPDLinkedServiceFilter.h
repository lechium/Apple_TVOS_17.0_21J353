//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDLinkedServiceFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000c6668f
- (unsigned long long)hash;	// IMP=0x0000000000c66687
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c66644
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c665e7
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c665ca
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c665bd
- (id)jsonRepresentation;	// IMP=0x0000000000c664ad
- (id)dictionaryRepresentation;	// IMP=0x0000000000c66343
- (id)description;	// IMP=0x0000000000c66294

@end


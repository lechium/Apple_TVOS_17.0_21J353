//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDGuideGroupFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000c5025f
- (unsigned long long)hash;	// IMP=0x0000000000c50257
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c50214
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c501b7
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c5019a
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c5018d
- (id)jsonRepresentation;	// IMP=0x0000000000c5007d
- (id)dictionaryRepresentation;	// IMP=0x0000000000c4ff13
- (id)description;	// IMP=0x0000000000c4fe64

@end


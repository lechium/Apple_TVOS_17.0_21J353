//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDViewportInfo, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDGuidesLocationsSuggestionParameters : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    GEOPDViewportInfo *_viewportInfo;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000555441
- (unsigned long long)hash;	// IMP=0x0000000000555424
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000555394
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000555309
- (void)writeTo:(id)arg1;	// IMP=0x00000000005552ae
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000055529f
- (id)jsonRepresentation;	// IMP=0x0000000000554f5c
- (id)dictionaryRepresentation;	// IMP=0x0000000000554d69
- (id)description;	// IMP=0x0000000000554cba

@end


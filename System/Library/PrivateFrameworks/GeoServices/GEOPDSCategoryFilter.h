//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSCategoryFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSData *_categoryMetadata;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000069383a
- (unsigned long long)hash;	// IMP=0x000000000069381d
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000069378d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000693702
- (void)writeTo:(id)arg1;	// IMP=0x00000000006936a7
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000069369a
- (id)jsonRepresentation;	// IMP=0x00000000006933a8
- (id)dictionaryRepresentation;	// IMP=0x00000000006931b7
- (id)description;	// IMP=0x0000000000693108

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPlacecardEnrichmentResult : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000603e80
- (unsigned long long)hash;	// IMP=0x0000000000603e78
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000603e35
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000603dd8
- (void)writeTo:(id)arg1;	// IMP=0x0000000000603dbb
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000603dae
- (id)jsonRepresentation;	// IMP=0x0000000000603c9e
- (id)dictionaryRepresentation;	// IMP=0x0000000000603b34
- (id)description;	// IMP=0x0000000000603a85

@end


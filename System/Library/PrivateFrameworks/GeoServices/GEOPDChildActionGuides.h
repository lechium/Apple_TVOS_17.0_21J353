//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDGuidesLocationEntry, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDChildActionGuides : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    GEOPDGuidesLocationEntry *_guidesLocationEntry;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000b84108
- (unsigned long long)hash;	// IMP=0x0000000000b83a44
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b839b4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b83929
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b8382b
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b8381c
- (id)jsonRepresentation;	// IMP=0x0000000000b82fdb
- (id)dictionaryRepresentation;	// IMP=0x0000000000b82de8
- (id)description;	// IMP=0x0000000000b82d39

@end


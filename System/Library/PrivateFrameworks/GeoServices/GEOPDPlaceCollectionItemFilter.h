//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPlaceCollectionItemFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_itemIds;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000cad3e8
- (unsigned long long)hash;	// IMP=0x0000000000cad3cb
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000cad33b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000cad17e
- (void)writeTo:(id)arg1;	// IMP=0x0000000000cad01f
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000cad010
- (id)jsonRepresentation;	// IMP=0x0000000000cacf00
- (id)dictionaryRepresentation;	// IMP=0x0000000000cacb64
- (id)description;	// IMP=0x0000000000cacab5

@end


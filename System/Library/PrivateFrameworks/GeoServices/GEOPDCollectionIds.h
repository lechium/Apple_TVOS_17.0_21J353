//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDCollectionIds : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_collectionIds;	// 16 = 0x10
}

+ (id)collectionIdComponentForPlaceData:(id)arg1;	// IMP=0x0010000000a3d6ac
- (void).cxx_destruct;	// IMP=0x0000000000b881f7
- (unsigned long long)hash;	// IMP=0x0000000000b881da
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b8814a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b87f8d
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b87e2e
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b87e1f
- (id)jsonRepresentation;	// IMP=0x0000000000b87ae0
- (id)dictionaryRepresentation;	// IMP=0x0000000000b87744
- (id)description;	// IMP=0x0000000000b87695

@end


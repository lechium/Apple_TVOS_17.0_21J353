//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDBusinessAssetsFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000b61659
- (unsigned long long)hash;	// IMP=0x0000000000b61651
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b6160e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b615b1
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b61594
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b613e8
- (id)jsonRepresentation;	// IMP=0x0000000000b612d8
- (id)dictionaryRepresentation;	// IMP=0x0000000000b6116e
- (id)description;	// IMP=0x0000000000b610bf

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDBrandLookupParameters : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSString *_imessageUid;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000052443a
- (unsigned long long)hash;	// IMP=0x000000000052441d
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000052438d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000524302
- (void)writeTo:(id)arg1;	// IMP=0x00000000005242a7
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000052429a
- (id)jsonRepresentation;	// IMP=0x0000000000523fa8
- (id)dictionaryRepresentation;	// IMP=0x0000000000523e09
- (id)description;	// IMP=0x0000000000523d5a

@end

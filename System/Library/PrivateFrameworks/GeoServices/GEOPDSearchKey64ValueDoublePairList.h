//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOPDSearchKey64ValueDoublePairList : PBCodable
{
    NSMutableArray *_pairs;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000003f4f25
- (unsigned long long)hash;	// IMP=0x00000000003f4f08
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003f4e78
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003f4cda
- (void)writeTo:(id)arg1;	// IMP=0x00000000003f4ba4
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000003f49d0
- (id)jsonRepresentation;	// IMP=0x00000000003f49c1
- (id)dictionaryRepresentation;	// IMP=0x00000000003f4753
- (id)description;	// IMP=0x00000000003f46a4

@end


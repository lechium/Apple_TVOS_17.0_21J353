//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOPDSearchKeyValue64PairList : PBCodable
{
    NSMutableArray *_pairs;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000003f9c92
- (unsigned long long)hash;	// IMP=0x00000000003f9c75
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003f9be5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003f9a47
- (void)writeTo:(id)arg1;	// IMP=0x00000000003f9911
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000003f973d
- (id)jsonRepresentation;	// IMP=0x00000000003f972e
- (id)dictionaryRepresentation;	// IMP=0x00000000003f94c0
- (id)description;	// IMP=0x00000000003f9411

@end


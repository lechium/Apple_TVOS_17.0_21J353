//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GEOPDSearchPreferredCategory : PBCodable
{
    NSString *_categoryId;	// 8 = 0x8
    float _score;	// 16 = 0x10
    CDStruct_f58e6c32 _flags;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x0000000000abe508
- (unsigned long long)hash;	// IMP=0x0000000000abe3d5
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000abe316
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000abe27a
- (void)writeTo:(id)arg1;	// IMP=0x0000000000abe212
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000abe205
- (id)jsonRepresentation;	// IMP=0x0000000000abdff4
- (id)dictionaryRepresentation;	// IMP=0x0000000000abdf07
- (id)description;	// IMP=0x0000000000abde58

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOPDSearchKeywordMapping : PBCodable
{
    NSMutableArray *_localizedNames;	// 8 = 0x8
    unsigned long long _muid;	// 16 = 0x10
    CDStruct_26a2534e _flags;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000abad0d
- (unsigned long long)hash;	// IMP=0x0000000000abacc3
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000abac07
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000abaa3e
- (void)writeTo:(id)arg1;	// IMP=0x0000000000aba8e3
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000aba8d4
- (id)jsonRepresentation;	// IMP=0x0000000000aba60e
- (id)dictionaryRepresentation;	// IMP=0x0000000000aba330
- (id)description;	// IMP=0x0000000000aba281

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDUnifiedActionModuleConfiguration : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_buttonItems;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000d2fa53
- (unsigned long long)hash;	// IMP=0x0000000000d2fa36
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000d2f9a6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000d2f7e9
- (void)writeTo:(id)arg1;	// IMP=0x0000000000d2f68a
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000d2f67b
- (id)jsonRepresentation;	// IMP=0x0000000000d2f56b
- (id)dictionaryRepresentation;	// IMP=0x0000000000d2f1cf
- (id)description;	// IMP=0x0000000000d2f120

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSearchSectionGuide : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_guideIds;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000e2a1a5
- (unsigned long long)hash;	// IMP=0x0000000000e2a188
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000e2a0f8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000e29f3b
- (void)writeTo:(id)arg1;	// IMP=0x0000000000e29ddc
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000e29dcd
- (id)jsonRepresentation;	// IMP=0x0000000000e29cbd
- (id)dictionaryRepresentation;	// IMP=0x0000000000e29921
- (id)description;	// IMP=0x0000000000e29872

@end


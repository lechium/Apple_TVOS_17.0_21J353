//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDDirectionIntent;

__attribute__((visibility("hidden")))
@interface GEOPDSearchDirectionIntent : PBCodable
{
    GEOPDDirectionIntent *_directionIntent;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000aa40b6
- (unsigned long long)hash;	// IMP=0x0000000000aa4099
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000aa4009
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000aa3f91
- (void)writeTo:(id)arg1;	// IMP=0x0000000000aa3f6d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000aa3f5e
- (id)jsonRepresentation;	// IMP=0x0000000000aa3d6c
- (id)dictionaryRepresentation;	// IMP=0x0000000000aa3c8a
- (id)description;	// IMP=0x0000000000aa3bdb

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDHeaderButtonsConfiguration : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    _Bool _shouldSuppressDirectionsAction;	// 16 = 0x10
    struct {
        unsigned int has_shouldSuppressDirectionsAction:1;
    } _flags;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x0000000000c55ca7
- (unsigned long long)hash;	// IMP=0x0000000000c55c7c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c55bda
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c55b5a
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c55af5
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c55ae8
- (id)jsonRepresentation;	// IMP=0x0000000000c55784
- (id)dictionaryRepresentation;	// IMP=0x0000000000c555af
- (id)description;	// IMP=0x0000000000c55500

@end


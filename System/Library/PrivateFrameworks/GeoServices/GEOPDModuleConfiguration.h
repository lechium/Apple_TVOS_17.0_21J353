//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDModuleConfigurationValue, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDModuleConfiguration : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    GEOPDModuleConfigurationValue *_moduleConfigurationValue;	// 16 = 0x10
    int _moduleConfigurationType;	// 24 = 0x18
    struct {
        unsigned int has_moduleConfigurationType:1;
    } _flags;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x0000000000c7c99f
- (unsigned long long)hash;	// IMP=0x0000000000c7c952
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c7c897
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c7c7ef
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c7c76e
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c7c75f
- (id)jsonRepresentation;	// IMP=0x0000000000c7c1c9
- (id)dictionaryRepresentation;	// IMP=0x0000000000c7bf4c
- (id)description;	// IMP=0x0000000000c7be9d

@end

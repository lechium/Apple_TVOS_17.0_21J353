//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOPBOfflineDataLayerKeys : PBCodable
{
    struct GEOPBOfflineDataLayerVersion _layerVersion;	// 8 = 0x8
    NSMutableArray *_keyValueReferences;	// 32 = 0x20
    CDStruct_4b81633f _flags;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000142b0dd
- (unsigned long long)hash;	// IMP=0x000000000142b08a
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000142afa9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000142add5
- (void)writeTo:(id)arg1;	// IMP=0x000000000142ac5e
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000142aa35
- (id)jsonRepresentation;	// IMP=0x000000000142aa26
- (id)dictionaryRepresentation;	// IMP=0x000000000142a747
- (id)description;	// IMP=0x000000000142a698

@end


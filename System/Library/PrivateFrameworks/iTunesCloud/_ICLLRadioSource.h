//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, _ICLLRadioSeed;

__attribute__((visibility("hidden")))
@interface _ICLLRadioSource : PBCodable
{
    NSString *_featureName;	// 8 = 0x8
    _ICLLRadioSeed *_seed;	// 16 = 0x10
    NSString *_stationId;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000d4162
- (unsigned long long)hash;	// IMP=0x00000000000d40f5
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000d4015
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d3f51
- (void)writeTo:(id)arg1;	// IMP=0x00000000000d3ed7
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000d3eca
- (id)dictionaryRepresentation;	// IMP=0x00000000000d3df3
- (id)description;	// IMP=0x00000000000d3d44

@end


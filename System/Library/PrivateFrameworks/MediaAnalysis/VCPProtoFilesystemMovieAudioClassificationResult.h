//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface VCPProtoFilesystemMovieAudioClassificationResult : PBCodable
{
    float _duration;	// 8 = 0x8
    float _start;	// 12 = 0xc
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x001000000009d552
@property(nonatomic) float duration; // @synthesize duration=_duration;
@property(nonatomic) float start; // @synthesize start=_start;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000db1d3
- (unsigned long long)hash;	// IMP=0x00000000000db015
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000daf7e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000daf16
- (void)copyTo:(id)arg1;	// IMP=0x00000000000daeee
- (void)writeTo:(id)arg1;	// IMP=0x00000000000dae87
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000dae7a
- (id)dictionaryRepresentation;	// IMP=0x00000000000dabdd
- (id)description;	// IMP=0x00000000000dab2e
- (id)exportToLegacyDictionary;	// IMP=0x000000000009d6b3

@end

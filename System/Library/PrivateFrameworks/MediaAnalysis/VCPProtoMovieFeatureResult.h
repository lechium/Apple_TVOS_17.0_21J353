//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, VCPProtoTime;

__attribute__((visibility("hidden")))
@interface VCPProtoMovieFeatureResult : PBCodable
{
    NSData *_featureBlob;	// 8 = 0x8
    VCPProtoTime *_timestamp;	// 16 = 0x10
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x00100000000d831a
- (void).cxx_destruct;	// IMP=0x000000000016412a
@property(retain, nonatomic) NSData *featureBlob; // @synthesize featureBlob=_featureBlob;
@property(retain, nonatomic) VCPProtoTime *timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000164067
- (unsigned long long)hash;	// IMP=0x000000000016401a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000163f62
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000163ec4
- (void)copyTo:(id)arg1;	// IMP=0x0000000000163e53
- (void)writeTo:(id)arg1;	// IMP=0x0000000000163df4
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000163de7
- (id)dictionaryRepresentation;	// IMP=0x0000000000163b70
- (id)description;	// IMP=0x0000000000163ac1
- (id)exportToLegacyDictionary;	// IMP=0x00000000000d84b7

@end

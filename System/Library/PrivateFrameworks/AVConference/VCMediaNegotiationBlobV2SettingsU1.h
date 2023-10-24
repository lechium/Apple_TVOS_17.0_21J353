//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface VCMediaNegotiationBlobV2SettingsU1 : PBCodable
{
    NSMutableArray *_encodeDecodeFeatures;	// 8 = 0x8
    unsigned int _rtpSSRC;	// 16 = 0x10
    struct {
        unsigned int rtpSSRC:1;
    } _has;	// 20 = 0x14
}

+ (Class)encodeDecodeFeaturesType;	// IMP=0x0010000000275fcb
@property(retain, nonatomic) NSMutableArray *encodeDecodeFeatures; // @synthesize encodeDecodeFeatures=_encodeDecodeFeatures;
@property(nonatomic) unsigned int rtpSSRC; // @synthesize rtpSSRC=_rtpSSRC;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000276960
- (unsigned long long)hash;	// IMP=0x0000000000276914
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000027688f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002766d1
- (void)copyTo:(id)arg1;	// IMP=0x0000000000276625
- (void)writeTo:(id)arg1;	// IMP=0x0000000000276506
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002764f9
- (id)dictionaryRepresentation;	// IMP=0x0000000000276076
- (id)description;	// IMP=0x0000000000275fdc
- (id)encodeDecodeFeaturesAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000275fae
- (unsigned long long)encodeDecodeFeaturesCount;	// IMP=0x0000000000275f91
- (void)addEncodeDecodeFeatures:(id)arg1;	// IMP=0x0000000000275f44
- (void)clearEncodeDecodeFeatures;	// IMP=0x0000000000275f27
@property(nonatomic) _Bool hasRtpSSRC;
- (void)dealloc;	// IMP=0x0000000000275e7f
- (_Bool)loadEncodeDecodeFeatures:(id)arg1;	// IMP=0x0000000000341ac5
- (id)u1Config;	// IMP=0x0000000000341a60
- (id)initWithU1Config:(id)arg1;	// IMP=0x0000000000341951

@end

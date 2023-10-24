//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface VCPProtoLivePhotoKeyFrameResult : PBCodable
{
    double _timestamp;	// 8 = 0x8
    float _contentScore;	// 16 = 0x10
    float _exposureScore;	// 20 = 0x14
    float _expressionChangeScore;	// 24 = 0x18
    NSMutableArray *_faceResults;	// 32 = 0x20
    float _globalQualityScore;	// 40 = 0x28
    float _overallFaceQualityScore;	// 44 = 0x2c
    float _penaltyScore;	// 48 = 0x30
    float _qualityScoreForLivePhoto;	// 52 = 0x34
    float _sharpness;	// 56 = 0x38
    float _textureScore;	// 60 = 0x3c
    float _visualPleasingScore;	// 64 = 0x40
    struct {
        unsigned int contentScore:1;
        unsigned int globalQualityScore:1;
    } _has;	// 68 = 0x44
}

+ (Class)faceResultsType;	// IMP=0x00100000000268b9
+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x0010000000021125
- (void).cxx_destruct;	// IMP=0x0000000000028b16
@property(nonatomic) float expressionChangeScore; // @synthesize expressionChangeScore=_expressionChangeScore;
@property(nonatomic) float contentScore; // @synthesize contentScore=_contentScore;
@property(nonatomic) float globalQualityScore; // @synthesize globalQualityScore=_globalQualityScore;
@property(retain, nonatomic) NSMutableArray *faceResults; // @synthesize faceResults=_faceResults;
@property(nonatomic) float sharpness; // @synthesize sharpness=_sharpness;
@property(nonatomic) float textureScore; // @synthesize textureScore=_textureScore;
@property(nonatomic) float penaltyScore; // @synthesize penaltyScore=_penaltyScore;
@property(nonatomic) float exposureScore; // @synthesize exposureScore=_exposureScore;
@property(nonatomic) float overallFaceQualityScore; // @synthesize overallFaceQualityScore=_overallFaceQualityScore;
@property(nonatomic) float visualPleasingScore; // @synthesize visualPleasingScore=_visualPleasingScore;
@property(nonatomic) float qualityScoreForLivePhoto; // @synthesize qualityScoreForLivePhoto=_qualityScoreForLivePhoto;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000002874b
- (unsigned long long)hash;	// IMP=0x0000000000027d91
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000027ba4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000278f8
- (void)copyTo:(id)arg1;	// IMP=0x0000000000027759
- (void)writeTo:(id)arg1;	// IMP=0x00000000000274e1
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000274d4
- (id)dictionaryRepresentation;	// IMP=0x0000000000026a0b
- (id)description;	// IMP=0x000000000002695c
@property(nonatomic) _Bool hasContentScore;
@property(nonatomic) _Bool hasGlobalQualityScore;
- (id)faceResultsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000002689c
- (unsigned long long)faceResultsCount;	// IMP=0x000000000002687f
- (void)addFaceResults:(id)arg1;	// IMP=0x0000000000026815
- (void)clearFaceResults;	// IMP=0x00000000000267f8
- (id)exportToLegacyDictionary;	// IMP=0x000000000002189a

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface HMDCameraClipSegmentMetadata : PBCodable
{
    unsigned long long _byteLength;	// 8 = 0x8
    unsigned long long _byteOffset;	// 16 = 0x10
    double _duration;	// 24 = 0x18
    double _timeOffset;	// 32 = 0x20
    unsigned int _height;	// 40 = 0x28
    int _type;	// 44 = 0x2c
    unsigned int _width;	// 48 = 0x30
    struct {
        unsigned int byteLength:1;
        unsigned int byteOffset:1;
        unsigned int duration:1;
        unsigned int timeOffset:1;
        unsigned int height:1;
        unsigned int type:1;
        unsigned int width:1;
    } _has;	// 52 = 0x34
}

@property(nonatomic) unsigned int height; // @synthesize height=_height;
@property(nonatomic) unsigned int width; // @synthesize width=_width;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double timeOffset; // @synthesize timeOffset=_timeOffset;
@property(nonatomic) unsigned long long byteLength; // @synthesize byteLength=_byteLength;
@property(nonatomic) unsigned long long byteOffset; // @synthesize byteOffset=_byteOffset;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000008bdec6
- (unsigned long long)hash;	// IMP=0x00000000008bdc29
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000008bdaa4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000008bd99e
- (void)copyTo:(id)arg1;	// IMP=0x00000000008bd8bb
- (void)writeTo:(id)arg1;	// IMP=0x00000000008bd7a4
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000008bd2ec
- (id)dictionaryRepresentation;	// IMP=0x00000000008bd026
- (id)description;	// IMP=0x00000000008bcf77
@property(nonatomic) _Bool hasHeight;
@property(nonatomic) _Bool hasWidth;
- (int)StringAsType:(id)arg1;	// IMP=0x00000000008bce4a
- (id)typeAsString:(int)arg1;	// IMP=0x00000000008bce02
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) _Bool hasDuration;
@property(nonatomic) _Bool hasTimeOffset;
@property(nonatomic) _Bool hasByteLength;
@property(nonatomic) _Bool hasByteOffset;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface AWDHomeKitHomeSharing : PBCodable
{
    unsigned long long _timestamp;	// 8 = 0x8
    int _errorCode;	// 16 = 0x10
    int _responseType;	// 20 = 0x14
    int _stage;	// 24 = 0x18
    struct {
        unsigned int timestamp:1;
        unsigned int errorCode:1;
        unsigned int responseType:1;
        unsigned int stage:1;
    } _has;	// 28 = 0x1c
}

@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000052bd94
- (unsigned long long)hash;	// IMP=0x000000000052bd10
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000052bc1a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000052bb69
- (void)copyTo:(id)arg1;	// IMP=0x000000000052badb
- (void)writeTo:(id)arg1;	// IMP=0x000000000052ba28
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000052b6bc
- (id)dictionaryRepresentation;	// IMP=0x000000000052b4dd
- (id)description;	// IMP=0x000000000052b42e
- (int)StringAsStage:(id)arg1;	// IMP=0x000000000052b336
- (id)stageAsString:(int)arg1;	// IMP=0x000000000052b2eb
@property(nonatomic) _Bool hasStage;
@property(nonatomic) int stage; // @synthesize stage=_stage;
- (int)StringAsResponseType:(id)arg1;	// IMP=0x000000000052b1ca
- (id)responseTypeAsString:(int)arg1;	// IMP=0x000000000052b182
@property(nonatomic) _Bool hasResponseType;
@property(nonatomic) int responseType; // @synthesize responseType=_responseType;
@property(nonatomic) _Bool hasErrorCode;
@property(nonatomic) _Bool hasTimestamp;

@end


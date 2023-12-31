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
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000005dffc8
- (unsigned long long)hash;	// IMP=0x00000000005dff44
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005dfe4e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000005dfd9d
- (void)copyTo:(id)arg1;	// IMP=0x00000000005dfd0f
- (void)writeTo:(id)arg1;	// IMP=0x00000000005dfc5c
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000005df8f1
- (id)dictionaryRepresentation;	// IMP=0x00000000005df712
- (id)description;	// IMP=0x00000000005df663
- (int)StringAsStage:(id)arg1;	// IMP=0x00000000005df56b
- (id)stageAsString:(int)arg1;	// IMP=0x00000000005df520
@property(nonatomic) _Bool hasStage;
@property(nonatomic) int stage; // @synthesize stage=_stage;
- (int)StringAsResponseType:(id)arg1;	// IMP=0x00000000005df3ff
- (id)responseTypeAsString:(int)arg1;	// IMP=0x00000000005df3b7
@property(nonatomic) _Bool hasResponseType;
@property(nonatomic) int responseType; // @synthesize responseType=_responseType;
@property(nonatomic) _Bool hasErrorCode;
@property(nonatomic) _Bool hasTimestamp;

@end


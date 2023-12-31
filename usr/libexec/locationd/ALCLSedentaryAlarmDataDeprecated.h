//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface ALCLSedentaryAlarmDataDeprecated : PBCodable
{
    double _firedTime;	// 8 = 0x8
    double _timestamp;	// 16 = 0x10
    int _type;	// 24 = 0x18
    _Bool _didWake;	// 28 = 0x1c
    _Bool _regularEntry;	// 29 = 0x1d
    CDStruct_b5306035 _has;	// 32 = 0x20
}

@property(nonatomic) _Bool regularEntry; // @synthesize regularEntry=_regularEntry;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) _Bool didWake; // @synthesize didWake=_didWake;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) double firedTime; // @synthesize firedTime=_firedTime;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000936e09
- (unsigned long long)hash;	// IMP=0x0010000000936be4
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000936b1f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000936a81
- (void)copyTo:(id)arg1;	// IMP=0x0010000000936a21
- (void)writeTo:(id)arg1;	// IMP=0x0010000000936985
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000936978
- (id)dictionaryRepresentation;	// IMP=0x00100000009364a3
- (id)description;	// IMP=0x001000000093642c
@property(nonatomic) _Bool hasTimestamp;
- (int)StringAsType:(id)arg1;	// IMP=0x00100000009362d5
- (id)typeAsString:(int)arg1;	// IMP=0x001000000093629c

@end


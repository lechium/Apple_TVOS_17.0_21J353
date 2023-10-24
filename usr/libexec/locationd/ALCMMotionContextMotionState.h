//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface ALCMMotionContextMotionState : PBCodable
{
    unsigned long long _startTime;	// 8 = 0x8
    int _confidence;	// 16 = 0x10
    int _exitState;	// 20 = 0x14
    int _mounted;	// 24 = 0x18
    int _mountedConfidence;	// 28 = 0x1c
    int _turn;	// 32 = 0x20
    int _type;	// 36 = 0x24
    _Bool _isMoving;	// 40 = 0x28
    _Bool _isVehicular;	// 41 = 0x29
    struct {
        unsigned int startTime:1;
        unsigned int exitState:1;
        unsigned int mounted:1;
        unsigned int mountedConfidence:1;
        unsigned int turn:1;
        unsigned int isMoving:1;
        unsigned int isVehicular:1;
    } _has;	// 44 = 0x2c
}

@property(nonatomic) unsigned long long startTime; // @synthesize startTime=_startTime;
@property(nonatomic) _Bool isMoving; // @synthesize isMoving=_isMoving;
@property(nonatomic) _Bool isVehicular; // @synthesize isVehicular=_isVehicular;
@property(nonatomic) int confidence; // @synthesize confidence=_confidence;
@property(nonatomic) int type; // @synthesize type=_type;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000019d8df
- (unsigned long long)hash;	// IMP=0x001000000019d7d9
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000019d648
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000019d52e
- (void)copyTo:(id)arg1;	// IMP=0x001000000019d452
- (void)writeTo:(id)arg1;	// IMP=0x001000000019d315
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000019d308
- (id)dictionaryRepresentation;	// IMP=0x001000000019c6df
- (id)description;	// IMP=0x001000000019c668
@property(nonatomic) _Bool hasStartTime;
- (int)StringAsExitState:(id)arg1;	// IMP=0x001000000019c5bb
- (id)exitStateAsString:(int)arg1;	// IMP=0x001000000019c582
@property(nonatomic) _Bool hasExitState;
@property(nonatomic) int exitState; // @synthesize exitState=_exitState;
@property(nonatomic) _Bool hasIsMoving;
@property(nonatomic) _Bool hasIsVehicular;
- (int)StringAsTurn:(id)arg1;	// IMP=0x001000000019c41d
- (id)turnAsString:(int)arg1;	// IMP=0x001000000019c3e4
@property(nonatomic) _Bool hasTurn;
@property(nonatomic) int turn; // @synthesize turn=_turn;
- (int)StringAsMountedConfidence:(id)arg1;	// IMP=0x001000000019c313
- (id)mountedConfidenceAsString:(int)arg1;	// IMP=0x001000000019c2da
@property(nonatomic) _Bool hasMountedConfidence;
@property(nonatomic) int mountedConfidence; // @synthesize mountedConfidence=_mountedConfidence;
- (int)StringAsMounted:(id)arg1;	// IMP=0x001000000019c229
- (id)mountedAsString:(int)arg1;	// IMP=0x001000000019c1ea
@property(nonatomic) _Bool hasMounted;
@property(nonatomic) int mounted; // @synthesize mounted=_mounted;
- (int)StringAsConfidence:(id)arg1;	// IMP=0x001000000019c119
- (id)confidenceAsString:(int)arg1;	// IMP=0x001000000019c0e0
- (int)StringAsType:(id)arg1;	// IMP=0x001000000019bce4
- (id)typeAsString:(int)arg1;	// IMP=0x001000000019b9b4

@end


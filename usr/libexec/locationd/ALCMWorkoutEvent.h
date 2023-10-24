//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface ALCMWorkoutEvent : PBCodable
{
    double _endTime;	// 8 = 0x8
    double _startTime;	// 16 = 0x10
    int _locationType;	// 24 = 0x18
    NSData *_sessionId;	// 32 = 0x20
    int _workoutEvent;	// 40 = 0x28
    int _workoutType;	// 44 = 0x2c
    struct {
        unsigned int endTime:1;
        unsigned int locationType:1;
        unsigned int workoutType:1;
    } _has;	// 48 = 0x30
}

@property(retain, nonatomic) NSData *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) int workoutEvent; // @synthesize workoutEvent=_workoutEvent;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000d66eed
- (unsigned long long)hash;	// IMP=0x0010000000d66c95
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000d66b91
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000d66a9b
- (void)copyTo:(id)arg1;	// IMP=0x0010000000d669fd
- (void)writeTo:(id)arg1;	// IMP=0x0010000000d66921
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000d66914
- (id)dictionaryRepresentation;	// IMP=0x0010000000d65fc2
- (id)description;	// IMP=0x0010000000d65f4b
@property(readonly, nonatomic) _Bool hasSessionId;
- (int)StringAsLocationType:(id)arg1;	// IMP=0x0010000000d65ecf
- (id)locationTypeAsString:(int)arg1;	// IMP=0x0010000000d65e96
- (_Bool)hasLocationType;	// IMP=0x0010000000d65e82
- (void)setHasLocationType:(_Bool)arg1;	// IMP=0x0010000000d65e68
@property(nonatomic) int locationType; // @synthesize locationType=_locationType;
- (int)StringAsWorkoutType:(id)arg1;	// IMP=0x0010000000d65900
- (id)workoutTypeAsString:(int)arg1;	// IMP=0x0010000000d65538
@property(nonatomic) _Bool hasWorkoutType;
@property(nonatomic) int workoutType; // @synthesize workoutType=_workoutType;
@property(nonatomic) _Bool hasEndTime;
- (int)StringAsWorkoutEvent:(id)arg1;	// IMP=0x0010000000d653c1
- (id)workoutEventAsString:(int)arg1;	// IMP=0x0010000000d65388
- (void)dealloc;	// IMP=0x0010000000d65348

@end

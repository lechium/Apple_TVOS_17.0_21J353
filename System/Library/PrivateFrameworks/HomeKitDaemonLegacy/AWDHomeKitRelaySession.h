//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface AWDHomeKitRelaySession : PBCodable
{
    unsigned long long _timestamp;	// 8 = 0x8
    int _actionType;	// 16 = 0x10
    unsigned int _duration;	// 20 = 0x14
    int _errorCode;	// 24 = 0x18
    int _statusCode;	// 28 = 0x1c
    struct {
        unsigned int timestamp:1;
        unsigned int actionType:1;
        unsigned int duration:1;
        unsigned int errorCode:1;
        unsigned int statusCode:1;
    } _has;	// 32 = 0x20
}

@property(nonatomic) int statusCode; // @synthesize statusCode=_statusCode;
@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) unsigned int duration; // @synthesize duration=_duration;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000942374
- (unsigned long long)hash;	// IMP=0x00000000009422d4
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000009421b8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000009420ee
- (void)copyTo:(id)arg1;	// IMP=0x0000000000942047
- (void)writeTo:(id)arg1;	// IMP=0x0000000000941f74
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000941b75
- (id)dictionaryRepresentation;	// IMP=0x000000000094195b
- (id)description;	// IMP=0x00000000009418ac
- (int)StringAsActionType:(id)arg1;	// IMP=0x00000000009417f2
- (id)actionTypeAsString:(int)arg1;	// IMP=0x00000000009417a7
@property(nonatomic) _Bool hasActionType;
@property(nonatomic) int actionType; // @synthesize actionType=_actionType;
@property(nonatomic) _Bool hasStatusCode;
@property(nonatomic) _Bool hasErrorCode;
@property(nonatomic) _Bool hasDuration;
@property(nonatomic) _Bool hasTimestamp;

@end


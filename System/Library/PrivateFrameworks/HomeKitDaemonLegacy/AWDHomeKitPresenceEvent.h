//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface AWDHomeKitPresenceEvent : PBCodable
{
    int _presenceEventGranularity;	// 8 = 0x8
    int _presenceEventType;	// 12 = 0xc
    struct {
        unsigned int presenceEventGranularity:1;
        unsigned int presenceEventType:1;
    } _has;	// 16 = 0x10
}

- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002004b2
- (unsigned long long)hash;	// IMP=0x000000000020046c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002003b9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000020033c
- (void)copyTo:(id)arg1;	// IMP=0x00000000002002e2
- (void)writeTo:(id)arg1;	// IMP=0x000000000020026f
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000200262
- (id)dictionaryRepresentation;	// IMP=0x000000000020012f
- (id)description;	// IMP=0x0000000000200080
- (int)StringAsPresenceEventGranularity:(id)arg1;	// IMP=0x0000000000200015
- (id)presenceEventGranularityAsString:(int)arg1;	// IMP=0x00000000001fffbf
@property(nonatomic) _Bool hasPresenceEventGranularity;
@property(nonatomic) int presenceEventGranularity; // @synthesize presenceEventGranularity=_presenceEventGranularity;
- (int)StringAsPresenceEventType:(id)arg1;	// IMP=0x00000000001ffe9e
- (id)presenceEventTypeAsString:(int)arg1;	// IMP=0x00000000001ffe53
@property(nonatomic) _Bool hasPresenceEventType;
@property(nonatomic) int presenceEventType; // @synthesize presenceEventType=_presenceEventType;

@end


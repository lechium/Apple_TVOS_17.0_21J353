//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface HMDRemoteEventRouterProtoEventsMessage : PBCodable
{
    NSMutableArray *_cachedEvents;	// 8 = 0x8
    NSMutableArray *_events;	// 16 = 0x10
}

+ (Class)cachedEventsType;	// IMP=0x00100000009a4784
+ (Class)eventsType;	// IMP=0x00100000009a4773
- (void).cxx_destruct;	// IMP=0x00000000009a4580
@property(retain, nonatomic) NSMutableArray *cachedEvents; // @synthesize cachedEvents=_cachedEvents;
@property(retain, nonatomic) NSMutableArray *events; // @synthesize events=_events;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000009a42ec
- (unsigned long long)hash;	// IMP=0x00000000009a429f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000009a41e7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000009a3ee7
- (void)copyTo:(id)arg1;	// IMP=0x00000000009a3d91
- (void)writeTo:(id)arg1;	// IMP=0x00000000009a3b7a
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000009a3b6d
- (id)dictionaryRepresentation;	// IMP=0x00000000009a377f
- (id)description;	// IMP=0x00000000009a36d0
- (id)cachedEventsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000009a36b3
- (unsigned long long)cachedEventsCount;	// IMP=0x00000000009a3696
- (void)addCachedEvents:(id)arg1;	// IMP=0x00000000009a362c
- (void)clearCachedEvents;	// IMP=0x00000000009a360f
- (id)eventsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000009a35f2
- (unsigned long long)eventsCount;	// IMP=0x00000000009a35d5
- (void)addEvents:(id)arg1;	// IMP=0x00000000009a356b
- (void)clearEvents;	// IMP=0x00000000009a354e

@end


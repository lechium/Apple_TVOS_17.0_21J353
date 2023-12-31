//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface HMDRemoteEventRouterProtoChangeRegistrationsMessage : PBCodable
{
    NSMutableArray *_topicAdditions;	// 8 = 0x8
    NSMutableArray *_topicFilterAdditions;	// 16 = 0x10
    NSMutableArray *_topicFilterRemovals;	// 24 = 0x18
    NSMutableArray *_topicRemovals;	// 32 = 0x20
}

+ (Class)topicRemovalsType;	// IMP=0x00100000002a95ab
+ (Class)topicAdditionsType;	// IMP=0x00100000002a959a
+ (Class)topicFilterRemovalsType;	// IMP=0x00100000002a9589
+ (Class)topicFilterAdditionsType;	// IMP=0x00100000002a9578
- (void).cxx_destruct;	// IMP=0x00000000002a92d1
@property(retain, nonatomic) NSMutableArray *topicRemovals; // @synthesize topicRemovals=_topicRemovals;
@property(retain, nonatomic) NSMutableArray *topicAdditions; // @synthesize topicAdditions=_topicAdditions;
@property(retain, nonatomic) NSMutableArray *topicFilterRemovals; // @synthesize topicFilterRemovals=_topicFilterRemovals;
@property(retain, nonatomic) NSMutableArray *topicFilterAdditions; // @synthesize topicFilterAdditions=_topicFilterAdditions;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002a8e0b
- (unsigned long long)hash;	// IMP=0x00000000002a8d87
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002a8c7b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002a8709
- (void)copyTo:(id)arg1;	// IMP=0x00000000002a849b
- (void)writeTo:(id)arg1;	// IMP=0x00000000002a80d0
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002a80c3
- (id)dictionaryRepresentation;	// IMP=0x00000000002a7c86
- (id)description;	// IMP=0x00000000002a7bd7
- (id)topicRemovalsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000002a7bba
- (unsigned long long)topicRemovalsCount;	// IMP=0x00000000002a7b9d
- (void)addTopicRemovals:(id)arg1;	// IMP=0x00000000002a7b33
- (void)clearTopicRemovals;	// IMP=0x00000000002a7b16
- (id)topicAdditionsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000002a7af9
- (unsigned long long)topicAdditionsCount;	// IMP=0x00000000002a7adc
- (void)addTopicAdditions:(id)arg1;	// IMP=0x00000000002a7a72
- (void)clearTopicAdditions;	// IMP=0x00000000002a7a55
- (id)topicFilterRemovalsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000002a7a38
- (unsigned long long)topicFilterRemovalsCount;	// IMP=0x00000000002a7a1b
- (void)addTopicFilterRemovals:(id)arg1;	// IMP=0x00000000002a79b1
- (void)clearTopicFilterRemovals;	// IMP=0x00000000002a7994
- (id)topicFilterAdditionsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000002a7977
- (unsigned long long)topicFilterAdditionsCount;	// IMP=0x00000000002a795a
- (void)addTopicFilterAdditions:(id)arg1;	// IMP=0x00000000002a78f0
- (void)clearTopicFilterAdditions;	// IMP=0x00000000002a78d3

@end


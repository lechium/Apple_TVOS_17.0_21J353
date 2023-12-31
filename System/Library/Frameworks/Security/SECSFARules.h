//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface SECSFARules : PBCodable
{
    NSMutableArray *_rules;	// 8 = 0x8
}

+ (Class)rulesType;	// IMP=0x001000000001b611
- (void).cxx_destruct;	// IMP=0x000000000001b5fe
@property(retain, nonatomic) NSMutableArray *rules; // @synthesize rules=_rules;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000001b4a0
- (unsigned long long)hash;	// IMP=0x000000000001b483
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001b3f3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001b22f
- (void)copyTo:(id)arg1;	// IMP=0x000000000001b16a
- (void)writeTo:(id)arg1;	// IMP=0x000000000001b034
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000001ae7d
- (id)dictionaryRepresentation;	// IMP=0x000000000001ac4d
- (id)description;	// IMP=0x000000000001ab9e
- (id)rulesAtIndex:(unsigned long long)arg1;	// IMP=0x000000000001ab81
- (unsigned long long)rulesCount;	// IMP=0x000000000001ab64
- (void)addRules:(id)arg1;	// IMP=0x000000000001aafa
- (void)clearRules;	// IMP=0x000000000001aadd

@end


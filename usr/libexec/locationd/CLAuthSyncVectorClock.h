//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface CLAuthSyncVectorClock : PBCodable
{
    NSString *_key;	// 8 = 0x8
    unsigned int _value;	// 16 = 0x10
    struct {
        unsigned int value:1;
    } _has;	// 20 = 0x14
}

@property(nonatomic) unsigned int value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000526bd8
- (unsigned long long)hash;	// IMP=0x0010000000526b86
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000526b00
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000526a68
- (void)copyTo:(id)arg1;	// IMP=0x0010000000526a16
- (void)writeTo:(id)arg1;	// IMP=0x00100000005269bd
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000005269b0
- (id)dictionaryRepresentation;	// IMP=0x0010000000526729
- (id)description;	// IMP=0x00100000005266b2
@property(nonatomic) _Bool hasValue;
@property(readonly, nonatomic) _Bool hasKey;
- (void)dealloc;	// IMP=0x0010000000526618

@end


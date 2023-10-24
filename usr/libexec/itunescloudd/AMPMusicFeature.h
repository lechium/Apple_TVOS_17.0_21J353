//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface AMPMusicFeature : PBCodable
{
    struct {
        float *list;
        unsigned long long count;
        unsigned long long size;
    } _values;	// 8 = 0x8
    NSString *_key;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000076efe
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000076e35
- (unsigned long long)hash;	// IMP=0x0010000000076df9
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000076d50
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000076cc2
- (void)copyTo:(id)arg1;	// IMP=0x0010000000076c01
- (void)writeTo:(id)arg1;	// IMP=0x0010000000076b86
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000076b79
- (id)dictionaryRepresentation;	// IMP=0x0010000000076ad8
- (id)description;	// IMP=0x0010000000076a29
- (void)setValues:(float *)arg1 count:(unsigned long long)arg2;	// IMP=0x0010000000076a12
- (float)valueAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000076940
- (void)addValue:(float)arg1;	// IMP=0x001000000007692f
- (void)clearValues;	// IMP=0x001000000007691e
@property(readonly, nonatomic) float *values;
@property(readonly, nonatomic) unsigned long long valuesCount;
@property(readonly, nonatomic) _Bool hasKey;
- (void)dealloc;	// IMP=0x00100000000768a6

@end

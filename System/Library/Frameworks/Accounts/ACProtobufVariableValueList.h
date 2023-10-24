//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSArray, NSMutableArray, NSSet;

__attribute__((visibility("hidden")))
@interface ACProtobufVariableValueList : PBCodable
{
    NSMutableArray *_values;	// 8 = 0x8
}

+ (Class)valueType;	// IMP=0x0010000000049518
- (void).cxx_destruct;	// IMP=0x0000000000049f8b
@property(retain, nonatomic) NSMutableArray *values; // @synthesize values=_values;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000049e2d
- (unsigned long long)hash;	// IMP=0x0000000000049e10
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000049d80
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000049bbc
- (void)copyTo:(id)arg1;	// IMP=0x0000000000049af7
- (void)writeTo:(id)arg1;	// IMP=0x00000000000499c1
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000499b4
- (id)dictionaryRepresentation;	// IMP=0x00000000000495d8
- (id)description;	// IMP=0x0000000000049529
- (id)valueAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000494fb
- (unsigned long long)valuesCount;	// IMP=0x00000000000494de
- (void)addValue:(id)arg1;	// IMP=0x0000000000049474
- (void)clearValues;	// IMP=0x0000000000049457
@property(copy, nonatomic) NSSet *set;
@property(copy, nonatomic) NSArray *array;
- (id)_convertArray:(id)arg1;	// IMP=0x0000000000053ed8
- (id)initWithSet:(id)arg1;	// IMP=0x0000000000053e82
- (id)initWithArray:(id)arg1;	// IMP=0x0000000000053dc9

@end

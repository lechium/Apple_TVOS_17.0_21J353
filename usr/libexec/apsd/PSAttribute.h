//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface PSAttribute : PBCodable
{
    NSString *_key;	// 8 = 0x8
    NSString *_value;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000c02f5
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000c0248
- (unsigned long long)hash;	// IMP=0x00100000000c01fb
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000c0143
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000c00a5
- (void)copyTo:(id)arg1;	// IMP=0x00100000000c0042
- (void)writeTo:(id)arg1;	// IMP=0x00100000000bffe5
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000bffd8
- (id)dictionaryRepresentation;	// IMP=0x00100000000bfdeb
- (id)description;	// IMP=0x00100000000bfd3c
// Error: Property attributes should begin with the type ('T') attribute, property name: hasValue
// Property attributes: (null)

@property(readonly, nonatomic) _Bool hasKey;

@end


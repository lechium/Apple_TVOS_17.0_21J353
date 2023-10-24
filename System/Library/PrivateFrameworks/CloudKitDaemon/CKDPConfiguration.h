//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface CKDPConfiguration : PBCodable
{
    unsigned long long _created;	// 8 = 0x8
    unsigned long long _expires;	// 16 = 0x10
    NSMutableArray *_fields;	// 24 = 0x18
    struct {
        unsigned int created:1;
        unsigned int expires:1;
    } _has;	// 32 = 0x20
}

+ (Class)fieldsType;	// IMP=0x0010000000211e30
- (void).cxx_destruct;	// IMP=0x0000000000212d02
@property(nonatomic) unsigned long long expires; // @synthesize expires=_expires;
@property(nonatomic) unsigned long long created; // @synthesize created=_created;
@property(retain, nonatomic) NSMutableArray *fields; // @synthesize fields=_fields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000212b27
- (unsigned long long)hash;	// IMP=0x0000000000212ab9
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002129dc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002127c7
- (void)copyTo:(id)arg1;	// IMP=0x00000000002126c7
- (void)writeTo:(id)arg1;	// IMP=0x000000000021253d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000212276
- (id)dictionaryRepresentation;	// IMP=0x0000000000211f80
- (id)description;	// IMP=0x0000000000211ed1
@property(nonatomic) _Bool hasExpires;
@property(nonatomic) _Bool hasCreated;
- (id)fieldsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000211e13
- (unsigned long long)fieldsCount;	// IMP=0x0000000000211df6
- (void)addFields:(id)arg1;	// IMP=0x0000000000211d8c
- (void)clearFields;	// IMP=0x0000000000211d6f

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface CKDPRecordRetrieveVersionsResponse : PBCodable
{
    NSMutableArray *_recordVersions;	// 8 = 0x8
    _Bool _isDeleted;	// 16 = 0x10
    struct {
        unsigned int isDeleted:1;
    } _has;	// 20 = 0x14
}

+ (Class)recordVersionsType;	// IMP=0x001000000016cd4b
- (void).cxx_destruct;	// IMP=0x000000000016d9c8
@property(retain, nonatomic) NSMutableArray *recordVersions; // @synthesize recordVersions=_recordVersions;
@property(nonatomic) _Bool isDeleted; // @synthesize isDeleted=_isDeleted;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000016d822
- (unsigned long long)hash;	// IMP=0x000000000016d7d5
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000016d70f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000016d521
- (void)copyTo:(id)arg1;	// IMP=0x000000000016d43e
- (void)writeTo:(id)arg1;	// IMP=0x000000000016d2e2
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000016d2d5
- (id)dictionaryRepresentation;	// IMP=0x000000000016ce0b
- (id)description;	// IMP=0x000000000016cd5c
- (id)recordVersionsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000016cd2e
- (unsigned long long)recordVersionsCount;	// IMP=0x000000000016cd11
- (void)addRecordVersions:(id)arg1;	// IMP=0x000000000016cca7
- (void)clearRecordVersions;	// IMP=0x000000000016cc8a
@property(nonatomic) _Bool hasIsDeleted;

@end


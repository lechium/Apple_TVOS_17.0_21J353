//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPRecord, CKDPShareMetadata, CKDPZone, NSMutableArray, NSString;

@interface CKDPRecordResolveTokenResponse : PBCodable
{
    NSString *_container;	// 8 = 0x8
    int _containerEnvironment;	// 16 = 0x10
    CKDPZone *_recordZone;	// 24 = 0x18
    NSMutableArray *_records;	// 32 = 0x20
    CKDPShareMetadata *_shareMetadata;	// 40 = 0x28
    CKDPRecord *_shareRecord;	// 48 = 0x30
    struct {
        unsigned int containerEnvironment:1;
    } _has;	// 56 = 0x38
}

+ (Class)recordType;	// IMP=0x0010000000032e4e
- (void).cxx_destruct;	// IMP=0x000000000003417f
@property(retain, nonatomic) CKDPZone *recordZone; // @synthesize recordZone=_recordZone;
@property(retain, nonatomic) CKDPShareMetadata *shareMetadata; // @synthesize shareMetadata=_shareMetadata;
@property(retain, nonatomic) CKDPRecord *shareRecord; // @synthesize shareRecord=_shareRecord;
@property(retain, nonatomic) NSMutableArray *records; // @synthesize records=_records;
@property(retain, nonatomic) NSString *container; // @synthesize container=_container;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000033e8a
- (unsigned long long)hash;	// IMP=0x0000000000033dc0
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000033c52
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000339bc
- (void)copyTo:(id)arg1;	// IMP=0x0000000000033851
- (void)writeTo:(id)arg1;	// IMP=0x0000000000033675
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000033668
- (id)dictionaryRepresentation;	// IMP=0x0000000000032f4d
- (id)description;	// IMP=0x0000000000032e9e
@property(readonly, nonatomic) _Bool hasRecordZone;
@property(readonly, nonatomic) _Bool hasShareMetadata;
@property(readonly, nonatomic) _Bool hasShareRecord;
- (id)recordAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000032e31
- (unsigned long long)recordsCount;	// IMP=0x0000000000032e14
- (void)addRecord:(id)arg1;	// IMP=0x0000000000032daa
- (void)clearRecords;	// IMP=0x0000000000032d8d
- (int)StringAsContainerEnvironment:(id)arg1;	// IMP=0x0000000000032d22
- (id)containerEnvironmentAsString:(int)arg1;	// IMP=0x0000000000032ccc
@property(nonatomic) _Bool hasContainerEnvironment;
@property(nonatomic) int containerEnvironment; // @synthesize containerEnvironment=_containerEnvironment;
@property(readonly, nonatomic) _Bool hasContainer;

@end


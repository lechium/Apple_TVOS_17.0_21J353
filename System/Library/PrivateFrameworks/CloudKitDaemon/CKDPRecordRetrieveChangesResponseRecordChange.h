//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPRecord, CKDPRecordIdentifier, CKDPRecordType, NSString;

@interface CKDPRecordRetrieveChangesResponseRecordChange : PBCodable
{
    NSString *_etag;	// 8 = 0x8
    CKDPRecord *_record;	// 16 = 0x10
    CKDPRecordIdentifier *_recordIdentifier;	// 24 = 0x18
    CKDPRecordType *_recordType;	// 32 = 0x20
    int _type;	// 40 = 0x28
    CDStruct_f953fb60 _has;	// 44 = 0x2c
}

- (void).cxx_destruct;	// IMP=0x00000000001d2a0c
@property(retain, nonatomic) CKDPRecord *record; // @synthesize record=_record;
@property(retain, nonatomic) CKDPRecordType *recordType; // @synthesize recordType=_recordType;
@property(retain, nonatomic) NSString *etag; // @synthesize etag=_etag;
@property(retain, nonatomic) CKDPRecordIdentifier *recordIdentifier; // @synthesize recordIdentifier=_recordIdentifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001d2873
- (unsigned long long)hash;	// IMP=0x00000000001d27c6
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001d268b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001d2579
- (void)copyTo:(id)arg1;	// IMP=0x00000000001d24b6
- (void)writeTo:(id)arg1;	// IMP=0x00000000001d23f9
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001d23ec
- (id)dictionaryRepresentation;	// IMP=0x00000000001d1f1e
- (id)description;	// IMP=0x00000000001d1e6f
@property(readonly, nonatomic) _Bool hasRecord;
- (int)StringAsType:(id)arg1;	// IMP=0x00000000001d1dbd
- (id)typeAsString:(int)arg1;	// IMP=0x00000000001d1d72
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;
@property(readonly, nonatomic) _Bool hasRecordType;
@property(readonly, nonatomic) _Bool hasEtag;
@property(readonly, nonatomic) _Bool hasRecordIdentifier;

@end


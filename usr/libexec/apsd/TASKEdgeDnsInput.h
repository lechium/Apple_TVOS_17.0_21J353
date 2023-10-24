//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface TASKEdgeDnsInput : PBCodable
{
    NSString *_hostname;	// 8 = 0x8
    int _recordType;	// 16 = 0x10
    struct {
        unsigned int recordType:1;
    } _has;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x002000000007f34a
@property(retain, nonatomic) NSString *hostname; // @synthesize hostname=_hostname;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000007f2c2
- (unsigned long long)hash;	// IMP=0x001000000007f26f
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000007f1b5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000007f11d
- (void)copyTo:(id)arg1;	// IMP=0x001000000007f0bf
- (void)writeTo:(id)arg1;	// IMP=0x001000000007f05e
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000007f051
- (id)dictionaryRepresentation;	// IMP=0x001000000007ed9d
- (id)description;	// IMP=0x001000000007ecee
- (int)StringAsRecordType:(id)arg1;	// IMP=0x001000000007ec57
- (id)recordTypeAsString:(int)arg1;	// IMP=0x001000000007ec0e
@property(nonatomic) _Bool hasRecordType;
@property(nonatomic) int recordType; // @synthesize recordType=_recordType;

@end

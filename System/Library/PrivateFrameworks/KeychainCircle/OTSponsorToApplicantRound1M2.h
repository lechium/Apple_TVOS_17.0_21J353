//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface OTSponsorToApplicantRound1M2 : PBCodable
{
    unsigned long long _epoch;	// 8 = 0x8
    struct {
        unsigned int epoch:1;
    } _has;	// 16 = 0x10
}

@property(nonatomic) unsigned long long epoch; // @synthesize epoch=_epoch;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000016e0d
- (unsigned long long)hash;	// IMP=0x0000000000016de5
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000016d52
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000016cee
- (void)copyTo:(id)arg1;	// IMP=0x0000000000016cc8
- (void)writeTo:(id)arg1;	// IMP=0x0000000000016c9c
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000016c8f
- (id)dictionaryRepresentation;	// IMP=0x0000000000016bf5
- (id)description;	// IMP=0x0000000000016b46
@property(nonatomic) _Bool hasEpoch;

@end


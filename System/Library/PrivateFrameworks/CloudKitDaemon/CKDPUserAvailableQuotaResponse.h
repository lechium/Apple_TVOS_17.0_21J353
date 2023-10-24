//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface CKDPUserAvailableQuotaResponse : PBCodable
{
    unsigned long long _storageAvailableBytes;	// 8 = 0x8
    struct {
        unsigned int storageAvailableBytes:1;
    } _has;	// 16 = 0x10
}

@property(nonatomic) unsigned long long storageAvailableBytes; // @synthesize storageAvailableBytes=_storageAvailableBytes;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000003b102
- (unsigned long long)hash;	// IMP=0x000000000003b0da
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003b047
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003afe3
- (void)copyTo:(id)arg1;	// IMP=0x000000000003afbd
- (void)writeTo:(id)arg1;	// IMP=0x000000000003af91
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000003af84
- (id)dictionaryRepresentation;	// IMP=0x000000000003ad36
- (id)description;	// IMP=0x000000000003ac87
@property(nonatomic) _Bool hasStorageAvailableBytes;

@end

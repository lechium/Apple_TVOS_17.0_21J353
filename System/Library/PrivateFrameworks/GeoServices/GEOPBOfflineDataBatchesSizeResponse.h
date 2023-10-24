//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface GEOPBOfflineDataBatchesSizeResponse : PBCodable
{
    unsigned long long _compressedSizeBytes;	// 8 = 0x8
    unsigned long long _sizeBytes;	// 16 = 0x10
    unsigned int _batchCount;	// 24 = 0x18
    struct {
        unsigned int has_compressedSizeBytes:1;
        unsigned int has_sizeBytes:1;
        unsigned int has_batchCount:1;
    } _flags;	// 28 = 0x1c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0010000001427f58
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000001428806
- (unsigned long long)hash;	// IMP=0x000000000142878a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000001428689
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000014285ef
- (void)copyTo:(id)arg1;	// IMP=0x0000000001428560
- (void)writeTo:(id)arg1;	// IMP=0x00000000014284cd
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000014281a3
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000001427f52
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000001427f40
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000001427d64
- (id)jsonRepresentation;	// IMP=0x0000000001427d55
- (id)dictionaryRepresentation;	// IMP=0x0000000001427bb4
- (id)description;	// IMP=0x0000000001427b05
@property(nonatomic) _Bool hasCompressedSizeBytes;
@property(nonatomic) unsigned long long compressedSizeBytes;
@property(nonatomic) _Bool hasSizeBytes;
@property(nonatomic) unsigned long long sizeBytes;
@property(nonatomic) _Bool hasBatchCount;
@property(nonatomic) unsigned int batchCount;

@end


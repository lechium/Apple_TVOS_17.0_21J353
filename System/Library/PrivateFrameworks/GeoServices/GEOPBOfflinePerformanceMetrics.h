//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOPBOfflinePerformanceMetrics : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    NSString *_dataVersion;	// 16 = 0x10
    NSString *_deviceModel;	// 24 = 0x18
    NSString *_offlineVersion;	// 32 = 0x20
    NSString *_osBuild;	// 40 = 0x28
    NSMutableArray *_serviceMetrics;	// 48 = 0x30
    unsigned int _readerMarkPos;	// 56 = 0x38
    unsigned int _readerMarkLength;	// 60 = 0x3c
    struct os_unfair_lock_s _readerLock;	// 64 = 0x40
    struct {
        unsigned int read_dataVersion:1;
        unsigned int read_deviceModel:1;
        unsigned int read_offlineVersion:1;
        unsigned int read_osBuild:1;
        unsigned int read_serviceMetrics:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 68 = 0x44
}

- (void).cxx_destruct;	// IMP=0x000000000134b431
- (unsigned long long)hash;	// IMP=0x000000000134b388
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000134b236
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000134af01
- (void)writeTo:(id)arg1;	// IMP=0x000000000134ac2a
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000134ac1b
- (id)jsonRepresentation;	// IMP=0x000000000134a673
- (id)dictionaryRepresentation;	// IMP=0x000000000134a026
- (id)description;	// IMP=0x0000000001349f77
- (id)initWithData:(id)arg1;	// IMP=0x00000000013494d0
- (id)init;	// IMP=0x0000000001349474

@end


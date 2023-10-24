//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class GEOLocation, NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOBusinessResolutionRequest : PBRequest
{
    PBDataReader *_reader;	// 8 = 0x8
    GEOLocation *_deviceLocation;	// 16 = 0x10
    NSString *_shortBusinessName;	// 24 = 0x18
    unsigned int _readerMarkPos;	// 32 = 0x20
    unsigned int _readerMarkLength;	// 36 = 0x24
    struct os_unfair_lock_s _readerLock;	// 40 = 0x28
    struct {
        unsigned int read_deviceLocation:1;
        unsigned int read_shortBusinessName:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 44 = 0x2c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0010000000e2e5ba
- (void).cxx_destruct;	// IMP=0x0000000000e2eea4
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000e2ee19
- (unsigned long long)hash;	// IMP=0x0000000000e2edbd
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000e2ecdc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000e2eb47
- (void)copyTo:(id)arg1;	// IMP=0x0000000000e2ea7b
- (Class)responseClass;	// IMP=0x0000000000e2ea6a
- (unsigned int)requestTypeCode;	// IMP=0x0000000000e2ea5f
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x0000000000e2ea30
- (void)clearSensitiveFields:(unsigned long long)arg1;	// IMP=0x0000000000e2e938
- (void)writeTo:(id)arg1;	// IMP=0x0000000000e2e774
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000e2e767
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000e2e373
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000e2e361
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000e2e1d3
- (id)jsonRepresentation;	// IMP=0x0000000000e2e1c4
- (id)dictionaryRepresentation;	// IMP=0x0000000000e2e09d
- (id)description;	// IMP=0x0000000000e2dfee
@property(retain, nonatomic) GEOLocation *deviceLocation;
@property(readonly, nonatomic) _Bool hasDeviceLocation;
@property(retain, nonatomic) NSString *shortBusinessName;
@property(readonly, nonatomic) _Bool hasShortBusinessName;
- (id)initWithData:(id)arg1;	// IMP=0x0000000000e2d880
- (id)init;	// IMP=0x0000000000e2d824

@end

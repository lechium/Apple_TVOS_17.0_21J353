//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class AWDHomeKitVendorInformation;

__attribute__((visibility("hidden")))
@interface AWDHomeKitTargetControllerError : PBCodable
{
    unsigned long long _timestamp;	// 8 = 0x8
    int _certified;	// 16 = 0x10
    int _error;	// 20 = 0x14
    int _transportType;	// 24 = 0x18
    AWDHomeKitVendorInformation *_vendorDetails;	// 32 = 0x20
    struct {
        unsigned int timestamp:1;
        unsigned int certified:1;
        unsigned int error:1;
        unsigned int transportType:1;
    } _has;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000003a3bc0
@property(retain, nonatomic) AWDHomeKitVendorInformation *vendorDetails; // @synthesize vendorDetails=_vendorDetails;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000003a3ab4
- (unsigned long long)hash;	// IMP=0x00000000003a39f8
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003a38bf
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003a37d0
- (void)copyTo:(id)arg1;	// IMP=0x00000000003a3710
- (void)writeTo:(id)arg1;	// IMP=0x00000000003a3640
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000003a324e
- (id)dictionaryRepresentation;	// IMP=0x00000000003a300c
- (id)description;	// IMP=0x00000000003a2f5d
- (int)StringAsCertified:(id)arg1;	// IMP=0x00000000003a2ec6
- (id)certifiedAsString:(int)arg1;	// IMP=0x00000000003a2e7e
@property(nonatomic) _Bool hasCertified;
@property(nonatomic) int certified; // @synthesize certified=_certified;
- (int)StringAsTransportType:(id)arg1;	// IMP=0x00000000003a2cdb
- (id)transportTypeAsString:(int)arg1;	// IMP=0x00000000003a2c93
@property(nonatomic) _Bool hasTransportType;
@property(nonatomic) int transportType; // @synthesize transportType=_transportType;
@property(readonly, nonatomic) _Bool hasVendorDetails;
- (int)StringAsError:(id)arg1;	// IMP=0x00000000003a2b60
- (id)errorAsString:(int)arg1;	// IMP=0x00000000003a2b18
@property(nonatomic) _Bool hasError;
@property(nonatomic) int error; // @synthesize error=_error;
@property(nonatomic) _Bool hasTimestamp;

@end


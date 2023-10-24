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

- (void).cxx_destruct;	// IMP=0x0000000000322628
@property(retain, nonatomic) AWDHomeKitVendorInformation *vendorDetails; // @synthesize vendorDetails=_vendorDetails;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000032251c
- (unsigned long long)hash;	// IMP=0x0000000000322460
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000322327
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000322238
- (void)copyTo:(id)arg1;	// IMP=0x0000000000322178
- (void)writeTo:(id)arg1;	// IMP=0x00000000003220a8
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000321cb6
- (id)dictionaryRepresentation;	// IMP=0x0000000000321a74
- (id)description;	// IMP=0x00000000003219c5
- (int)StringAsCertified:(id)arg1;	// IMP=0x000000000032192e
- (id)certifiedAsString:(int)arg1;	// IMP=0x00000000003218e6
@property(nonatomic) _Bool hasCertified;
@property(nonatomic) int certified; // @synthesize certified=_certified;
- (int)StringAsTransportType:(id)arg1;	// IMP=0x0000000000321743
- (id)transportTypeAsString:(int)arg1;	// IMP=0x00000000003216fb
@property(nonatomic) _Bool hasTransportType;
@property(nonatomic) int transportType; // @synthesize transportType=_transportType;
@property(readonly, nonatomic) _Bool hasVendorDetails;
- (int)StringAsError:(id)arg1;	// IMP=0x00000000003215c8
- (id)errorAsString:(int)arg1;	// IMP=0x0000000000321580
@property(nonatomic) _Bool hasError;
@property(nonatomic) int error; // @synthesize error=_error;
@property(nonatomic) _Bool hasTimestamp;

@end

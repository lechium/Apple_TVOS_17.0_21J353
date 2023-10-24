//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class AWDHomeKitVendorInformation;

__attribute__((visibility("hidden")))
@interface AWDHomeKitBroadcastEventReceived : PBCodable
{
    unsigned long long _timestamp;	// 8 = 0x8
    int _certified;	// 16 = 0x10
    AWDHomeKitVendorInformation *_vendorDetails;	// 24 = 0x18
    _Bool _isExpectedGSN;	// 32 = 0x20
    struct {
        unsigned int timestamp:1;
        unsigned int certified:1;
        unsigned int isExpectedGSN:1;
    } _has;	// 36 = 0x24
}

- (void).cxx_destruct;	// IMP=0x00000000002ed74d
@property(retain, nonatomic) AWDHomeKitVendorInformation *vendorDetails; // @synthesize vendorDetails=_vendorDetails;
@property(nonatomic) _Bool isExpectedGSN; // @synthesize isExpectedGSN=_isExpectedGSN;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002ed64d
- (unsigned long long)hash;	// IMP=0x00000000002ed5ad
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002ed493
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002ed3c0
- (void)copyTo:(id)arg1;	// IMP=0x00000000002ed31c
- (void)writeTo:(id)arg1;	// IMP=0x00000000002ed26c
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002ecefe
- (id)dictionaryRepresentation;	// IMP=0x00000000002ecd48
- (id)description;	// IMP=0x00000000002ecc99
- (int)StringAsCertified:(id)arg1;	// IMP=0x00000000002ecc02
- (id)certifiedAsString:(int)arg1;	// IMP=0x00000000002ecbba
@property(nonatomic) _Bool hasCertified;
@property(nonatomic) int certified; // @synthesize certified=_certified;
@property(readonly, nonatomic) _Bool hasVendorDetails;
@property(nonatomic) _Bool hasIsExpectedGSN;
@property(nonatomic) _Bool hasTimestamp;

@end

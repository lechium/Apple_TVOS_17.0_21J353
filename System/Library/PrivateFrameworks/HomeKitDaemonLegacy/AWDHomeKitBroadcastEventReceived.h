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

- (void).cxx_destruct;	// IMP=0x00000000002aa25d
@property(retain, nonatomic) AWDHomeKitVendorInformation *vendorDetails; // @synthesize vendorDetails=_vendorDetails;
@property(nonatomic) _Bool isExpectedGSN; // @synthesize isExpectedGSN=_isExpectedGSN;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002aa15d
- (unsigned long long)hash;	// IMP=0x00000000002aa0bd
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002a9fa3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002a9ed0
- (void)copyTo:(id)arg1;	// IMP=0x00000000002a9e2c
- (void)writeTo:(id)arg1;	// IMP=0x00000000002a9d7c
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002a9a0e
- (id)dictionaryRepresentation;	// IMP=0x00000000002a9858
- (id)description;	// IMP=0x00000000002a97a9
- (int)StringAsCertified:(id)arg1;	// IMP=0x00000000002a9712
- (id)certifiedAsString:(int)arg1;	// IMP=0x00000000002a96ca
@property(nonatomic) _Bool hasCertified;
@property(nonatomic) int certified; // @synthesize certified=_certified;
@property(readonly, nonatomic) _Bool hasVendorDetails;
@property(nonatomic) _Bool hasIsExpectedGSN;
@property(nonatomic) _Bool hasTimestamp;

@end

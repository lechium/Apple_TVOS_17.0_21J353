//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface CSDMessagingLinkSyncCheckInGeneratorDescriptorInfo : PBCodable
{
    unsigned long long _generateDescriptorVersionSum;	// 8 = 0x8
    unsigned int _version;	// 16 = 0x10
    struct {
        unsigned int generateDescriptorVersionSum:1;
        unsigned int version:1;
    } _has;	// 20 = 0x14
}

@property(nonatomic) unsigned long long generateDescriptorVersionSum; // @synthesize generateDescriptorVersionSum=_generateDescriptorVersionSum;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000001a59d9
- (unsigned long long)hash;	// IMP=0x00100000001a5995
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000001a58e1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001a5862
- (void)copyTo:(id)arg1;	// IMP=0x00100000001a5806
- (void)writeTo:(id)arg1;	// IMP=0x00100000001a5793
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000001a5786
- (id)dictionaryRepresentation;	// IMP=0x00100000001a5454
- (id)description;	// IMP=0x00100000001a53a5
@property(nonatomic) _Bool hasGenerateDescriptorVersionSum;
@property(nonatomic) _Bool hasVersion;

@end


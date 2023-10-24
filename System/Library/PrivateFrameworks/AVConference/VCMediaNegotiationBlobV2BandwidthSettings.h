//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface VCMediaNegotiationBlobV2BandwidthSettings : PBCodable
{
    unsigned int _cap2G;	// 8 = 0x8
    unsigned int _cap3G;	// 12 = 0xc
    unsigned int _cap5G;	// 16 = 0x10
    unsigned int _capLTE;	// 20 = 0x14
    unsigned int _capWifi;	// 24 = 0x18
    struct {
        unsigned int cap2G:1;
        unsigned int cap3G:1;
        unsigned int cap5G:1;
        unsigned int capLTE:1;
        unsigned int capWifi:1;
    } _has;	// 28 = 0x1c
}

+ (id)filteredSetForOperatingMode:(int)arg1 bandwidthConfigurations:(id)arg2;	// IMP=0x001000000018fc36
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000030ce74
- (unsigned long long)hash;	// IMP=0x000000000030cdd6
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000030cce3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000030cc1b
- (void)copyTo:(id)arg1;	// IMP=0x000000000030cb91
- (void)writeTo:(id)arg1;	// IMP=0x000000000030cac5
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000030cab8
- (id)dictionaryRepresentation;	// IMP=0x000000000030c537
- (id)description;	// IMP=0x000000000030c49d
@property(nonatomic) _Bool hasCapWifi;
@property(nonatomic) unsigned int capWifi; // @synthesize capWifi=_capWifi;
@property(nonatomic) _Bool hasCap5G;
@property(nonatomic) unsigned int cap5G; // @synthesize cap5G=_cap5G;
@property(nonatomic) _Bool hasCapLTE;
@property(nonatomic) unsigned int capLTE; // @synthesize capLTE=_capLTE;
@property(nonatomic) _Bool hasCap3G;
@property(nonatomic) unsigned int cap3G; // @synthesize cap3G=_cap3G;
@property(nonatomic) _Bool hasCap2G;
@property(nonatomic) unsigned int cap2G; // @synthesize cap2G=_cap2G;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000018ff00
- (_Bool)setupCapForBandwidthConfiguration:(id)arg1;	// IMP=0x000000000018fe55
- (void)setupCapWifi:(unsigned int)arg1;	// IMP=0x000000000018fbfe
- (void)setupCap5G:(unsigned int)arg1;	// IMP=0x000000000018fbc6
- (void)setupCapLTE:(unsigned int)arg1;	// IMP=0x000000000018fb8e
- (void)setupCap3G:(unsigned int)arg1;	// IMP=0x000000000018fb56
- (void)setupCap2G:(unsigned int)arg1;	// IMP=0x000000000018fb1e
- (void)printWithLogFile:(void *)arg1 prefix:(id)arg2;	// IMP=0x000000000018f966
- (_Bool)isDefaultSettings;	// IMP=0x000000000018f928
- (id)bandwidthConfigurations;	// IMP=0x000000000018f54e
- (id)initWithBandwidthConfigurations:(id)arg1;	// IMP=0x000000000018f2f8

@end


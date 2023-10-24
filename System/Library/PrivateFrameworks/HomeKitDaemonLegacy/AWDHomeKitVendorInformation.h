//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AWDHomeKitVendorInformation : PBCodable
{
    NSString *_category;	// 8 = 0x8
    NSString *_firmwareVersion;	// 16 = 0x10
    NSString *_manufacturer;	// 24 = 0x18
    NSString *_model;	// 32 = 0x20
    NSString *_name;	// 40 = 0x28
    NSString *_productData;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000586340
@property(retain, nonatomic) NSString *category; // @synthesize category=_category;
@property(retain, nonatomic) NSString *productData; // @synthesize productData=_productData;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *firmwareVersion; // @synthesize firmwareVersion=_firmwareVersion;
@property(retain, nonatomic) NSString *model; // @synthesize model=_model;
@property(retain, nonatomic) NSString *manufacturer; // @synthesize manufacturer=_manufacturer;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000058617f
- (unsigned long long)hash;	// IMP=0x00000000005860c6
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000585f62
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000585e1d
- (void)copyTo:(id)arg1;	// IMP=0x0000000000585d3a
- (void)writeTo:(id)arg1;	// IMP=0x0000000000585c69
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000585c5c
- (id)dictionaryRepresentation;	// IMP=0x0000000000585b3d
- (id)description;	// IMP=0x0000000000585a8e
@property(readonly, nonatomic) _Bool hasCategory;
@property(readonly, nonatomic) _Bool hasProductData;
@property(readonly, nonatomic) _Bool hasName;
@property(readonly, nonatomic) _Bool hasFirmwareVersion;
@property(readonly, nonatomic) _Bool hasModel;
@property(readonly, nonatomic) _Bool hasManufacturer;

@end


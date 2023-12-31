//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HAP2LoggingObject.h"

@class HAPBLEPeripheralInfo, NSDictionary, NSNumber;

__attribute__((visibility("hidden")))
@interface HAP2AccessoryServerAccessoryCache : HAP2LoggingObject
{
    HAPBLEPeripheralInfo *_peripheralInfo;	// 8 = 0x8
    NSDictionary *_accessoryCache;	// 16 = 0x10
    NSNumber *_sleepInterval;	// 24 = 0x18
    NSNumber *_metadataVersion;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000005a511
+ (id)accessoryCacheForAccessories:(id)arg1;	// IMP=0x001000000005a42d
+ (id)peripheralInfoFromMetadata:(id)arg1;	// IMP=0x001000000005a22c
- (void).cxx_destruct;	// IMP=0x000000000005a1d9
@property(readonly, nonatomic) NSNumber *metadataVersion; // @synthesize metadataVersion=_metadataVersion;
@property(retain, nonatomic) NSNumber *sleepInterval; // @synthesize sleepInterval=_sleepInterval;
@property(retain, nonatomic) NSDictionary *accessoryCache; // @synthesize accessoryCache=_accessoryCache;
@property(retain, nonatomic) HAPBLEPeripheralInfo *peripheralInfo; // @synthesize peripheralInfo=_peripheralInfo;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000059ec7
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000059daf
- (void)invalidateAccessoryCache;	// IMP=0x0000000000059d9b
- (void)updateWithMetadata:(id)arg1 discoveredAccessories:(id)arg2;	// IMP=0x0000000000059ccc
- (id)initWithMetadata:(id)arg1 discoveredAccessories:(id)arg2 sleepInterval:(id)arg3;	// IMP=0x0000000000059bd1
- (id)initWithBLEPeripheralInfo:(id)arg1 cachedAccessories:(id)arg2 sleepInterval:(id)arg3 metadataVersion:(id)arg4;	// IMP=0x0000000000059ad4

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMeasurement, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface VGExternalAccessoryState : NSObject
{
    NSString *_displayName;	// 8 = 0x8
    NSString *_mapsDisplayName;	// 16 = 0x10
    _Bool _isCharging;	// 24 = 0x18
    NSString *_name;	// 32 = 0x20
    NSString *_manufacturer;	// 40 = 0x28
    NSString *_model;	// 48 = 0x30
    NSString *_year;	// 56 = 0x38
    NSString *_colorHex;	// 64 = 0x40
    NSMeasurement *_currentEVRange;	// 72 = 0x48
    NSMeasurement *_maxEVRange;	// 80 = 0x50
    NSString *_consumptionArguments;	// 88 = 0x58
    NSString *_chargingArguments;	// 96 = 0x60
    NSNumber *_batteryCharge;	// 104 = 0x68
    NSMeasurement *_minBatteryCapacity;	// 112 = 0x70
    NSMeasurement *_currentBatteryCapacity;	// 120 = 0x78
    NSMeasurement *_maxBatteryCapacity;	// 128 = 0x80
    NSNumber *_supportedConnectors;	// 136 = 0x88
    NSNumber *_activeConnector;	// 144 = 0x90
    NSDictionary *_powerByConnector;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x0000000000010b77
@property(readonly, nonatomic) NSDictionary *powerByConnector; // @synthesize powerByConnector=_powerByConnector;
@property(readonly, nonatomic) NSNumber *activeConnector; // @synthesize activeConnector=_activeConnector;
@property(readonly, nonatomic) _Bool isCharging; // @synthesize isCharging=_isCharging;
@property(nonatomic) NSNumber *supportedConnectors; // @synthesize supportedConnectors=_supportedConnectors;
@property(retain, nonatomic) NSMeasurement *maxBatteryCapacity; // @synthesize maxBatteryCapacity=_maxBatteryCapacity;
@property(retain, nonatomic) NSMeasurement *currentBatteryCapacity; // @synthesize currentBatteryCapacity=_currentBatteryCapacity;
@property(retain, nonatomic) NSMeasurement *minBatteryCapacity; // @synthesize minBatteryCapacity=_minBatteryCapacity;
@property(retain, nonatomic) NSNumber *batteryCharge; // @synthesize batteryCharge=_batteryCharge;
@property(retain, nonatomic) NSString *chargingArguments; // @synthesize chargingArguments=_chargingArguments;
@property(retain, nonatomic) NSString *consumptionArguments; // @synthesize consumptionArguments=_consumptionArguments;
@property(retain, nonatomic) NSMeasurement *maxEVRange; // @synthesize maxEVRange=_maxEVRange;
@property(retain, nonatomic) NSMeasurement *currentEVRange; // @synthesize currentEVRange=_currentEVRange;
@property(retain, nonatomic) NSString *colorHex; // @synthesize colorHex=_colorHex;
@property(retain, nonatomic) NSString *year; // @synthesize year=_year;
@property(retain, nonatomic) NSString *model; // @synthesize model=_model;
@property(retain, nonatomic) NSString *manufacturer; // @synthesize manufacturer=_manufacturer;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;	// IMP=0x000000000001094b
- (void)_updateWithVehicleInfo:(id)arg1;	// IMP=0x000000000000fb7c

@end


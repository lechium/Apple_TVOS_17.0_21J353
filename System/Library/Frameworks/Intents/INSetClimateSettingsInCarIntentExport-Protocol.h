//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class INSpeakableString, NSMeasurement, NSNumber;

@protocol INSetClimateSettingsInCarIntentExport <NSObject, JSExport>
@property(copy, nonatomic) INSpeakableString *carName;
@property(nonatomic) long long climateZone;
@property(nonatomic) long long relativeTemperatureSetting;
@property(copy, nonatomic) NSMeasurement *temperature;
@property(nonatomic) long long relativeFanSpeedSetting;
@property(copy, nonatomic) NSNumber *fanSpeedPercentage;
@property(copy, nonatomic) NSNumber *fanSpeedIndex;
@property(nonatomic) long long airCirculationMode;
@property(copy, nonatomic) NSNumber *enableAutoMode;
@property(copy, nonatomic) NSNumber *enableClimateControl;
@property(copy, nonatomic) NSNumber *enableAirConditioner;
@property(copy, nonatomic) NSNumber *enableFan;
- (id)init;
@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface HMDNaturalLightingCurve : HMFObject
{
    unsigned long long _version;	// 8 = 0x8
    NSArray *_transitionPoints;	// 16 = 0x10
    long long _minimumBrightness;	// 24 = 0x18
    long long _maximumBrightness;	// 32 = 0x20
    long long _minimumColorTemperature;	// 40 = 0x28
    long long _maximumColorTemperature;	// 48 = 0x30
    unsigned long long _colorTemperatureNotifyValueChangeThreshold;	// 56 = 0x38
    unsigned long long _colorTemperatureNotifyIntervalThresholdInMilliseconds;	// 64 = 0x40
    unsigned long long _colorTemperatureUpdateIntervalInMilliseconds;	// 72 = 0x48
}

+ (id)logCategory;	// IMP=0x001000000059dd33
+ (long long)colorTemperatureMiredsFromKelvins:(long long)arg1;	// IMP=0x001000000059dd10
+ (_Bool)supportsSecureCoding;	// IMP=0x001000000059dd08
- (void).cxx_destruct;	// IMP=0x000000000059dbc6
@property unsigned long long colorTemperatureUpdateIntervalInMilliseconds; // @synthesize colorTemperatureUpdateIntervalInMilliseconds=_colorTemperatureUpdateIntervalInMilliseconds;
@property unsigned long long colorTemperatureNotifyIntervalThresholdInMilliseconds; // @synthesize colorTemperatureNotifyIntervalThresholdInMilliseconds=_colorTemperatureNotifyIntervalThresholdInMilliseconds;
@property unsigned long long colorTemperatureNotifyValueChangeThreshold; // @synthesize colorTemperatureNotifyValueChangeThreshold=_colorTemperatureNotifyValueChangeThreshold;
@property(readonly) long long maximumColorTemperature; // @synthesize maximumColorTemperature=_maximumColorTemperature;
@property(readonly) long long minimumColorTemperature; // @synthesize minimumColorTemperature=_minimumColorTemperature;
@property(readonly) long long maximumBrightness; // @synthesize maximumBrightness=_maximumBrightness;
@property(readonly) long long minimumBrightness; // @synthesize minimumBrightness=_minimumBrightness;
@property(readonly, copy) NSArray *transitionPoints; // @synthesize transitionPoints=_transitionPoints;
@property(readonly) unsigned long long version; // @synthesize version=_version;
- (id)transitionPointsWithmillisecondsElapsedSinceStartOfDay:(unsigned long long)arg1;	// IMP=0x000000000059cfff
- (id)colorTemperatureForBrightness:(long long)arg1 millisecondsElapsedSinceStartOfDay:(unsigned long long)arg2;	// IMP=0x000000000059ce37
@property(readonly) unsigned long long checksum;
- (id)attributeDescriptions;	// IMP=0x000000000059c56a
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000059c43b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000059c430
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000059c0ed
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000059bcb3
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000059b2de
- (id)initWithCurve:(id)arg1 minimumColorTemperature:(long long)arg2 maximumColorTemperature:(long long)arg3;	// IMP=0x000000000059ad6d
- (id)initWithVersion:(unsigned long long)arg1 transitionPoints:(id)arg2 minimumBrightness:(long long)arg3 maximumBrightness:(long long)arg4 minimumColorTemperature:(long long)arg5 maximumColorTemperature:(long long)arg6;	// IMP=0x000000000059ac9f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

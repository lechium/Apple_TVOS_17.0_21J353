//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface NIDeviceCapabilities : NSObject
{
    _Bool _supportsPreciseDistanceMeasurement;	// 8 = 0x8
    _Bool _supportsDirectionMeasurement;	// 9 = 0x9
    _Bool _supportsCameraAssistance;	// 10 = 0xa
    _Bool _supportsCoarseDistanceMeasurement;	// 11 = 0xb
    _Bool _supportsExtendedDistanceMeasurement;	// 12 = 0xc
}

+ (id)new;	// IMP=0x0010000000021ccf
@property(readonly, nonatomic) _Bool supportsExtendedDistanceMeasurement; // @synthesize supportsExtendedDistanceMeasurement=_supportsExtendedDistanceMeasurement;
@property(readonly, nonatomic) _Bool supportsCoarseDistanceMeasurement; // @synthesize supportsCoarseDistanceMeasurement=_supportsCoarseDistanceMeasurement;
@property(readonly, nonatomic) _Bool supportsCameraAssistance; // @synthesize supportsCameraAssistance=_supportsCameraAssistance;
@property(readonly, nonatomic) _Bool supportsDirectionMeasurement; // @synthesize supportsDirectionMeasurement=_supportsDirectionMeasurement;
@property(readonly, nonatomic) _Bool supportsPreciseDistanceMeasurement; // @synthesize supportsPreciseDistanceMeasurement=_supportsPreciseDistanceMeasurement;
- (id)init;	// IMP=0x0000000000021cac
- (unsigned char)toBitmap;	// IMP=0x0000000000021c6d
- (id)initWithBitmap:(unsigned char)arg1;	// IMP=0x0000000000021c25
- (id)initWithFineRangingSupport:(_Bool)arg1 coarseRangingSupport:(_Bool)arg2 aoaSupport:(_Bool)arg3 extendedDistanceMeasurementSupport:(_Bool)arg4 syntheticApertureSupport:(_Bool)arg5;	// IMP=0x0000000000021bc2
- (id)initWithFineRangingSupport:(_Bool)arg1 aoaSupport:(_Bool)arg2 extendedDistanceMeasurementSupport:(_Bool)arg3 syntheticApertureSupport:(_Bool)arg4;	// IMP=0x0000000000021b98

@end


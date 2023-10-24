//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CMPedometerTableRawSpeedToKValue
{
}

+ (id)sharedInstance;	// IMP=0x0040000000a1e9b3
- (_Bool)isRawSpeedRun:(double)arg1;	// IMP=0x0040000000a1f56f
- (_Bool)isRawSpeedValid:(double)arg1;	// IMP=0x0010000000a1f55d
- (double)kValueForRawSpeed:(double)arg1;	// IMP=0x0010000000a1f54b
- (CDStruct_2c43369c)binIntervalForRawSpeed:(double)arg1;	// IMP=0x0010000000a1f539
- (_Bool)isRunCalibrationAvailable;	// IMP=0x0010000000a1f527
- (_Bool)isWalkCalibrationAvailable;	// IMP=0x0010000000a1f515
- (void)updateBinsWithTrack:(id)arg1;	// IMP=0x0010000000a1f0f0
- (void)binsDidChange;	// IMP=0x0010000000a1f07a
- (void)logBins;	// IMP=0x0010000000a1ebda
- (id)initWithTestMode:(_Bool)arg1;	// IMP=0x0010000000a1ea0a
- (_Bool)isBinaryLogging;	// IMP=0x0010000000a1e945

@end


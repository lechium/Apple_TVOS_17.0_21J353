//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CLWaterTemperatureEstimator : NSObject
{
    float _waterTempEst;	// 8 = 0x8
    float _waterTempUncertainty;	// 12 = 0xc
}

@property float waterTempUncertainty; // @synthesize waterTempUncertainty=_waterTempUncertainty;
@property float waterTempEst; // @synthesize waterTempEst=_waterTempEst;
- (void)updateWithTDot:(const float *)arg1 andTempMeasurement:(const float *)arg2;	// IMP=0x0010000000a9bfe5

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CLKalmanSmootherEstimates : NSObject
{
    CMVector_b5e1af32 _fState;	// 8 = 0x8
    double _timestamp;	// 16 = 0x10
    CMMatrix_1552e2a6 _fCovariance;	// 24 = 0x18
}

- (id).cxx_construct;	// IMP=0x00200000003bfe59
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) CMMatrix_1552e2a6 fCovariance; // @synthesize fCovariance=_fCovariance;
@property(nonatomic) CMVector_b5e1af32 fState; // @synthesize fState=_fState;
- (id)init;	// IMP=0x00100000003bfdc0

@end


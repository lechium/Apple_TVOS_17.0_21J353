//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VCRateControlAlgorithmTelephony
{
    short _currentRSRP;	// 4928 = 0x1340
    unsigned char _currentUplinkBLER;	// 4930 = 0x1342
    unsigned int _nwConnectionAvgDelay;	// 4932 = 0x1344
    unsigned int _nwConnectionAvgThroughput;	// 4936 = 0x1348
    double _lastTimeBLERBelowRampDownThreshold;	// 4944 = 0x1350
    double _lastTimeBLERAboveRampUpThreshold;	// 4952 = 0x1358
}

- (_Bool)setUpVTable;	// IMP=0x0000000000245b30
- (id)init;	// IMP=0x0000000000245ab0

@end


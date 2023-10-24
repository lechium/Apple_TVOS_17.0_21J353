//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPTLVBase.h>

@class HMDReselectedVideoParameters, HMDSessionControl, NSData;

__attribute__((visibility("hidden")))
@interface HMDReselectedStreamConfigurationWrite : HAPTLVBase
{
    HMDSessionControl *_sessionControl;	// 8 = 0x8
    HMDReselectedVideoParameters *_videoParameters;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000007fa67
- (void).cxx_destruct;	// IMP=0x000000000007fa36
@property(readonly, copy, nonatomic) HMDReselectedVideoParameters *videoParameters; // @synthesize videoParameters=_videoParameters;
@property(readonly, copy, nonatomic) HMDSessionControl *sessionControl; // @synthesize sessionControl=_sessionControl;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000007f966
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000007f7a6
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x000000000007f681
- (_Bool)_parseFromTLVData;	// IMP=0x000000000007f477
@property(readonly, copy) NSData *tlvData;
- (id)initWithSessionControl:(id)arg1;	// IMP=0x000000000007f2e8
- (id)initWithSessionControl:(id)arg1 videoParameters:(id)arg2;	// IMP=0x000000000007f246

@end


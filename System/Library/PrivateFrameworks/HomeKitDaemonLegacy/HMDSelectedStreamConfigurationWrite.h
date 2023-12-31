//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPTLVBase.h>

@class HMDSelectedAudioParameters, HMDSelectedVideoParameters, HMDSessionControl, NSData;

__attribute__((visibility("hidden")))
@interface HMDSelectedStreamConfigurationWrite : HAPTLVBase
{
    HMDSessionControl *_sessionControl;	// 8 = 0x8
    HMDSelectedVideoParameters *_videoParameters;	// 16 = 0x10
    HMDSelectedAudioParameters *_audioParameters;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000076f41
- (void).cxx_destruct;	// IMP=0x0000000000076eff
@property(readonly, copy, nonatomic) HMDSelectedAudioParameters *audioParameters; // @synthesize audioParameters=_audioParameters;
@property(readonly, copy, nonatomic) HMDSelectedVideoParameters *videoParameters; // @synthesize videoParameters=_videoParameters;
@property(readonly, copy, nonatomic) HMDSessionControl *sessionControl; // @synthesize sessionControl=_sessionControl;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000076de9
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000076b98
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x00000000000769fc
- (_Bool)_parseFromTLVData;	// IMP=0x0000000000076718
@property(readonly, copy) NSData *tlvData;
- (id)initWithSessionControl:(id)arg1;	// IMP=0x000000000007652f
- (id)initWithSessionControl:(id)arg1 videoParameters:(id)arg2 audioParameters:(id)arg3;	// IMP=0x0000000000076465

@end


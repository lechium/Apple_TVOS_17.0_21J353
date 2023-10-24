//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDAudioCodecGroup, HMDAudioSampleRate, HMDBitRateSetting, HMDCameraAudioParameterCombination, HMDSelectedAudioParameters, HMDStreamingCapabilities, HMDSupportedAudioStreamConfiguration, HMDSupportedRTPConfiguration, NSArray, NSNumber;

__attribute__((visibility("hidden")))
@interface HMDCameraAudioParameterSelection
{
    HMDSupportedAudioStreamConfiguration *_supportedAudioStreamConfiguration;	// 8 = 0x8
    HMDSupportedRTPConfiguration *_rtpConfiguration;	// 16 = 0x10
    HMDSelectedAudioParameters *_selectedAudioParameters;	// 24 = 0x18
    HMDStreamingCapabilities *_streamingCapabilities;	// 32 = 0x20
    NSArray *_audioCodecsPreference;	// 40 = 0x28
    NSArray *_bitrateSettingsPreference;	// 48 = 0x30
    NSArray *_sampleRatesPreference;	// 56 = 0x38
    NSArray *_validAudioParameterCombinations;	// 64 = 0x40
    HMDAudioCodecGroup *_selectedCodecGroupType;	// 72 = 0x48
    HMDBitRateSetting *_selectedBitRateSetting;	// 80 = 0x50
    HMDAudioSampleRate *_selectedSampleRate;	// 88 = 0x58
    NSNumber *_selectedAudioChannelCount;	// 96 = 0x60
    HMDCameraAudioParameterCombination *_selectedAudioParameterCombination;	// 104 = 0x68
    NSNumber *_comfortNoiseSupported;	// 112 = 0x70
}

+ (id)logCategory;	// IMP=0x0060000000096b19
- (void).cxx_destruct;	// IMP=0x0000000000096a1c
@property(retain, nonatomic) NSNumber *comfortNoiseSupported; // @synthesize comfortNoiseSupported=_comfortNoiseSupported;
@property(retain, nonatomic) HMDCameraAudioParameterCombination *selectedAudioParameterCombination; // @synthesize selectedAudioParameterCombination=_selectedAudioParameterCombination;
@property(retain, nonatomic) NSNumber *selectedAudioChannelCount; // @synthesize selectedAudioChannelCount=_selectedAudioChannelCount;
@property(retain, nonatomic) HMDAudioSampleRate *selectedSampleRate; // @synthesize selectedSampleRate=_selectedSampleRate;
@property(retain, nonatomic) HMDBitRateSetting *selectedBitRateSetting; // @synthesize selectedBitRateSetting=_selectedBitRateSetting;
@property(retain, nonatomic) HMDAudioCodecGroup *selectedCodecGroupType; // @synthesize selectedCodecGroupType=_selectedCodecGroupType;
@property(readonly, nonatomic) NSArray *validAudioParameterCombinations; // @synthesize validAudioParameterCombinations=_validAudioParameterCombinations;
@property(readonly, nonatomic) NSArray *sampleRatesPreference; // @synthesize sampleRatesPreference=_sampleRatesPreference;
@property(readonly, nonatomic) NSArray *bitrateSettingsPreference; // @synthesize bitrateSettingsPreference=_bitrateSettingsPreference;
@property(readonly, nonatomic) NSArray *audioCodecsPreference; // @synthesize audioCodecsPreference=_audioCodecsPreference;
@property(readonly, nonatomic) HMDStreamingCapabilities *streamingCapabilities; // @synthesize streamingCapabilities=_streamingCapabilities;
@property(retain, nonatomic) HMDSelectedAudioParameters *selectedAudioParameters; // @synthesize selectedAudioParameters=_selectedAudioParameters;
@property(readonly, nonatomic) HMDSupportedRTPConfiguration *rtpConfiguration; // @synthesize rtpConfiguration=_rtpConfiguration;
@property(readonly, nonatomic) HMDSupportedAudioStreamConfiguration *supportedAudioStreamConfiguration; // @synthesize supportedAudioStreamConfiguration=_supportedAudioStreamConfiguration;
- (void)_generateAllCombinations:(id)arg1;	// IMP=0x0000000000096353
- (id)createSelectedAudioParameters;	// IMP=0x0000000000095f71
- (id)createSRTPParamters;	// IMP=0x0000000000095ee6
- (_Bool)_selectParametersFromCodec:(id)arg1 bitRateSettings:(id)arg2 sampleRates:(id)arg3 audioChannelCount:(id)arg4;	// IMP=0x0000000000095937
- (_Bool)selectAudioParameters;	// IMP=0x0000000000095127
- (id)logIdentifier;	// IMP=0x00000000000950d7
- (id)initWithSessionID:(id)arg1 supportedAudioConfiguration:(id)arg2 supportedRTPConfiguration:(id)arg3 streamingCapabilities:(id)arg4;	// IMP=0x0000000000094f4a

@end


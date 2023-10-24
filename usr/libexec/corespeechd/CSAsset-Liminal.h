//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpeechFoundation/CSAsset.h>

@class NSArray, NSDictionary, NSString;

@interface CSAsset (Liminal)
+ (unsigned long long)getSSVDeviceType;	// IMP=0x002000000004937c
+ (unsigned int)SSVDefaultDistanceChannelCount;	// IMP=0x001000000004930a
+ (unsigned int)SSVDefaultLKFSChannelCount;	// IMP=0x001000000004929d
+ (unsigned int)SSVDefaultNoiseChannelCount;	// IMP=0x001000000004922b
- (unsigned long long)_mapInputOriginFromAssetToCSAudioRecordType:(id)arg1;	// IMP=0x0020000000042963
@property(readonly, nonatomic) NSArray *contConvThresholds;
@property(readonly, nonatomic) NSString *contConvConfigFile;
@property(readonly, nonatomic) _Bool progCheckerShadowMode;
@property(readonly, nonatomic) NSArray *checkerThresholds;
@property(readonly, nonatomic) unsigned long long supportedInputOrigins;
@property(readonly, nonatomic) NSString *progCheckerConfigFile;
@property(readonly, nonatomic) NSDictionary *SSVParameterDirectionary;
- (id)_getNumberFromASVDictionaryForKey:(id)arg1 category:(id)arg2 default:(id)arg3;	// IMP=0x001000000004873e
@property(readonly, nonatomic) float SSVCADropInCallAnnouncementMinTTSVolume;
@property(readonly, nonatomic) float SSVCAMaximumCompensatedSpeechLevelNearField;
@property(readonly, nonatomic) unsigned long long SSVCAHistoricalVolumeBufferSize;
@property(readonly, nonatomic) float SSVCAVolumeHalfLifeSeconds;
@property(readonly, nonatomic) float SSVCADeviceDefaultMicSensitivityOffset;
@property(readonly, nonatomic) float SSVCADeviceSimpleASVOffMinTTSVolume;
@property(readonly, nonatomic) float SSVCADeviceDefaultASVOffMinTTSVolume;
@property(readonly, nonatomic) float SSVCADeviceDefaultMaxTTSVolume;
@property(readonly, nonatomic) float SSVCADeviceDefaultMinTTSVolume;
@property(readonly, nonatomic) float SSVCADeviceSimpleMaxTTSVolume;
@property(readonly, nonatomic) float SSVCADeviceSimpleMinTTSVolume;
@property(readonly, nonatomic) float SSVCAUserIntentPermanentOffsetFactorUpperBound;
@property(readonly, nonatomic) float SSVCAUserIntentPermanentOffsetFactorLowerBound;
@property(readonly, nonatomic) float SSVCAUserIntentPermanentOffsetFactorDelta;
@property(readonly, nonatomic) float SSVCAUserIntentVolumeDecreaseFactor;
@property(readonly, nonatomic) float SSVCAUserIntentVolumeIncreaseFactor;
@property(readonly, nonatomic) unsigned long long SSVCAUserIntentValidForSeconds;
@property(readonly, nonatomic) float SSVCAMaxTTSSystemVolume;
@property(readonly, nonatomic) float SSVCAMinTTSSystemVolume;
@property(readonly, nonatomic) unsigned long long SSVCADeviceSimplePreTriggerSilenceSampleCount;
@property(readonly, nonatomic) float SSVCADeviceSimpleMicSensitivityOffset;
@property(readonly, nonatomic) float SSVCADeviceSimpleDBToSystemVolSlope;
@property(readonly, nonatomic) float SSVCADeviceSimpleMaxTargetDB;
@property(readonly, nonatomic) float SSVCADeviceSimpleMinTargetDB;
@property(readonly, nonatomic) float SSVCADeviceSimpleOutputSlope;
@property(readonly, nonatomic) float SSVCADeviceSimpleOutputMaxTargetDB;
@property(readonly, nonatomic) float SSVCADeviceSimpleOutputMinTargetDB;
@property(readonly, nonatomic) float SSVCAMusicHistoricalSamplesInSeconds;
@property(readonly, nonatomic) unsigned long long SSVCADistanceResultSampleCountTolerance;
@property(readonly, nonatomic) float SSVCAExponentialDistanceHistoryDegradationFactor;
@property(readonly, nonatomic) unsigned long long SSVCADistanceResultsBufferSize;
@property(readonly, nonatomic) unsigned long long SSVCADspNumStages;
@property(readonly, nonatomic) unsigned long long SSVCADspCoefsCount;
@property(readonly, nonatomic) unsigned long long SSVCANoiseActivityHistoricalSampleCount;
@property(readonly, nonatomic) float SSVCADefaultMusicStrength;
@property(readonly, nonatomic) float SSVCADefaultSpeechStrength;
@property(readonly, nonatomic) unsigned long long SSVCAMusicResultsBufferSize;
@property(readonly, nonatomic) unsigned long long SSVCANoiseResultsBufferSize;
@property(readonly, nonatomic) float SSVCANoiseActivityThreshold;
@property(readonly, nonatomic) float SSVCAMinimumDistanceUpdateWaitPeriodSeconds;
@property(readonly, nonatomic) float SSVCADBToTTSPostTransitionMultiplier;
@property(readonly, nonatomic) float SSVCADBToTTSPostTransitionDC;
@property(readonly, nonatomic) float SSVCADBToTTSPostTransitionOffset;
@property(readonly, nonatomic) float SSVCADBToTTSPreTransitionMultiplier;
@property(readonly, nonatomic) float SSVCADBToTTSPreTransitionOffset;
@property(readonly, nonatomic) float SSVCADBToTTSTransitionPoint;
- (float);	// IMP=0x00100000000472ca
@property(readonly, nonatomic) float SSVCADBToTTSMinimumOutput;
@property(readonly, nonatomic) float SSVCASignalToSigmoidSpeechSteepness;
@property(readonly, nonatomic) float SSVCASignalToSigmoidNoiseSteepness;
@property(readonly, nonatomic) float SSVCASignalToSigmoidMusicSteepnessDeviceSimple;
@property(readonly, nonatomic) float SSVCASignalToSigmoidMusicSteepnessDeviceDefault;
@property(readonly, nonatomic) float SSVCASignalToSigmoidSpeechHOffset;
@property(readonly, nonatomic) float SSVCASignalToSigmoidMusicHOffsetDeviceSimple;
@property(readonly, nonatomic) float SSVCASignalToSigmoidMusicHOffsetDeviceDefault;
@property(readonly, nonatomic) float SSVCASignalToSigmoidNoiseHOffset;
@property(readonly, nonatomic) float SSVCASignalToSigmoidSpeechVOffset;
@property(readonly, nonatomic) float SSVCASignalToSigmoidMusicVOffsetDeviceSimple;
@property(readonly, nonatomic) float SSVCASignalToSigmoidMusicVOffsetDeviceDefault;
@property(readonly, nonatomic) float SSVCASignalToSigmoidNoiseVOffset;
@property(readonly, nonatomic) float SSVCASignalToSigmoidSpeechVSpread;
@property(readonly, nonatomic) float SSVCASignalToSigmoidMusicVSpreadDeviceSimple;
@property(readonly, nonatomic) float SSVCASignalToSigmoidMusicVSpreadDeviceDefault;
@property(readonly, nonatomic) float SSVCASignalToSigmoidNoiseVSpread;
@property(readonly, nonatomic) float SSVCASignalToSigmoidSpeechDilationFactor;
@property(readonly, nonatomic) float SSVCASignalToSigmoidMusicDilationFactorDeviceSimple;
@property(readonly, nonatomic) float SSVCASignalToSigmoidMusicDilationFactorDeviceDefault;
@property(readonly, nonatomic) float SSVCASignalToSigmoidNoiseDilationFactor;
@property(readonly, nonatomic) float SSVCADecibelToLinearLogBase;
@property(readonly, nonatomic) float SSVCALinearToDecibelConstantMultiplier;
@property(readonly, nonatomic) float SSVCAMaximumLinearSoundLevel;
@property(readonly, nonatomic) float SSVCAMinimumLinearSoundLevel;
@property(readonly, nonatomic) double SSVCADistanceModelConfidenceThreshold;
@property(readonly, nonatomic) float SSVCASpeakerDistanceNearBoostFactor;
@property(readonly, nonatomic) float SSVCASpeakerDistanceMidBoostFactor;
@property(readonly, nonatomic) float SSVCASpeakerDistanceFarBoostFactor;
@property(readonly, nonatomic) int SSVCANoiseActivityCountThreshold;
@property(readonly, nonatomic) float SSVCADefaultOutputTTSVolume;
@property(readonly, nonatomic) unsigned int SSVCAAnnouncementStatusFetchTimeoutMs;
@property(readonly, nonatomic) float SSVCADefaultZeroFloatingPointValue;
@property(readonly, nonatomic) float SSVCAListenPollingIntervalAtStartInSeconds;
@property(readonly, nonatomic) int SSVCADistanceInputBufferDurationSeconds;
@property(readonly, nonatomic) float SSVCAVoiceTriggerInitialSilenceDurationSeconds;
@property(readonly, nonatomic) int SSVCASmartSiriVolumeSyncedMetricLogsToRetain;
@property(readonly, nonatomic) int SSVCASmartSiriVolumeUnsyncedMetricLogsToRetain;
@property(readonly, nonatomic) float SSVCAVoiceTriggerBasedTTSValidForSeconds;
@property(readonly, nonatomic) unsigned int SSVCAMaxFrameSize;
@property(readonly, nonatomic) unsigned long long SSVDistanceChannelBitset;
@property(readonly, nonatomic) unsigned long long SSVLKFSChannelBitset;
@property(readonly, nonatomic) unsigned long long SSVNoiseLevelChannelBitset;
@property(readonly, nonatomic) float SSVNoiseWeight;
@property(readonly, nonatomic) float SSVTTSVolumeUpperLimitDB;
@property(readonly, nonatomic) float SSVTTSVolumeLowerLimitDB;
@property(readonly, nonatomic) float SSVUserOffsetOutputRangeHigh;
@property(readonly, nonatomic) float SSVUserOffsetOutputRangeLow;
@property(readonly, nonatomic) float SSVUserOffsetInputRangeHigh;
@property(readonly, nonatomic) float SSVUserOffsetInputRangeLow;
@property(readonly, nonatomic) float SSVLKFSTTSMappingOutputRangeHigh;
@property(readonly, nonatomic) float SSVLKFSTTSMappingOutputRangeLow;
@property(readonly, nonatomic) float SSVLKFSTTSMappingInputRangeHigh;
@property(readonly, nonatomic) float SSVLKFSTTSMappingInputRangeLow;
@property(readonly, nonatomic) float SSVNoiseTTSMappingOutputRangeHigh;
@property(readonly, nonatomic) float SSVNoiseTTSMappingOutputRangeLow;
@property(readonly, nonatomic) float SSVNoiseTTSMappingInputRangeHigh;
@property(readonly, nonatomic) float SSVNoiseTTSMappingInputRangeLow;
@property(readonly, nonatomic) float SSVLKFSMicSensitivityOffset;
@property(readonly, nonatomic) float SSVLKFSTimeConstant;
@property(readonly, nonatomic) float SSVNoiseMicSensitivityOffsetDeviceSimple;
@property(readonly, nonatomic) float SSVNoiseMicSensitivityOffset;
@property(readonly, nonatomic) float SSVNoiseTimeConstant;
@property(readonly, nonatomic) unsigned int SSVLKFSUpperPercentile;
@property(readonly, nonatomic) unsigned int SSVLKFSLowerPercentile;
@property(readonly, nonatomic) unsigned int SSVNoiseUpperPercentile;
@property(readonly, nonatomic) unsigned int SSVNoiseLowerPercentile;
@property(readonly, nonatomic) unsigned int SSVEnergyBufferSize;
- (id)_adaptiveSiriVolumeDictionary;	// IMP=0x00100000000452be
- (id)_userSelectedPhraseTypeToRTModelPhraseType:(id)arg1;	// IMP=0x00100000000699fa
- (_Bool)_allowMultiPhrase:(id)arg1 forceSkipEngineVersionCheck:(_Bool)arg2;	// IMP=0x001000000006983d
- (id)_rtModelWithRequestOptions:(id)arg1 accessoryBlobs:(id)arg2;	// IMP=0x0010000000069551
- (id)_getFilteredAccessoryRTBlobListForRequestOptions:(id)arg1 accessoryBlobs:(id)arg2 forceSkipEngineVersionCheck:(_Bool)arg3;	// IMP=0x0010000000069354
- (id)_splitBlobsByPhraseType:(id)arg1;	// IMP=0x0010000000068f55
- (id)_buildRTModelWithBlobConfig:(id)arg1 requestOptions:(id)arg2;	// IMP=0x001000000006892d
- (id)_sha256:(id)arg1;	// IMP=0x0010000000068875
- (id)_sha1:(id)arg1;	// IMP=0x001000000006878a
- (id)localeMapWithName:(id)arg1;	// IMP=0x0010000000068589
- (id)rtModelLocaleMapWithModelType:(long long)arg1;	// IMP=0x0010000000068555
- (id)remoraRTModelLocaleMap;	// IMP=0x001000000006853c
- (id)jarvisRTModelLocaleMap;	// IMP=0x0010000000068523
- (id)hearstRTModelLocaleMap;	// IMP=0x001000000006850a
- (id)hearstRTModelWithRequestOptions:(id)arg1;	// IMP=0x00100000000684f8
- (id)rtModelWithRequestOptions:(id)arg1;	// IMP=0x0010000000068303
- (id)latestHearstRTModelWithRequestOptions:(id)arg1;	// IMP=0x0010000000067e2c
- (id)RTModelWithFallbackLanguage:(id)arg1;	// IMP=0x0010000000067dc6
- (id)createRTModelWithLocale:(id)arg1;	// IMP=0x0010000000067d3d
@property(readonly, nonatomic) _Bool useTDTIEnrollment;
@property(readonly, nonatomic) _Bool useSpeakerRecognitionAsset;
@property(readonly, nonatomic) _Bool containsMultiUserThresholds;
@property(readonly, nonatomic) _Bool satImplicitTrainingEnabled;
@property(readonly, nonatomic) NSString *keywordDetectorNDAPIConfigFilePath;
@property(readonly, nonatomic) NSString *keywordDetectorQuasarConfigFilePath;
@property(readonly, nonatomic) NSString *voiceProfilePruningCookie;
@property(readonly, nonatomic) unsigned long long maxAllowedEnrollmentUtterances;
@property(readonly, nonatomic) unsigned long long pruningNumRetentionUtterance;
@property(readonly, nonatomic) float pruningThresholdPSR;
@property(readonly, nonatomic) float pruningThresholdSAT;
@property(readonly, nonatomic) float pruningExplicitUttThresholdPSR;
@property(readonly, nonatomic) float pruningExplicitUttThresholdSAT;
@property(readonly, nonatomic) float satVTImplicitThreshold;
@property(readonly, nonatomic) float satImplicitProfileDeltaThreshold;
@property(readonly, nonatomic) float satImplicitProfileThreshold;
@property(readonly, nonatomic) float psrCombinationWeight;
@property(readonly, nonatomic) long long multiUserDeltaScoreThreshold;
- (long long)multiUserDeltaScoreThresholdForPhId:(unsigned long long)arg1;	// IMP=0x00100000000b34cf
@property(readonly, nonatomic) long long multiUserConfidentScoreThreshold;
- (long long)multiUserConfidentScoreThresholdForPhId:(unsigned long long)arg1;	// IMP=0x00100000000b3393
@property(readonly, nonatomic) long long multiUserHighScoreThreshold;
- (long long)multiUserHighScoreThresholdForPhId:(unsigned long long)arg1;	// IMP=0x00100000000b3257
@property(readonly, nonatomic) long long multiUserLowScoreThreshold;
- (long long)multiUserLowScoreThresholdForPhId:(unsigned long long)arg1;	// IMP=0x00100000000b311b
@property(readonly, nonatomic) float satScoreThreshold;
- (float)satScoreThresholdForPhId:(unsigned long long)arg1;	// IMP=0x00100000000b2fe5
- (id)getPhraseConfig:(unsigned long long)arg1;	// IMP=0x00100000000b2ed5
@property(readonly, nonatomic) _Bool containsSpeakerRecognitionCategory;
@property(readonly, nonatomic) float eagerMitigationDurationThreshold;
@property(readonly, nonatomic) _Bool isJSSupported;
@property(readonly, nonatomic) _Bool isMagusSupported;
- (_Bool)isHSVoiceTrigger:(id)arg1;	// IMP=0x0010000000108c6a
- (_Bool)isJSVoiceTrigger:(id)arg1;	// IMP=0x0010000000108bbf
- (id)getCategoryKeyWithRecordCtx:(id)arg1;	// IMP=0x0010000000108b06
- (_Bool)shouldRunSpkrIdForCategory:(id)arg1;	// IMP=0x0010000000108ae4
- (id)nldaConfigFileForCategory:(id)arg1;	// IMP=0x0010000000108a32
- (id)mitigationConfigFileForCategory:(id)arg1;	// IMP=0x0010000000108980
@property(readonly, nonatomic) unsigned long long allowListWordCountThreshold;
@property(readonly, nonatomic) NSString *allowKeywordsFile;
- (id)nldaConfigFile;	// IMP=0x00100000001087e1
@property(readonly, nonatomic) float mitigationModelDefaultELFusionScore;
@property(readonly, nonatomic) float mitigationModelDefaultAFTMScore;
- (id)mitigatonConfigFile;	// IMP=0x0010000000108682
@property(readonly, nonatomic) float attendingTimeoutValueInSecs;
@property(readonly, nonatomic) long long numOfConsecutiveBoronActivationThreshold;
@property(readonly, nonatomic) _Bool useGazeSignal;
@property(readonly, nonatomic) float startOfSpeechPrependAudioDuration;
@property(readonly, nonatomic) float startOfSpeechThresholdDuration;
@property(readonly, nonatomic) NSString *lipMovementVADModelFile;
@property(readonly, nonatomic) NSString *gazeDetectionModelFile;
@property(readonly, nonatomic) NSString *mimVotingConfigFile;

// Remaining properties
@property(readonly, nonatomic) float SSVCADBToTTSMaximumOutput;
@property(readonly, nonatomic) float bargeInRequestDeferralDurationInSecs;
@end


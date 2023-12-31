//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AFPowerContextClient, NSString;
@protocol AFRequestDispatcher;

@interface ADRequestDispatcherService
{
    id <AFRequestDispatcher> _requestDispatcher;	// 8 = 0x8
    NSString *_defaultDictationAssistantId;	// 16 = 0x10
    AFPowerContextClient *_powerContext;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000001e1725
- (void)postMUXTestResultSelectedWithAssistantId:(id)arg1 requestId:(id)arg2 rcId:(id)arg3 voiceIdConfidenceScores:(id)arg4;	// IMP=0x00100000001e1601
- (void)postMUXTestResultCandidateWithAssistantId:(id)arg1 requestId:(id)arg2 rcId:(id)arg3 sharedUserIdToSpeechRecognitionDict:(id)arg4 voiceIdConfidenceScores:(id)arg5;	// IMP=0x00100000001e13c5
- (void)postTestResultSelectedWithAssistantId:(id)arg1 requestId:(id)arg2 rcId:(id)arg3;	// IMP=0x00100000001e13a8
- (void)postTestResultCandidateWithAssistantId:(id)arg1 requestId:(id)arg2 rcId:(id)arg3 recognitionSausage:(id)arg4;	// IMP=0x00100000001e138b
- (void)startTestSpeechRequestWithAssistantId:(id)arg1 requestId:(id)arg2 enableASR:(_Bool)arg3 inputOrigin:(id)arg4 location:(id)arg5 jitContext:(id)arg6 overrideModelPath:(id)arg7;	// IMP=0x00100000001e136e
- (void)startMultiUserTestRequestWithAssistantId:(id)arg1 requestId:(id)arg2 inputOrigin:(id)arg3 utterance:(id)arg4 expectedSelectedSharedUserId:(id)arg5 voiceIdConfidenceScores:(id)arg6;	// IMP=0x00100000001e1142
- (void)sendMultiUserInfoWithDeviceAssistantId:(id)arg1 multiUserInfo:(id)arg2;	// IMP=0x00100000001e0f5d
- (id)_getDefaultAssistantIdForAssistantId:(id)arg1;	// IMP=0x00100000001e0e0f
- (void)resumeDictationRecognitionWithAssistantId:(id)arg1 requestId:(id)arg2 prefixText:(id)arg3 postfixText:(id)arg4 selectedText:(id)arg5;	// IMP=0x00100000001e0cb0
- (void)pauseDictationRecognitionWithAssistantId:(id)arg1 requestId:(id)arg2;	// IMP=0x00100000001e0ba3
- (void)endDictationSessionWithAssistantId:(id)arg1;	// IMP=0x00100000001e0a4b
- (void)startDictationRequestWithAssistantId:(id)arg1 requestId:(id)arg2 inputOrigin:(id)arg3 dictationOptions:(id)arg4;	// IMP=0x00100000001e088a
- (void)startDictationSessionWithAssistantId:(id)arg1 languageCode:(id)arg2 recognitionOnDevice:(_Bool)arg3 shouldClassifyIntent:(_Bool)arg4 understandingOnDevice:(_Bool)arg5;	// IMP=0x00100000001e051d
- (void)endSessionWithAssistantId:(id)arg1;	// IMP=0x00100000001e0444
- (void)startSessionWithAssistantId:(id)arg1 languageCode:(id)arg2 understandingOnDevice:(_Bool)arg3 sharedUserId:(id)arg4;	// IMP=0x00100000001e02dd
- (void)prewarmWithAssistantId:(id)arg1 languageCode:(id)arg2 prewarmOptions:(unsigned long long)arg3 sharedUserId:(id)arg4;	// IMP=0x00100000001e023e
- (void)startSessionIfNeededForAssistantId:(id)arg1;	// IMP=0x00100000001dff8d
- (void)sendRequestContextWithAssistantId:(id)arg1 requestId:(id)arg2 audioSource:(id)arg3 audioDestination:(id)arg4 responseMode:(id)arg5 isEyesFree:(_Bool)arg6 isVoiceTriggerEnabled:(_Bool)arg7 isTextToSpeechEnabled:(_Bool)arg8 isTriggerlessFollowup:(_Bool)arg9 bargeInModes:(id)arg10 approximatePreviousTTSInterval:(id)arg11 deviceRestrictions:(id)arg12 voiceTriggerEventInfo:(id)arg13 voiceAudioSessionId:(unsigned int)arg14 isSystemApertureEnabled:(_Bool)arg15 isInAmbient:(_Bool)arg16;	// IMP=0x00100000001dfafc
- (void)sendRequestContextWithAssistantId:(id)arg1 requestId:(id)arg2 audioSource:(id)arg3 audioDestination:(id)arg4 responseMode:(id)arg5 isEyesFree:(_Bool)arg6 isVoiceTriggerEnabled:(_Bool)arg7 isTextToSpeechEnabled:(_Bool)arg8 isTriggerlessFollowup:(_Bool)arg9 bargeInModes:(id)arg10 approximatePreviousTTSInterval:(id)arg11 deviceRestrictions:(id)arg12 voiceTriggerEventInfo:(id)arg13 voiceAudioSessionId:(unsigned int)arg14 isSystemApertureEnabled:(_Bool)arg15;	// IMP=0x00100000001dfa6d
- (void)startUnderstandingOnServerTextRequestWithAssistantId:(id)arg1 requestId:(id)arg2 inputOrigin:(id)arg3 utterance:(id)arg4;	// IMP=0x00100000001df92c
- (void)startTextRequestWithAssistantId:(id)arg1 requestId:(id)arg2 inputOrigin:(id)arg3 utterance:(id)arg4 audioSource:(id)arg5 audioDestination:(id)arg6 responseMode:(id)arg7 isEyesFree:(_Bool)arg8 isVoiceTriggerEnabled:(_Bool)arg9 isTextToSpeechEnabled:(_Bool)arg10 isTriggerlessFollowup:(_Bool)arg11 bargeInModes:(id)arg12 approximatePreviousTTSInterval:(id)arg13 deviceRestrictions:(id)arg14 voiceTriggerEventInfo:(id)arg15 voiceAudioSessionId:(unsigned int)arg16 isSystemApertureEnabled:(_Bool)arg17 isInAmbient:(_Bool)arg18;	// IMP=0x00100000001df601
- (void)startTextRequestWithAssistantId:(id)arg1 requestId:(id)arg2 inputOrigin:(id)arg3 utterance:(id)arg4;	// IMP=0x00100000001df54f
- (void)startDirectActionRequestWithAssistantId:(id)arg1 requestId:(id)arg2 inputOrigin:(id)arg3 directAction:(id)arg4 requestExecutionParameters:(id)arg5;	// IMP=0x00100000001df475
- (void)startDirectActionRequestWithAssistantId:(id)arg1 requestId:(id)arg2 inputOrigin:(id)arg3 utterance:(id)arg4 directAction:(id)arg5 requestExecutionParameters:(id)arg6 audioSource:(id)arg7 audioDestination:(id)arg8 responseMode:(id)arg9 isEyesFree:(_Bool)arg10 isVoiceTriggerEnabled:(_Bool)arg11 isTextToSpeechEnabled:(_Bool)arg12 isTriggerlessFollowup:(_Bool)arg13 bargeInModes:(id)arg14 approximatePreviousTTSInterval:(id)arg15 deviceRestrictions:(id)arg16 voiceTriggerEventInfo:(id)arg17 voiceAudioSessionId:(unsigned int)arg18 isSystemApertureEnabled:(_Bool)arg19 isInAmbient:(_Bool)arg20;	// IMP=0x00100000001df079
- (void)startUnderstandingOnServerRequestWithAssistantId:(id)arg1 requestId:(id)arg2 inputOrigin:(id)arg3;	// IMP=0x00100000001defe2
- (void)startCorrectionSpeechRequestWithAssistantId:(id)arg1 requestId:(id)arg2 inputOrigin:(id)arg3 utterance:(id)arg4 previousUtterance:(id)arg5;	// IMP=0x00100000001defc5
- (void)startCorrectionSpeechRequestWithAssistantId:(id)arg1 requestId:(id)arg2 inputOrigin:(id)arg3 utterance:(id)arg4 previousUtterance:(id)arg5 audioSource:(id)arg6 audioDestination:(id)arg7 responseMode:(id)arg8 isEyesFree:(_Bool)arg9 isVoiceTriggerEnabled:(_Bool)arg10 isTextToSpeechEnabled:(_Bool)arg11 isTriggerlessFollowup:(_Bool)arg12 bargeInModes:(id)arg13 approximatePreviousTTSInterval:(id)arg14 deviceRestrictions:(id)arg15 voiceTriggerEventInfo:(id)arg16 voiceAudioSessionId:(unsigned int)arg17 isSystemApertureEnabled:(_Bool)arg18 isInAmbient:(_Bool)arg19;	// IMP=0x00100000001dec4f
- (void)startLocalRequestWithAssistantId:(id)arg1 requestId:(id)arg2 inputOrigin:(id)arg3;	// IMP=0x00100000001dec32
- (void)sendMultiUserInfoWithAssistantId:(id)arg1;	// IMP=0x00100000001dea44
- (void)startSpeechRequestWithAssistantId:(id)arg1 requestId:(id)arg2 inputOrigin:(id)arg3 location:(id)arg4 asrOnServer:(_Bool)arg5;	// IMP=0x00100000001de82f
- (void)_logPowerContextForRequest:(id)arg1;	// IMP=0x00100000001de5cd
- (void)requestFailedWithAssistantId:(id)arg1 requestId:(id)arg2;	// IMP=0x00100000001de49a
- (void)requestCompletedWithAssistantId:(id)arg1 requestId:(id)arg2;	// IMP=0x00100000001de42e
- (void)handleCommand:(id)arg1 forDomain:(id)arg2 executionContext:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00100000001de2cf
- (void)cancelOperationsForRequestID:(id)arg1 forAssistantID:(id)arg2 fromRemote:(_Bool)arg3;	// IMP=0x00100000001de1b4
- (void)clearDomainObjects;	// IMP=0x00100000001de1ae
- (void)resetExternalResources;	// IMP=0x00100000001de1a8
- (void)preheatDomain:(id)arg1;	// IMP=0x00100000001de1a2
- (_Bool)implementsCommand:(id)arg1 forDomain:(id)arg2;	// IMP=0x00100000001de185
- (id)commandsForDomain:(id)arg1;	// IMP=0x00100000001de168
- (id)domains;	// IMP=0x00100000001de14b
- (id)handle;	// IMP=0x00100000001de142
- (id)initWithRequestDispatcher:(id)arg1;	// IMP=0x00100000001de09c
- (id)initWithBridgeConnectionListeners:(id)arg1;	// IMP=0x00100000001ddfc3
- (id)init;	// IMP=0x00100000001ddf83

@end


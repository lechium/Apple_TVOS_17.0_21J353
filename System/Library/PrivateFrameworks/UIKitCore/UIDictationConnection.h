//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFDictationConnection, AFDictationOptions, NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, UIDictationConnectionDelegate, UIDictationConnectionTokenFilterProtocol;

__attribute__((visibility("hidden")))
@interface UIDictationConnection : NSObject
{
    _Bool _receivedMultilingualResultsCommand;	// 8 = 0x8
    _Bool _offlineOnly;	// 9 = 0x9
    _Bool _ignoreSpeechRecognitionResults;	// 10 = 0xa
    _Bool _lowConfidenceAboutLanguageDetection;	// 11 = 0xb
    unsigned int _charBeforeInsertionPointOnDictationStart;	// 12 = 0xc
    unsigned int _charAfterInsertionPointOnDictationStart;	// 16 = 0x10
    id <UIDictationConnectionDelegate> _delegate;	// 24 = 0x18
    id <UIDictationConnectionTokenFilterProtocol> _tokenFilter;	// 32 = 0x20
    AFDictationOptions *_dictationOptions;	// 40 = 0x28
    AFDictationConnection *_connection;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_analyticsQueue;	// 56 = 0x38
    NSString *_lastUsedPrimaryLanguage;	// 64 = 0x40
    NSString *_lastUsedDetectedLanguage;	// 72 = 0x48
    NSMutableArray *_lastUsedTopLanguages;	// 80 = 0x50
    NSMutableDictionary *_lastReceivedPartials;	// 88 = 0x58
}

+ (_Bool)hasSpeechRecognitionPauseAckPhrases:(id)arg1;	// IMP=0x0010000000ad9fbc
+ (id)interpretationFromSpeechTokens:(id)arg1 startIndex:(unsigned long long)arg2 filterBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000ad9ddb
+ (void)_updateFromGlobalOptions:(id)arg1;	// IMP=0x0010000000ad67e7
+ (void)afDelegate:(id)arg1 didReceiveSearchResults:(id)arg2 recognizedText:(id)arg3 stable:(_Bool)arg4 final:(_Bool)arg5;	// IMP=0x0010000000ad67d0
+ (_Bool)dictationRestricted;	// IMP=0x0010000000ad66ad
+ (void)cacheSupportedDictationLanguages;	// IMP=0x0010000000ad6344
+ (_Bool)dictationIsSupportedForLanguageCode:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000ad616a
+ (_Bool)isDictationAvailable;	// IMP=0x0010000000ad6109
+ (id)analytics;	// IMP=0x0010000000ad5acb
+ (id)_log;	// IMP=0x0010000000ad58d0
- (void).cxx_destruct;	// IMP=0x0000000000add861
@property(retain, nonatomic) NSMutableDictionary *lastReceivedPartials; // @synthesize lastReceivedPartials=_lastReceivedPartials;
@property(nonatomic) unsigned int charAfterInsertionPointOnDictationStart; // @synthesize charAfterInsertionPointOnDictationStart=_charAfterInsertionPointOnDictationStart;
@property(nonatomic) unsigned int charBeforeInsertionPointOnDictationStart; // @synthesize charBeforeInsertionPointOnDictationStart=_charBeforeInsertionPointOnDictationStart;
@property(nonatomic) _Bool lowConfidenceAboutLanguageDetection; // @synthesize lowConfidenceAboutLanguageDetection=_lowConfidenceAboutLanguageDetection;
@property(retain, nonatomic) NSMutableArray *lastUsedTopLanguages; // @synthesize lastUsedTopLanguages=_lastUsedTopLanguages;
@property(copy, nonatomic) NSString *lastUsedDetectedLanguage; // @synthesize lastUsedDetectedLanguage=_lastUsedDetectedLanguage;
@property(copy, nonatomic) NSString *lastUsedPrimaryLanguage; // @synthesize lastUsedPrimaryLanguage=_lastUsedPrimaryLanguage;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *analyticsQueue; // @synthesize analyticsQueue=_analyticsQueue;
@property(nonatomic) _Bool ignoreSpeechRecognitionResults; // @synthesize ignoreSpeechRecognitionResults=_ignoreSpeechRecognitionResults;
@property(nonatomic) _Bool offlineOnly; // @synthesize offlineOnly=_offlineOnly;
@property(retain, nonatomic) AFDictationConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) AFDictationOptions *dictationOptions; // @synthesize dictationOptions=_dictationOptions;
@property(nonatomic) _Bool receivedMultilingualResultsCommand; // @synthesize receivedMultilingualResultsCommand=_receivedMultilingualResultsCommand;
@property(nonatomic) __weak id <UIDictationConnectionTokenFilterProtocol> tokenFilter; // @synthesize tokenFilter=_tokenFilter;
@property(nonatomic) __weak id <UIDictationConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dictationConnection:(id)arg1 didRecognizeVoiceCommandCandidatePackage:(id)arg2 nluResult:(id)arg3;	// IMP=0x0000000000add478
- (void)dictationConnection:(id)arg1 didRecognizeFinalResultCandidatePackage:(id)arg2;	// IMP=0x0000000000add2d0
- (void)dictationConnectionDidPauseRecognition:(id)arg1;	// IMP=0x0000000000add20e
- (void)dictationConnection:(id)arg1 didReceiveSearchResults:(id)arg2 recognizedText:(id)arg3 stable:(_Bool)arg4 final:(_Bool)arg5;	// IMP=0x0000000000add164
- (void)dictationConnnectionDidChangeAvailability:(id)arg1;	// IMP=0x0000000000add123
- (void)dictationConnectionSpeechRecognitionDidSucceed:(id)arg1;	// IMP=0x0000000000add0b8
- (void)dictationConnection:(id)arg1 didRecognizeMultilingualSpeech:(id)arg2;	// IMP=0x0000000000adc067
- (void)dictationConnection:(id)arg1 didRecognizePartialPackage:(id)arg2 nluResult:(id)arg3 languageModel:(id)arg4;	// IMP=0x0000000000adbeb2
- (void)dictationConnection:(id)arg1 didRecognizePhrases:(id)arg2 languageModel:(id)arg3 correctionIdentifier:(id)arg4;	// IMP=0x0000000000adba25
- (id)dictationSerializedResultWithPhrases:(id)arg1 languageModel:(id)arg2;	// IMP=0x0000000000adb5f4
- (void)dictationConnection:(id)arg1 didRecognizeTokens:(id)arg2 languageModel:(id)arg3;	// IMP=0x0000000000adae0e
- (void)dictationConnectionSpeechRecordingDidCancel:(id)arg1;	// IMP=0x0000000000adada3
- (void)dictationConnectionSpeechRecordingDidEnd:(id)arg1;	// IMP=0x0000000000adad62
- (void)dictationConnection:(id)arg1 speechRecognitionDidFail:(id)arg2;	// IMP=0x0000000000adaac3
- (void)dictationConnection:(id)arg1 speechRecordingDidFail:(id)arg2;	// IMP=0x0000000000ada985
- (void)dictationConnection:(id)arg1 didBeginLocalRecognitionWithModelInfo:(id)arg2;	// IMP=0x0000000000ada918
- (void)dictationConnection:(id)arg1 speechRecordingDidBeginWithOptions:(id)arg2;	// IMP=0x0000000000ada8ab
- (void)dictationConnectionSpeechRecordingDidBegin:(id)arg1;	// IMP=0x0000000000ada86a
- (void)dictationConnectionSpeechRecordingWillBegin:(id)arg1;	// IMP=0x0000000000ada829
- (void)dictationConnection:(id)arg1 languageDetectorFailedWithError:(id)arg2;	// IMP=0x0000000000ada7df
- (void)dictationConnection:(id)arg1 didDetectLanguage:(id)arg2 confidenceScores:(id)arg3 isConfident:(_Bool)arg4;	// IMP=0x0000000000ada1e4
- (_Bool)isSecureInput;	// IMP=0x0000000000ad9fb3
- (void)preheat;	// IMP=0x0000000000ad9d9e
- (void)synthesizeDidRecognizePhrases:(id)arg1 languageModel:(id)arg2 correctionIdentifier:(id)arg3;	// IMP=0x0000000000ad9cfb
- (void)synthesizeDidRecognizeTokens:(id)arg1 languageModel:(id)arg2;	// IMP=0x0000000000ad9c6d
- (void)logDidAcceptReplacement:(id)arg1 replacementLanguageCode:(id)arg2 originalText:(id)arg3 correctionIdentifier:(id)arg4 interactionIdentifier:(id)arg5;	// IMP=0x0000000000ad98bf
- (void)logDidAcceptDictationResult:(id)arg1 reason:(id)arg2 result:(id)arg3 correctionIdentifier:(id)arg4;	// IMP=0x0000000000ad9226
- (void)logDidSelectAlternative:(id)arg1 correctionIdentifier:(id)arg2 interactionIdentifier:(id)arg3;	// IMP=0x0000000000ad8fa7
- (void)logDidShowAlternatives:(id)arg1 correctionIdentifier:(id)arg2 interactionIdentifier:(id)arg3;	// IMP=0x0000000000ad8d28
- (void)cancelSpeech;	// IMP=0x0000000000ad89ea
- (void)stopSpeech:(id)arg1 activationType:(unsigned long long)arg2 result:(id)arg3 suppressAlert:(_Bool)arg4;	// IMP=0x0000000000ad876e
- (void)_startWithOptions:(id)arg1;	// IMP=0x0000000000ad7b89
- (id)_initializeWithOptions:(id)arg1;	// IMP=0x0000000000ad7b20
- (void)startForFileAtURL:(id)arg1 forLanguage:(id)arg2;	// IMP=0x0000000000ad7a00
- (void)start;	// IMP=0x0000000000ad78c2
- (id)_createConnectionOptions;	// IMP=0x0000000000ad776a
- (id)_speechOptions:(id)arg1;	// IMP=0x0000000000ad7588
- (long long)speechEventTypeForDictationActivationType:(unsigned long long)arg1;	// IMP=0x0000000000ad7564
- (id)_dictationOptions:(id)arg1;	// IMP=0x0000000000ad6dcc
- (id)languageDetectionUserContext;	// IMP=0x0000000000ad6935
- (void)requestOfflineDictationSupportForLanguage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000ad6611
- (void)suppressLowStorageNotificationForLanguage:(id)arg1 suppress:(_Bool)arg2;	// IMP=0x0000000000ad6563
- (void)resumeSpeechRecognitionWithPrefixText:(id)arg1 postfixText:(id)arg2 selectedText:(id)arg3;	// IMP=0x0000000000ad64c6
- (void)pauseSpeechRecognition;	// IMP=0x0000000000ad63d5
- (void)endSession;	// IMP=0x0000000000ad6398
- (float)averagePower;	// IMP=0x0000000000ad611a
- (void)sendSpeechCorrection:(id)arg1 interactionIdentifier:(id)arg2;	// IMP=0x0000000000ad5f50
- (void)sendSpeechCorrection:(id)arg1 forIdentifier:(id)arg2;	// IMP=0x0000000000ad5d94
- (_Bool)dictationIsAvailableForLanguage:(id)arg1;	// IMP=0x0000000000ad5ce5
- (void)restartDictation;	// IMP=0x0000000000ad5c4b
- (void)cancelAvailabilityMonitoring;	// IMP=0x0000000000ad5c0e
- (void)beginAvailabilityMonitoring;	// IMP=0x0000000000ad5bd1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


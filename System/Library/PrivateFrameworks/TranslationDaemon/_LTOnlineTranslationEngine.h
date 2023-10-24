//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFSettingsConnection, FTBlazarService, FTMtService, NSDate, NSOperationQueue, NSString, _LTBatchTranslationResponseHandler, _LTDSELFLoggingManager, _LTOspreySpeechTranslationSession, _LTTextToSpeechCache;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface _LTOnlineTranslationEngine : NSObject
{
    NSOperationQueue *_sendQueue;	// 8 = 0x8
    FTMtService *_service;	// 16 = 0x10
    FTBlazarService *_blazarService;	// 24 = 0x18
    FTBlazarService *_siriService;	// 32 = 0x20
    FTBlazarService *_systemService;	// 40 = 0x28
    FTBlazarService *_webTaskService;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_translationQueue;	// 56 = 0x38
    _LTOspreySpeechTranslationSession *_speechSession;	// 64 = 0x40
    _LTBatchTranslationResponseHandler *batchTranslationResponseHandler;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_timerQueue;	// 80 = 0x50
    NSObject<OS_dispatch_source> *_serverTimer;	// 88 = 0x58
    NSDate *_startTime;	// 96 = 0x60
    AFSettingsConnection *_assistantSettingsConnection;	// 104 = 0x68
    long long _dataSharingOptInStatus;	// 112 = 0x70
    _LTDSELFLoggingManager *_selfLoggingManager;	// 120 = 0x78
    _LTTextToSpeechCache *_ttsCache;	// 128 = 0x80
    NSObject<OS_dispatch_queue> *_serverQueue;	// 136 = 0x88
}

+ (id)blazarServiceWithBundleID:(id)arg1;	// IMP=0x001000000004c7ad
+ (void)initialize;	// IMP=0x001000000004c4e6
- (void).cxx_destruct;	// IMP=0x0000000000051809
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serverQueue; // @synthesize serverQueue=_serverQueue;
@property(retain, nonatomic) _LTTextToSpeechCache *ttsCache; // @synthesize ttsCache=_ttsCache;
- (void)cancelSpeechTranslation;	// IMP=0x00000000000516e8
- (void)_speechSessionCompletedWithError:(id)arg1;	// IMP=0x0000000000051615
- (void)startSpeechTranslationWithContext:(id)arg1 delegate:(id)arg2;	// IMP=0x0000000000051236
- (_Bool)_hasOngoingSpeechSession;	// IMP=0x00000000000511cf
- (void)endAudio;	// IMP=0x00000000000511b9
- (void)endpoint;	// IMP=0x00000000000511a3
- (void)addSpeechAudioData:(id)arg1;	// IMP=0x000000000005118d
- (void)setLanguagesRecognized:(id)arg1 context:(id)arg2;	// IMP=0x0000000000051177
- (void)startTextToSpeechTranslationWithContext:(id)arg1 text:(id)arg2 delegate:(id)arg3;	// IMP=0x0000000000050c58
- (void)translate:(id)arg1 withContext:(id)arg2 paragraphResult:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000005017e
- (void)translateSentence:(id)arg1 withContext:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000004fad5
- (void)sendBatchTranslationRequestWithDelegate:(id)arg1;	// IMP=0x000000000004e9cb
- (void)_translateParagraph:(id)arg1 index:(long long)arg2 context:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000004db31
- (void)speak:(id)arg1 withContext:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000004d1e9
- (id)_tokenizeString:(id)arg1 inLocale:(id)arg2;	// IMP=0x000000000004d134
- (void)serverTimeoutFired;	// IMP=0x000000000004cfed
- (void)cancelServerTimeout;	// IMP=0x000000000004cece
- (void)updateServerTimeout;	// IMP=0x000000000004cc32
- (void)startServerTimeoutTimer;	// IMP=0x000000000004cab3
- (void)preheatAsynchronously:(_Bool)arg1 withContext:(id)arg2;	// IMP=0x000000000004caad
- (_Bool)translatesPair:(id)arg1;	// IMP=0x000000000004caa5
- (id)_serviceForTask:(long long)arg1;	// IMP=0x000000000004ca76
- (id)_webTaskService;	// IMP=0x000000000004ca24
- (id)_systemService;	// IMP=0x000000000004c9d2
- (id)_siriService;	// IMP=0x000000000004c980
- (id)_blazarService;	// IMP=0x000000000004c92e
- (id)initWithSelfLoggingManager:(id)arg1;	// IMP=0x000000000004c526

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

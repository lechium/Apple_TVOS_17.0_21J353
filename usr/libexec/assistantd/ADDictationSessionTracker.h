//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface ADDictationSessionTracker : NSObject
{
    NSMutableArray *_activeSessions;	// 8 = 0x8
    NSMutableDictionary *_activeSessionsByUUID;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000001629dc
- (void)_endAudioFileIOTransactionForReason:(id)arg1 session:(id)arg2;	// IMP=0x0010000000162860
- (void)_endSpeechRecognitionTransactionForReason:(id)arg1 session:(id)arg2;	// IMP=0x00100000001626ed
- (void)_endSessionTransactionForReason:(id)arg1 session:(id)arg2 isSpeechTransaction:(_Bool)arg3;	// IMP=0x00100000001625b7
- (void)_beginAudioFileIOTransactionForReason:(id)arg1 session:(id)arg2;	// IMP=0x001000000016236f
- (void)_beginSpeechRecognitionTransactionForReason:(id)arg1 session:(id)arg2;	// IMP=0x0010000000162141
- (id)_sessionWithUUID:(id)arg1;	// IMP=0x001000000016212b
- (id)_startedOrStartingSession;	// IMP=0x0010000000162099
- (void)_removeSession:(id)arg1;	// IMP=0x0010000000161f55
- (void)_addSession:(id)arg1;	// IMP=0x0010000000161e0e
- (void)notifyAudioFileIOTransactionStoppedForReason:(id)arg1 sessionUUID:(id)arg2;	// IMP=0x0010000000161ce9
- (void)notifySpeechRecognitionTransactionStoppedForReason:(id)arg1 sessionUUID:(id)arg2;	// IMP=0x0010000000161bc4
- (void)stopSessionForReason:(id)arg1;	// IMP=0x0010000000161b15
- (id)startSessionForReason:(id)arg1 languageCode:(id)arg2 options:(id)arg3 speechRequestOptions:(id)arg4;	// IMP=0x00100000001618ed
- (id)init;	// IMP=0x0010000000161812

@end

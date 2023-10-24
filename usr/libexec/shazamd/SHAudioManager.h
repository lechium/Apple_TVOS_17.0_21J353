//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableDictionary, NSString, SHAudioRecordingManager, SHAudioSessionManager;

@interface SHAudioManager : NSObject
{
    SHAudioRecordingManager *_audioRecordingManager;	// 8 = 0x8
    SHAudioSessionManager *_audioSessionManager;	// 16 = 0x10
    NSMutableDictionary *_recordingLogs;	// 24 = 0x18
    NSLock *_recordingLogsLock;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x00200000000091b9
- (void).cxx_destruct;	// IMP=0x0020000000009e1e
@property(readonly, nonatomic) NSLock *recordingLogsLock; // @synthesize recordingLogsLock=_recordingLogsLock;
@property(readonly, nonatomic) NSMutableDictionary *recordingLogs; // @synthesize recordingLogs=_recordingLogs;
@property(readonly, nonatomic) SHAudioSessionManager *audioSessionManager; // @synthesize audioSessionManager=_audioSessionManager;
@property(readonly, nonatomic) SHAudioRecordingManager *audioRecordingManager; // @synthesize audioRecordingManager=_audioRecordingManager;
@property(readonly, nonatomic) long long activeAssistantServiceTaps;
- (void)resetRecordingLog;	// IMP=0x0010000000009b78
- (void)audioRecordingManagerDidStopRecording:(id)arg1;	// IMP=0x0010000000009a9c
- (void)audioRecordingManagerWillStartRecording:(id)arg1;	// IMP=0x00100000000099a0
- (void)audioRecordingManager:(id)arg1 didDetachTap:(id)arg2;	// IMP=0x00100000000097fd
- (void)audioRecordingManager:(id)arg1 willAttachTap:(id)arg2;	// IMP=0x00100000000095c2
- (void)audioRecordingManager:(id)arg1 failedToStartRecorders:(id)arg2;	// IMP=0x0010000000009580
- (_Bool)recorder:(id)arg1 shouldProcessAudioBuffer:(id)arg2 atTime:(id)arg3;	// IMP=0x0010000000009538
- (void)audioSessionManager:(id)arg1 interruptionEndedWithOptions:(unsigned long long)arg2;	// IMP=0x00100000000093ad
- (void)audioSessionManager:(id)arg1 interruptionBeganWithOptions:(unsigned long long)arg2;	// IMP=0x001000000000936b
- (void)mediaServicesWereReset;	// IMP=0x00100000000092a4
- (id)initWithAudioSessionManager:(id)arg1 audioRecordingManager:(id)arg2;	// IMP=0x00100000000090b7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

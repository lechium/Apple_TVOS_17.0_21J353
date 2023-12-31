//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AWDServerConnection, NSNumber;
@protocol OS_dispatch_queue;

@interface AFDiagnostics : NSObject
{
    AWDServerConnection *_serverConnection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSNumber *_connectionStartTime;	// 24 = 0x18
    NSNumber *_voiceRecordingStartTime;	// 32 = 0x20
    NSNumber *_voiceRecordingEndTime;	// 40 = 0x28
    NSNumber *_voiceSendStartTime;	// 48 = 0x30
    NSNumber *_voiceSendEndTime;	// 56 = 0x38
}

+ (id)sharedDiagnostics;	// IMP=0x00400000001dcaec
- (void).cxx_destruct;	// IMP=0x00200000001dbe55
@property(retain, nonatomic, getter=_voiceSendEndTime, setter=_setVoiceSendEndTime:) NSNumber *voiceSendEndTime; // @synthesize voiceSendEndTime=_voiceSendEndTime;
@property(retain, nonatomic, getter=_voiceSendStartTime, setter=_setVoiceSendStartTime:) NSNumber *voiceSendStartTime; // @synthesize voiceSendStartTime=_voiceSendStartTime;
@property(retain, nonatomic, getter=_voiceRecordingEndTime, setter=_setVoiceRecordingEndTime:) NSNumber *voiceRecordingEndTime; // @synthesize voiceRecordingEndTime=_voiceRecordingEndTime;
@property(retain, nonatomic, getter=_voiceRecordingStartTime, setter=_setVoiceRecordingStartTime:) NSNumber *voiceRecordingStartTime; // @synthesize voiceRecordingStartTime=_voiceRecordingStartTime;
@property(retain, nonatomic, getter=_connectionStartTime, setter=_setConnectionStartTime:) NSNumber *connectionStartTime; // @synthesize connectionStartTime=_connectionStartTime;
@property(readonly, nonatomic, getter=_queue) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (unsigned long long)_AWDTimestampTruncatedToHourPrecision;	// IMP=0x00100000001dbd68
- (double)_currentTime;	// IMP=0x00100000001dbd11
- (void)_submitMetricWithIdentifier:(unsigned int)arg1 hotShipIdentifier:(unsigned int)arg2 hotShipTimestamp:(unsigned long long)arg3 generation:(CDUnknownBlockType)arg4;	// IMP=0x00100000001dbc52
- (void)_submitMetricWithIdentifier:(unsigned int)arg1 generation:(CDUnknownBlockType)arg2;	// IMP=0x00100000001dbaf9
@property(readonly, nonatomic, getter=_serverConnection) AWDServerConnection *serverConnection; // @synthesize serverConnection=_serverConnection;
- (unsigned long long)_durationInMillisecondsFromTime:(double)arg1 toTime:(double)arg2;	// IMP=0x00100000001dbaac
- (void)logSpeechRecognized;	// IMP=0x00100000001db98b
- (void)logNetworkAnalyzeRunWithResults:(id)arg1;	// IMP=0x00100000001db84d
- (void)logVoiceSendEnd;	// IMP=0x00100000001db72c
- (void)logVoiceSendStart;	// IMP=0x00100000001db60b
- (void)logVoiceRecordingEnd;	// IMP=0x00100000001db4ea
- (void)logVoiceRecordingStart;	// IMP=0x00100000001db3c9
- (void)logConnectionFailedWithError:(id)arg1 connectionType:(long long)arg2;	// IMP=0x00100000001db27f
- (void)logConnectionOpenWithConnectionType:(long long)arg1;	// IMP=0x00100000001db150
- (void)logConnectionStart;	// IMP=0x00100000001db02f
- (void)flush;	// IMP=0x00100000001daff3
- (id)init;	// IMP=0x00100000001daef6

@end


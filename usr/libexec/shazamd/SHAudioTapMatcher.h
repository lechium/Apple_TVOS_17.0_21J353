//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSRecursiveLock, NSString, SHAudioTap, SHMatcherRequest, SHSession;
@protocol SHAudioRecordingManager, SHMatcherDelegate;

@interface SHAudioTapMatcher : NSObject
{
    id <SHMatcherDelegate> delegate;	// 8 = 0x8
    id <SHAudioRecordingManager> _audioRecordingManager;	// 16 = 0x10
    SHAudioTap *_audioTap;	// 24 = 0x18
    SHSession *_session;	// 32 = 0x20
    NSRecursiveLock *_lock;	// 40 = 0x28
    SHMatcherRequest *_matcherRequest;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000002a450
@property(retain, nonatomic) SHMatcherRequest *matcherRequest; // @synthesize matcherRequest=_matcherRequest;
@property(readonly, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(readonly, nonatomic) SHSession *session; // @synthesize session=_session;
@property(readonly, nonatomic) SHAudioTap *audioTap; // @synthesize audioTap=_audioTap;
@property(readonly, nonatomic) id <SHAudioRecordingManager> audioRecordingManager; // @synthesize audioRecordingManager=_audioRecordingManager;
@property(nonatomic) __weak id <SHMatcherDelegate> delegate; // @synthesize delegate;
- (_Bool)shouldGenerateSpectralOutput;	// IMP=0x001000000002a361
- (void)stopRecognitionForRequestID:(id)arg1;	// IMP=0x001000000002a126
- (void)stopRecognition;	// IMP=0x001000000002a0b8
- (void)_stop;	// IMP=0x0010000000029f34
- (_Bool)finishSessionConditionsMetForRequest:(id)arg1 response:(id)arg2;	// IMP=0x0010000000029d7c
- (void)session:(id)arg1 didProduceResponse:(id)arg2;	// IMP=0x0010000000029b93
- (_Bool)session:(id)arg1 shouldAttemptToMatchSignature:(id)arg2;	// IMP=0x0010000000029a3d
- (_Bool)isRunning;	// IMP=0x0010000000029a0a
- (id)errorResponseSignature;	// IMP=0x001000000002996a
- (void)startRecognitionForRequest:(id)arg1;	// IMP=0x0010000000029678
- (id)initWithAudioTap:(id)arg1 audioRecordingManager:(id)arg2 session:(id)arg3;	// IMP=0x0010000000029309
- (id)initWithAudioTap:(id)arg1 audioRecordingManager:(id)arg2 catalog:(id)arg3;	// IMP=0x0010000000029258
- (id)initWithAudioTap:(id)arg1 sessionDriver:(id)arg2 audioRecordingManager:(id)arg3 catalog:(id)arg4;	// IMP=0x001000000002915f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SHAudioTap, SHMatcherRequest;
@protocol SHAudioRecordingManager, SHMatcherDelegate, SHSessionDriver;

@interface SHSignatureGeneratorMatcher : NSObject
{
    id <SHMatcherDelegate> _delegate;	// 8 = 0x8
    SHAudioTap *_tap;	// 16 = 0x10
    id <SHSessionDriver> _sessionDriver;	// 24 = 0x18
    id <SHAudioRecordingManager> _audioRecordingManager;	// 32 = 0x20
    SHMatcherRequest *_request;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000242a4
@property(readonly, nonatomic) SHMatcherRequest *request; // @synthesize request=_request;
@property(readonly, nonatomic) id <SHAudioRecordingManager> audioRecordingManager; // @synthesize audioRecordingManager=_audioRecordingManager;
@property(readonly, nonatomic) id <SHSessionDriver> sessionDriver; // @synthesize sessionDriver=_sessionDriver;
@property(readonly, nonatomic) SHAudioTap *tap; // @synthesize tap=_tap;
@property(nonatomic) __weak id <SHMatcherDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)shouldGenerateSpectralOutput;	// IMP=0x00100000000241d0
- (id)responseSignatureForRequest:(id)arg1;	// IMP=0x00100000000240d4
- (void)stopRecognition;	// IMP=0x0010000000024066
- (void)stopRecognitionForRequestID:(id)arg1;	// IMP=0x0010000000023e94
- (void)_stop;	// IMP=0x0010000000023de5
- (void)matcher:(id)arg1 didProduceResponse:(id)arg2;	// IMP=0x0010000000023aed
- (void)startRecognitionForRequest:(id)arg1;	// IMP=0x00100000000238ba
- (void)sessionDriverEncounteredUnrecoverableError:(id)arg1 forSignature:(id)arg2;	// IMP=0x00100000000237ea
- (void)matchSignature:(id)arg1;	// IMP=0x001000000002368e
- (id)initWithAudioTap:(id)arg1 sessionDriver:(id)arg2 audioRecordingManager:(id)arg3;	// IMP=0x0010000000023356
- (id)initWithAudioTap:(id)arg1 audioRecordingManager:(id)arg2;	// IMP=0x0010000000023239

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


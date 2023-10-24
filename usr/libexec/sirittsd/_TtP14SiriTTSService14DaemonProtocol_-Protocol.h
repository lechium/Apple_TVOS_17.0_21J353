//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, NSUUID, SATTSSpeechSynthesisStreaming, SiriTTSAudioRequest, SiriTTSBaseRequest, SiriTTSInlineStreamingSignal, SiriTTSPhonemeRequest, SiriTTSPreviewRequest, SiriTTSSpeechRequest, SiriTTSSynthesisRequest, SiriTTSSynthesisVoice;

@protocol _TtP14SiriTTSService14DaemonProtocol_
- (void)clearDeviceCache;
- (void)isANEModelCompiledMatching:(SiriTTSSynthesisVoice *)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (void)killDaemon;
- (void)adjustVolumeWithAccessoryId:(NSUUID *)arg1 volume:(float)arg2 rampTime:(double)arg3 didFinish:(void (^)(NSError *))arg4;
- (void)getAudioPowerWithAccessoryId:(NSUUID *)arg1 reply:(void (^)(float, float))arg2;
- (void)isSpeakingWithAccessoryId:(NSUUID *)arg1 reply:(void (^)(_Bool))arg2;
- (void)queryPhaticCapabilityWithVoice:(SiriTTSSynthesisVoice *)arg1 reply:(void (^)(_Bool))arg2;
- (void)getSynthesisVoiceMatching:(SiriTTSSynthesisVoice *)arg1 reply:(void (^)(SiriTTSSynthesisVoice *, NSError *))arg2;
- (void)downloadedVoicesMatching:(SiriTTSSynthesisVoice *)arg1 reply:(void (^)(NSArray *))arg2;
- (void)subscribedVoicesWithClientId:(NSString *)arg1 reply:(void (^)(NSArray *))arg2;
- (void)subscribeWithVoices:(NSArray *)arg1 clientId:(NSString *)arg2 accessoryId:(NSString *)arg3 reply:(void (^)(NSError *))arg4;
- (void)forwardWithStreamObject:(SATTSSpeechSynthesisStreaming *)arg1;
- (void)signalWithInlineStreaming:(SiriTTSInlineStreamingSignal *)arg1;
- (void)textToPhonemeWithRequest:(SiriTTSPhonemeRequest *)arg1 reply:(void (^)(NSString *, NSError *))arg2;
- (void)estimateDurationWithRequest:(SiriTTSSynthesisRequest *)arg1 reply:(void (^)(double, NSError *))arg2;
- (void)synthesizeWithRequest:(SiriTTSSynthesisRequest *)arg1 reply:(void (^)(NSError *))arg2;
- (void)cancelWithRequest:(SiriTTSBaseRequest *)arg1;
- (void)speakWithSpeechRequest:(SiriTTSSpeechRequest *)arg1 reply:(void (^)(NSError *))arg2;
- (void)speakWithAudioRequest:(SiriTTSAudioRequest *)arg1 reply:(void (^)(NSError *))arg2;
- (void)speakWithPreviewRequest:(SiriTTSPreviewRequest *)arg1 reply:(void (^)(NSError *))arg2;
- (void)prewarmWithRequest:(SiriTTSSynthesisRequest *)arg1 reply:(void (^)(NSError *))arg2;
- (void)keepActive:(_Bool)arg1 reply:(void (^)(NSError *))arg2;
@end


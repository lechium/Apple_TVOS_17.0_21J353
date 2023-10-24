//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MFAudioSessionConfiguration;

@protocol MFAudioSessionControlling
- (void)setInhibitSpeechDetection:(_Bool)arg1;
- (void)deactivateAudioSessionIfIdle:(long long)arg1;
- (void)updateAudioSessionWithConfiguration:(MFAudioSessionConfiguration *)arg1;
- (void)activateAudioSessionWithCompletion:(void (^)(long long, NSError *))arg1;
@end

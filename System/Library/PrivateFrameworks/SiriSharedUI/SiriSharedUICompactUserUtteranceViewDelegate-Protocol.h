//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SRUIFSpeechRecognitionHypothesis, SiriSharedUICompactUserUtteranceView;

@protocol SiriSharedUICompactUserUtteranceViewDelegate
- (void)userUtteranceView:(SiriSharedUICompactUserUtteranceView *)arg1 speechRecognitionHypothesisDidDisappear:(SRUIFSpeechRecognitionHypothesis *)arg2;
- (void)userUtteranceView:(SiriSharedUICompactUserUtteranceView *)arg1 speechRecognitionHypothesisDidAppear:(SRUIFSpeechRecognitionHypothesis *)arg2;
- (void)userUtteranceViewTapped:(SiriSharedUICompactUserUtteranceView *)arg1;
@end


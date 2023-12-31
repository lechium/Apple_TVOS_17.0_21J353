//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIKBKeyView.h"

@class TUISystemInputAssistantView, UIKBHandwritingCandidateView, UIKeyboardCandidatePocketShadow;

__attribute__((visibility("hidden")))
@interface UIHandwritingAssistantView : UIKBKeyView
{
    TUISystemInputAssistantView *_systemInputAssistantView;	// 8 = 0x8
    UIKBHandwritingCandidateView *_candidateView;	// 16 = 0x10
    UIKeyboardCandidatePocketShadow *_rightBorder;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000014914df
@property(retain, nonatomic) UIKeyboardCandidatePocketShadow *rightBorder; // @synthesize rightBorder=_rightBorder;
@property(retain, nonatomic) UIKBHandwritingCandidateView *candidateView; // @synthesize candidateView=_candidateView;
@property(retain, nonatomic) TUISystemInputAssistantView *systemInputAssistantView; // @synthesize systemInputAssistantView=_systemInputAssistantView;
- (struct CGRect)assistantFrameForKeyplane:(id)arg1 key:(id)arg2;	// IMP=0x0000000001491406
- (id)candidateList;	// IMP=0x00000000014913b6

@end


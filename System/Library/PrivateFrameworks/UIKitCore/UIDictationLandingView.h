//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class CADisplayLink, NSOperation, NSString, UITextRange;
@protocol UITextCursorAssertion;

__attribute__((visibility("hidden")))
@interface UIDictationLandingView : UIView
{
    UITextRange *_range;	// 8 = 0x8
    id _placeholder;	// 16 = 0x10
    _Bool _didHaveText;	// 24 = 0x18
    _Bool _willInsertResult;	// 25 = 0x19
    double _angle;	// 32 = 0x20
    double _diameter;	// 40 = 0x28
    CADisplayLink *_displayLink;	// 48 = 0x30
    double _startTime;	// 56 = 0x38
    double _shrinkStartTime;	// 64 = 0x40
    _Bool _shrinking;	// 72 = 0x48
    NSOperation *_afterShrinkCompletionInvocation;	// 80 = 0x50
    _Bool _didSkipLanding;	// 88 = 0x58
    id <UITextCursorAssertion> _hideCursorAssertion;	// 96 = 0x60
}

+ (long long)fallbackPlaceholderLength;	// IMP=0x0010000000b04346
+ (id)activeInstance;	// IMP=0x0010000000b04335
+ (id)sharedInstance;	// IMP=0x0010000000b042bd
+ (double)widthForLineHeight:(double)arg1;	// IMP=0x0010000000b0425d
+ (double)diameterForLineHeight:(double)arg1;	// IMP=0x0010000000b0423f
- (void).cxx_destruct;	// IMP=0x0000000000b069a4
@property(retain, nonatomic) id <UITextCursorAssertion> hideCursorAssertion; // @synthesize hideCursorAssertion=_hideCursorAssertion;
@property(nonatomic) _Bool didSkipLanding; // @synthesize didSkipLanding=_didSkipLanding;
@property(nonatomic) _Bool willInsertResult; // @synthesize willInsertResult=_willInsertResult;
- (id)_timingFunctionForAnimation;	// IMP=0x0000000000b0691c
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;	// IMP=0x0000000000b06900
- (double)fadeOutDuration;	// IMP=0x0000000000b068a9
- (void)stopLandingForError;	// IMP=0x0000000000b0642e
- (void)errorShakeDidFinish;	// IMP=0x0000000000b06346
- (_Bool)canStopLanding;	// IMP=0x0000000000b062de
- (_Bool)hasActivePlaceholder;	// IMP=0x0000000000b062b9
- (void)stopLanding;	// IMP=0x0000000000b05ff7
- (void)startLandingIfNecessary;	// IMP=0x0000000000b05936
- (void)_invalidatDisplayLink;	// IMP=0x0000000000b058f4
- (void)performRemoteSelector:(SEL)arg1;	// IMP=0x0000000000b05765
- (void)startDisplayLinkIfNecessary;	// IMP=0x0000000000b05446
- (void)showCursor;	// IMP=0x0000000000b05355
- (void)hideCursor;	// IMP=0x0000000000b051e6
- (_Bool)delegateWasEmpty;	// IMP=0x0000000000b051c0
- (void)updatePosition;	// IMP=0x0000000000b04fa9
- (id)_currentTextInputView;	// IMP=0x0000000000b04f01
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x0000000000b04946
- (void)advanceLanding:(id)arg1;	// IMP=0x0000000000b0467e
- (void)shrinkWithCompletion:(id)arg1;	// IMP=0x0000000000b04536
- (void)rotateBy:(double)arg1;	// IMP=0x0000000000b044ce
- (void)clearRotation;	// IMP=0x0000000000b0446d
- (void)dealloc;	// IMP=0x0000000000b0442f
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000b0435f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


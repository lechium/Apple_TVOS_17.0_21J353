//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSString, UIDictationView, UIKBRenderConfig;

__attribute__((visibility("hidden")))
@interface UIKeyboardDicationBackgroundGradientView : UIView
{
    UIKBRenderConfig *_renderConfig;	// 8 = 0x8
    UIDictationView *_dictationView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000b146fa
@property(nonatomic) UIDictationView *dictationView; // @synthesize dictationView=_dictationView;
@property(retain, nonatomic) UIKBRenderConfig *renderConfig; // @synthesize renderConfig=_renderConfig;
- (void)layoutSubviews;	// IMP=0x0000000000b145bc
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x0000000000b145b6
- (struct CGRect)_backgroundFillFrame;	// IMP=0x0000000000b14597
- (id)_timingFunctionForAnimation;	// IMP=0x0000000000b14574
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;	// IMP=0x0000000000b14558
- (void)startColorTransitionOut;	// IMP=0x0000000000b142a8
- (void)startColorTransitionIn;	// IMP=0x0000000000b14080
- (id)backgroundColorForCurrentRenderConfig;	// IMP=0x0000000000b14047
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000b13fa4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

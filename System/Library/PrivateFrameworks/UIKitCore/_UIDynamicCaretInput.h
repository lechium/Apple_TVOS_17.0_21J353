//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSTimer, TIHandwritingStrokes, UIDelayedAction, _UIDynamicCaretDot;

__attribute__((visibility("hidden")))
@interface _UIDynamicCaretInput : UIView
{
    struct CGContext *_bitmapContext;	// 8 = 0x8
    long long _fadeCount;	// 16 = 0x10
    struct CGPoint _lastViewLoc;	// 24 = 0x18
    struct CGRect _inkedAreaOfBitmapContext;	// 40 = 0x28
    NSTimer *_fadeTimer;	// 72 = 0x48
    TIHandwritingStrokes *_accumulatedStrokes;	// 80 = 0x50
    UIDelayedAction *_committedAction;	// 88 = 0x58
    _UIDynamicCaretDot *_dotView;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000000011497fb
@property(retain, nonatomic) _UIDynamicCaretDot *dotView; // @synthesize dotView=_dotView;
@property(retain, nonatomic) UIDelayedAction *committedAction; // @synthesize committedAction=_committedAction;
@property(retain, nonatomic) TIHandwritingStrokes *accumulatedStrokes; // @synthesize accumulatedStrokes=_accumulatedStrokes;
@property(retain, nonatomic) NSTimer *fadeTimer; // @synthesize fadeTimer=_fadeTimer;
- (void)cancelTouchAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000001149734
- (void)endTouchAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000001149640
- (void)addTouchAtPoint:(struct CGPoint)arg1;	// IMP=0x000000000114959a
- (void)startTouchAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000001149408
- (void)addInkPoint:(struct CGPoint)arg1 fromLastPoint:(_Bool)arg2;	// IMP=0x00000000011491e8
- (void)send;	// IMP=0x0000000001149128
- (void)clearAndNotify:(_Bool)arg1;	// IMP=0x0000000001149007
- (void)committedStrokes;	// IMP=0x0000000001148fd4
- (void)log;	// IMP=0x0000000001148c98
- (void)drawPoint:(struct CGPoint)arg1;	// IMP=0x0000000001148ab1
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x0000000001148a1a
- (void)_fadeInk;	// IMP=0x0000000001148945
- (void)clearFadeTimer;	// IMP=0x00000000011488eb
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;	// IMP=0x000000000114888e
- (double)inkWidth;	// IMP=0x0000000001148880
@property(readonly, nonatomic) _Bool isInking;
@property(readonly, nonatomic) _Bool hasInk;
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0000000001148665
- (void)dealloc;	// IMP=0x0000000001148624
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000011482f6

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIKBKeyView.h"

@class UIDictationView;

__attribute__((visibility("hidden")))
@interface UIKBDictationDisplayView : UIKBKeyView
{
    UIDictationView *_dictationView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000a0782d
@property(retain, nonatomic) UIDictationView *dictationView; // @synthesize dictationView=_dictationView;
- (void)removeFromSuperview;	// IMP=0x0000000000a076ff
- (void)prepareForDisplay;	// IMP=0x0000000000a07561
- (void)updateForKeyplane:(id)arg1 key:(id)arg2;	// IMP=0x0000000000a0751d
- (void)updateDictationColor;	// IMP=0x0000000000a07462
- (void)setRenderConfig:(id)arg1;	// IMP=0x0000000000a07421
- (void)dealloc;	// IMP=0x0000000000a07354
- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2 key:(id)arg3;	// IMP=0x0000000000a072f2

@end

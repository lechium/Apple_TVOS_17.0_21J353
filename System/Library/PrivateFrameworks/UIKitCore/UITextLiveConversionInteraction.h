//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UITextInteraction.h"

@class UIResponder;
@protocol UITextInput;

__attribute__((visibility("hidden")))
@interface UITextLiveConversionInteraction : UITextInteraction
{
    UIResponder<UITextInput> *_textInput;	// 8 = 0x8
    long long _panOffset;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000a10ea7
@property(readonly) double pointSize;
- (void)_pan:(id)arg1;	// IMP=0x0000000000a10d19
- (void)_tap:(id)arg1;	// IMP=0x0000000000a1058e
- (id)_liveConversionPanGestureRecognizer;	// IMP=0x0000000000a10551
- (id)_liveConversionTapGestureRecognizer;	// IMP=0x0000000000a10514
- (void)willMoveToView:(id)arg1;	// IMP=0x0000000000a1044d
- (id)initWithTextInput:(id)arg1;	// IMP=0x0000000000a103df

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIViewController.h"

@class UIKeyboard;

__attribute__((visibility("hidden")))
@interface _UIDatePickerNumericKeyboardViewController : UIViewController
{
    UIKeyboard *_keyboard;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000007d2484
@property(readonly, nonatomic) UIKeyboard *keyboard; // @synthesize keyboard=_keyboard;
- (void)_updateKeyboardRenderConfiguration;	// IMP=0x00000000007d238f
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000007d2325
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000007d20fa
- (void)viewDidLoad;	// IMP=0x00000000007d1cfc
- (_Bool)_canShowWhileLocked;	// IMP=0x00000000007d1cf4
- (id)init;	// IMP=0x00000000007d1c64

@end

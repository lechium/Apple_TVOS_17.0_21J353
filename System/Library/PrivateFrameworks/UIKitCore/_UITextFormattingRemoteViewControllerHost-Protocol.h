//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSArray, NSData, UIColor, UIFontPickerViewControllerConfiguration;

@protocol _UITextFormattingRemoteViewControllerHost <NSObject>
- (void)_updateTextAttributes:(NSData *)arg1;
- (void)_alignJustified;
- (void)_alignRight;
- (void)_alignCenter;
- (void)_alignLeft;
- (void)_toggleUnderline;
- (void)_toggleItalics;
- (void)_toggleBoldface;
- (void)_decreaseSize;
- (void)_increaseSize;
- (void)_presentFontPickerWithConfiguration:(UIFontPickerViewControllerConfiguration *)arg1 selectedFonts:(NSArray *)arg2;
- (void)_presentColorPicker:(struct CGRect)arg1 selectedColor:(UIColor *)arg2;
- (void)_stopSuppressingKeyboardForTextFormatting;
- (void)_startSuppressingKeyboardForTextFormatting;
- (void)_textFormattingRequestsFirstResponderResignation;
- (void)_textFormattingRequestsFirstResponderRestoration;
- (void)_textFormattingDidFinish;
@end


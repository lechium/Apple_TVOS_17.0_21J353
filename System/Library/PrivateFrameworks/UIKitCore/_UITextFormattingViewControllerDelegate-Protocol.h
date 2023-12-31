//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSObject-Protocol.h>
#import <UIKitCore/UITextFormattingViewControllerDelegate-Protocol.h>

@class UITextFormattingViewController;

@protocol _UITextFormattingViewControllerDelegate <NSObject, UITextFormattingViewControllerDelegate>

@optional
- (void)_stopSuppressingKeyboardForTextFormatting:(UITextFormattingViewController *)arg1;
- (void)_startSuppressingKeyboardForTextFormatting:(UITextFormattingViewController *)arg1;
- (void)_textFormattingRequestsFirstResponderResignation:(UITextFormattingViewController *)arg1;
- (void)_textFormattingRequestsFirstResponderRestoration:(UITextFormattingViewController *)arg1;
@end


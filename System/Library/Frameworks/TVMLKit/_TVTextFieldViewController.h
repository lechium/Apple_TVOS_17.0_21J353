//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class IKTextFieldElement, NSString, UITextField;

__attribute__((visibility("hidden")))
@interface _TVTextFieldViewController : UIViewController
{
    IKTextFieldElement *_viewElement;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000018f486
@property(readonly, retain, nonatomic) IKTextFieldElement *viewElement; // @synthesize viewElement=_viewElement;
- (void)_updateKeyboardWithUserText;	// IMP=0x000000000018f3a0
- (void)_updateUserText;	// IMP=0x000000000018f2c7
- (void)_updateViewLayout;	// IMP=0x000000000018f05d
- (void)searchBarDidChangeText:(id)arg1;	// IMP=0x000000000018f002
- (void)loadView;	// IMP=0x000000000018ef6b
- (void)textDidChangeForKeyboard:(id)arg1;	// IMP=0x000000000018ef34
@property(readonly, retain, nonatomic) UITextField *textField;
- (void)updateWithViewElement:(id)arg1;	// IMP=0x000000000018ee1b
- (void)dealloc;	// IMP=0x000000000018edc9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

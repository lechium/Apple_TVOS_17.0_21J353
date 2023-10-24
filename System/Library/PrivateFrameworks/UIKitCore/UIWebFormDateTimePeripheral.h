//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DOMHTMLInputElement;
@protocol UIWebFormControl;

__attribute__((visibility("hidden")))
@interface UIWebFormDateTimePeripheral : NSObject
{
    DOMHTMLInputElement *_inputElement;	// 8 = 0x8
    id <UIWebFormControl> _control;	// 16 = 0x10
}

+ (id)createPeripheralWithDOMHTMLInputElement:(id)arg1;	// IMP=0x001000000076f5cd
@property(retain, nonatomic) id <UIWebFormControl> _control; // @synthesize _control;
@property(retain, nonatomic) DOMHTMLInputElement *_inputElement; // @synthesize _inputElement;
- (id)assistantView;	// IMP=0x000000000076f62f
- (void)endEditing;	// IMP=0x000000000076f619
- (void)beginEditing;	// IMP=0x000000000076f603
- (void)dealloc;	// IMP=0x000000000076f576
- (id)initWithDOMHTMLInputElement:(id)arg1;	// IMP=0x000000000076f4a0
- (long long)_datePickerModeForInputType:(id)arg1;	// IMP=0x000000000076f414

@end

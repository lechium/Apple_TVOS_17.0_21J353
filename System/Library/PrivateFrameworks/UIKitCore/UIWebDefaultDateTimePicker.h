//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DOMHTMLInputElement, NSString, UIDatePicker;

__attribute__((visibility("hidden")))
@interface UIWebDefaultDateTimePicker : NSObject
{
    DOMHTMLInputElement *_inputElement;	// 8 = 0x8
    UIDatePicker *_datePicker;	// 16 = 0x10
    NSString *_formatString;	// 24 = 0x18
    _Bool _shouldRemoveTimeZoneInformation;	// 32 = 0x20
    _Bool _isTimeInput;	// 33 = 0x21
}

@property(retain, nonatomic) UIDatePicker *_datePicker; // @synthesize _datePicker;
@property(retain, nonatomic) DOMHTMLInputElement *_inputElement; // @synthesize _inputElement;
- (void)controlEndEditing;	// IMP=0x000000000076efb1
- (void)controlBeginEditing;	// IMP=0x000000000076eda4
- (id)_sanitizeInputValueForFormatter:(id)arg1;	// IMP=0x000000000076ed5e
- (id)controlView;	// IMP=0x000000000076ed54
- (void)dealloc;	// IMP=0x000000000076ece1
- (id)initWithDOMHTMLInputElement:(id)arg1 datePickerMode:(long long)arg2;	// IMP=0x000000000076eaf2
- (void)_dateChangeHandler:(id)arg1;	// IMP=0x000000000076eae0
- (void)_dateChanged;	// IMP=0x000000000076eabb
- (void)_dateChangedSetAsString;	// IMP=0x000000000076e9d6
- (void)_dateChangedSetAsNumber;	// IMP=0x000000000076e951
- (long long)_timeZoneOffsetFromGMT:(id)arg1;	// IMP=0x000000000076e90f

@end


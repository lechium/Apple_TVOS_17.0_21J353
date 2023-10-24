//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIPickerView.h"

@class DOMHTMLSelectElement, NSArray, NSString;
@protocol UIWebSelectedItemPrivate;

__attribute__((visibility("hidden")))
@interface UIWebSelectSinglePicker : UIPickerView
{
    DOMHTMLSelectElement *_selectNode;	// 80 = 0x50
    NSArray *_optionItems;	// 88 = 0x58
    id <UIWebSelectedItemPrivate> _selectedOptionItem;	// 96 = 0x60
    long long _selectedIndex;	// 104 = 0x68
    id <UIWebSelectedItemPrivate> _optionToSelectWhenDone;	// 112 = 0x70
    long long _indexToSelectWhenDone;	// 120 = 0x78
}

- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;	// IMP=0x0000000000770a2d
- (id)pickerView:(id)arg1 attributedTitleForRow:(long long)arg2 forComponent:(long long)arg3;	// IMP=0x0000000000770933
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;	// IMP=0x0000000000770916
- (long long)numberOfComponentsInPickerView:(id)arg1;	// IMP=0x000000000077090b
- (void)controlEndEditing;	// IMP=0x000000000077087e
- (void)controlBeginEditing;	// IMP=0x0000000000770878
- (id)controlView;	// IMP=0x000000000077086f
- (void)dealloc;	// IMP=0x00000000007707f5
- (id)initWithDOMHTMLSelectElement:(id)arg1 allItems:(id)arg2;	// IMP=0x000000000077053a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


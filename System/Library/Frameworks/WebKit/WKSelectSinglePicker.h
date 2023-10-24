//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIPickerView.h>

@class NSString, WKContentView;

__attribute__((visibility("hidden")))
@interface WKSelectSinglePicker : UIPickerView
{
    WKContentView *_view;	// 8 = 0x8
    long long _selectedIndex;	// 16 = 0x10
}

- (void)selectRow:(long long)arg1 inComponent:(long long)arg2 extendingSelection:(_Bool)arg3;	// IMP=0x0000000000420c5a
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;	// IMP=0x0000000000420af5
- (id)pickerView:(id)arg1 attributedTitleForRow:(long long)arg2 forComponent:(long long)arg3;	// IMP=0x0000000000420986
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;	// IMP=0x0000000000420962
- (long long)numberOfComponentsInPickerView:(id)arg1;	// IMP=0x0000000000420957
- (void)controlEndEditing;	// IMP=0x00000000004208ae
- (void)controlBeginEditing;	// IMP=0x00000000004208a8
- (id)controlView;	// IMP=0x000000000042089f
- (void)dealloc;	// IMP=0x0000000000420848
- (id)initWithView:(id)arg1;	// IMP=0x00000000004206bb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UITextField;

__attribute__((visibility("hidden")))
@interface CNPropertySimpleEditingCell
{
    UITextField *_textField;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000099db4
@property(readonly, nonatomic) UITextField *textField; // @synthesize textField=_textField;
- (void)textFieldChanged:(id)arg1;	// IMP=0x0000000000099ca1
- (id)firstResponderItem;	// IMP=0x0000000000099c8c
- (void)prepareForReuse;	// IMP=0x0000000000099c21
- (void)updateValueWithPropertyItem:(id)arg1;	// IMP=0x0000000000099a28
- (id)variableConstraints;	// IMP=0x00000000000997e7
- (id)constantConstraints;	// IMP=0x00000000000995e7
- (id)valueView;	// IMP=0x0000000000099478
- (void)dealloc;	// IMP=0x0000000000099403

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UILabel, UITextView;

__attribute__((visibility("hidden")))
@interface CNPropertyNoteCell
{
    UITextView *_textView;	// 8 = 0x8
    UILabel *_labelLabel;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000092b90
@property(readonly, nonatomic) UILabel *labelLabel; // @synthesize labelLabel=_labelLabel;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
- (void)setAllowsEditing:(_Bool)arg1;	// IMP=0x0000000000092acd
- (void)textViewEditingDidEnd:(id)arg1;	// IMP=0x0000000000092a28
- (void)textViewChanged:(id)arg1;	// IMP=0x0000000000092931
- (void)setValueTextAttributes:(id)arg1;	// IMP=0x00000000000927e0
- (double)bottomBaselineConstant;	// IMP=0x00000000000927d2
- (void)performDefaultAction;	// IMP=0x0000000000092795
- (_Bool)shouldPerformDefaultAction;	// IMP=0x000000000009278d
- (void)setLabelTextAttributes:(id)arg1;	// IMP=0x00000000000926a8
- (id)valueView;	// IMP=0x000000000009254e
- (id)labelView;	// IMP=0x0000000000092501
- (void)setProperty:(id)arg1;	// IMP=0x000000000009245d
- (void)dealloc;	// IMP=0x00000000000923e8
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000000000922ce

@end

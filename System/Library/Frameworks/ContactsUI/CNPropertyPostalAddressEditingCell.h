//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNPostalAddressEditorView, UIColor;

__attribute__((visibility("hidden")))
@interface CNPropertyPostalAddressEditingCell
{
    CNPostalAddressEditorView *_addressEditor;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000096204
@property(retain, nonatomic) CNPostalAddressEditorView *addressEditor; // @synthesize addressEditor=_addressEditor;
- (void)layoutMarginsDidChange;	// IMP=0x000000000009617b
- (void)setBackgroundColor:(id)arg1;	// IMP=0x00000000000960eb
@property(copy, nonatomic) UIColor *editorSeparatorColor;
- (void)layoutChanged:(id)arg1;	// IMP=0x0000000000095f82
- (void)valueChanged:(id)arg1;	// IMP=0x0000000000095e70
- (void)updateWithPropertyItem:(id)arg1;	// IMP=0x0000000000095ceb
- (void)setPresentingDelegate:(id)arg1;	// IMP=0x0000000000095c57
- (id)valueView;	// IMP=0x0000000000095a45
- (id)firstResponderItem;	// IMP=0x0000000000095a33
- (id)constantConstraints;	// IMP=0x0000000000095888
- (double)rightContentMargin;	// IMP=0x000000000009587f
- (double)leftValueMargin;	// IMP=0x0000000000095876

@end

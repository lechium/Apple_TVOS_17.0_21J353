//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UITextField.h"

__attribute__((visibility("hidden")))
@interface _UIFindNavigatorSearchTextField : UITextField
{
    _Bool _keyboardDidAppear;	// 8 = 0x8
}

+ (id)_newlineImageForSize:(struct CGSize)arg1 withTraitCollection:(id)arg2;	// IMP=0x0060000000199ff6
@property(nonatomic) _Bool keyboardDidAppear; // @synthesize keyboardDidAppear=_keyboardDidAppear;
- (id)text;	// IMP=0x000000000019a527
- (void)insertNewline;	// IMP=0x000000000019a267
- (void)layoutSubviews;	// IMP=0x0000000000199f0d
- (struct CGRect)_availableTextRectForBounds:(struct CGRect)arg1 forEditing:(_Bool)arg2 accountForRightView:(_Bool)arg3;	// IMP=0x0000000000199de5
- (struct CGRect)_availableTextRectForBounds:(struct CGRect)arg1 forEditing:(_Bool)arg2;	// IMP=0x0000000000199d87
- (_Bool)_isTextRectWideEnoughForRightView:(struct CGRect)arg1;	// IMP=0x0000000000199d05
- (struct CGRect)rightViewRectForBounds:(struct CGRect)arg1;	// IMP=0x0000000000199c6d
- (struct CGRect)_baselineLeftViewRectForBounds:(struct CGRect)arg1;	// IMP=0x0000000000199bd5
- (struct CGRect)_applyRightViewOffsetIfApplicable:(struct CGRect)arg1;	// IMP=0x0000000000199a8c
- (_Bool)_showsClearButtonWhenNonEmpty:(_Bool)arg1;	// IMP=0x0000000000199a53
- (_Bool)_delegateShouldScrollToVisibleWhenBecomingFirstResponder;	// IMP=0x0000000000199a4b
- (id)undoManager;	// IMP=0x00000000001999fb
- (_Bool)canResignFirstResponder;	// IMP=0x00000000001999cc
- (_Bool)_canResignIfContainsFirstResponder;	// IMP=0x00000000001999c4
- (struct CGRect)visibleRect;	// IMP=0x0000000000199968
- (void)willMoveToWindow:(id)arg1;	// IMP=0x0000000000199920
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000199783

@end


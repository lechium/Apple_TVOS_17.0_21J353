//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UICollectionViewCell.h"

@class UITapGestureRecognizer, _UIAlertControllerTextFieldView;

__attribute__((visibility("hidden")))
@interface _UIAlertControllerTextFieldViewCollectionCell : UICollectionViewCell
{
    _UIAlertControllerTextFieldView *_textField;	// 128 = 0x80
    UITapGestureRecognizer *_selectButtonGesture;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x00000000000d45f6
- (id)preferredFocusedView;	// IMP=0x00000000000d45d9
- (void)_selectButton:(id)arg1;	// IMP=0x00000000000d4549
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;	// IMP=0x00000000000d4474
- (void)prepareForReuse;	// IMP=0x00000000000d4409
@property(readonly, nonatomic) _UIAlertControllerTextFieldView *textField;
- (void)setTextField:(id)arg1 horizontalMargin:(double)arg2;	// IMP=0x00000000000d4212
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000d410d

@end

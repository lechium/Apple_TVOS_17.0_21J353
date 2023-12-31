//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UITableViewCellLayoutManager.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface UITableViewCellLayoutManagerEditable1 : UITableViewCellLayoutManager
{
}

- (void)_textValueChanged:(id)arg1;	// IMP=0x00000000010018d4
- (void)_textFieldEndEditingOnReturn:(id)arg1;	// IMP=0x00000000010018ce
- (void)_textFieldEndEditing:(id)arg1;	// IMP=0x0000000001001849
- (void)_textFieldStartEditing:(id)arg1;	// IMP=0x00000000010017bd
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x00000000010017b5
- (_Bool)textFieldShouldBeginEditing:(id)arg1;	// IMP=0x00000000010017ad
- (void)textFieldDidEndEditing:(id)arg1;	// IMP=0x00000000010016ad
- (void)textFieldDidBeginEditing:(id)arg1;	// IMP=0x00000000010016a7
- (struct CGSize)intrinsicContentSizeForCell:(id)arg1 rowWidth:(double)arg2;	// IMP=0x00000000010015cc
- (id)editableTextFieldForCell:(id)arg1;	// IMP=0x000000000100148b
- (id)detailTextLabelForCell:(id)arg1;	// IMP=0x0000000001001483
- (void)layoutSubviewsOfCell:(id)arg1;	// IMP=0x0000000001000944
- (double)defaultTextFieldFontSizeForCell:(id)arg1;	// IMP=0x0000000001000915

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UITableViewCellLayoutManager.h"

__attribute__((visibility("hidden")))
@interface UITableViewCellLayoutManagerSubtitle : UITableViewCellLayoutManager
{
}

- (struct CGSize)intrinsicContentSizeForCell:(id)arg1 rowWidth:(double)arg2;	// IMP=0x0000000001002652
- (void)layoutSubviewsOfCell:(id)arg1;	// IMP=0x0000000001002327
- (void)getTextLabelRect:(struct CGRect *)arg1 detailTextLabelRect:(struct CGRect *)arg2 forCell:(id)arg3 rowWidth:(double)arg4 forSizing:(_Bool)arg5;	// IMP=0x0000000001001f11
- (double)_textLabelYAdjustmentForCell:(id)arg1 totalTextRect:(struct CGRect)arg2;	// IMP=0x0000000001001df5
- (id)defaultDetailTextLabelFontForCell:(id)arg1;	// IMP=0x0000000001001d65
- (id)detailTextLabelForCell:(id)arg1;	// IMP=0x0000000001001ba9
- (id)textLabelForCell:(id)arg1;	// IMP=0x0000000001001b6b
- (id)imageViewForCell:(id)arg1;	// IMP=0x0000000001001b2d
- (double)defaultDetailTextLabelFontSizeForCell:(id)arg1;	// IMP=0x0000000001001b1f
- (double)defaultTextLabelFontSizeForCell:(id)arg1;	// IMP=0x0000000001001a97

@end


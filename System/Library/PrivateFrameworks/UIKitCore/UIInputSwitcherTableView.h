//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UITableView.h"

@class UIKeyboardMenuView;

__attribute__((visibility("hidden")))
@interface UIInputSwitcherTableView : UITableView
{
    UIKeyboardMenuView *_menu;	// 16 = 0x10
}

@property(nonatomic) UIKeyboardMenuView *menu; // @synthesize menu=_menu;
- (void)selectRowAtIndexPath:(id)arg1 animated:(_Bool)arg2 scrollPosition:(long long)arg3;	// IMP=0x00000000009ad45f
- (void)deselectRowAtIndexPath:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000009ad277

@end


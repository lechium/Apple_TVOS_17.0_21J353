//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSObject, NSString, TVSSCyclingMenuItemsDataSource, TVSSMenuItemHostView, UIViewPropertyAnimator;
@protocol OS_dispatch_source, TVSSVisualContent;

@interface TVSSCyclingVisualContentView : UIView
{
    TVSSCyclingMenuItemsDataSource *_dataSource;	// 8 = 0x8
    TVSSMenuItemHostView *_menuItemHostView;	// 16 = 0x10
    TVSSMenuItemHostView *_nextMenuItemHostView;	// 24 = 0x18
    UIViewPropertyAnimator *_animator;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_timer;	// 40 = 0x28
    id <TVSSVisualContent> _content;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000000f7930
@property(copy, nonatomic) id <TVSSVisualContent> content; // @synthesize content=_content;
- (void)_cycleTimerDidFire;	// IMP=0x00100000000f6c30
- (void)_stopCyclingTimer;	// IMP=0x00100000000f6bd0
- (void)_startCyclingTimer;	// IMP=0x00100000000f69e0
- (void)_stopDisplayingMenuItems;	// IMP=0x00100000000f6920
- (void)_startDisplayingMenuItems;	// IMP=0x00100000000f6040
- (void)_didUpdateVisualContent:(id)arg1 oldVisualContent:(id)arg2;	// IMP=0x00100000000f5f00
- (id)_currentCyclingVisualContent;	// IMP=0x00100000000f5ea0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000000f57f0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) unsigned long long visualizedControlState;

@end

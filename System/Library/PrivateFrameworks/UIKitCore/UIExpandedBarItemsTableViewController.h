//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UITableViewController.h"

@class UIBarButtonItemGroup;

__attribute__((visibility("hidden")))
@interface UIExpandedBarItemsTableViewController : UITableViewController
{
    UIBarButtonItemGroup *_barButtonGroup;	// 416 = 0x1a0
}

- (void).cxx_destruct;	// IMP=0x0000000000928ad8
@property(readonly, nonatomic) UIBarButtonItemGroup *barButtonGroup; // @synthesize barButtonGroup=_barButtonGroup;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000092884f
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000092864c
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x000000000092863e
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000092862c
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000000928621
- (struct CGSize)preferredContentSize;	// IMP=0x0000000000928293
- (id)_displayTitleForBarButtonItem:(id)arg1;	// IMP=0x000000000092810a
- (unsigned long long)_numberOfItems;	// IMP=0x00000000009280c6
- (id)_visibleItems;	// IMP=0x0000000000928031
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000927fc7
- (void)viewDidLoad;	// IMP=0x0000000000927f0b
- (id)initWithBarButtonGroup:(id)arg1;	// IMP=0x0000000000927e9b

@end

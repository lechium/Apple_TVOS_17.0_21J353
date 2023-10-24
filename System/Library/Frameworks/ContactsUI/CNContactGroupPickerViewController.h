//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSArray, NSString, UITableView;
@protocol CNContactGroupPickerDelegate;

__attribute__((visibility("hidden")))
@interface CNContactGroupPickerViewController : UIViewController
{
    NSArray *_pickableGroups;	// 8 = 0x8
    UITableView *_tableView;	// 16 = 0x10
    id <CNContactGroupPickerDelegate> _groupPickerDelegate;	// 24 = 0x18
}

+ (id)pickableGroupsWithPickedGroups:(id)arg1;	// IMP=0x001000000001ae02
+ (id)propertySections;	// IMP=0x001000000001ac17
+ (_Bool)propertiesLeftToPickWithPickedGroups:(id)arg1;	// IMP=0x001000000001abc8
- (void).cxx_destruct;	// IMP=0x000000000001b878
@property(nonatomic) __weak id <CNContactGroupPickerDelegate> groupPickerDelegate; // @synthesize groupPickerDelegate=_groupPickerDelegate;
- (id)_loadPickableGroupsWithPickedGroups:(id)arg1;	// IMP=0x000000000001b832
- (void)cancel:(id)arg1;	// IMP=0x000000000001b7e6
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;	// IMP=0x000000000001b7d1
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x000000000001b734
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000001b643
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000001b501
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000001b4af
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000000001b492
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000001b397
- (void)loadView;	// IMP=0x000000000001b225
- (void)dealloc;	// IMP=0x000000000001b1e3
- (id)initWithGroups:(id)arg1;	// IMP=0x000000000001b12e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


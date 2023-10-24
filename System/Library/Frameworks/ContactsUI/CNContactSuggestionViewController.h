//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class CNPropertyCell, CNPropertySuggestionAction, NSString, SGOrigin, UILabel;

__attribute__((visibility("hidden")))
@interface CNContactSuggestionViewController : UITableViewController
{
    CNPropertySuggestionAction *_action;	// 8 = 0x8
    CNPropertyCell *_propertyCell;	// 16 = 0x10
    SGOrigin *_origin;	// 24 = 0x18
    UILabel *_fromLabel;	// 32 = 0x20
    UILabel *_dateLabel;	// 40 = 0x28
    UILabel *_subjectLabel;	// 48 = 0x30
    UILabel *_contentLabel;	// 56 = 0x38
    NSString *_foundInAppName;	// 64 = 0x40
}

+ (id)viewControllerWithOrigin:(id)arg1;	// IMP=0x006000000007de98
- (void).cxx_destruct;	// IMP=0x000000000007efb5
@property(retain) NSString *foundInAppName; // @synthesize foundInAppName=_foundInAppName;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UILabel *subjectLabel; // @synthesize subjectLabel=_subjectLabel;
@property(retain, nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(retain, nonatomic) UILabel *fromLabel; // @synthesize fromLabel=_fromLabel;
@property(retain, nonatomic) SGOrigin *origin; // @synthesize origin=_origin;
@property(retain, nonatomic) CNPropertyCell *propertyCell; // @synthesize propertyCell=_propertyCell;
@property(retain, nonatomic) CNPropertySuggestionAction *action; // @synthesize action=_action;
- (void)showSource:(id)arg1;	// IMP=0x000000000007ee5d
- (void)ignore:(id)arg1;	// IMP=0x000000000007ee1b
- (void)addToContact:(id)arg1;	// IMP=0x000000000007edd9
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000000007ed6e
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000007ebf7
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x000000000007eb8d
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x000000000007eac5
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000007e9d8
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000007e903
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000000007e8d4
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x000000000007e7c1
- (void)updatePreview;	// IMP=0x000000000007e219
- (void)viewDidLoad;	// IMP=0x000000000007df4e

@end

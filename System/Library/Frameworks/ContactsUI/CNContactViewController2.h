//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class CNContactPropertyModel, CNContactViewHostViewController, NSArray, NSString, UITableView;

__attribute__((visibility("hidden")))
@interface CNContactViewController2 : UIViewController
{
    _Bool _ignoreViewWillBePresented;	// 8 = 0x8
    CNContactViewHostViewController *_remoteHostViewController;	// 16 = 0x10
    UITableView *_tableView;	// 24 = 0x18
    CNContactPropertyModel *_model;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000002bdc7
@property(retain) CNContactPropertyModel *model; // @synthesize model=_model;
@property(retain) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) CNContactViewHostViewController *remoteHostViewController; // @synthesize remoteHostViewController=_remoteHostViewController;
- (void)_prepareViewController;	// IMP=0x000000000002baf5
- (void)_setupViewController;	// IMP=0x000000000002b552
- (void)cancel:(id)arg1;	// IMP=0x000000000002b3df
- (void)updatedTransactions:(id)arg1;	// IMP=0x000000000002b376
- (void)setupWithOptions:(id)arg1 readyBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000002b143
- (_Bool)outOfProcess;	// IMP=0x000000000002b0c3
- (void)pendingRemoteTransactions:(id)arg1;	// IMP=0x000000000002b0bd
- (void)pendingTransactions;	// IMP=0x000000000002ab84
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x000000000002a7d9
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000002a5fc
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000002a5a9
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000000002a565
@property(retain, nonatomic) NSArray *displayedProperties;
@property(retain, nonatomic) id displayedObject;
- (void)_endDelayingPresentation;	// IMP=0x000000000002a3ad
- (_Bool)_isDelayingPresentation;	// IMP=0x000000000002a31f
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000002a2d9
- (void)loadView;	// IMP=0x0000000000029f69
- (id)init;	// IMP=0x0000000000029d4a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

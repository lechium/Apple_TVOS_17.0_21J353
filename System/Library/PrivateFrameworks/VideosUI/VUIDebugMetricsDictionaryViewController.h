//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewController.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface VUIDebugMetricsDictionaryViewController : UITableViewController
{
    NSDictionary *_dictionary;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000bc6fd
@property(retain, nonatomic) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000000bc533
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000000bc516
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000000000bc50b
- (id)sortedKeys;	// IMP=0x00000000000bc4a9
- (void)viewDidLoad;	// IMP=0x00000000000bc47a
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000bc3bd

@end


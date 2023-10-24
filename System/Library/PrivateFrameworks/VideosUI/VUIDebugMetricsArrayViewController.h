//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewController.h>

@class NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface VUIDebugMetricsArrayViewController : UITableViewController
{
    NSArray *_array;	// 8 = 0x8
    NSDictionary *_cachedKeysOrder;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001b3f46
@property(retain, nonatomic) NSDictionary *cachedKeysOrder; // @synthesize cachedKeysOrder=_cachedKeysOrder;
@property(retain, nonatomic) NSArray *array; // @synthesize array=_array;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000001b3cf1
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000001b3887
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000001b37d4
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000000001b3757
- (void)generateCachedKeys;	// IMP=0x00000000001b35c2
- (id)object;	// IMP=0x00000000001b354a
- (void)setObject:(id)arg1;	// IMP=0x00000000001b34aa
- (void)viewDidLoad;	// IMP=0x00000000001b3354
- (id)init;	// IMP=0x00000000001b3320

@end


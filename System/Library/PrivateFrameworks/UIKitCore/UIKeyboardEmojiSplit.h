//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UITableView;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiSplit
{
    UITableView *_picker;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000b40729
@property(readonly) UITableView *picker; // @synthesize picker=_picker;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x0000000000b40699
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000b405bc
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000b405b4
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000000b40569
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000000b4055e
- (_Bool)shouldCache;	// IMP=0x0000000000b40556
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000b403da
- (id)defaultIndexPath;	// IMP=0x0000000000b403ba

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


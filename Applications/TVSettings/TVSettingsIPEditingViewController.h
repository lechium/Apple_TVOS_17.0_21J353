//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, TSKSettingItem;
@protocol TSKSettingItemEditingControllerDelegate;

@interface TVSettingsIPEditingViewController
{
    TSKSettingItem *_editingItem;	// 8 = 0x8
    id <TSKSettingItemEditingControllerDelegate> _editingDelegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000002e31a
@property(nonatomic) __weak id <TSKSettingItemEditingControllerDelegate> editingDelegate; // @synthesize editingDelegate=_editingDelegate;
@property(retain, nonatomic) TSKSettingItem *editingItem; // @synthesize editingItem=_editingItem;
- (void)_menuPressed;	// IMP=0x001000000002e24e
- (id)_promptText;	// IMP=0x001000000002e23d
- (void)ipEntryViewControllerDidFinish:(id)arg1;	// IMP=0x001000000002e1be
- (void)viewDidLoad;	// IMP=0x001000000002e086
- (id)title;	// IMP=0x001000000002e07e
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x001000000002dff2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSettingKit/TSKViewController.h>

@class NSString, TVSettingsWholeHomeAudioRoomDataSource;
@protocol TVSettingsWholeHomeAudioRoomPickerViewControllerDelegate;

@interface TVSettingsWholeHomeAudioRoomPickerViewController : TSKViewController
{
    id <TVSettingsWholeHomeAudioRoomPickerViewControllerDelegate> _delegate;	// 8 = 0x8
    TVSettingsWholeHomeAudioRoomDataSource *_dataSource;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000000ec40
@property(readonly, nonatomic) TVSettingsWholeHomeAudioRoomDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <TVSettingsWholeHomeAudioRoomPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)editingController:(id)arg1 didProvideValue:(id)arg2 forSettingItem:(id)arg3;	// IMP=0x001000000000e929
- (void)_presentCreateRoomFailedViewControllerWithError:(id)arg1;	// IMP=0x001000000000e7f2
- (void)_showAccessoryRemoveFailed;	// IMP=0x001000000000e61d
- (void)__removeLocalAccessoryFromHome;	// IMP=0x001000000000e3c4
- (void)_removeLocalAccessoryFromHome;	// IMP=0x001000000000e35a
- (void)__moveOrAddLocalAccessoryToRoom:(id)arg1 inHome:(id)arg2;	// IMP=0x001000000000ddbd
- (void)_moveOrAddLocalAccessoryToRoom:(id)arg1 inHome:(id)arg2;	// IMP=0x001000000000db92
- (void)__moveOrAddLocalAccessoryToRoomWithName:(id)arg1 inHome:(id)arg2;	// IMP=0x001000000000d998
- (void)_moveOrAddLocalAccessoryToRoomWithName:(id)arg1 inHome:(id)arg2;	// IMP=0x001000000000d76d
- (void)_didSelectSuggestedRoomItem:(id)arg1;	// IMP=0x001000000000d5b8
- (void)_didSelectExistingRoomItem:(id)arg1;	// IMP=0x001000000000d3d1
- (id)_makeAddNewRoomViewController;	// IMP=0x001000000000d323
- (void)wholeHomeAudioRoomDataSourceDidUpdate:(id)arg1;	// IMP=0x001000000000d311
- (void)wholeHomeAudioRoomDataSourceHomeWasRemoved:(id)arg1;	// IMP=0x001000000000d246
- (id)loadSettingGroups;	// IMP=0x001000000000c632
- (id)initWithHome:(id)arg1;	// IMP=0x001000000000c552

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


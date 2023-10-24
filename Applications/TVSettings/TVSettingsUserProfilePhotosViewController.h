//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSettingKit/TSKViewController.h>

@class TSKPreviewViewController, TVSettingsUserProfileFacade;

@interface TVSettingsUserProfilePhotosViewController : TSKViewController
{
    TVSettingsUserProfileFacade *_userProfileFacade;	// 8 = 0x8
    TSKPreviewViewController *_appPreviewViewController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000e6847
@property(retain, nonatomic) TSKPreviewViewController *appPreviewViewController; // @synthesize appPreviewViewController=_appPreviewViewController;
@property(retain, nonatomic) TVSettingsUserProfileFacade *userProfileFacade; // @synthesize userProfileFacade=_userProfileFacade;
- (void)_enableMemoriesContent:(id)arg1;	// IMP=0x00100000000e67a2
- (void)_enableiCloudMyPhotoStream:(id)arg1;	// IMP=0x00100000000e6754
- (void)_enableiCloudSharedAlbums:(id)arg1;	// IMP=0x00100000000e6706
- (void)_enableiCloudPhotoLibrary:(id)arg1;	// IMP=0x00100000000e66b8
- (id)_iCloudPhotosGroup;	// IMP=0x00100000000e6070
- (id)previewForItemAtIndexPath:(id)arg1;	// IMP=0x00100000000e5fa9
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00100000000e5f24
- (id)loadSettingGroups;	// IMP=0x00100000000e5e9b
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00100000000e5e52
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00100000000e5dbf
- (void)dealloc;	// IMP=0x00100000000e5d65
- (id)initWithUserProfileFacade:(id)arg1;	// IMP=0x00100000000e5cc8

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSettingKit/TSKViewController.h>

@class TVSettingsHomeKitCameraProfile;

@interface TVSettingsHomeKitActivityNotificationsViewController : TSKViewController
{
    TVSettingsHomeKitCameraProfile *_cameraProfile;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000003be1f
@property(readonly, nonatomic) TVSettingsHomeKitCameraProfile *cameraProfile; // @synthesize cameraProfile=_cameraProfile;
- (id)alertTitleForEventType:(unsigned long long)arg1;	// IMP=0x001000000003bdc9
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x001000000003bd76
- (void)_toggledSignificantEventType:(id)arg1;	// IMP=0x001000000003bb0d
- (void)_selectedTime:(id)arg1;	// IMP=0x001000000003ba82
- (void)_selectedItem:(id)arg1;	// IMP=0x001000000003b7e0
- (id)loadSettingGroups;	// IMP=0x001000000003ac7f
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x001000000003abf7
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x001000000003ab69
- (id)title;	// IMP=0x001000000003ab58
- (id)initWithCameraProfile:(id)arg1;	// IMP=0x001000000003aaea

@end

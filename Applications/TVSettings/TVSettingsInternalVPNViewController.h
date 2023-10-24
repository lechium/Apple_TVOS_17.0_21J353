//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSettingKit/TSKViewController.h>

@interface TVSettingsInternalVPNViewController : TSKViewController
{
    _Bool _loadingProfile;	// 8 = 0x8
    unsigned long long _configurationCheckState;	// 16 = 0x10
}

@property(nonatomic) _Bool loadingProfile; // @synthesize loadingProfile=_loadingProfile;
@property(nonatomic) unsigned long long configurationCheckState; // @synthesize configurationCheckState=_configurationCheckState;
- (id)_URLQueryParameterAllowedCharacters;	// IMP=0x00100000000216f9
- (void)_warnAboutBadVPNURL;	// IMP=0x00100000000215dd
- (void)_warnAboutMissingAppleConnectCredentials;	// IMP=0x00100000000214c1
- (void)_checkVPNConfiguration;	// IMP=0x0010000000020eb7
- (void)_VPNProfileLoaded:(id)arg1 error:(id)arg2;	// IMP=0x00100000000209ac
- (void)_finishLoadingVPNProfileAtURL:(id)arg1;	// IMP=0x001000000002022f
- (void)_loadVPNProfile;	// IMP=0x001000000001feef
- (void)_updateCheckVPNItem:(id)arg1;	// IMP=0x001000000001fd14
- (void)_updateLoadVPNItem:(id)arg1;	// IMP=0x001000000001fabb
- (id)loadSettingGroups;	// IMP=0x001000000001f6b1
- (void)viewDidLoad;	// IMP=0x001000000001f65a

@end


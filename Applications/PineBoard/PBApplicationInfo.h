//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIApplicationInfo.h>

@class NSNumber, NSSet, NSString;

@interface PBApplicationInfo : _UIApplicationInfo
{
    _Bool _arcadeApplication;	// 8 = 0x8
    _Bool _alwaysAvailable;	// 9 = 0x9
    _Bool _disabledByPlist;	// 10 = 0xa
    _Bool _legacyContentPartnerApp;	// 11 = 0xb
    _Bool _hasTemplateLaunchImage;	// 12 = 0xc
    _Bool _receivesLongPressPlayPause;	// 13 = 0xd
    _Bool _supportsSharedQueue;	// 14 = 0xe
    _Bool _supportsActiveRouteNowPlaying;	// 15 = 0xf
    _Bool _supportsHDR;	// 16 = 0x10
    _Bool _hasModeSwitchEntitlement;	// 17 = 0x11
    _Bool _usingCloudKit;	// 18 = 0x12
    _Bool _supportsSharePlay;	// 19 = 0x13
    _Bool _viewService;	// 20 = 0x14
    _Bool _xcodeApp;	// 21 = 0x15
    _Bool _cloudDemoted;	// 22 = 0x16
    _Bool _installedByMagellan;	// 23 = 0x17
    _Bool _iconVisibilitySetByPreference;	// 24 = 0x18
    unsigned char _iconVisibilityDefaultVisible;	// 25 = 0x19
    _Bool _hasAllowIconVisibilityChangesEntitlement;	// 26 = 0x1a
    _Bool _hasRunAsCurrentUserEntitlement;	// 27 = 0x1b
    _Bool _gameCenterEnabled;	// 28 = 0x1c
    _Bool _hasGetCurrentUserEntitlement;	// 29 = 0x1d
    _Bool;	// 30 = 0x1e
    _Bool _supportsBrowsingChannelGuideUserActivityType;	// 31 = 0x1f
    _Bool _licensedToDevice;	// 32 = 0x20
    _Bool _launchableDuringSetup;	// 33 = 0x21
    NSString *_localizedName;	// 40 = 0x28
    NSString *_launchImageName;	// 48 = 0x30
    NSString *_nowPlayingViewControllerClassName;	// 56 = 0x38
    NSString *_iconFile;	// 64 = 0x40
    NSString *_primaryIconName;	// 72 = 0x48
    NSString *_alternateIconName;	// 80 = 0x50
    NSString *_liveIconName;	// 88 = 0x58
    NSSet *_iconVisibilityDefaultVisibleInstallTypes;	// 96 = 0x60
    NSString *_topShelfStaticImageName;	// 104 = 0x68
    NSString *_managedApplicationPersona;	// 112 = 0x70
    NSNumber *_genreID;	// 120 = 0x78
}

+ (id)_infoPlistKeys;	// IMP=0x00400000000a7641
+ (id)_entitlementKeys;	// IMP=0x00100000000a757b
- (void).cxx_destruct;	// IMP=0x00100000000a79a2
@property(readonly, nonatomic, getter=isLaunchableDuringSetup) _Bool launchableDuringSetup; // @synthesize launchableDuringSetup=_launchableDuringSetup;
@property(readonly, nonatomic, getter=isLicensedToDevice) _Bool licensedToDevice; // @synthesize licensedToDevice=_licensedToDevice;
@property(readonly, nonatomic) NSNumber *genreID; // @synthesize genreID=_genreID;
@property(readonly, nonatomic) _Bool supportsBrowsingChannelGuideUserActivityType; // @synthesize supportsBrowsingChannelGuideUserActivityType=_supportsBrowsingChannelGuideUserActivityType;
@property(readonly, nonatomic, getter=isArcherLinked) _Bool archerLinked; // @synthesize archerLinked=_archerLinked;
@property(readonly, nonatomic) _Bool hasGetCurrentUserEntitlement; // @synthesize hasGetCurrentUserEntitlement=_hasGetCurrentUserEntitlement;
@property(readonly, nonatomic, getter=isGameCenterEnabled) _Bool gameCenterEnabled; // @synthesize gameCenterEnabled=_gameCenterEnabled;
@property(readonly, nonatomic) NSString *managedApplicationPersona; // @synthesize managedApplicationPersona=_managedApplicationPersona;
@property(readonly, nonatomic) _Bool hasRunAsCurrentUserEntitlement; // @synthesize hasRunAsCurrentUserEntitlement=_hasRunAsCurrentUserEntitlement;
@property(readonly, nonatomic) _Bool hasAllowIconVisibilityChangesEntitlement; // @synthesize hasAllowIconVisibilityChangesEntitlement=_hasAllowIconVisibilityChangesEntitlement;
@property(readonly, nonatomic) NSString *topShelfStaticImageName; // @synthesize topShelfStaticImageName=_topShelfStaticImageName;
@property(readonly, nonatomic) NSSet *iconVisibilityDefaultVisibleInstallTypes; // @synthesize iconVisibilityDefaultVisibleInstallTypes=_iconVisibilityDefaultVisibleInstallTypes;
@property(readonly, nonatomic) unsigned char iconVisibilityDefaultVisible; // @synthesize iconVisibilityDefaultVisible=_iconVisibilityDefaultVisible;
@property(readonly, nonatomic) _Bool iconVisibilitySetByPreference; // @synthesize iconVisibilitySetByPreference=_iconVisibilitySetByPreference;
@property(readonly, nonatomic, getter=isInstalledByMagellan) _Bool installedByMagellan; // @synthesize installedByMagellan=_installedByMagellan;
@property(readonly, nonatomic, getter=isCloudDemoted) _Bool cloudDemoted; // @synthesize cloudDemoted=_cloudDemoted;
@property(readonly, nonatomic, getter=isXcodeApp) _Bool xcodeApp; // @synthesize xcodeApp=_xcodeApp;
@property(readonly, nonatomic, getter=isViewService) _Bool viewService; // @synthesize viewService=_viewService;
@property(readonly, nonatomic) _Bool supportsSharePlay; // @synthesize supportsSharePlay=_supportsSharePlay;
@property(readonly, nonatomic, getter=isUsingCloudKit) _Bool usingCloudKit; // @synthesize usingCloudKit=_usingCloudKit;
@property(readonly, nonatomic) _Bool hasModeSwitchEntitlement; // @synthesize hasModeSwitchEntitlement=_hasModeSwitchEntitlement;
@property(readonly, nonatomic) _Bool supportsHDR; // @synthesize supportsHDR=_supportsHDR;
@property(readonly, nonatomic) NSString *liveIconName; // @synthesize liveIconName=_liveIconName;
@property(copy, nonatomic) NSString *alternateIconName; // @synthesize alternateIconName=_alternateIconName;
@property(readonly, nonatomic) NSString *primaryIconName; // @synthesize primaryIconName=_primaryIconName;
@property(readonly, nonatomic) NSString *iconFile; // @synthesize iconFile=_iconFile;
@property(readonly, copy, nonatomic) NSString *nowPlayingViewControllerClassName; // @synthesize nowPlayingViewControllerClassName=_nowPlayingViewControllerClassName;
@property(readonly, nonatomic) _Bool supportsActiveRouteNowPlaying; // @synthesize supportsActiveRouteNowPlaying=_supportsActiveRouteNowPlaying;
@property(readonly, nonatomic) _Bool supportsSharedQueue; // @synthesize supportsSharedQueue=_supportsSharedQueue;
@property(readonly, nonatomic) _Bool receivesLongPressPlayPause; // @synthesize receivesLongPressPlayPause=_receivesLongPressPlayPause;
@property(readonly, copy, nonatomic) NSString *launchImageName; // @synthesize launchImageName=_launchImageName;
@property(readonly, nonatomic) _Bool hasTemplateLaunchImage; // @synthesize hasTemplateLaunchImage=_hasTemplateLaunchImage;
@property(readonly, nonatomic, getter=isLegacyContentPartnerApp) _Bool legacyContentPartnerApp; // @synthesize legacyContentPartnerApp=_legacyContentPartnerApp;
@property(readonly, nonatomic, getter=isDisabledByPlist) _Bool disabledByPlist; // @synthesize disabledByPlist=_disabledByPlist;
@property(readonly, nonatomic, getter=isAlwaysAvailable) _Bool alwaysAvailable; // @synthesize alwaysAvailable=_alwaysAvailable;
@property(readonly, nonatomic, getter=isArcadeApplication) _Bool arcadeApplication; // @synthesize arcadeApplication=_arcadeApplication;
@property(readonly, copy, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
- (void)_refreshRunsAsCurrentUser;	// IMP=0x00100000000a7424
- (void)_refreshLocalizedName;	// IMP=0x00100000000a7337
- (id)getEntitlementValueUncached:(id)arg1 ofClass:(Class)arg2;	// IMP=0x00100000000a7286
- (id)getInfoPlistValueUncached:(id)arg1;	// IMP=0x00100000000a71a0
@property(readonly, nonatomic) _Bool shouldIgnoreSupportedPlaybackRates;
@property(readonly, nonatomic, getter=isAppleApplication) _Bool appleApplication;
@property(readonly, nonatomic, getter=isSystemApplication) _Bool systemApplication;
- (void)_loadFromProxy:(id)arg1;	// IMP=0x00100000000a61bb
- (void)pb_reportUntrustedLaunchAttempt;	// IMP=0x00100000002181f1

@end


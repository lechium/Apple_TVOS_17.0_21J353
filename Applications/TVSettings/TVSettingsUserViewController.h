//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSettingKit/TSKViewController.h>

@class AFSettingsConnection, FLTVSettingsAccountItemsController, NSArray, NSString, NSURL, TSKSettingItem, TVApplicationController, TVSettingsITMSFacade, TVSettingsPreferenceFacade, TVSettingsUser, TVSettingsUserProfileFacade, _TtC10TVSettings34TVSettingsTapToRepairUserPresenter;

@interface TVSettingsUserViewController : TSKViewController
{
    _Bool _shouldPresentManageSubscriptionsWhenURLBagLoads;	// 8 = 0x8
    NSURL *_lastDeepLinkURL;	// 16 = 0x10
    TVSettingsITMSFacade *_itmsFacade;	// 24 = 0x18
    TVSettingsUserProfileFacade *_userProfileFacade;	// 32 = 0x20
    TVSettingsUser *_user;	// 40 = 0x28
    TVApplicationController *_subscriptionsAppController;	// 48 = 0x30
    TSKSettingItem *_editNameItem;	// 56 = 0x38
    TSKSettingItem *_asnPaidItem;	// 64 = 0x40
    TSKSettingItem *_asnFreeItem;	// 72 = 0x48
    TVSettingsPreferenceFacade *_groupRecommendationsPrefsFacade;	// 80 = 0x50
    FLTVSettingsAccountItemsController *_followUpController;	// 88 = 0x58
    _TtC10TVSettings34TVSettingsTapToRepairUserPresenter *_tapToRepairUserPresenter;	// 96 = 0x60
    AFSettingsConnection *_siriSettingsConnection;	// 104 = 0x68
    NSArray *_supportedMultiUserLanguageCodes;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x002000000005c46a
@property(retain, nonatomic) NSArray *supportedMultiUserLanguageCodes; // @synthesize supportedMultiUserLanguageCodes=_supportedMultiUserLanguageCodes;
@property(retain, nonatomic) AFSettingsConnection *siriSettingsConnection; // @synthesize siriSettingsConnection=_siriSettingsConnection;
@property(retain, nonatomic) _TtC10TVSettings34TVSettingsTapToRepairUserPresenter *tapToRepairUserPresenter; // @synthesize tapToRepairUserPresenter=_tapToRepairUserPresenter;
@property(retain, nonatomic) FLTVSettingsAccountItemsController *followUpController; // @synthesize followUpController=_followUpController;
@property(retain, nonatomic) TVSettingsPreferenceFacade *groupRecommendationsPrefsFacade; // @synthesize groupRecommendationsPrefsFacade=_groupRecommendationsPrefsFacade;
@property(nonatomic) _Bool shouldPresentManageSubscriptionsWhenURLBagLoads; // @synthesize shouldPresentManageSubscriptionsWhenURLBagLoads=_shouldPresentManageSubscriptionsWhenURLBagLoads;
@property(retain, nonatomic) TSKSettingItem *asnFreeItem; // @synthesize asnFreeItem=_asnFreeItem;
@property(retain, nonatomic) TSKSettingItem *asnPaidItem; // @synthesize asnPaidItem=_asnPaidItem;
@property(retain, nonatomic) TSKSettingItem *editNameItem; // @synthesize editNameItem=_editNameItem;
@property(retain, nonatomic) TVApplicationController *subscriptionsAppController; // @synthesize subscriptionsAppController=_subscriptionsAppController;
@property(retain, nonatomic) TVSettingsUser *user; // @synthesize user=_user;
@property(retain, nonatomic) TVSettingsUserProfileFacade *userProfileFacade; // @synthesize userProfileFacade=_userProfileFacade;
@property(retain, nonatomic) TVSettingsITMSFacade *itmsFacade; // @synthesize itmsFacade=_itmsFacade;
@property(copy, nonatomic) NSURL *lastDeepLinkURL; // @synthesize lastDeepLinkURL=_lastDeepLinkURL;
- (void)_showRMVErrorAlertForError:(id)arg1;	// IMP=0x001000000005bfcf
- (void)_startTapToRepairThenEnableRMVWithPrompt:(_Bool)arg1;	// IMP=0x001000000005bcff
- (void)_startTapToRepairUserWithConfiguration:(id)arg1;	// IMP=0x001000000005bc46
- (void)_startTapToRepairUserWithCopyStyle:(long long)arg1 needsCDPRepair:(_Bool)arg2;	// IMP=0x001000000005bbd4
- (void)_completeUser:(id)arg1;	// IMP=0x001000000005bbbb
- (void)_handleFollowUpItem:(id)arg1;	// IMP=0x001000000005ba10
- (void)_toggleGroupRecommendationsConsent;	// IMP=0x001000000005b99a
- (id)_manage;	// IMP=0x001000000005acf0
- (void)_togglePasswordFreeSetting;	// IMP=0x001000000005ac33
- (id)_requirePassword;	// IMP=0x001000000005a390
- (void)_enableSharedWithYou:(id)arg1;	// IMP=0x001000000005a38a
- (id)_sharedWithYou;	// IMP=0x0010000000059f24
- (id)_iCloudPhotoSectionValueUsingUserProfileFacade:(id)arg1;	// IMP=0x0010000000059e5a
- (id)_primaryiCloudOptions;	// IMP=0x00100000000598dc
- (id)_appleIDs;	// IMP=0x00100000000590ca
- (id)_followUps;	// IMP=0x0010000000058e03
- (void)tapToRepairUserPresenterDidDismiss:(id)arg1;	// IMP=0x0010000000058dc2
- (void)tapToRepairUserDidFinish:(id)arg1;	// IMP=0x0010000000058c5d
- (void)presentActionForDisplayedDeepLinkURL;	// IMP=0x00100000000587d2
- (void)editingController:(id)arg1 didProvideValue:(id)arg2 forSettingItem:(id)arg3;	// IMP=0x0010000000058614
- (id)_manageSubscriptionsViewController;	// IMP=0x001000000005842d
- (void);	// IMP=0x0010000000057d60
- (void)appController:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0010000000057bad
- (void)appController:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2;	// IMP=0x0010000000057b0b
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00100000000578ab
- (id)loadSettingGroups;	// IMP=0x001000000005777e
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0010000000057735
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00100000000576a2
- (void)dealloc;	// IMP=0x00100000000575d6
- (id)initWithUser:(id)arg1;	// IMP=0x00100000000572b1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

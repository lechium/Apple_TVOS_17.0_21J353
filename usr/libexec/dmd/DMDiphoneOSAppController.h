//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ASDJobManager, ASDUpdatesService, FBSDisplayLayoutMonitor, NSArray, NSMutableDictionary, NSString;

@interface DMDiphoneOSAppController
{
    NSString *_singleAppModeBundleIndentifier;	// 8 = 0x8
    NSMutableDictionary *_bundleIDsToAssertions;	// 16 = 0x10
    FBSDisplayLayoutMonitor *_layoutMonitor;	// 24 = 0x18
    NSArray *__foregroundBundleIdentifiers;	// 32 = 0x20
}

+ (id)metadataPath;	// IMP=0x002000000001b13a
+ (id)changeTypeAsString:(long long)arg1;	// IMP=0x001000000001ae5e
+ (id)_appleAccountForPersona:(id)arg1;	// IMP=0x001000000001abda
+ (id)_appStoreAccountIdentifierForPersona:(id)arg1;	// IMP=0x001000000001aa69
+ (id)enumeratorForOrdinaryApps;	// IMP=0x0010000000018c82
+ (id)enumeratorForSystemAppPlaceholders;	// IMP=0x0010000000018c69
+ (id)enumeratorForUserAppPlaceholders;	// IMP=0x0010000000018c4b
- (void).cxx_destruct;	// IMP=0x001000000001caea
@property(retain, nonatomic) NSArray *_foregroundBundleIdentifiers; // @synthesize _foregroundBundleIdentifiers=__foregroundBundleIdentifiers;
@property(retain, nonatomic) FBSDisplayLayoutMonitor *layoutMonitor; // @synthesize layoutMonitor=_layoutMonitor;
@property(retain, nonatomic) NSMutableDictionary *bundleIDsToAssertions; // @synthesize bundleIDsToAssertions=_bundleIDsToAssertions;
@property(copy, nonatomic) NSString *singleAppModeBundleIndentifier; // @synthesize singleAppModeBundleIndentifier=_singleAppModeBundleIndentifier;
- (void)_updateForegroundBundleIdentifiers;	// IMP=0x001000000001c752
- (void)_getMetadataForBundleIdentifier:(id)arg1 storeItemIdentifier:(id)arg2 personaIdentifier:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000001c190
- (void)_applyStoreDictionary:(id)arg1 toAppMetadata:(id)arg2;	// IMP=0x001000000001bfc3
- (id)_managedDefaultsForBundleIdentifier:(id)arg1;	// IMP=0x001000000001bf71
- (_Bool)setFeedback:(id)arg1 forBundleIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x001000000001bcb2
- (id)feedbackForBundleIdentifier:(id)arg1;	// IMP=0x001000000001ba28
- (void)_withSandboxExtensionForApp:(id)arg1 do:(CDUnknownBlockType)arg2;	// IMP=0x001000000001b7b9
- (_Bool)setConfiguration:(id)arg1 forBundleIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x001000000001b60c
- (id)configurationForBundleIdentifier:(id)arg1;	// IMP=0x001000000001b5b5
- (void)getMetadataForNonEnterpriseAppRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001b25c
- (void)getBundleIdentifierForStoreItemIdentifier:(id)arg1 personaIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000001b153
- (_Bool)writeManagementInformationToDiskWithError:(id *)arg1;	// IMP=0x001000000001b0bb
- (void)installSystemAppWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001ae7d
- (void)sendAppRequestWithBundleIdentifier:(id)arg1 storeItemIdentifier:(id)arg2 personaIdentifier:(id)arg3 type:(long long)arg4 skipDownloads:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x001000000001a638
- (void)promptUserToSignInWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000001a465
@property(readonly, nonatomic) _Bool userIsSignedIn;
- (void)removeTerminationAssertionForBundleIdentifier:(id)arg1;	// IMP=0x001000000001a2c5
- (void)addTerminationAssertion:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x001000000001a172
@property(readonly, copy, nonatomic) ASDUpdatesService *updatesService;
@property(readonly, copy, nonatomic) ASDJobManager *jobManager;
- (id)foregroundBundleIdentifiers;	// IMP=0x001000000001a06f
- (id)initPrivate;	// IMP=0x0010000000019edf
- (id)_allPropertyKeys;	// IMP=0x0010000000018d1b
- (unsigned long long)appTypeFromProxy:(id)arg1;	// IMP=0x0010000000018c9d
- (void)handleFetchRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001795e
- (void)_downloadAppForRequest:(id)arg1 type:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000019cbf
- (void)_installUserAppForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000019a83
- (void)_installDeviceLicensedAppForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000199a2
- (void)resumeAppInstallationWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000019434
- (void)startInstallingNonEnterpriseAppForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000191f5
- (void)startInstallingEnterpriseAppWithManifestURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000018faf
- (void)startRedeemingAppWithCode:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001cb3d
- (void)_uninstallAppWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001d699
- (void)startUninstallingAppWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001d413
- (void)cancelAppInstallationWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001cf25
- (void)_updateEndedForLifeCycle:(id)arg1;	// IMP=0x001000000001ddf3
- (void)_startUpdatingAppForRequest:(id)arg1 metadata:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000001da7f
- (void)didFinishUpdatingForLifeCycle:(id)arg1;	// IMP=0x001000000001da11
- (void)didFailUpdatingForLifeCycle:(id)arg1;	// IMP=0x001000000001d9a3
- (void)didCancelUpdatingForLifeCycle:(id)arg1;	// IMP=0x001000000001d935
- (void)resumeAppUpdateWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001d923
- (void)cancelAppUpdateWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001d911
- (void)startUpdatingAppForRequest:(id)arg1 metadata:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000001d6b7

@end

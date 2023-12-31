//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MIBundleContainer, MICodeSigningInfo, MIDataContainer, MIExecutableBundle, MIInstallationJournalEntry, NSArray, NSMutableDictionary, NSURL;

@interface MIInstallableBundle
{
    _Bool _isPlaceholderInstall;	// 8 = 0x8
    _Bool _xpcServiceBundlesEnabled;	// 9 = 0x9
    MIBundleContainer *_existingBundleContainer;	// 16 = 0x10
    MIBundleContainer *_bundleContainer;	// 24 = 0x18
    MIDataContainer *_dataContainer;	// 32 = 0x20
    NSArray *_appExtensionBundles;	// 40 = 0x28
    NSArray *_appExtensionDataContainers;	// 48 = 0x30
    NSArray *_frameworkBundles;	// 56 = 0x38
    NSArray *_xpcServiceBundles;	// 64 = 0x40
    NSURL *_upgradingBuiltInAppAtURL;	// 72 = 0x48
    NSMutableDictionary *_identifiersMap;	// 80 = 0x50
    MICodeSigningInfo *_bundleSigningInfo;	// 88 = 0x58
    MIInstallationJournalEntry *_journalEntry;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x002000000003a1e2
@property(retain, nonatomic) MIInstallationJournalEntry *journalEntry; // @synthesize journalEntry=_journalEntry;
@property(retain, nonatomic) MICodeSigningInfo *bundleSigningInfo; // @synthesize bundleSigningInfo=_bundleSigningInfo;
@property(nonatomic) _Bool xpcServiceBundlesEnabled; // @synthesize xpcServiceBundlesEnabled=_xpcServiceBundlesEnabled;
@property(retain, nonatomic) NSMutableDictionary *identifiersMap; // @synthesize identifiersMap=_identifiersMap;
@property(retain, nonatomic) NSURL *upgradingBuiltInAppAtURL; // @synthesize upgradingBuiltInAppAtURL=_upgradingBuiltInAppAtURL;
@property(retain, nonatomic) NSArray *xpcServiceBundles; // @synthesize xpcServiceBundles=_xpcServiceBundles;
@property(retain, nonatomic) NSArray *frameworkBundles; // @synthesize frameworkBundles=_frameworkBundles;
@property(retain, nonatomic) NSArray *appExtensionDataContainers; // @synthesize appExtensionDataContainers=_appExtensionDataContainers;
@property(retain, nonatomic) NSArray *appExtensionBundles; // @synthesize appExtensionBundles=_appExtensionBundles;
@property(retain, nonatomic) MIDataContainer *dataContainer; // @synthesize dataContainer=_dataContainer;
@property(retain, nonatomic) MIBundleContainer *bundleContainer; // @synthesize bundleContainer=_bundleContainer;
@property(readonly, nonatomic) MIBundleContainer *existingBundleContainer; // @synthesize existingBundleContainer=_existingBundleContainer;
@property(readonly, nonatomic) _Bool isPlaceholderInstall; // @synthesize isPlaceholderInstall=_isPlaceholderInstall;
- (_Bool)performLaunchServicesRegistrationWithError:(id *)arg1;	// IMP=0x0010000000039fde
- (id)launchServicesBundleRecordsWithError:(id *)arg1;	// IMP=0x0010000000039edc
- (_Bool)finalizeInstallationWithError:(id *)arg1;	// IMP=0x0010000000039a88
- (id)_noLongerPresentAppExtensionDataContainers;	// IMP=0x00100000000393fb
- (unsigned long long)_installationJournalOperationType;	// IMP=0x00100000000392e7
- (_Bool)_refreshUUIDForContainer:(id)arg1 withError:(id *)arg2;	// IMP=0x0010000000039167
- (_Bool)postFlightInstallationWithError:(id *)arg1;	// IMP=0x0010000000038d05
- (_Bool)_postFlightAppExtensionsWithError:(id *)arg1;	// IMP=0x0010000000038722
- (_Bool)performInstallationWithError:(id *)arg1;	// IMP=0x0010000000038072
- (_Bool)_preserveExistingPlaceholderAsParallelPlaceholderWithError:(id *)arg1;	// IMP=0x0010000000037c94
- (_Bool)_handleStashOptionWithError:(id *)arg1;	// IMP=0x0010000000037a02
- (_Bool)_linkToParentApplication:(id *)arg1;	// IMP=0x0010000000037849
- (_Bool)_handleStashMode:(unsigned long long)arg1 withError:(id *)arg2;	// IMP=0x00100000000375fe
- (_Bool)_setBundleMetadataWithError:(id *)arg1;	// IMP=0x0010000000036f08
- (_Bool)_setLinkageInBundleMetadata:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000036940
- (_Bool)_validateSinfsWithError:(id *)arg1;	// IMP=0x001000000003665d
- (_Bool)_captureDataFromStagingRootOrBundle:(id)arg1 toContainer:(id)arg2 withError:(id *)arg3;	// IMP=0x001000000003656d
- (_Bool)_writeOptionsDataToBundle:(id)arg1 orContainer:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000035d6c
- (_Bool)performVerificationWithError:(id *)arg1;	// IMP=0x0010000000033177
- (_Bool)_performAppClipSpecificValidationForEntitlements:(id)arg1 isAppClip:(_Bool *)arg2 withError:(id *)arg3;	// IMP=0x001000000003306f
- (_Bool)_validateAppManagementDomainForSigningInfo:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000032ea6
- (_Bool)_validateLinkedParentForSigningInfo:(id)arg1 appManagementDomainValue:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0010000000032921
- (_Bool)_getLinkedParentBundleID:(id *)arg1 withError:(id *)arg2;	// IMP=0x00100000000326bd
- (_Bool)_validateApplicationIdentifierForNewBundleSigningInfo:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000326b5
- (id)_validateBundle:(id)arg1 validatingResources:(_Bool)arg2 performingOnlineAuthorization:(_Bool)arg3 checkingTrustCacheIfApplicable:(_Bool)arg4 allowingFreeProfileValidation:(_Bool)arg5 skippingProfileIDValidation:(_Bool)arg6 error:(id *)arg7;	// IMP=0x00100000000323b0
- (_Bool)performPreflightWithError:(id *)arg1;	// IMP=0x001000000003114b
- (_Bool)_validateITunesMetadataOptionWithError:(id *)arg1;	// IMP=0x0010000000030bc3
- (_Bool)_checkCanInstallWithError:(id *)arg1;	// IMP=0x00100000000302ca
- (_Bool)_installEmbeddedProfilesWithError:(id *)arg1;	// IMP=0x001000000002fb9e
- (_Bool)_verifyBundleMetadataWithError:(id *)arg1;	// IMP=0x001000000002f9a9
- (void)dealloc;	// IMP=0x001000000002f6ec
- (id)initWithBundle:(id)arg1 inStagingRoot:(id)arg2 packageFormat:(unsigned char)arg3 identity:(id)arg4 domain:(unsigned long long)arg5 userOptions:(id)arg6 existingBundleContainer:(id)arg7 error:(id *)arg8;	// IMP=0x001000000002f537
- (id)recordPromise;	// IMP=0x001000000002f4e7

// Remaining properties
@property(retain, nonatomic) MIExecutableBundle *bundle; // @dynamic bundle;

@end


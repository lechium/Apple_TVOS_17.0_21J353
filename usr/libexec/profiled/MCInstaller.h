//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ManagedConfiguration/MCInstallerReader.h>

@class MISSING_TYPE, NSDictionary, NSMutableArray, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MCInstaller : MCInstallerReader
{
    NSMutableArray *_queuedProfiles;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_purgatoryWorkerQueue;	// 16 = 0x10
    NSDictionary *_currentlyInstallingRestrictions;	// 24 = 0x18
    NSMutableDictionary *_setAsideAccountIdentifiersByPayloadClass;	// 32 = 0x20
    NSMutableDictionary *_setAsideDictionariesByPayloadClass;	// 40 = 0x28
}

+ (void)_enumerateProfilesWithCriteria:(CDUnknownBlockType)arg1 filterFlags:(int)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00200000000539f3
+ (id)considerProfilesInstalledDuringBuddyForManagement;	// IMP=0x001000000005331d
+ (id)_installationFailureErrorWithUnderlyingError:(id)arg1;	// IMP=0x0010000000052e9e
+ (void)_setPathsSystemProfileStorageDirectory:(id)arg1 userProfileStorageDirectory:(id)arg2;	// IMP=0x0010000000052e32
+ (unsigned long long)targetDeviceTypeForCurrentDevice;	// IMP=0x001000000004e9d2
+ (id)notSupportedUnderMultiUserModeError;	// IMP=0x00100000000485ef
+ (id)notInstalledByMDMError;	// IMP=0x001000000004856e
+ (id)deviceIsSupervisedError;	// IMP=0x00100000000484d0
+ (id)deviceNotSupervisedError;	// IMP=0x0010000000048432
+ (id)sharedInstaller;	// IMP=0x0010000000044784
- (void).cxx_destruct;	// IMP=0x0020000000054993
@property(retain, nonatomic) NSMutableDictionary *setAsideDictionariesByPayloadClass; // @synthesize setAsideDictionariesByPayloadClass=_setAsideDictionariesByPayloadClass;
@property(retain, nonatomic) NSMutableDictionary *setAsideAccountIdentifiersByPayloadClass; // @synthesize setAsideAccountIdentifiersByPayloadClass=_setAsideAccountIdentifiersByPayloadClass;
- (_Bool)isCertificateReference:(id)arg1 aliasedInDependencyManager:(id)arg2;	// IMP=0x00100000000544a1
- (id)peekProfileDataFromPurgatoryForDeviceType:(unsigned long long)arg1;	// IMP=0x00100000000543d3
- (void)_purgatoryWorkerQueue_didPurgePurgatory:(_Bool)arg1;	// IMP=0x00100000000543c3
- (void)purgeProfileWithIdentifier:(id)arg1 fromPurgatoryForTargetDeviceType:(unsigned long long)arg2;	// IMP=0x001000000005415e
- (void)purgeProfilesFromPurgatoryForTargetDeviceType:(unsigned long long)arg1;	// IMP=0x0010000000053f04
- (_Bool)sendProfileData:(id)arg1 withIdentifier:(id)arg2 toPurgatoryForTargetDeviceType:(unsigned long long)arg3 outError:(id *)arg4;	// IMP=0x0010000000053c87
- (void)_sendMDMEnrollmentEventWithInstallationOptions:(id)arg1;	// IMP=0x00100000000530f0
- (id)_installedProfileWithIdentifier:(id)arg1 installationType:(long long)arg2;	// IMP=0x0010000000052f3d
- (void)recomputeProfileRestrictionsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000052360
- (id)verifiedMDMProfileIdentifierWithCleanUp;	// IMP=0x0010000000051e3c
- (void)removeManagedProfilesIfNecessary;	// IMP=0x0010000000051d32
- (void)removeUninstalledProfileWithIdentifier:(id)arg1 installationType:(long long)arg2 targetDeviceType:(unsigned long long)arg3;	// IMP=0x0010000000051cff
- (void)removeProfileWithIdentifier:(id)arg1 installationType:(long long)arg2 options:(id)arg3 source:(id)arg4;	// IMP=0x0010000000051a09
- (void)removeProfileWithIdentifier:(id)arg1 installationType:(long long)arg2 source:(id)arg3;	// IMP=0x00100000000519f1
- (MISSING_TYPE *)_cleanUpAfterRemovingProfileWithIdentifier:installedForUser:profileHandler:oldRestrictions: /* Error: Ran out of types for this method. */;	// IMP=0x001000000005136f
- (id)_reallyRemoveProfileWithIdentifier:(id)arg1 installationType:(long long)arg2 profileInstalled:(_Bool)arg3 targetDeviceType:(unsigned long long)arg4 options:(id)arg5 source:(id)arg6;	// IMP=0x0010000000050af7
- (void)removeAllProfilesFromInstallationQueue;	// IMP=0x0010000000050ada
- (id)_managingProfileIdentifierForProfileIdentifier:(id)arg1;	// IMP=0x0010000000050a0c
- (void)_removeOrphanedCertificateDependencyManager:(id)arg1 persistentID:(id)arg2 persona:(id)arg3;	// IMP=0x0010000000050818
- (void)_removeOrphanedResourcesOptions:(id)arg1 includingAccounts:(_Bool)arg2;	// IMP=0x001000000004ff39
- (_Bool)interactionClient:(id)arg1 didRequestPreflightUserInputResponses:(id)arg2 forPayloadIndex:(unsigned long long)arg3 outError:(id *)arg4;	// IMP=0x001000000004fd28
- (id)updateProfileWithIdentifier:(id)arg1 interactionClient:(id)arg2 installForSystem:(_Bool)arg3 source:(id)arg4 outError:(id *)arg5;	// IMP=0x001000000004f483
- (id)updateProfileWithIdentifier:(id)arg1 interactionClient:(id)arg2 source:(id)arg3 outError:(id *)arg4;	// IMP=0x001000000004f458
- (id)_profileNotEligibleErrorWithProfile:(id)arg1;	// IMP=0x001000000004f3a6
- (id)_watchInformationOutIsCellularSupported:(_Bool *)arg1;	// IMP=0x001000000004f39e
- (id)_preflightProfileForInstallationOnWatch:(id)arg1;	// IMP=0x001000000004ede5
- (id)_preflightProfileForInstallationOnHomePod:(id)arg1;	// IMP=0x001000000004eae9
- (id)_errorUnacceptablePayload:(id)arg1;	// IMP=0x001000000004ea37
- (_Bool)_overrideProfileValidation;	// IMP=0x001000000004e9e8
- (id)_assumeOwnershipProfileHandler:(id)arg1 options:(id)arg2 source:(id)arg3 outError:(id *)arg4;	// IMP=0x001000000004e25d
- (id)installProfileData:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 source:(id)arg4 outError:(id *)arg5;	// IMP=0x001000000004bed3
- (id)existingProfileContainingPayloadClass:(Class)arg1 inProfilesWithFilterFlags:(int)arg2 excludingProfileIdentifier:(id)arg3;	// IMP=0x001000000004bcb1
- (id)existingProfileContainingPayloadClass:(Class)arg1 excludingProfileIdentifier:(id)arg2;	// IMP=0x001000000004bc97
- (_Bool)_showWarnings:(id)arg1 interactionClient:(id)arg2 outError:(id *)arg3;	// IMP=0x001000000004bbcd
- (_Bool)_showWarningsForUpdatingProfile:(id)arg1 originalProfile:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x001000000004bae5
- (_Bool)_showWarningsForProfile:(id)arg1 interactionClient:(id)arg2 outError:(id *)arg3;	// IMP=0x001000000004ba67
- (id)setAsideDictionariesForPayloadHandlerClass:(Class)arg1;	// IMP=0x001000000004ba0f
- (void)addSetAsideDictionary:(id)arg1 forPayloadHandlerClass:(Class)arg2;	// IMP=0x001000000004b93b
- (id)setAsideAccountIdentifiersForPayloadClass:(Class)arg1;	// IMP=0x001000000004b896
- (void)addSetAsideAccountIdentifier:(id)arg1 forPayloadClass:(Class)arg2;	// IMP=0x001000000004b78f
- (_Bool)deviceSupervisionRequiredForPayload:(id)arg1;	// IMP=0x001000000004b5be
- (id)_installProfileHandler:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 source:(id)arg4 outError:(id *)arg5;	// IMP=0x0010000000048670
- (id)_deviceLockedError;	// IMP=0x00100000000483b1
- (id)_guardAgainstNoMDMPayloadWithNewProfile:(id)arg1 oldProfile:(id)arg2;	// IMP=0x0010000000048246
- (id)_validateMDMReplacementNewProfile:(id)arg1 oldProfile:(id)arg2 client:(id)arg3;	// IMP=0x00100000000475ad
- (id)_validateNewMDMProfile:(id)arg1 installationOption:(id)arg2;	// IMP=0x0010000000047293
- (void)_promptUserForRestoreWithAccountID:(id)arg1 personaID:(id)arg2 interactionClient:(id)arg3;	// IMP=0x00100000000471df
- (_Bool)_promptUserForMAIDSignIn:(id)arg1 personaID:(id)arg2 handler:(id)arg3 interactionClient:(id)arg4 outError:(id *)arg5;	// IMP=0x00100000000470f6
- (_Bool)_promptUserForComplianceWithRestrictions:(id)arg1 handler:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x00100000000467bd
- (id)_userCancelledErrorWithFriendlyName:(id)arg1;	// IMP=0x0010000000046739
- (id)_invalidInputError;	// IMP=0x00100000000466b8
- (id)_installationHaltedTopLevelError;	// IMP=0x00100000000465ae
- (id)_uiProfileInstallationDisabledTopLevelErrorWithCause:(id)arg1;	// IMP=0x001000000004647d
- (id)_targetDeviceMismatchError;	// IMP=0x00100000000463fc
- (id)_targetDevicePreflightFailedError;	// IMP=0x001000000004637b
- (id)_targetDeviceArchivedError;	// IMP=0x00100000000462fa
- (id)_targetDeviceUnavailableError;	// IMP=0x0010000000046279
- (id)_targetDeviceErrorWithUnderlyingError:(id)arg1;	// IMP=0x00100000000461d4
- (id)_malformedPayloadErrorWithUnderlyingError:(id)arg1;	// IMP=0x001000000004612f
- (id)_malformedPayloadErrorInternal:(_Bool)arg1;	// IMP=0x0010000000046098
- (_Bool)_purgatorySupportedForDevice:(unsigned long long)arg1;	// IMP=0x0010000000046082
- (id)_queueProfileData:(id)arg1 profile:(id)arg2 forDevice:(unsigned long long)arg3;	// IMP=0x0010000000045b64
- (long long)_targetValidationStatusForProfile:(id)arg1;	// IMP=0x0010000000045a28
- (void)queueProfileDataForInstallation:(id)arg1 originalFileName:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000044fb5
- (id)_badProvisioningProfileError;	// IMP=0x0010000000044f34
- (id)popProfileDataAtHeadOfInstallationQueue;	// IMP=0x0010000000044ec2
- (id)pathToInstalledProfileByUUID:(id)arg1;	// IMP=0x0010000000044ac9
- (id)pathToUninstalledProfileByIdentifier:(id)arg1 installationType:(long long)arg2 targetDeviceType:(unsigned long long)arg3;	// IMP=0x00100000000449d9
- (id)pathToInstalledProfileByIdentifier:(id)arg1 installationType:(long long)arg2;	// IMP=0x00100000000448c2
- (id)identifiersOfInstalledProfilesWithFilterFlags:(int)arg1;	// IMP=0x001000000004485e
- (id)init;	// IMP=0x00100000000447d9

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LSRecordPromise, MIAppIdentity, MIBundleContainer, MICodeSigningInfo, MIDataContainer, MIExecutableBundle, MIInstallOptions, NSArray, NSString, NSUUID;

@interface MIInstallationJournalEntry : NSObject
{
    MIAppIdentity *_identity;	// 8 = 0x8
    MIBundleContainer *_bundleContainer;	// 16 = 0x10
    MIBundleContainer *_existingBundleContainer;	// 24 = 0x18
    unsigned long long _installationDomain;	// 32 = 0x20
    unsigned long long _operationType;	// 40 = 0x28
    MIInstallOptions *_installOptions;	// 48 = 0x30
    MICodeSigningInfo *_bundleSigningInfo;	// 56 = 0x38
    CDUnknownBlockType _progressBlock;	// 64 = 0x40
    NSString *_linkToParentBundleID;	// 72 = 0x48
    NSArray *_noLongerPresentAppExtensionDataContainers;	// 80 = 0x50
    MIDataContainer *_dataContainer;	// 88 = 0x58
    NSArray *_appExtensionBundles;	// 96 = 0x60
    NSArray *_appExtensionDataContainers;	// 104 = 0x68
    NSArray *_bundleRecordsToRegister;	// 112 = 0x70
    LSRecordPromise *_recordPromise;	// 120 = 0x78
    unsigned long long _attemptCount;	// 128 = 0x80
    NSUUID *_journalEntryID;	// 136 = 0x88
    unsigned long long _journalPhase;	// 144 = 0x90
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000041b8f
+ (void)_attemptLSUpdateWithDiscoveredStateForIdentity:(id)arg1 domain:(unsigned long long)arg2;	// IMP=0x00100000000401d5
+ (id)_registerUsingDiscoveredInfoForAppIdentity:(id)arg1 inDomain:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00100000000401a3
- (void).cxx_destruct;	// IMP=0x00200000000441b8
@property(nonatomic) unsigned long long journalPhase; // @synthesize journalPhase=_journalPhase;
@property(readonly, nonatomic) NSUUID *journalEntryID; // @synthesize journalEntryID=_journalEntryID;
@property(readonly, nonatomic) unsigned long long attemptCount; // @synthesize attemptCount=_attemptCount;
@property(readonly, nonatomic) LSRecordPromise *recordPromise; // @synthesize recordPromise=_recordPromise;
@property(readonly, copy, nonatomic) NSArray *bundleRecordsToRegister; // @synthesize bundleRecordsToRegister=_bundleRecordsToRegister;
@property(copy, nonatomic) NSArray *appExtensionDataContainers; // @synthesize appExtensionDataContainers=_appExtensionDataContainers;
@property(copy, nonatomic) NSArray *appExtensionBundles; // @synthesize appExtensionBundles=_appExtensionBundles;
@property(retain, nonatomic) MIDataContainer *dataContainer; // @synthesize dataContainer=_dataContainer;
@property(copy, nonatomic) NSArray *noLongerPresentAppExtensionDataContainers; // @synthesize noLongerPresentAppExtensionDataContainers=_noLongerPresentAppExtensionDataContainers;
@property(copy, nonatomic) NSString *linkToParentBundleID; // @synthesize linkToParentBundleID=_linkToParentBundleID;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(readonly, nonatomic) MICodeSigningInfo *bundleSigningInfo; // @synthesize bundleSigningInfo=_bundleSigningInfo;
@property(readonly, nonatomic) MIInstallOptions *installOptions; // @synthesize installOptions=_installOptions;
@property(readonly, nonatomic) unsigned long long operationType; // @synthesize operationType=_operationType;
@property(readonly, nonatomic) unsigned long long installationDomain; // @synthesize installationDomain=_installationDomain;
@property(readonly, nonatomic) MIBundleContainer *existingBundleContainer; // @synthesize existingBundleContainer=_existingBundleContainer;
@property(readonly, nonatomic) MIBundleContainer *bundleContainer; // @synthesize bundleContainer=_bundleContainer;
@property(readonly, nonatomic) MIAppIdentity *identity; // @synthesize identity=_identity;
- (_Bool)finalizeWithError:(id *)arg1;	// IMP=0x0010000000044078
- (_Bool)performLaunchServicesRegistrationWithError:(id *)arg1;	// IMP=0x0010000000043f80
- (_Bool)finalizeContainersWithError:(id *)arg1;	// IMP=0x0010000000043e88
- (_Bool)_performJournaledInstallAsReplay:(_Bool)arg1 withError:(id *)arg2;	// IMP=0x001000000004377a
- (_Bool)_beginLaunchServicesRegistrationWithError:(id *)arg1;	// IMP=0x00100000000436d7
- (_Bool)_gatherLaunchServicesRegistrationInfoWithError:(id *)arg1;	// IMP=0x001000000004325e
- (void)_updateContainerStatePostCommit;	// IMP=0x0010000000042fc7
- (_Bool)_commitContainersWithError:(id *)arg1;	// IMP=0x00100000000426fe
- (_Bool)_updateReferencesWithError:(id *)arg1;	// IMP=0x00100000000422e7
- (_Bool)_linkToParentApplication:(id *)arg1;	// IMP=0x00100000000421bc
- (_Bool)_refreshUUIDForContainer:(id)arg1 withError:(id *)arg2;	// IMP=0x001000000004203c
- (_Bool)_updateJournalPhaseTo:(unsigned long long)arg1 withError:(id *)arg2;	// IMP=0x0010000000041f2f
- (void)_purgeJournalEntry;	// IMP=0x0010000000041ee1
- (_Bool)_writeJournalEntryWithError:(id *)arg1;	// IMP=0x0010000000041e8b
- (_Bool)isPlaceholderInstall;	// IMP=0x0010000000041e3f
@property(readonly, nonatomic) _Bool shouldModifyExistingContainers;
@property(readonly, nonatomic) MIExecutableBundle *bundle;
@property(readonly, nonatomic) NSString *uniqueIdentifier;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000004149b
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000040702
- (_Bool)_findBundleContainerForToken:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000405dc
- (_Bool)_populateSigningInfoWithError:(id *)arg1;	// IMP=0x00100000000404bf
- (id)initWithIdentity:(id)arg1 bundleContainer:(id)arg2 existingBundleContainer:(id)arg3 installationDomain:(unsigned long long)arg4 operationType:(unsigned long long)arg5 installOptions:(id)arg6 bundleSigningInfo:(id)arg7;	// IMP=0x0010000000040311
- (id)_registerInstalledInfo:(id)arg1 forIdentity:(id)arg2 inDomain:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x00100000000401bc
- (id)_journalInstance;	// IMP=0x001000000004018a
- (id)_uninstalledAppList;	// IMP=0x0010000000040171
- (id)_containerProtectionManager;	// IMP=0x0010000000040158
- (id)_systemAppState;	// IMP=0x001000000004013f
- (id)_freeProfileValidatedAppTracker;	// IMP=0x0010000000040126
- (id)_keychainAccessGroupTracker;	// IMP=0x001000000004010d
- (id)_containerLinkManager;	// IMP=0x00100000000400d8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

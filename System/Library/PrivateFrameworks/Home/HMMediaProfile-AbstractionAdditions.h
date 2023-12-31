//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMMediaProfile.h>

@class HFHomeKitSettingsAdapterManager, HFHomeKitSettingsValueManager, HFServiceNameComponents, HMAccessory, HMAccessorySettings, HMHome, HMMediaSession, HMRoom, HMSymptomsHandler, NSDate, NSSet, NSString, NSUUID;
@protocol HFHomeKitObject, HFMediaValueSource, HMMediaObjectDelegate;

@interface HMMediaProfile (AbstractionAdditions)
- (id)hf_associatedAccessories;	// IMP=0x002000000006a286
- (id)hf_containedProfiles;	// IMP=0x002000000006a274
- (id)hf_containedCharacteristics;	// IMP=0x002000000006a208
- (id)hf_containedServices;	// IMP=0x002000000006a1a5
- (Class)hf_itemClass;	// IMP=0x002000000006a194
- (id)hf_accessoryLikeObject;	// IMP=0x002000000006a070
- (id)hf_updateValue:(_Bool)arg1 forContextType:(unsigned long long)arg2;	// IMP=0x00200000001cbb67
- (_Bool)hf_shouldHideForContextType:(unsigned long long)arg1;	// IMP=0x00200000001cbaf4
- (_Bool)hf_shouldBeOnForContextType:(unsigned long long)arg1;	// IMP=0x00200000001cba5e
- (_Bool)hf_hasSetForContextType:(unsigned long long)arg1;	// IMP=0x00200000001cba0d
- (_Bool)hf_isOnForContextType:(unsigned long long)arg1;	// IMP=0x00200000001cb9bc
- (id)hf_identify;	// IMP=0x0020000000245828
- (unsigned long long)hf_preferredUserSelectionType;	// IMP=0x00200000002457e4
- (id)hf_preferredMediaUser;	// IMP=0x0020000000245770
@property(readonly, nonatomic) _Bool hf_supportsPreferredMediaUser;
@property(readonly, nonatomic) _Bool hf_supportsHomeTheater;
- (id)hf_destination;	// IMP=0x00200000002455a6
- (id)hf_updateDateAdded:(id)arg1;	// IMP=0x0020000000245535
@property(readonly, copy, nonatomic) NSDate *hf_dateAdded;
@property(readonly, copy, nonatomic) NSString *hf_displayName;
- (id)hf_stateDumpBuilderWithContext:(id)arg1;	// IMP=0x0020000000245491
- (id)hf_updateShowInHomeDashboard:(_Bool)arg1;	// IMP=0x002000000024547a
@property(readonly, nonatomic) _Bool hf_effectiveShowInHomeDashboard;
@property(readonly, nonatomic) _Bool hf_hasSetShowInHomeDashboard;
@property(readonly, nonatomic) _Bool hf_showInHomeDashboard;
- (id)hf_updateIsFavorite:(_Bool)arg1;	// IMP=0x002000000024541e
@property(readonly, nonatomic) _Bool hf_effectiveIsFavorite;
@property(readonly, nonatomic) _Bool hf_shouldShowInFavorites;
@property(readonly, nonatomic) _Bool hf_hasSetFavorite;
@property(readonly, nonatomic) _Bool hf_isFavorite;
- (id)hf_fetchLog:(id)arg1 timeout:(double)arg2;	// IMP=0x002000000024534b
- (id)hf_fetchLogListWithTimeout:(double)arg1;	// IMP=0x00200000002452cf
- (id)hf_idsDeviceIdentifierWithError:(id *)arg1;	// IMP=0x002000000024522b
- (id)hf_siriLanguageOptionsManager;	// IMP=0x0020000000244fce
- (id)hf_mediaAccessoryCommonSettingsManager;	// IMP=0x0020000000244d30
@property(readonly, nonatomic) HFHomeKitSettingsValueManager *hf_settingsValueManager;
- (id)hf_isEitherHomePodMediaAccountOrHomeMediaAccountPresent;	// IMP=0x002000000024443b
- (id)hf_homePodMediaAccountIsMismatchedWithHomeMediaAccount;	// IMP=0x0020000000243ad4
- (id)hf_homePodSupportsMultiUserLanguage;	// IMP=0x0020000000243acc
- (id)hf_appleMusicCurrentLoggedInAccountDSID;	// IMP=0x0020000000243ac4
- (id)hf_appleMusicCurrentLoggedInAccount;	// IMP=0x0020000000243abc
@property(readonly, nonatomic) unsigned long long numberOfItemsContainedWithinGroup;
@property(readonly, nonatomic) _Bool isContainedWithinItemGroup;
@property(readonly, nonatomic) _Bool isItemGroup;
@property(readonly, nonatomic) NSSet *homekitObjectIdentifiers;
@property(readonly, nonatomic) _Bool hasValidSettings;
@property(readonly, copy, nonatomic) NSString *hf_mediaRouteIdentifier;
@property(readonly, copy, nonatomic) NSSet *hf_deviceIdentifiers;
@property(readonly, nonatomic) _Bool hf_homePodIsCapableOfShowingSplitAccountError;
@property(readonly, nonatomic) _Bool hf_homePodSupportsMultiUser;
@property(readonly, nonatomic) _Bool hf_supportsMediaActions;
@property(readonly, nonatomic) _Bool hf_supportsMultiUser;
@property(readonly, nonatomic) HMAccessory *hf_backingAccessory;
@property(readonly, nonatomic) NSSet *hf_dependentHomeKitObjectsForDownstreamItems;
@property(readonly, copy, nonatomic) NSString *hf_categoryLowercaseLocalizedDescription;
@property(readonly, copy, nonatomic) NSString *hf_categoryCapitalizedLocalizedDescription;
@property(readonly, nonatomic) HFHomeKitSettingsAdapterManager *hf_settingsAdapterManager;
@property(readonly, nonatomic) id <HFMediaValueSource> hf_mediaValueSource;
@property(readonly, nonatomic) _Bool hf_isAccessorySettingsReachable;
@property(readonly, nonatomic) _Bool hf_isAppleMusicReachable;
@property(readonly, nonatomic) _Bool hf_supportsSoftwareUpdate;
@property(readonly, nonatomic) _Bool hf_showsAudioSettings;
@property(readonly, nonatomic) _Bool hf_supportsMusicAlarm;
@property(readonly, nonatomic) _Bool hf_supportsStereoPairing;
@property(readonly, nonatomic) _Bool hf_isReachable;
@property(readonly, nonatomic) NSSet *hf_fakeDebugSymptoms;
@property(readonly, copy) NSSet *symptoms;
@property(readonly, nonatomic) HMSymptomsHandler *symptomsHandler;
- (_Bool)hf_offersAutomation;	// IMP=0x0020000000242b3a
@property(readonly, nonatomic) _Bool hf_isCurrentAccessory;
@property(readonly, nonatomic) __weak HMRoom *hf_parentRoom;
@property(readonly, nonatomic) HMHome *hf_home;
@property(readonly, nonatomic) NSSet *mediaProfiles;
@property(readonly, nonatomic) NSSet *accessories;
@property(readonly, nonatomic) id <HFHomeKitObject> homeKitObject;
- (id)hf_rootAccessoryLikeHomeKitObject;	// IMP=0x002000000029e263
@property(readonly, nonatomic) HFServiceNameComponents *hf_serviceNameComponents;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property __weak id <HMMediaObjectDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool hf_hasSetVisibleInHomeStatus;
@property(readonly, nonatomic) _Bool hf_isForcedVisibleInHomeStatus;
@property(readonly, nonatomic) _Bool hf_isVisibleInHomeStatus;
@property(readonly, nonatomic) NSString *hf_prettyDescription;
@property(readonly, nonatomic) _Bool hf_supportsHomeStatus;
@property(readonly, copy, nonatomic) HMMediaSession *mediaSession;
@property(readonly) HMAccessorySettings *settings;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@end


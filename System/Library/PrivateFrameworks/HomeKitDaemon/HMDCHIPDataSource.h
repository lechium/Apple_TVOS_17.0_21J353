//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDHomeManager, HMDUIDialogPresenter, HMFTimer, HMMTRAttestationDataStore, HMMTRResidentStateManager, HMMTRStorage, HMMTRUIDialogPresenter, HMMTRVendorMetadataStore, NSDictionary, NSNotificationCenter, NSNumber, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface HMDCHIPDataSource : HMFObject
{
    HMDHomeManager *_homeManager;	// 8 = 0x8
    HMMTRVendorMetadataStore *_vendorMetadataStore;	// 16 = 0x10
    HMMTRAttestationDataStore *_attestationDataStore;	// 24 = 0x18
    HMMTRUIDialogPresenter *_uiDialogPresenter;	// 32 = 0x20
    NSNotificationCenter *_notificationCenter;	// 40 = 0x28
    HMFTimer *_vendorMetadataRefreshTimer;	// 48 = 0x30
    HMFTimer *_attestationDataRefreshTimer;	// 56 = 0x38
    HMDUIDialogPresenter *_dialogPresenter;	// 64 = 0x40
    HMMTRResidentStateManager *_chipResidentStateManager;	// 72 = 0x48
    HMMTRStorage *_chipStorage;	// 80 = 0x50
}

+ (id)logCategory;	// IMP=0x001000000075da73
- (void).cxx_destruct;	// IMP=0x000000000075cae5
@property(retain) HMMTRStorage *chipStorage; // @synthesize chipStorage=_chipStorage;
@property(retain) HMMTRResidentStateManager *chipResidentStateManager; // @synthesize chipResidentStateManager=_chipResidentStateManager;
@property(readonly) HMDUIDialogPresenter *dialogPresenter; // @synthesize dialogPresenter=_dialogPresenter;
@property(readonly) HMFTimer *attestationDataRefreshTimer; // @synthesize attestationDataRefreshTimer=_attestationDataRefreshTimer;
@property(readonly) HMFTimer *vendorMetadataRefreshTimer; // @synthesize vendorMetadataRefreshTimer=_vendorMetadataRefreshTimer;
@property(readonly) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(retain) HMMTRUIDialogPresenter *uiDialogPresenter; // @synthesize uiDialogPresenter=_uiDialogPresenter;
@property(retain) HMMTRAttestationDataStore *attestationDataStore; // @synthesize attestationDataStore=_attestationDataStore;
@property(retain) HMMTRVendorMetadataStore *vendorMetadataStore; // @synthesize vendorMetadataStore=_vendorMetadataStore;
@property __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
- (void)browser:(id)arg1 didRemoveAccessoryPairingWithNodeID:(id)arg2;	// IMP=0x000000000075c47d
- (void)requestUserPermissionForUnauthenticatedAccessory:(id)arg1 withContext:(id)arg2 queue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000075c362
- (void)timerDidFire:(id)arg1;	// IMP=0x000000000075c12b
- (id)storageDataSourceForFabricWithID:(id)arg1;	// IMP=0x000000000075bd84
@property(readonly, copy) NSNumber *currentFabricID;
@property(readonly, copy, nonatomic) NSSet *allFabricIDs;
@property(readonly, copy, nonatomic) NSSet *allPairedHAPServerIdentifiers;
@property(readonly, getter=isCurrentDevicePrimaryResident) _Bool currentDevicePrimaryResident;
- (void)handleHomeRemovedNotification:(id)arg1;	// IMP=0x000000000075b4f2
- (void)handleAccessoryCHIPStorageChangedNotification:(id)arg1;	// IMP=0x000000000075b357
- (void)handleHomeCHIPStorageChangedNotification:(id)arg1;	// IMP=0x000000000075b1bc
- (void)handleDataReadyAfterBecomingPrimaryNotification:(id)arg1;	// IMP=0x000000000075b0c3
- (void)handlePrimaryResidentUpdatedNotification:(id)arg1;	// IMP=0x000000000075af42
- (void)handleUpdatedDataWithIsLocalChange:(_Bool)arg1;	// IMP=0x000000000075ae6d
- (void)createCHIPStoragesForHomes:(id)arg1 homeManager:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000075ac09
- (id)homeWithCHIPFabricID:(id)arg1;	// IMP=0x000000000075aa59
- (id)home;	// IMP=0x000000000075a731
- (void)configureWithUIDialogPresenter:(id)arg1;	// IMP=0x000000000075a5ad
- (void)configureWithAttestationDataStore:(id)arg1;	// IMP=0x000000000075a3d6
- (void)configureWithVendorMetadataStore:(id)arg1;	// IMP=0x000000000075a1ff
- (void)configureWithStorage:(id)arg1;	// IMP=0x0000000000759f95
- (void)configureWithResidentStateManager:(id)arg1;	// IMP=0x0000000000759d54
- (void)configureWithAccessoryServerBrowser:(id)arg1;	// IMP=0x0000000000759c1a
@property(readonly, copy) NSNumber *pairingTargetFabricIndex;
- (id)initWithHomeManager:(id)arg1 notificationCenter:(id)arg2 vendorMetadataRefreshTimer:(id)arg3 attestationDataRefreshTimer:(id)arg4 dialogPresenter:(id)arg5;	// IMP=0x0000000000759a8a
- (id)initWithHomeManager:(id)arg1;	// IMP=0x0000000000759966

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSDictionary *keyValueStore;
@property(readonly) Class superclass;

@end


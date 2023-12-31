//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSAccount, IDSAccountController, IDSDevice, IDSIDQueryController, IDSService, NSArray, NSSet, NSString;
@protocol IDSServicePseudonymDelegate, OS_dispatch_queue, TUFeatureFlags;

@interface CSDIDSService : NSObject
{
    _Bool _telephonyCapableDeviceExists;	// 8 = 0x8
    _Bool _relayCapableDeviceExists;	// 9 = 0x9
    NSString *_name;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    IDSAccountController *_accountController;	// 32 = 0x20
    IDSService *_idsService;	// 40 = 0x28
    IDSIDQueryController *_idsQueryController;	// 48 = 0x30
    id <IDSServicePseudonymDelegate> _delegate;	// 56 = 0x38
    NSArray *_devices;	// 64 = 0x40
    IDSDevice *_pairedDevice;	// 72 = 0x48
    IDSDevice *_defaultPairedDevice;	// 80 = 0x50
    NSSet *_availableOutgoingRelayCallerIDs;	// 88 = 0x58
    id <TUFeatureFlags> _featureFlags;	// 96 = 0x60
}

+ (id)sharedInstance;	// IMP=0x00200000001bd4b1
- (void).cxx_destruct;	// IMP=0x00200000001c1ad0
@property(retain, nonatomic) id <TUFeatureFlags> featureFlags; // @synthesize featureFlags=_featureFlags;
@property(retain, nonatomic) NSSet *availableOutgoingRelayCallerIDs; // @synthesize availableOutgoingRelayCallerIDs=_availableOutgoingRelayCallerIDs;
@property(retain, nonatomic) IDSDevice *defaultPairedDevice; // @synthesize defaultPairedDevice=_defaultPairedDevice;
@property(retain, nonatomic) IDSDevice *pairedDevice; // @synthesize pairedDevice=_pairedDevice;
@property(retain, nonatomic) NSArray *devices; // @synthesize devices=_devices;
@property(nonatomic) _Bool relayCapableDeviceExists; // @synthesize relayCapableDeviceExists=_relayCapableDeviceExists;
@property(nonatomic) _Bool telephonyCapableDeviceExists; // @synthesize telephonyCapableDeviceExists=_telephonyCapableDeviceExists;
@property(retain, nonatomic) id <IDSServicePseudonymDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IDSIDQueryController *idsQueryController; // @synthesize idsQueryController=_idsQueryController;
@property(readonly, nonatomic) IDSService *idsService; // @synthesize idsService=_idsService;
@property(readonly, nonatomic) IDSAccountController *accountController; // @synthesize accountController=_accountController;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)_handlePairedDeviceChangedFrom:(id)arg1 to:(id)arg2;	// IMP=0x00100000001c19fb
- (void)_update;	// IMP=0x00100000001c13f5
- (void)update;	// IMP=0x00100000001c136e
- (void)service:(id)arg1 didUpdatePseudonymsWithChanges:(id)arg2;	// IMP=0x00100000001c10a5
- (void)service:(id)arg1 nearbyDevicesChanged:(id)arg2;	// IMP=0x00100000001c1007
- (void)service:(id)arg1 devicesChanged:(id)arg2;	// IMP=0x00100000001c0f69
- (void)handleActiveAccountsChanged:(id)arg1;	// IMP=0x00100000001c0e8d
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;	// IMP=0x00100000001c0e78
- (void)accountController:(id)arg1 accountRemoved:(id)arg2;	// IMP=0x00100000001c0e60
- (void)accountController:(id)arg1 accountDisabled:(id)arg2;	// IMP=0x00100000001c0e48
- (void)accountController:(id)arg1 accountEnabled:(id)arg2;	// IMP=0x00100000001c0ddd
- (void)accountController:(id)arg1 accountAdded:(id)arg2;	// IMP=0x00100000001c0d72
- (void)_noteAction:(long long)arg1 onHandle:(id)arg2 completionHandle:(CDUnknownBlockType)arg3;	// IMP=0x00100000001c0bd0
- (void)noteDismissedHandle:(id)arg1 completionHandle:(CDUnknownBlockType)arg2;	// IMP=0x00100000001c0bb3
- (void)noteApprovedHandle:(id)arg1 completionHandle:(CDUnknownBlockType)arg2;	// IMP=0x00100000001c0b96
- (id)pseudonymForPseudonymString:(id)arg1;	// IMP=0x00100000001c0aee
- (_Bool)checkValidityForSelfPseudonymString:(id)arg1;	// IMP=0x00100000001c0a9d
- (void)checkValidityForPseudonymString:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001c090c
- (void)renewPseudonym:(id)arg1 expirationDate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001c0700
- (void)renewPseudonymString:(id)arg1 expirationDate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001c05d4
- (void)revokePseudonym:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001c04d6
- (void)revokePseudonymString:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001c035f
- (void)provisionPseudonymForHandle:(id)arg1 featureID:(id)arg2 scopeID:(id)arg3 expiryDuration:(double)arg4 allowedServices:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00100000001bffcc
@property(readonly, nonatomic) NSString *localDeviceUniqueID;
@property(readonly, copy, nonatomic) NSString *countryCode;
@property(readonly, nonatomic) _Bool pairedDeviceExists;
@property(readonly, nonatomic) _Bool defaultPairedDeviceExists;
- (id)deviceDestinationsWithCapability:(id)arg1 localHandle:(id)arg2;	// IMP=0x00100000001bf13e
- (id)devicesWithCapability:(id)arg1;	// IMP=0x00100000001bef0b
- (id)deviceForFromID:(id)arg1;	// IMP=0x00100000001bee91
- (id)deviceWithUniqueID:(id)arg1;	// IMP=0x00100000001bec96
- (_Bool)isServiceEnabledForTelephonySubscriptionLabelIdentifier:(id)arg1;	// IMP=0x00100000001beb25
- (id)accountForTelephonySubscriptionLabelIdentifier:(id)arg1;	// IMP=0x00100000001beaab
- (_Bool)sendData:(id)arg1 fromAccount:(id)arg2 toDestinations:(id)arg3 priority:(long long)arg4 options:(id)arg5 identifier:(id *)arg6 error:(id *)arg7;	// IMP=0x00100000001be824
- (void)removeServiceDelegate:(id)arg1;	// IMP=0x00100000001be7bb
- (void)addServiceDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x00100000001be730
@property(readonly, nonatomic) IDSService *service;
- (id)idsDeviceID;	// IMP=0x00100000001be6a4
@property(readonly, nonatomic) IDSAccount *account;
- (id)accountWithCallerID:(id)arg1;	// IMP=0x00100000001be065
@property(readonly, nonatomic) _Bool hasActiveAccounts;
- (id)anyActiveAccount;	// IMP=0x00100000001bde50
@property(readonly, copy, nonatomic) NSArray *allAliases;
@property(readonly, copy) NSString *debugDescription;
- (void)dealloc;	// IMP=0x00100000001bda54
@property(readonly, copy, nonatomic) NSString *callerID;
- (id)initWithName:(id)arg1 service:(id)arg2 queryController:(id)arg3;	// IMP=0x00100000001bd63d
- (id)initWithName:(id)arg1 service:(id)arg2;	// IMP=0x00100000001bd5a6
- (id)initWithName:(id)arg1;	// IMP=0x00100000001bd52e

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


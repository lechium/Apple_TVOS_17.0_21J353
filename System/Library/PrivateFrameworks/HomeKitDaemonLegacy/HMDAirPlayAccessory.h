//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMFExponentialBackoffTimer, HMFPairingIdentity, NSString;

__attribute__((visibility("hidden")))
@interface HMDAirPlayAccessory
{
    HMFPairingIdentity *_pairingIdentity;	// 32 = 0x20
    NSString *_password;	// 40 = 0x28
    long long _minimumUserPriviledge;	// 48 = 0x30
    HMFExponentialBackoffTimer *_configurationRetryTimer;	// 56 = 0x38
}

+ (id)logCategory;	// IMP=0x00100000005e2ee1
+ (_Bool)supportsSecureCoding;	// IMP=0x00100000005e2ed9
+ (void)initialize;	// IMP=0x00100000005e2e6d
- (void).cxx_destruct;	// IMP=0x00000000005df2db
@property(readonly, nonatomic) HMFExponentialBackoffTimer *configurationRetryTimer; // @synthesize configurationRetryTimer=_configurationRetryTimer;
- (id)logIdentifier;	// IMP=0x00000000005df27a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000005df0e5
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000005defc8
- (void)timerDidFire:(id)arg1;	// IMP=0x00000000005def57
- (_Bool)supportsDeviceWithCapabilities:(id)arg1;	// IMP=0x00000000005def42
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x00000000005de974
- (void)pairingsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000005de571
- (void)removeUserPairingIdentity:(id)arg1 isOwner:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000005de1b8
- (void)removeUser:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000005ddf8f
- (void)addUserPairingIdentity:(id)arg1 isOwner:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000005dda1f
- (void)addUser:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000005dd6f8
@property(readonly) _Bool supportsUserManagement;
- (void)disassociatePairingIdentity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000005dd391
- (void)disassociateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000005dd328
@property(readonly) _Bool supportsDisassociation;
- (id)transactionWithObjectChangeType:(unsigned long long)arg1;	// IMP=0x00000000005dd265
- (void)populateModelObject:(id)arg1 version:(long long)arg2;	// IMP=0x00000000005dd12d
- (id)backingStoreObjects:(long long)arg1;	// IMP=0x00000000005dcfd8
- (void)setMinimumUserPriviledge:(long long)arg1;	// IMP=0x00000000005dcf97
@property(readonly) long long minimumUserPriviledge; // @synthesize minimumUserPriviledge=_minimumUserPriviledge;
- (void)setPassword:(id)arg1;	// IMP=0x00000000005dcedb
@property(readonly, copy) NSString *password; // @synthesize password=_password;
- (void)setPairingIdentity:(id)arg1;	// IMP=0x00000000005dce12
@property(readonly, copy) HMFPairingIdentity *pairingIdentity; // @synthesize pairingIdentity=_pairingIdentity;
- (void)handleUpdatedPassword:(id)arg1;	// IMP=0x00000000005dccc1
- (void)handleUpdatedMinimumUserPrivilege:(long long)arg1;	// IMP=0x00000000005dcc0f
- (_Bool)supportsMinimumUserPrivilege;	// IMP=0x00000000005dcc07
- (id)messageSendPolicy;	// IMP=0x00000000005dcbd4
- (void)setReachable:(_Bool)arg1;	// IMP=0x00000000005dcaa8
- (void)_handleUpdatedName:(id)arg1;	// IMP=0x00000000005dc7c0
- (void)handleUpdatedAdvertisement:(id)arg1;	// IMP=0x00000000005dbd62
- (void)setAdvertisement:(id)arg1;	// IMP=0x00000000005dbc63
- (id)advertisement;	// IMP=0x00000000005dbb36
- (void)configureWithHome:(id)arg1 msgDispatcher:(id)arg2 configurationTracker:(id)arg3 initialConfiguration:(_Bool)arg4;	// IMP=0x00000000005db9c2
- (id)initWithTransaction:(id)arg1 home:(id)arg2;	// IMP=0x00000000005db7d1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

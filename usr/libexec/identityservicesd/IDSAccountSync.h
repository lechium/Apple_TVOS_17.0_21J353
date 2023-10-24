//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSDAccountController, IDSDServiceController, IDSPairingManager, IDSPushHandler, IDSRemoteCredential, IMUserDefaults, NSMutableDictionary;

@interface IDSAccountSync : NSObject
{
    IDSRemoteCredential *_syncCredential;	// 8 = 0x8
    NSMutableDictionary *_currentInFlightSyncAttempts;	// 16 = 0x10
    IDSPairingManager *_pairingManager;	// 24 = 0x18
    IDSDServiceController *_serviceController;	// 32 = 0x20
    IDSDAccountController *_accountController;	// 40 = 0x28
    IDSPushHandler *_pushHandler;	// 48 = 0x30
    IMUserDefaults *_userDefaults;	// 56 = 0x38
}

+ (id)usefulLoggingDescriptionAccountInfos:(id)arg1;	// IMP=0x00400000000e49c2
+ (double)retryTimeForKey:(id)arg1 attempts:(long long)arg2;	// IMP=0x00100000000dd763
+ (id)sharedInstance;	// IMP=0x00100000000dcf14
- (void).cxx_destruct;	// IMP=0x00200000000e4c88
@property(retain, nonatomic) IMUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(retain, nonatomic) IDSPushHandler *pushHandler; // @synthesize pushHandler=_pushHandler;
@property(retain, nonatomic) IDSDAccountController *accountController; // @synthesize accountController=_accountController;
@property(retain, nonatomic) IDSDServiceController *serviceController; // @synthesize serviceController=_serviceController;
@property(retain, nonatomic) IDSPairingManager *pairingManager; // @synthesize pairingManager=_pairingManager;
@property(retain, nonatomic) NSMutableDictionary *currentInFlightSyncAttempts; // @synthesize currentInFlightSyncAttempts=_currentInFlightSyncAttempts;
@property(retain, nonatomic) IDSRemoteCredential *syncCredential; // @synthesize syncCredential=_syncCredential;
- (void)_updateTinkerDeviceWithURIs:(id)arg1 pushToken:(id)arg2;	// IMP=0x00100000000e48aa
- (void)_updatePreferredAccountWithAccountInfo:(id)arg1 withAccountSyncCommand:(unsigned int)arg2;	// IMP=0x00100000000e3dfb
- (void)_registerAccountsWithRemoteInfo:(id)arg1;	// IMP=0x00100000000e2678
- (void)synchronizeAccountsWithRemoteInfo:(id)arg1 service:(id)arg2;	// IMP=0x00100000000e1a94
- (void)incomingSyncMessage:(id)arg1;	// IMP=0x00100000000e1565
- (void)_syncTinkerDeviceInfo;	// IMP=0x00100000000e10fa
- (void)_addPhoneNumbersToAccount:(id)arg1 withNonPreferredPhoneAccounts:(id)arg2;	// IMP=0x00100000000e0c2b
- (id)_constructAccountInfo:(id)arg1;	// IMP=0x00100000000e0269
- (id)constructRAResponseDictionary:(id)arg1;	// IMP=0x00100000000dffd4
- (void)_noteShouldSynchronizeServices:(id)arg1;	// IMP=0x00100000000df9f6
- (void)_noteShouldSynchronizeTinkerDeviceInfo;	// IMP=0x00100000000df7e8
- (void)noteShouldFetchRemoteAccountInfoForAllServices;	// IMP=0x00100000000def84
- (void)noteShouldSynchronizePreferredAccount;	// IMP=0x00100000000de364
- (void)noteShouldSynchronizeAllServices;	// IMP=0x00100000000de28f
- (void)noteShouldSynchronizeTinkerDeviceInfo;	// IMP=0x00100000000de27d
- (void)resetAndResynchronizeEverything;	// IMP=0x00100000000de277
- (id)_sendAccountSyncMessage:(id)arg1 withPersistentKey:(id)arg2;	// IMP=0x00100000000ddcd2
- (void)_stopAllPendingActions;	// IMP=0x00100000000dda0e
- (void)_startRetryForKey:(id)arg1 withAction:(CDUnknownBlockType)arg2;	// IMP=0x00100000000dd7c4
- (void)kickAnyUnfinishedSynchronization;	// IMP=0x00100000000dd27e
- (void)stopAnyUnfinishedSynchronization;	// IMP=0x00100000000dd26c
- (void)saveTracking;	// IMP=0x00100000000dd1d8
- (id)initWithPairingManager:(id)arg1 serviceController:(id)arg2 accountController:(id)arg3 pushHandler:(id)arg4 userDefaults:(id)arg5 remoteCredential:(id)arg6;	// IMP=0x00100000000dd09b
- (id)init;	// IMP=0x00100000000dcf69

@end


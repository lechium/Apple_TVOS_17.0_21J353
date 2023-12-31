//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOperationQueue, NSString, StoreKitMessagesDatabaseStore;
@protocol OS_dispatch_queue;

@interface StoreKitMessagesManager : NSObject
{
    StoreKitMessagesDatabaseStore *_databaseStore;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_showMessageQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_accountObserverQueue;	// 24 = 0x18
    NSOperationQueue *_checkMessagesQueue;	// 32 = 0x20
}

+ (id)sharedManager;	// IMP=0x0020000000076b27
- (void).cxx_destruct;	// IMP=0x0020000000078be1
- (void)_accountDidChange:(id)arg1;	// IMP=0x0010000000078bdb
- (void)handleAppUninstallWithBundleIDs:(id)arg1;	// IMP=0x0010000000078bd5
- (void)handleAppInstallWithBundleIDs:(id)arg1;	// IMP=0x0010000000078bcf
- (void)revokeProductIdentifiers:(id)arg1 forBundleID:(id)arg2 accountID:(id)arg3;	// IMP=0x00100000000787dc
- (id)revocationsForClient:(id)arg1;	// IMP=0x00100000000781f1
- (id)_removeStoreKitMessageForAccount:(id)arg1 bundleID:(id)arg2 type:(long long)arg3;	// IMP=0x0010000000077ff5
- (void);	// IMP=0x0010000000077fef
- (void)displayMessageWithType:(id)arg1 forClient:(id)arg2;	// IMP=0x0010000000077fe9
- (id)messageInfoForClient:(id)arg1 messageType:(id)arg2;	// IMP=0x0010000000077c67
- (void)_finishPromiseWithResultOrError:(id)arg1 error:(id)arg2 promise:(id)arg3;	// IMP=0x0010000000077ba1
- (id)messageURLForClient:(id)arg1 messageInfo:(id)arg2;	// IMP=0x0010000000077b3d
- (void)askToShowMessageForClient:(id)arg1 message:(id)arg2 pendingURL:(id)arg3 remoteObjectProxy:(id)arg4;	// IMP=0x0010000000077b37
- (void)checkForMessagesForClient:(id)arg1 remoteObjectProxy:(id)arg2;	// IMP=0x0010000000077b31
- (void)pushService:(id)arg1 didReceiveMessage:(id)arg2;	// IMP=0x0010000000077279
- (_Bool)addMessageStatus:(id)arg1 forBundleID:(id)arg2 accountID:(id)arg3 allowDeveloperControl:(_Bool)arg4 messageType:(long long)arg5 error:(id *)arg6;	// IMP=0x00100000000771b2
- (_Bool)addMessage:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000076e5e
- (id)databaseStore;	// IMP=0x0010000000076d72
- (id)init;	// IMP=0x0010000000076bac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


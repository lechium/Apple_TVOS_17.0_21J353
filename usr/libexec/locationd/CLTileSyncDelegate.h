//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLSilo, NSString, PSYServiceSyncSession;

@interface CLTileSyncDelegate : NSObject
{
    void *fManager;	// 8 = 0x8
    CLSilo *fSilo;	// 16 = 0x10
    PSYServiceSyncSession *fPsSession;	// 24 = 0x18
}

- (void)initialSyncStateObserverClientCanRetryFailedRequests:(id)arg1;	// IMP=0x0020000000171676
- (void)initialSyncStateObserver:(id)arg1 syncDidResetForPairingIdentifier:(id)arg2;	// IMP=0x00100000001714f3
- (void)initialSyncStateObserver:(id)arg1 syncDidCompleteForPairingIdentifier:(id)arg2;	// IMP=0x0010000000170fe7
- (void)initialSyncStateObserver:(id)arg1 initialSyncDidCompleteForPairingIdentifier:(id)arg2;	// IMP=0x0010000000170e64
- (void)syncCoordinatorDidChangeSyncRestriction:(id)arg1;	// IMP=0x0010000000170576
- (void)syncCoordinator:(id)arg1 didInvalidateSyncSession:(id)arg2;	// IMP=0x001000000017023e
- (void)syncCoordinator:(id)arg1 beginSyncSession:(id)arg2;	// IMP=0x001000000016f4e8
- (void)service:(id)arg1 didSwitchFromPairingID:(id)arg2 toPairingID:(id)arg3;	// IMP=0x001000000016ef01
- (void)service:(id)arg1 willSwitchFromPairingID:(id)arg2 toPairingID:(id)arg3;	// IMP=0x001000000016ea72
- (_Bool)syncSession:(id)arg1 resetDataStoreWithError:(id *)arg2;	// IMP=0x001000000016e8ed
- (void)syncSession:(id)arg1 didEndWithError:(id)arg2;	// IMP=0x001000000016dfa6
- (void)syncSession:(id)arg1 applyChanges:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000016d617
- (long long)syncSession:(id)arg1 enqueueChanges:(CDUnknownBlockType)arg2 error:(id *)arg3;	// IMP=0x001000000016d2ac
- (void)service:(id)arg1 encounteredError:(id)arg2 context:(id)arg3;	// IMP=0x001000000016ce89
- (void)serviceDidUnpairDevice:(id)arg1;	// IMP=0x001000000016ccdf
- (void)serviceDidPairDevice:(id)arg1;	// IMP=0x001000000016cb35
- (void)service:(id)arg1 sessionEnded:(id)arg2 error:(id)arg3;	// IMP=0x001000000016c9b8
- (_Bool)service:(id)arg1 startSession:(id)arg2 error:(id *)arg3;	// IMP=0x001000000016c4eb
- (id)initWithSyncManager:(void *)arg1 silo:(id)arg2;	// IMP=0x001000000016c49b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


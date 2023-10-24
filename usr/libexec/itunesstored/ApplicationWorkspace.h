//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ISOperationQueue, NSCountedSet, NSLock, NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface ApplicationWorkspace : NSObject
{
    NSMutableDictionary *_appProgress;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 24 = 0x18
    NSLock *_lock;	// 32 = 0x20
    NSMutableArray *_operations;	// 40 = 0x28
    NSCountedSet *_pendingInstalls;	// 48 = 0x30
    ISOperationQueue *_placeholderIconOperationQueue;	// 56 = 0x38
    NSMutableArray *_syncWaitBlocks;	// 64 = 0x40
    NSMutableDictionary *_waitBlocks;	// 72 = 0x48
}

+ (_Bool)keepSafeHarborDataForBundleID:(id)arg1;	// IMP=0x00400000000eef4d
+ (id)defaultWorkspace;	// IMP=0x00100000000ed5c7
- (void).cxx_destruct;	// IMP=0x00200000000f26e3
- (void)_decrementPendingInstallsForDownloadIdentifier:(long long)arg1;	// IMP=0x00100000000f2492
- (void)_incrementPendingInstallsForDownloadIdentifier:(long long)arg1;	// IMP=0x00100000000f241a
- (void)_updatePlaceholderWithODRProgressForApplicationHandle:(id)arg1;	// IMP=0x00100000000f233f
- (id)_thumbnailDownloadOperationForDownloadID:(long long)arg1;	// IMP=0x00100000000f2182
- (void)_stopObservingODRProgress:(id)arg1;	// IMP=0x00100000000f211d
- (void)_removeOperationsForDownloadIdentifier:(long long)arg1 operationClass:(Class)arg2;	// IMP=0x00100000000f200e
- (void)_removeOperationsForDownloadIdentifier:(long long)arg1;	// IMP=0x00100000000f1ffa
- (void)_removeApplicationDownloadProgressForApplicationHandle:(id)arg1;	// IMP=0x00100000000f1fad
- (void)_performNextOperation;	// IMP=0x00100000000f1d08
- (_Bool)_isInstallingForDownloadIdentifier:(long long)arg1;	// IMP=0x00100000000f1abd
- (_Bool)_hasThumbnailDownloadOperationForDownloadID:(long long)arg1;	// IMP=0x00100000000f1a8a
- (void)_fireWaitBlocksForSyncTermination;	// IMP=0x00100000000f1826
- (void)_fireWaitBlocksIfNecessaryForDownloadWithIdentifier:(long long)arg1;	// IMP=0x00100000000f15d9
- (id)_copyCombinedApplicationProgress:(id)arg1 forApplicationHandle:(id)arg2;	// IMP=0x00100000000f1522
- (void)_cancelPlaceholderThumbnailInstallForDownloadID:(long long)arg1;	// IMP=0x00100000000f133e
- (void)_addProgressOperation:(id)arg1;	// IMP=0x00100000000f109a
- (void)_addOperationAtBeginning:(id)arg1;	// IMP=0x00100000000f0fcb
- (id)sinfPathForBundleID:(id)arg1;	// IMP=0x00100000000f0df6
- (void)waitForSyncBubbleToTerminateWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000f0df0
- (void)waitForInstallOfDownloadIdentifier:(long long)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000f0a8d
- (void)updatePlaceholderWithApplicationProgress:(id)arg1;	// IMP=0x00100000000f095b
- (void)updatePlaceholderForApplicationHandle:(id)arg1;	// IMP=0x00100000000f086e
- (void)uninstallPlaceholderForApplicationHandle:(id)arg1;	// IMP=0x00100000000f075f
- (void)suspendQuotas;	// IMP=0x00100000000f0759
- (_Bool)shouldModifyQuota:(id)arg1;	// IMP=0x00100000000f06f8
- (void)setIconData:(id)arg1 forApplicationHandle:(id)arg2;	// IMP=0x00100000000f048d
- (void)resumeQuotas;	// IMP=0x00100000000f0487
- (void)restorePlaceholderForApplicationHandle:(id)arg1;	// IMP=0x00100000000f039b
- (void)resetProgressForApplicationHandle:(id)arg1;	// IMP=0x00100000000f02b3
- (void)replayIncompleteOperations;	// IMP=0x00100000000ef1ad
- (void)markFailedPlaceholderForApplicationHandle:(id)arg1;	// IMP=0x00100000000ef09e
- (_Bool)isRemovedSystemApp:(id)arg1;	// IMP=0x00100000000eef38
- (_Bool)isInstalledApp:(id)arg1;	// IMP=0x00100000000eedfd
- (void)installPlaceholderForApplicationHandle:(id)arg1;	// IMP=0x00100000000eeb1a
- (_Bool)isMultiUser;	// IMP=0x00100000000eeb12
- (_Bool)isDownloadingOrInstallingForItemIdentifier:(id)arg1;	// IMP=0x00100000000ede75
- (void)finishInstallOfApplicationHandle:(id)arg1;	// IMP=0x00100000000edd56
- (void)endExternalInstallationForDownloadIdentifier:(long long)arg1;	// IMP=0x00100000000edcca
- (void)cancelPlaceholderInstallationForDownloadIdentifier:(long long)arg1;	// IMP=0x00100000000edc63
- (void)beginExternalInstallationForDownloadIdentifier:(long long)arg1;	// IMP=0x00100000000edc51
- (void)addPlaceholderThumbnailOperation:(id)arg1;	// IMP=0x00100000000ed8e8
- (void)applyWorkspaceChanges:(id)arg1;	// IMP=0x00100000000ed64c
- (id)init;	// IMP=0x00100000000ed458

@end


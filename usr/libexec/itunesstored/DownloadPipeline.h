//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DownloadsDatabase, ISOperationQueue, NSMapTable, NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSString;
@protocol OS_dispatch_source;

@interface DownloadPipeline : NSObject
{
    NSMapTable *_aggregateDownloadProgress;	// 8 = 0x8
    ISOperationQueue *_authenticationChallengeQueue;	// 16 = 0x10
    ISOperationQueue *_backgroundOperationQueue;	// 24 = 0x18
    DownloadsDatabase *_database;	// 32 = 0x20
    NSMutableSet *_dirtyTaskStates;	// 40 = 0x28
    NSMutableSet *_downloadHandlerSessions;	// 48 = 0x30
    _Bool _holdingKeepAliveAssertion;	// 56 = 0x38
    NSMutableOrderedSet *_preparationDownloadIDs;	// 64 = 0x40
    ISOperationQueue *_preparationOperationQueue;	// 72 = 0x48
    ISOperationQueue *_processingOperationQueue;	// 80 = 0x50
    NSObject<OS_dispatch_source> *_progressTimer;	// 88 = 0x58
    NSObject<OS_dispatch_source> *_reconnectTimer;	// 96 = 0x60
    NSMapTable *_resourceLoaders;	// 104 = 0x68
    NSMapTable *_taskStates;	// 112 = 0x70
    NSMutableDictionary *_urlSessions;	// 120 = 0x78
    NSMutableDictionary *_downloadOperationsByTask;	// 128 = 0x80
    ISOperationQueue *_discretionaryDownloadOperationQueue;	// 136 = 0x88
    ISOperationQueue *_nonDiscretionaryDownloadOperationQueue;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x0020000000123010
- (void)_reportTVAppDownloadQOSMetricsIfAppropriateForKind:(id)arg1 adamID:(id)arg2 rentalID:(id)arg3 error:(id)arg4 cancelReason:(long long)arg5;	// IMP=0x0010000000121c07
- (_Bool)_isPodcast:(id)arg1;	// IMP=0x0010000000121bbf
- (void)_startProgressTimer;	// IMP=0x0010000000121a94
- (void)_setDownloadPhase:(id)arg1 forDownloadIdentifier:(long long)arg2 databaseTransaction:(id)arg3;	// IMP=0x00100000001217d8
- (void)_scheduleReconnect;	// IMP=0x00100000001214d9
- (void)_reloadKeepAliveAssertion;	// IMP=0x0010000000121300
- (void)_releaseDownloadHandlerSession:(id)arg1 withTaskState:(id)arg2;	// IMP=0x001000000012109a
- (void)_processDownloadFailureWithTaskState:(id)arg1 cancelReason:(long long)arg2;	// IMP=0x0010000000120d4a
- (void)_queueFinishDownloadWithtaskState:(id)arg1 databaseSession:(id)arg2 setupBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000120b25
- (void)_processDownloadWithTaskState:(id)arg1 databaseSession:(id)arg2 setupBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000120a73
- (void)_prepareDownloadsMatchingPredicate:(id)arg1 ignoreDownloadHandlers:(_Bool)arg2 filtersExistingTasks:(_Bool)arg3;	// IMP=0x0010000000120436
- (void)_performDefaultHandlingForAuthenticationChallenge:(id)arg1 withSessionProperties:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000011fd73
- (void)_logDownloadEvent:(id)arg1 forTaskWithState:(id)arg2 session:(id)arg3;	// IMP=0x001000000011fc93
- (_Bool)_hasAutomaticUpdateTasks;	// IMP=0x001000000011fafb
- (void)_finishRecoveryWithOperation:(id)arg1 response:(id)arg2;	// IMP=0x001000000011f583
- (void)_performDownloadOperation:(id)arg1;	// IMP=0x001000000011ceca
- (void)_taskReceived:(id)arg1 persistAVAssetDownloadToken:(unsigned long long)arg2;	// IMP=0x001000000011c770
- (void)_finishDownloadWithOperation:(id)arg1 response:(id)arg2;	// IMP=0x001000000011b318
- (void)_failDownloadWithIdentifier:(id)arg1 error:(id)arg2 transaction:(id)arg3;	// IMP=0x001000000011b20e
- (id)_downloadSessionPropertiesWithPhase:(id)arg1 taskState:(id)arg2 databaseSession:(id)arg3;	// IMP=0x001000000011afb5
- (_Bool)_downloadIsForLegacyClientWithIdentifier:(id)arg1;	// IMP=0x001000000011ad3c
- (void)_disavowDownloadHandlerSession:(id)arg1 withTaskState:(id)arg2;	// IMP=0x001000000011a8f9
- (void)_commitProgressTimer;	// IMP=0x0010000000119d9a
- (id)_authenticationChallengeQueue;	// IMP=0x0010000000119d31
- (void)_attemptRecoveryForDownloadWithTaskState:(id)arg1 databaseSession:(id)arg2;	// IMP=0x0010000000119b73
- (id)_applicationHandleForDownloadIdentifier:(long long)arg1 databaseTransaction:(id)arg2;	// IMP=0x00100000001199d9
- (id)_applicationBundleIdentifierForDownloadIdentifier:(long long)arg1 databaseTransaction:(id)arg2;	// IMP=0x0010000000119899
- (void)downloadAssetFairPlayStreamingKeyLoader:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x001000000011937c
- (void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000118bc2
- (void)URLSession:(id)arg1 _willRetryBackgroundDataTask:(id)arg2 withError:(id)arg3;	// IMP=0x00100000001185e6
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000118237
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x0010000000116778
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000115db0
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;	// IMP=0x001000000011593a
- (void)operation:(id)arg1 updatedProgress:(id)arg2;	// IMP=0x00100000001157bf
- (void)updateAfterSessionsChanged:(id)arg1;	// IMP=0x0010000000114b46
- (void)stopDownloadsWithIdentifiers:(id)arg1 reason:(long long)arg2;	// IMP=0x0010000000113bbe
- (id)restartDownloadsWithIdentifiers:(id)arg1;	// IMP=0x00100000001136b5
- (void)prioritizeDownloadWithIdentifier:(id)arg1;	// IMP=0x0010000000112ac3
- (void)reconnectWithURLSessionTasks;	// IMP=0x0010000000112891
- (void)addDownloadsWithIdentifiers:(id)arg1;	// IMP=0x001000000011224c
- (void)dealloc;	// IMP=0x00100000001121db
- (id)initWithDownloadsDatabase:(id)arg1;	// IMP=0x0010000000111ec0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


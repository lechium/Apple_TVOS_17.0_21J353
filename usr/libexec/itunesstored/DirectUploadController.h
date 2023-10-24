//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DirectUploadSessionController, ISOperationQueue, MediaSocialAuthenticationCoordinator, MediaSocialErrorCoordinator, MediaSocialStatusPollingCoordinator, NSMutableArray, NSMutableDictionary, NSString, SSSQLiteDatabase;
@protocol OS_dispatch_queue;

@interface DirectUploadController : NSObject
{
    MediaSocialAuthenticationCoordinator *_authenticationCoordinator;	// 8 = 0x8
    id _backgroundTaskObserver;	// 16 = 0x10
    NSMutableArray *_clients;	// 24 = 0x18
    SSSQLiteDatabase *_database;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *;	// 40 = 0x28
    MediaSocialErrorCoordinator *_errorCoordinator;	// 48 = 0x30
    MediaSocialStatusPollingCoordinator *_pollingCoordinator;	// 56 = 0x38
    ISOperationQueue *_postOperationQueue;	// 64 = 0x40
    NSMutableDictionary *_progressDictionary;	// 72 = 0x48
    DirectUploadSessionController *_sessionController;	// 80 = 0x50
}

+ (void)_setupDatabase:(id)arg1;	// IMP=0x002000000005bb81
+ (void)_sendAccessDeniedErrorWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000005b94b
+ (id)_orderedUploadQueryWithDatabase:(id)arg1 predicate:(id)arg2;	// IMP=0x001000000005b861
+ (id)_orderedPostQueryWithDatabase:(id)arg1 predicate:(id)arg2;	// IMP=0x001000000005b777
+ (_Bool)_isConnectionEntitled:(id)arg1;	// IMP=0x001000000005b725
+ (id)_copyPersistentIdentifiersArrayWithXPCArray:(id)arg1;	// IMP=0x001000000005b604
+ (void)resumeUploadsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000057d3d
+ (void)registerObserverWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000057bea
+ (void)pauseUploadsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000000577eb
+ (void)observeXPCServer:(id)arg1;	// IMP=0x0010000000057729
+ (void)getUploadsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000057426
+ (void)cancelUploadsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000056f6a
+ (id)sharedController;	// IMP=0x00100000000560ca
- (void).cxx_destruct;	// IMP=0x00200000000616e5
- (id)_sessionController;	// IMP=0x0010000000061682
- (void)_sendRemoveUploadsMessageWithUploadIdentifiers:(id)arg1;	// IMP=0x0010000000061480
- (void)_sendChangeUploadsMessageWithUploads:(id)arg1;	// IMP=0x001000000006127e
- (void)_retryFailedEntities;	// IMP=0x0010000000060bd7
- (_Bool)_resumeUploadsWithPredicate:(id)arg1 clientIdentifier:(id)arg2 resetFailureCount:(_Bool)arg3 error:(id *)arg4;	// IMP=0x00100000000604f1
- (void)_registerObserverWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000005ffe7
- (id)_postOperationQueue;	// IMP=0x001000000005ff7e
- (id)_pollingCoordinator;	// IMP=0x001000000005ff1b
- (_Bool)_pauseUploadsWithPredicate:(id)arg1 clientIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x001000000005f94c
- (void)_operationDidFinishForPostIdentifier:(long long)arg1 response:(id)arg2;	// IMP=0x001000000005eb46
- (id)_newSSVDirectUploadWithProgress:(id)arg1 state:(long long)arg2;	// IMP=0x001000000005ea8b
- (id)_newAddUploadsMessageWithDatabase:(id)arg1 hydratedUploadIDs:(id)arg2;	// IMP=0x001000000005e798
- (id)_errorCoordinator;	// IMP=0x001000000005e735
- (void)_handleMessage:(id)arg1 connection:(id)arg2 usingReplyBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000005e541
- (void)_handleMessage:(id)arg1 connection:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000005e40b
- (void)_finishPostWithPostIdentifier:(long long)arg1 response:(id)arg2;	// IMP=0x001000000005dd23
- (void)_enumerateSSVDirectUploadsWithQuery:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x001000000005dba1
- (void)_enqueueNextReadyMediaSocialPostOperationWithDatabase:(id)arg1;	// IMP=0x001000000005d45a
- (id)_databaseIfExists;	// IMP=0x001000000005d3a3
- (id)_database;	// IMP=0x001000000005d260
- (void)_cleanupPendingUploads:(id)arg1 database:(id)arg2;	// IMP=0x001000000005c625
- (void)_cleanupSessionController;	// IMP=0x001000000005c5c5
- (_Bool)_cancelUploadsWithPredicate:(id)arg1 clientIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x001000000005bca8
- (id)_authenticationCoordinator;	// IMP=0x001000000005bc45
- (void)_clientDisconnectNotification:(id)arg1;	// IMP=0x001000000005b297
- (void)pollingCoordinator:(id)arg1 didPollWithResponses:(id)arg2;	// IMP=0x001000000005adbe
- (void)mediaSocialErrorCoordinator:(id)arg1 didFinishWithResult:(long long)arg2;	// IMP=0x0010000000059a2b
- (void)authenticationCoordinator:(id)arg1 didFinishAuthenticationWithResponse:(id)arg2;	// IMP=0x0010000000058f07
- (void)uploadSessionController:(id)arg1 uploadProgressDidChange:(id)arg2;	// IMP=0x0010000000058c44
- (void)uploadSessionController:(id)arg1 uploadDidFinishWithDatabaseID:(long long)arg2 response:(id)arg3;	// IMP=0x00100000000589cc
- (void)uploadSessionController:(id)arg1 uploadDidFailWithDatabaseID:(long long)arg2 error:(id)arg3;	// IMP=0x0010000000058334
- (void)uploadSessionController:(id)arg1 uploadDidBeginTransferWithDatabaseID:(long long)arg2;	// IMP=0x0010000000058157
- (void)uploadSessionController:(id)arg1 taskDidStopWithDatabaseID:(long long)arg2;	// IMP=0x0010000000058145
- (void)start;	// IMP=0x0010000000056cca
- (void)addMediaSocialPostWithDescription:(id)arg1 client:(id)arg2;	// IMP=0x001000000005614f
- (void)dealloc;	// IMP=0x0010000000055fd0
- (id)init;	// IMP=0x0010000000055f78

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

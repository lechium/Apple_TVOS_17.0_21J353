//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, NSManagedObjectID, NSString, RMPersistentHistoryNotifier;
@protocol RMConduitDelegate;

@interface RMMDMConduit : NSObject
{
    _Bool _madeChangesDuringSync;	// 8 = 0x8
    id <RMConduitDelegate> _delegate;	// 16 = 0x10
    RMPersistentHistoryNotifier *_persistentHistoryNotifier;	// 24 = 0x18
    NSManagedObjectContext *_context;	// 32 = 0x20
    NSManagedObjectID *_managementSourceObjectID;	// 40 = 0x28
}

+ (id)_generateEnrollmentToken;	// IMP=0x0020000000059f53
- (void).cxx_destruct;	// IMP=0x0020000000060137
@property(readonly, nonatomic) NSManagedObjectID *managementSourceObjectID; // @synthesize managementSourceObjectID=_managementSourceObjectID;
@property(readonly, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
@property(nonatomic) _Bool madeChangesDuringSync; // @synthesize madeChangesDuringSync=_madeChangesDuringSync;
@property(retain, nonatomic) RMPersistentHistoryNotifier *persistentHistoryNotifier; // @synthesize persistentHistoryNotifier=_persistentHistoryNotifier;
@property(nonatomic) __weak id <RMConduitDelegate> delegate; // @synthesize delegate=_delegate;
- (void)persistentHistoryNotifier:(id)arg1 hasChanges:(id)arg2;	// IMP=0x001000000005fef5
- (_Bool)persistentHistoryNotifier:(id)arg1 isChangeInteresting:(id)arg2 stop:(_Bool *)arg3;	// IMP=0x001000000005f99a
- (void)_executeRequestForEndpoint:(id)arg1 requestData:(id)arg2 expectedResponseClass:(Class)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000005f671
- (id)_requestDataForPayload:(id)arg1 error:(id *)arg2;	// IMP=0x001000000005f63b
- (_Bool)_incrementConduitStateError:(short)arg1 serverRetryAfter:(id)arg2 error:(id *)arg3;	// IMP=0x001000000005f283
- (_Bool)_processErrorResponse:(id)arg1 error:(id *)arg2;	// IMP=0x001000000005ec99
- (id)_processResponse:(id)arg1 payloadClass:(Class)arg2 error:(id *)arg3;	// IMP=0x001000000005e956
- (void)_writeQAStatusData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000005e6f7
- (void)_didFinishSendingStatusWithError:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000005e30c
- (void)sendStatusData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000005e112
- (void)_didFinishFetchingObject:(id)arg1 objectID:(id)arg2 class:(Class)arg3 endpoint:(id)arg4 response:(id)arg5 error:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;	// IMP=0x001000000005d856
- (void)_fetchNextObjectOfClass:(Class)arg1 endpoint:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000005d07a
- (void)_fetchPartialObjectsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000005cdd5
- (void)_processDeclarationItemsWithContext:(id)arg1 infos:(id)arg2 declarationItemClass:(Class)arg3 declarationItemKeyPath:(id)arg4;	// IMP=0x001000000005c643
- (void)_didFinishFetchingDeclarationItems:(id)arg1 error:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000005c011
- (void)_fetchDeclarationItemsOnlyIfNeeded:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000005baf0
- (void)_updateWithSyncTokens:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000005b774
- (void)updateWithTokensResponse:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000005b61e
- (void)updateWithPushMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000005b4f6
- (void)syncOnlyIfNeeded:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000005ae91
- (_Bool)isSyncAllowed;	// IMP=0x001000000005ae89
- (void)_didFinishFetchingServerTokens:(id)arg1 error:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000005a929
- (void)_fetchTokensOnlyIfNeeded:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000005a387
- (void)unenrollWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000059f99
- (void)enrollWithStatusItems:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000005999b
- (id)_statusItemsToSendOnceAfterEnrollment;	// IMP=0x001000000005970b
- (id)statusItemsToSendDuringEnrollment;	// IMP=0x00100000000596f2
- (id)statusItemsToImplicitlySubscribeTo;	// IMP=0x001000000005963e
- (short)errorState;	// IMP=0x00100000000593fb
- (void)_stopObservers;	// IMP=0x001000000005939f
- (void)_startObservers;	// IMP=0x00100000000592a6
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000058fff
- (id)initWithManagementSourceObjectID:(id)arg1 inContext:(id)arg2;	// IMP=0x0010000000058f66

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

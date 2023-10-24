//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSProgress, NSString, SHLFailedTaskRetryHandler, SHLLibraryStore, SHLSyncSession, SHLSyncSessionConfiguration;
@protocol SHLShazamLibraryDelegate;

@interface SHLShazamLibrary : NSObject
{
    _Bool _shouldPerformFetch;	// 8 = 0x8
    id <SHLShazamLibraryDelegate> _delegate;	// 16 = 0x10
    NSProgress *_syncProgress;	// 24 = 0x18
    SHLSyncSessionConfiguration *_configuration;	// 32 = 0x20
    SHLSyncSession *_syncSession;	// 40 = 0x28
    SHLLibraryStore *_store;	// 48 = 0x30
    SHLFailedTaskRetryHandler *_retryHandler;	// 56 = 0x38
}

+ (id)defaultLibrary;	// IMP=0x002000000003d9f7
- (void).cxx_destruct;	// IMP=0x002000000003db7c
@property(nonatomic) _Bool shouldPerformFetch; // @synthesize shouldPerformFetch=_shouldPerformFetch;
@property(retain, nonatomic) SHLFailedTaskRetryHandler *retryHandler; // @synthesize retryHandler=_retryHandler;
@property(retain, nonatomic) SHLLibraryStore *store; // @synthesize store=_store;
@property(retain, nonatomic) SHLSyncSession *syncSession; // @synthesize syncSession=_syncSession;
@property(retain, nonatomic) SHLSyncSessionConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) NSProgress *syncProgress; // @synthesize syncProgress=_syncProgress;
@property(nonatomic) __weak id <SHLShazamLibraryDelegate> delegate; // @synthesize delegate=_delegate;
- (void)retryFailedTasks:(id)arg1;	// IMP=0x001000000003d836
- (long long)syncActionForTaskType:(long long)arg1;	// IMP=0x001000000003d827
- (void)updateProgressWithTask:(id)arg1;	// IMP=0x001000000003d6c9
- (void)migrateCacheIfNeeded;	// IMP=0x001000000003d514
- (_Bool)isValidCallingProcessIdentifier:(id)arg1;	// IMP=0x001000000003d4f8
- (id)taskWithFailedItemsAndCurrentChanges:(id)arg1;	// IMP=0x001000000003ce85
- (id)newFetchTaskWithStartCondition:(id)arg1;	// IMP=0x001000000003ce04
- (id)newModifyTaskWithChanges:(id)arg1 startCondition:(id)arg2;	// IMP=0x001000000003ccfc
- (void)session:(id)arg1 task:(id)arg2 didFetchDeletedItemsWithIdentifiers:(id)arg3;	// IMP=0x001000000003cbb9
- (void)session:(id)arg1 task:(id)arg2 didFetchGroups:(id)arg3;	// IMP=0x001000000003ca76
- (void)session:(id)arg1 task:(id)arg2 didFetchTracks:(id)arg3;	// IMP=0x001000000003c933
- (void)session:(id)arg1 task:(id)arg2 didDeleteItemsWithIdentifiers:(id)arg3;	// IMP=0x001000000003c7f3
- (void)session:(id)arg1 task:(id)arg2 didModifyGroups:(id)arg3;	// IMP=0x001000000003c6b3
- (void)session:(id)arg1 task:(id)arg2 didModifyTracks:(id)arg3;	// IMP=0x001000000003c573
- (void)finishSession:(id)arg1;	// IMP=0x001000000003c131
- (void)session:(id)arg1 task:(id)arg2 didProduceOutcome:(id)arg3;	// IMP=0x001000000003ba22
- (void)clearCachedSyncStatus;	// IMP=0x001000000003b9b6
- (void)synchronizeChanges:(id)arg1 startCondition:(id)arg2;	// IMP=0x001000000003b3a6
- (void)synchronizeWithStartCondition:(id)arg1;	// IMP=0x001000000003b347
- (id)initWithScope:(long long)arg1 callingProcessIdentifier:(id)arg2;	// IMP=0x001000000003b1d2
- (id)initWithCallingProcessIdentifier:(id)arg1;	// IMP=0x001000000003b1b8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


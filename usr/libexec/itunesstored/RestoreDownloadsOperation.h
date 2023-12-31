//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSOrderedSet, NSString;

@interface RestoreDownloadsOperation : ISOperation
{
    NSMutableDictionary *_accountIDsByAppleID;	// 96 = 0x60
    long long _cancelRetryAlertState;	// 104 = 0x68
    NSOrderedSet *_downloadIDs;	// 112 = 0x70
    NSMutableArray *_errors;	// 120 = 0x78
    _Bool _hadAutoRetrySoftFailure;	// 128 = 0x80
    _Bool _hadCancelFailure;	// 129 = 0x81
    NSString *_restoreReason;	// 136 = 0x88
}

+ (_Bool)shouldSuppressTermsAndConditionsDialogs;	// IMP=0x00200000000d8ae0
+ (void)setShouldSuppressTermsAndConditionsDialogs:(_Bool)arg1;	// IMP=0x00100000000d8a9c
+ (void)resetShouldSuppressTermsAndConditionsDialogs;	// IMP=0x00100000000d8a6d
- (_Bool)_updateDownloadEntity:(id)arg1 withTransaction:(id)arg2 storeDownload:(id)arg3 accountID:(id)arg4;	// IMP=0x00200000000df9de
- (id)_softFailRestoreItem:(id)arg1 download:(id)arg2 withRestoreState:(long long)arg3 error:(id)arg4;	// IMP=0x00100000000df7a8
- (_Bool)_shouldAutomaticallyRetryAfterSoftFailError:(id)arg1;	// IMP=0x00100000000df6e0
- (_Bool)_shouldAuthenticateForCancelRetry;	// IMP=0x00100000000df48e
- (void)_scheduleCancelRetry;	// IMP=0x00100000000df488
- (void)_scheduleAutomaticRetry;	// IMP=0x00100000000df482
- (_Bool)_preflightAccountWithID:(id)arg1 isFamily:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00100000000ded73
- (id)_newRestoreItemsWithDownloadIDs:(id)arg1;	// IMP=0x00100000000de456
- (id)_newDownloadWithStoreDownload:(id)arg1;	// IMP=0x00100000000de369
- (_Bool)_isErrorSoftFail:(id)arg1;	// IMP=0x00100000000de251
- (_Bool)_isErrorCancelFailure:(id)arg1;	// IMP=0x00100000000de207
- (void)_hardFailRestoreItem:(id)arg1 download:(id)arg2 transaction:(id)arg3 error:(id)arg4;	// IMP=0x00100000000dde7a
- (void)_establishPrimaryAccount;	// IMP=0x00100000000ddc7b
- (long long)_downloadRestoreStateForError:(id)arg1;	// IMP=0x00100000000ddc19
- (id)_copyDownloadSessionPropertiesForItem:(id)arg1 download:(id)arg2;	// IMP=0x00100000000ddb17
- (void)_applyResponses:(id)arg1 withTransaction:(id)arg2;	// IMP=0x00100000000dc9e8
- (id)_accountIDForAccountName:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000dc18c
- (void)restorePodcastItemsOperation:(id)arg1 didReceiveResponse:(id)arg2;	// IMP=0x00100000000db7c4
- (void)restoreDownloadItemsOperation:(id)arg1 didReceiveResponse:(id)arg2;	// IMP=0x00100000000db6fd
- (void)run;	// IMP=0x00100000000d926a
- (_Bool)copyAccountID:(id *)arg1 credentialSource:(unsigned long long *)arg2 byAuthenticatingWithContext:(id)arg3 returningError:(id *)arg4;	// IMP=0x00100000000d8b98
@property(readonly) NSString *restoreReason;
@property(readonly) NSArray *errors;
@property(readonly) NSOrderedSet *downloadIdentifiers;
- (void)dealloc;	// IMP=0x00100000000d89f9
- (id)initWithDownloadIdentifiers:(id)arg1 restoreReason:(id)arg2;	// IMP=0x00100000000d8971

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


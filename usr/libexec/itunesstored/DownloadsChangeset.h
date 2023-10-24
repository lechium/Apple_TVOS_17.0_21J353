//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableOrderedSet, NSMutableSet, NSOrderedSet, NSSet, NSString;

@interface DownloadsChangeset : NSObject
{
    NSMutableArray *_SSAppWakeRequests;	// 8 = 0x8
    NSMutableArray *_applicationWorkspaceChanges;	// 16 = 0x10
    NSMutableSet *_canceledAppDataRestoreIDs;	// 24 = 0x18
    NSMutableSet *_canceledIPodLibraryDownloadIDs;	// 32 = 0x20
    NSMutableSet *_changedDownloadKinds;	// 40 = 0x28
    NSDictionary *_changedDownloadProperties;	// 48 = 0x30
    NSDictionary *_changedExternalDownloadProperties;	// 56 = 0x38
    NSMutableArray *_cookies;	// 64 = 0x40
    NSMutableArray *_deletedHTTPCookies;	// 72 = 0x48
    NSMutableSet *_deletedIPodLibraryDownloadIDs;	// 80 = 0x50
    long long _downloadChangeTypes;	// 88 = 0x58
    NSMutableSet *_finishedDownloadKinds;	// 96 = 0x60
    NSMutableArray *_ipodLibraryItems;	// 104 = 0x68
    NSMutableOrderedSet *_pipelineAdditions;	// 112 = 0x70
    NSMutableOrderedSet *_pipelineRestarts;	// 120 = 0x78
    NSMutableOrderedSet *_policyChangedDownloadIDs;	// 128 = 0x80
    NSMutableOrderedSet *_removedDownloadIDs;	// 136 = 0x88
    NSMutableOrderedSet *_removedPersistentDownloadIDs;	// 144 = 0x90
    NSMutableOrderedSet *_restorableDownloadIDs;	// 152 = 0x98
    NSString *_restoreReason;	// 160 = 0xa0
    NSMutableSet *_statusChangedDownloadIDs;	// 168 = 0xa8
    NSMutableSet *_updatedDownloadIDs;	// 176 = 0xb0
}

@property(readonly, copy, nonatomic) NSSet *updatedDownloadIDs; // @synthesize updatedDownloadIDs=_updatedDownloadIDs;
@property(readonly, copy, nonatomic) NSSet *statusChangedDownloadIDs; // @synthesize statusChangedDownloadIDs=_statusChangedDownloadIDs;
@property(copy, nonatomic) NSString *restoreReason; // @synthesize restoreReason=_restoreReason;
@property(readonly, copy, nonatomic) NSOrderedSet *restorableDownloadIDs; // @synthesize restorableDownloadIDs=_restorableDownloadIDs;
@property(readonly, copy, nonatomic) NSOrderedSet *removedPersistentDownloadIDs; // @synthesize removedPersistentDownloadIDs=_removedPersistentDownloadIDs;
@property(readonly, copy, nonatomic) NSOrderedSet *removedDownloadIDs; // @synthesize removedDownloadIDs=_removedDownloadIDs;
@property(readonly, copy, nonatomic) NSOrderedSet *policyChangedDownloadIDs; // @synthesize policyChangedDownloadIDs=_policyChangedDownloadIDs;
@property(readonly, copy, nonatomic) NSOrderedSet *pipelineRestarts; // @synthesize pipelineRestarts=_pipelineRestarts;
@property(readonly, copy, nonatomic) NSOrderedSet *pipelineAdditions; // @synthesize pipelineAdditions=_pipelineAdditions;
@property(readonly, copy, nonatomic) NSArray *IPodLibraryItems; // @synthesize IPodLibraryItems=_ipodLibraryItems;
@property(readonly, copy, nonatomic) NSArray *HTTPCookies; // @synthesize HTTPCookies=_cookies;
@property(readonly, copy, nonatomic) NSSet *finishedDownloadKinds; // @synthesize finishedDownloadKinds=_finishedDownloadKinds;
@property(readonly, nonatomic) long long downloadChangeTypes; // @synthesize downloadChangeTypes=_downloadChangeTypes;
@property(readonly, copy, nonatomic) NSSet *deletedIPodLibraryDownloadIDs; // @synthesize deletedIPodLibraryDownloadIDs=_deletedIPodLibraryDownloadIDs;
@property(readonly, copy, nonatomic) NSArray *deletedHTTPCookies; // @synthesize deletedHTTPCookies=_deletedHTTPCookies;
@property(copy, nonatomic) NSDictionary *changedExternalDownloadProperties; // @synthesize changedExternalDownloadProperties=_changedExternalDownloadProperties;
@property(copy, nonatomic) NSDictionary *changedDownloadProperties; // @synthesize changedDownloadProperties=_changedDownloadProperties;
- (id);	// IMP=0x001000000000a1e4
@property(readonly, copy, nonatomic) NSSet *changedDownloadKinds; // @synthesize changedDownloadKinds=_changedDownloadKinds;
@property(readonly, copy, nonatomic) NSSet *canceledIPodLibraryDownloadIDs; // @synthesize canceledIPodLibraryDownloadIDs=_canceledIPodLibraryDownloadIDs;
@property(readonly, copy, nonatomic) NSSet *canceledAppDataRestoreIDs; // @synthesize canceledAppDataRestoreIDs=_canceledAppDataRestoreIDs;
@property(readonly, copy, nonatomic) NSArray *applicationWorkspaceChanges; // @synthesize applicationWorkspaceChanges=_applicationWorkspaceChanges;
@property(readonly, copy, nonatomic) NSArray *SSAppWakeRequests; // @synthesize SSAppWakeRequests=_SSAppWakeRequests;
- (id)_policyChangedDownloadIDs;	// IMP=0x001000000000a183
- (id)_finishedDownloadKinds;	// IMP=0x001000000000a15a
- (id)_deletedIPodLibraryDownloadIDs;	// IMP=0x001000000000a131
- (id)_deletedHTTPCookies;	// IMP=0x001000000000a108
- (id)_cookies;	// IMP=0x001000000000a0df
- (id)_canceledIPodLibraryDownloadIDs;	// IMP=0x001000000000a0b6
- (id)_canceledAppDataRestoreIDs;	// IMP=0x001000000000a08d
- (id)_applicationWorkspaceChanges;	// IMP=0x001000000000a064
- (id)_SSAppWakeRequests;	// IMP=0x001000000000a03b
- (void)_addApplicationWorkspaceChangeWithHandle:(id)arg1 changeType:(long long)arg2;	// IMP=0x0010000000009fc7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000009dcb
- (void)unionChangeset:(id)arg1;	// IMP=0x0010000000009996
- (void)restartDownloadsInPipelineWithIDs:(id)arg1;	// IMP=0x0010000000009980
- (void)removeDownloadFromPipelineWithID:(long long)arg1;	// IMP=0x0010000000009926
- (void)addUpdatedDownloadID:(long long)arg1;	// IMP=0x00100000000098c9
- (void)addStatusChangedDownloadID:(long long)arg1;	// IMP=0x001000000000986c
- (void)addRetryAppWithHandle:(id)arg1;	// IMP=0x0010000000009855
- (void)addRestorableDownloadID:(long long)arg1;	// IMP=0x00100000000097f8
- (void)addRemovedPersistentDownloadID:(long long)arg1;	// IMP=0x001000000000979b
- (void)addRemovedDownloadID:(long long)arg1;	// IMP=0x001000000000973e
- (void)addPolicyChangedDownloadID:(long long)arg1;	// IMP=0x00100000000096d8
- (void)addIPodLibraryItem:(id)arg1;	// IMP=0x00100000000096c2
- (void)addHTTPCookie:(id)arg1;	// IMP=0x0010000000009691
- (void)addFinishedDownloadKind:(id)arg1;	// IMP=0x001000000000965a
- (void)addFinishedAppWithHandle:(id)arg1;	// IMP=0x0010000000009643
- (void)addFailedAppWithHandle:(id)arg1;	// IMP=0x001000000000962c
- (void)addDownloadsToPipelineWithIDs:(id)arg1;	// IMP=0x0010000000009616
- (void)addDownloadToPipelineWithID:(long long)arg1;	// IMP=0x00100000000095bc
- (void)addDownloadKind:(id)arg1;	// IMP=0x001000000000959f
- (void)addDownloadChangeTypes:(long long)arg1;	// IMP=0x0010000000009595
- (void)addDeletedIPodLibraryDownloadID:(long long)arg1;	// IMP=0x001000000000952f
- (void)addDeletedHTTPCookies:(id)arg1;	// IMP=0x00100000000094fe
- (void)addCanceledIPodLibraryDownloadID:(long long)arg1;	// IMP=0x0010000000009498
- (void)addCanceledAppDataRestoreID:(id)arg1;	// IMP=0x0010000000009467
- (void)addCanceledAppWithHandle:(id)arg1;	// IMP=0x0010000000009450
- (void)addAppPlaceholderUpdateWithHandle:(id)arg1;	// IMP=0x0010000000009439
- (void)addAppPlaceholderWithHandle:(id)arg1;	// IMP=0x0010000000009425
- (void)addApplicationWorkspaceChange:(id)arg1;	// IMP=0x00100000000093f4
- (void)addSSAppWakeRequest:(id)arg1;	// IMP=0x00100000000093c3
- (void)dealloc;	// IMP=0x00100000000092df
- (id)init;	// IMP=0x0010000000009217
- (id)_initDownloadsChangeset;	// IMP=0x00100000000091e8

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SHLShazamLibrary, SHMediaLibraryAccountListener, SHMediaLibraryContext, SHMediaLibraryDataStore, SHMediaLibrarySnapshot, SHMediaLibrarySnapshotUpdater;
@protocol SHMediaLibrarySyncDelegate;

@interface SHMediaLibraryController : NSObject
{
    id <SHMediaLibrarySyncDelegate> delegate;	// 8 = 0x8
    SHLShazamLibrary *_remoteLibrary;	// 16 = 0x10
    SHMediaLibraryDataStore *_dataStore;	// 24 = 0x18
    SHMediaLibraryAccountListener *_accountListener;	// 32 = 0x20
    SHMediaLibrarySnapshotUpdater *_snapshotUpdater;	// 40 = 0x28
    SHMediaLibrarySnapshot *_currentSnapshot;	// 48 = 0x30
    SHMediaLibrarySnapshot *_syncSnapshot;	// 56 = 0x38
    SHMediaLibraryContext *_currentContext;	// 64 = 0x40
    NSString *_syncID;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0020000000021dd9
@property(retain, nonatomic) NSString *syncID; // @synthesize syncID=_syncID;
@property(retain, nonatomic) SHMediaLibraryContext *currentContext; // @synthesize currentContext=_currentContext;
@property(retain, nonatomic) SHMediaLibrarySnapshot *syncSnapshot; // @synthesize syncSnapshot=_syncSnapshot;
@property(retain, nonatomic) SHMediaLibrarySnapshot *currentSnapshot; // @synthesize currentSnapshot=_currentSnapshot;
@property(retain, nonatomic) SHMediaLibrarySnapshotUpdater *snapshotUpdater; // @synthesize snapshotUpdater=_snapshotUpdater;
@property(retain, nonatomic) SHMediaLibraryAccountListener *accountListener; // @synthesize accountListener=_accountListener;
@property(retain, nonatomic) SHMediaLibraryDataStore *dataStore; // @synthesize dataStore=_dataStore;
@property(retain, nonatomic) SHLShazamLibrary *remoteLibrary; // @synthesize remoteLibrary=_remoteLibrary;
@property(nonatomic) __weak id <SHMediaLibrarySyncDelegate> delegate; // @synthesize delegate;
- (void)_synchronizeSnapshot:(id)arg1 startCondition:(id)arg2;	// IMP=0x0010000000021c7a
- (void)libraryDataStore:(id)arg1 didUpdateWithChange:(id)arg2;	// IMP=0x0010000000021bb9
- (void)clearCachedSyncStatus;	// IMP=0x00100000000216f1
- (void)currentLibraryAccountHasChanged;	// IMP=0x0010000000021640
- (void)finishLibrarySync;	// IMP=0x0010000000021556
- (id)mapInternalLibraryErrorToMediaLibrary:(id)arg1 keyOverrides:(id)arg2;	// IMP=0x0010000000021318
- (void)resetDataIfNeededForSyncError:(id)arg1;	// IMP=0x0010000000021234
- (void)handleLibraryError:(id)arg1 failedItemIdentifiers:(id)arg2;	// IMP=0x0010000000020feb
- (void)persistChangesAndCompleteSyncWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000020bee
- (void)beginLibrarySync;	// IMP=0x0010000000020a82
- (void)library:(id)arg1 didCompleteSyncWithCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002073f
- (void)library:(id)arg1 didProduceError:(id)arg2 withFailedItemIdentifiers:(id)arg3 syncAction:(long long)arg4;	// IMP=0x0010000000020727
- (void)library:(id)arg1 didDeleteItemsWithIdentifiers:(id)arg2 syncAction:(long long)arg3;	// IMP=0x00100000000205b8
- (void)library:(id)arg1 didChangeGroups:(id)arg2 syncAction:(long long)arg3;	// IMP=0x0010000000020210
- (void)library:(id)arg1 didChangeTracks:(id)arg2 syncAction:(long long)arg3;	// IMP=0x001000000001fa30
- (void)libraryWillBeginSync:(id)arg1;	// IMP=0x001000000001f9e0
- (id)shazamLibrarySyncStartConditionForMediaLibraryStartCondition:(id)arg1;	// IMP=0x001000000001f8f1
- (id)unsyncedTrackChangeset;	// IMP=0x001000000001f6a5
- (id)unsyncedGroupChangeset;	// IMP=0x001000000001f45e
- (void)_synchronizeRemoteSnapshot:(id)arg1 startCondition:(id)arg2;	// IMP=0x001000000001ed07
- (void)synchronizeRemoteSnapshot:(id)arg1 startCondition:(id)arg2;	// IMP=0x001000000001e8b9
- (_Bool)_synchronizeLocalSnapshot:(id)arg1 error:(id *)arg2;	// IMP=0x001000000001de0b
- (void)_queryLibraryWithParameters:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000001d4a9
- (void)_libraryInfoWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000001d440
- (void)synchronizeWithContext:(id)arg1;	// IMP=0x001000000001ceb2
- (void)commonInitWithDataStore:(id)arg1 remoteLibrary:(id)arg2 accountListener:(id)arg3 snapshotUpdater:(id)arg4;	// IMP=0x001000000001cdb7
- (id)initWithDataStore:(id)arg1 remoteLibrary:(id)arg2 accountListener:(id)arg3 snapshotUpdater:(id)arg4;	// IMP=0x001000000001ccfd
- (id)initWithBundleIdentifier:(id)arg1 clientType:(long long)arg2;	// IMP=0x001000000001cbe8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

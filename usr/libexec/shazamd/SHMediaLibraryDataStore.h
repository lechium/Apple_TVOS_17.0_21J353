//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSFetchedResultsController, NSManagedObjectContext, NSPersistentContainer, NSString;
@protocol SHMediaLibraryDataStoreDelegate;

@interface SHMediaLibraryDataStore : NSObject
{
    NSFetchedResultsController *_tracksFetchedResultsController;	// 8 = 0x8
    NSFetchedResultsController *_groupsFetchedResultsController;	// 16 = 0x10
    id <SHMediaLibraryDataStoreDelegate> _delegate;	// 24 = 0x18
    NSPersistentContainer *_persistentContainer;	// 32 = 0x20
    NSManagedObjectContext *_managedObjectContext;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000001cba1
@property(retain, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
@property(retain, nonatomic) NSPersistentContainer *persistentContainer; // @synthesize persistentContainer=_persistentContainer;
- (long long)libraryChangeTypeForFetchedResultsChangeType:(unsigned long long)arg1;	// IMP=0x001000000001cb56
- (id)libraryItemFromManagedObject:(id)arg1;	// IMP=0x001000000001c785
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;	// IMP=0x001000000001c559
@property(readonly, nonatomic) NSFetchedResultsController *groupsFetchedResultsController; // @synthesize groupsFetchedResultsController=_groupsFetchedResultsController;
@property(readonly, nonatomic) NSFetchedResultsController *tracksFetchedResultsController; // @synthesize tracksFetchedResultsController=_tracksFetchedResultsController;
- (void)updateManagedTrack:(id)arg1 withUpdatedTrack:(id)arg2;	// IMP=0x001000000001bb7c
- (void)associateTrack:(id)arg1 toGroupWithIdentifier:(id)arg2 context:(id)arg3;	// IMP=0x001000000001b932
- (id)createMetadataWithData:(id)arg1 track:(id)arg2 group:(id)arg3 context:(id)arg4;	// IMP=0x001000000001b81a
- (id)fetchManagedObjectForRequest:(id)arg1 withPredicate:(id)arg2 context:(id)arg3;	// IMP=0x001000000001b4be
- (void)reset;	// IMP=0x001000000001b40f
- (_Bool)commitChangesWithError:(id *)arg1;	// IMP=0x001000000001b0d6
- (void)deleteAllSyncMetadataItems;	// IMP=0x001000000001afc2
- (MISSING_TYPE *)deleteAllItems;	// IMP=0x001000000001adbf
- (void)deleteAllItemsWithFetchRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000001a824
- (void)deleteItemsByIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000001a385
- (id)updateReportForLibraryGroups:(id)arg1;	// IMP=0x0010000000019d71
- (void)persistLibraryGroups:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000001927e
- (id)updateReportForLibraryTrack:(id)arg1;	// IMP=0x0010000000018c8d
- (void)persistUpdatedTracks:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000018204
- (id)fetchLibraryGroupsWithParameters:(id)arg1;	// IMP=0x0010000000017dd0
- (id)fetchAllUploadableGroupsMissingLibrarySyncMetadata;	// IMP=0x001000000001797e
- (id)fetchAllUploadableTracksMissingLibrarySyncMetadata;	// IMP=0x0010000000017495
- (id)fetchLibraryTracksWithParameters:(id)arg1;	// IMP=0x0010000000016ede
- (void)fetchLibraryItemsWithParameters:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000016e06
@property(nonatomic) __weak id <SHMediaLibraryDataStoreDelegate> delegate; // @synthesize delegate=_delegate;
- (void)loadStoreWithType:(long long)arg1;	// IMP=0x00100000000167b1
- (id)initWithStoreType:(long long)arg1;	// IMP=0x001000000001675b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

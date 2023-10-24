//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObjectContext.h>

@class NSString;

@interface NSManagedObjectContext (MTPlaylist)
- (id)playlistForUuid:(id)arg1;	// IMP=0x003000000000b6d5
- (void)deletePlaylist:(id)arg1;	// IMP=0x003000000000b579
- (void)batchDeleteObjectsInEntity:(id)arg1 predicate:(id)arg2;	// IMP=0x0030000000011598
- (id)titlesOfObjectsInEntity:(id)arg1 predicate:(id)arg2;	// IMP=0x00300000000112a8
- (_Bool)hasAnyObjectsInEntity:(id)arg1 satisfyingPredicate:(id)arg2;	// IMP=0x00300000000111a6
- (unsigned long long)countOfObjectsInEntity:(id)arg1 predicate:(id)arg2;	// IMP=0x00300000000110b2
- (id)objectDictionaryForUuid:(id)arg1 entityName:(id)arg2 byAddingComputedProperties:(id)arg3 toFetchedObjectDictionary:(id)arg4;	// IMP=0x0030000000010c00
- (id)valueForProperty:(id)arg1 objectUuid:(id)arg2 entityName:(id)arg3;	// IMP=0x0030000000010aad
- (id)objectDictionaryForUuid:(id)arg1 propertiesToFetch:(id)arg2 entityName:(id)arg3;	// IMP=0x00300000000109dd
- (id)objectDictionaryForUuid:(id)arg1 entityName:(id)arg2;	// IMP=0x00300000000109c6
- (id)objectDictionariesInEntity:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 propertiesToFetch:(id)arg4 includeObjectId:(_Bool)arg5 limit:(unsigned long long)arg6 distinct:(_Bool)arg7 groupBy:(id)arg8;	// IMP=0x003000000001074e
- (id)objectDictionariesInEntity:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 propertiesToFetch:(id)arg4 includeObjectId:(_Bool)arg5;	// IMP=0x0030000000010727
- (id)_predicateForUuid:(id)arg1;	// IMP=0x0030000000010702
- (id)_objectsInEntity:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 resultType:(unsigned long long)arg4 returnsObjectsAsFaults:(_Bool)arg5 limit:(long long)arg6 propertiesToFetch:(id)arg7 batchSize:(unsigned long long)arg8;	// IMP=0x0030000000010502
- (id)_objectsInEntity:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 resultType:(unsigned long long)arg4 returnsObjectsAsFaults:(_Bool)arg5 limit:(long long)arg6;	// IMP=0x00300000000104cd
- (id)objectForUuid:(id)arg1 entityName:(id)arg2;	// IMP=0x00300000000104b8
- (id)objectForUuid:(id)arg1 entityName:(id)arg2 returnsObjectAsFault:(_Bool)arg3;	// IMP=0x0030000000010378
- (id)objectsInEntity:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 returnsObjectsAsFaults:(_Bool)arg4 limit:(long long)arg5;	// IMP=0x0030000000010357
- (id)objectsInEntity:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 returnsObjectsAsFaults:(_Bool)arg4;	// IMP=0x0030000000010337
- (id)objectsInEntity:(id)arg1 predicate:(id)arg2 propertiesToFetch:(id)arg3 limit:(long long)arg4;	// IMP=0x0030000000010309
- (id)objectsInEntity:(id)arg1 predicate:(id)arg2 propertiesToFetch:(id)arg3 batchSize:(unsigned long long)arg4;	// IMP=0x00300000000102db
- (id)objectInEntity:(id)arg1 predicate:(id)arg2;	// IMP=0x0030000000010279
- (id)objectsInEntity:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3;	// IMP=0x003000000001025b
- (id)executeFetchRequest:(id)arg1;	// IMP=0x00300000000101eb
- (void)performBlockAndWaitWithSave:(CDUnknownBlockType)arg1;	// IMP=0x0030000000010121
- (_Bool)saveInCurrentBlock;	// IMP=0x0030000000010091
- (id)channelForStoreId:(long long)arg1;	// IMP=0x00300000000180a2
- (long long)_largestRevisionForRevisionProperty:(id)arg1;	// IMP=0x0030000000023185
- (id)_allOrderedSyncInfoSinceRevision:(long long)arg1 revisionProperty:(id)arg2;	// IMP=0x0030000000023035
- (id)syncInfosByUuids:(id)arg1;	// IMP=0x0030000000022f78
- (id)allOrderedSyncInfoWithArtworkUpdatesSinceRevision:(long long)arg1;	// IMP=0x0030000000022f5c
- (id)allOrderedSyncInfoSinceRevision:(long long)arg1;	// IMP=0x0030000000022f40
- (long long)currentSyncAnchorRevision;	// IMP=0x0030000000022eee
- (id)valueForProperty:(id)arg1 episodeUuid:(id)arg2;	// IMP=0x003000000004845b
- (id)dictionaryWithProperties:(id)arg1 episodeUuid:(id)arg2;	// IMP=0x0030000000048436
- (id)dictionaryForEpisodeUuid:(id)arg1;	// IMP=0x003000000004841a
- (id)episodesForStoreTrackIDs:(id)arg1;	// IMP=0x00300000000483a1
- (id)episodeForStoreTrackID:(long long)arg1;	// IMP=0x003000000004832f
- (id)episodesForUuids:(id)arg1;	// IMP=0x0030000000048284
- (id)episodeForUuid:(id)arg1;	// IMP=0x0030000000048268
- (id)episodeForUuid:(id)arg1 returnsObjectAsFault:(_Bool)arg2;	// IMP=0x0030000000048249
- (id)existingEpisodeWithID:(id)arg1;	// IMP=0x00300000000481ce
- (unsigned long long)_nextSortOrderWithRequest:(id)arg1;	// IMP=0x003000000004ead0
- (unsigned long long)nextSortOrderForPodcasts;	// IMP=0x003000000004e988
- (unsigned long long)countOfSubscribedAndNotHiddenPodcasts;	// IMP=0x003000000004e8e4
- (unsigned long long)countOfPodcasts;	// IMP=0x003000000004e840
- (id)valueForProperty:(id)arg1 podcastUuid:(id)arg2;	// IMP=0x003000000004e824
- (id)dictionaryWithProperties:(id)arg1 podcastUuid:(id)arg2;	// IMP=0x003000000004e7ff
- (id)dictionaryForPodcastUuid:(id)arg1;	// IMP=0x003000000004e7e3
- (id)podcastForStoreId:(long long)arg1;	// IMP=0x003000000004e648
- (id)podcastForFeedUrl:(id)arg1;	// IMP=0x003000000004e47c
- (id)podcastForPodcastPID:(long long)arg1;	// IMP=0x003000000004e2c7
- (id)podcastForUuid:(id)arg1;	// IMP=0x003000000004e2ab

// Remaining properties
@property(retain, nonatomic) NSString *name;
@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MPMediaLibraryDataProviderML3.h"

@class NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MPMediaLibraryDataProviderSystemML3 : MPMediaLibraryDataProviderML3
{
    long long _currentRevision;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

+ (id)_localizedGeniusErrorForError:(id)arg1 geniusEnabled:(_Bool)arg2;	// IMP=0x0060000000181e02
+ (id)_localizedCloudGeniusErrorForError:(id)arg1;	// IMP=0x006000000018188a
- (void).cxx_destruct;	// IMP=0x0000000000180a1d
- (_Bool)supportsEntityChangeTrackingForMediaEntityType:(long long)arg1 collectionGroupingType:(long long)arg2 dataProviderClass:(out Class *)arg3;	// IMP=0x00000000001809ec
- (void)updateEntitesToCurrentRevision;	// IMP=0x000000000018096c
- (id)errorResolverForItem:(id)arg1;	// IMP=0x00000000001808e1
- (void)_seedCloudPlaylistWithTrack:(id)arg1 container:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000180658
- (void)geniusItemsForSeedItem:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001803be
- (void)releaseGeniusClusterPlaylist:(void *)arg1;	// IMP=0x00000000001803b0
- (long long *)generateItemIdentifiersForGeniusClusterPlaylist:(void *)arg1 count:(unsigned long long *)arg2 error:(id *)arg3;	// IMP=0x00000000001802be
- (void *)createGeniusClusterPlaylistWithSeedItemIdentifiers:(long long *)arg1 count:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000000180182
- (void)seedPlaylistWithIdentifier:(long long)arg1 withItemWithIdentifier:(long long)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000017ff73
- (_Bool)isGeniusEnabled;	// IMP=0x000000000017fed9
- (long long)_currentRevision;	// IMP=0x000000000017fe78
- (void)_initInstanceVariableOnce;	// IMP=0x000000000017fe09
- (id)initWithLibrary:(id)arg1;	// IMP=0x000000000017fdbd

@end


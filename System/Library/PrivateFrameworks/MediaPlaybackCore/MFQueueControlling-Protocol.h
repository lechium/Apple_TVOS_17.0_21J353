//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVPlayerPlaybackCoordinator, NSArray, NSString;
@protocol MFPlayerItem, MFQueuePlayerItem;

@protocol MFQueueControlling
- (_Bool)canSkipInDirection:(long long)arg1 fromItem:(id <MFQueuePlayerItem>)arg2;
- (id <MFQueuePlayerItem>)queueItemForPlayerItem:(id <MFPlayerItem>)arg1 allowReuse:(_Bool)arg2;
- (id <MFQueuePlayerItem>)itemToFollowItem:(id <MFQueuePlayerItem>)arg1 direction:(long long)arg2 distance:(long long)arg3 reason:(long long)arg4;
- (void)updatePlayerPlaybackCoordinator:(AVPlayerPlaybackCoordinator *)arg1;
- (void)invalidateCache;
- (void)invalidateCacheWithContentItemID:(NSString *)arg1;
- (id <MFQueuePlayerItem>)queueItemForContentItemID:(NSString *)arg1 allowReuse:(_Bool)arg2 error:(id *)arg3;
- (NSArray *)contentItemIDsFromOffset:(long long)arg1 toOffset:(long long)arg2 nowPlayingIndex:(long long *)arg3;
@property(nonatomic, readonly) NSString *targetContentItemID;
@end


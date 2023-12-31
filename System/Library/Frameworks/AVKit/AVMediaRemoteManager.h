//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAsset, AVDisplayManager, AVKeyValueObserverCollection, AVMediaPlayerDelegate, AVPlayer, AVPlayerController, AVPlayerItem, AVPlayerViewController, MRContentItem, MRPlayerPath, NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface AVMediaRemoteManager : NSObject
{
    MRContentItem *__contentItem;	// 8 = 0x8
    MRPlayerPath *_lastPlayerPathInstalled;	// 16 = 0x10
    _Bool _playerViewControllerBecameNowPlaying;	// 24 = 0x18
    _Bool _isInstallationOfCallbacksComplete;	// 25 = 0x19
    AVPlayerItem *_readyToPlayPlayerItem;	// 32 = 0x20
    AVPlayerViewController *_playerViewController;	// 40 = 0x28
    AVMediaPlayerDelegate *_mediaPlayerDelegate;	// 48 = 0x30
    AVKeyValueObserverCollection *_kvoCollection;	// 56 = 0x38
    AVKeyValueObserverCollection *_kvoPlayerController;	// 64 = 0x40
    id _playerControllerCurrentTimeJumpedObserver;	// 72 = 0x48
    id _mediaSelectionOptionsDidChangeObserver;	// 80 = 0x50
    NSMutableArray *_navigationGroupArtworkLoadedObservers;	// 88 = 0x58
    AVPlayerItem *_playerItemForContentItemRef;	// 96 = 0x60
    CDUnknownBlockType _playbackQueueRequestCreateContentItemCallback;	// 104 = 0x68
    CDUnknownBlockType _playbackQueueRequestContentItemMetadataCallback;	// 112 = 0x70
    CDUnknownBlockType _playbackQueueRequestContentItemArtworkCallback;	// 120 = 0x78
    CDUnknownBlockType _playbackQueueRequestContentItemLanguageOptionsCallback;	// 128 = 0x80
    CDUnknownBlockType _playbackQueueRequestContentItemDescriptionCallback;	// 136 = 0x88
    CDUnknownBlockType _playbackQueueRequestCreateChildContentItemCallback;	// 144 = 0x90
    void *_tokenForCreateContentItemCallback;	// 152 = 0x98
    void *_tokenForContentItemMetadataCallback;	// 160 = 0xa0
    void *_tokenForContentItemArtworkCallback;	// 168 = 0xa8
    void *_tokenForContentItemLanguageOptionsCallback;	// 176 = 0xb0
    void *_tokenForCreateChildContentItemCallback;	// 184 = 0xb8
    void *_tokenForContentItemInfoCallback;	// 192 = 0xc0
    NSMutableDictionary *_contentItemSectionIdentifiers;	// 200 = 0xc8
}

+ (id)_mediaRemoteLanguageOptionCharacteristicForAVMediaCharacteristic:(id)arg1;	// IMP=0x00400000000fc012
+ (id)_avMediaCharacteristics;	// IMP=0x00400000000fbfe2
+ (id)_mediaRemoteLanguageOptionCharacteristicsForAVMediaSelectionOption:(id)arg1;	// IMP=0x00400000000fbdd6
+ (id)_createMediaRemoteLanguageOptionWithSubtitleOption:(id)arg1;	// IMP=0x00400000000fbc25
+ (id)_createMediaRemoteLanguageOptionGroupWithSubtitleOptions:(id)arg1;	// IMP=0x00400000000fba3f
+ (id)_createMediaRemoteLanguageOptionWithAudioOption:(id)arg1;	// IMP=0x00400000000fb941
+ (id)_createMediaRemoteLanguageOptionGroupWithAudioOptions:(id)arg1;	// IMP=0x00400000000fb75e
+ (id)pictureInPictureMediaRemoteManager;	// IMP=0x00400000000fb74d
+ (id)nowPlayingMediaRemoteManager;	// IMP=0x00400000000fb73c
+ (_Bool)shouldUsePlayerPath;	// IMP=0x00400000000fb72a
+ (_Bool)_isThirdPartyPIPSupported;	// IMP=0x00400000000fb722
+ (void)setPictureInPictureActive:(_Bool)arg1 forPlayer:(id)arg2;	// IMP=0x00400000000fc5e7
+ (id)mediaRemoteManagerPublishingForPlayer:(id)arg1;	// IMP=0x00400000000fc537
+ (id)playerPathForPlayer:(id)arg1;	// IMP=0x00400000000fc4ed
- (void).cxx_destruct;	// IMP=0x00000000000f7536
@property(retain, nonatomic) NSMutableDictionary *contentItemSectionIdentifiers; // @synthesize contentItemSectionIdentifiers=_contentItemSectionIdentifiers;
@property(nonatomic) void *tokenForContentItemInfoCallback; // @synthesize tokenForContentItemInfoCallback=_tokenForContentItemInfoCallback;
@property(nonatomic) void *tokenForCreateChildContentItemCallback; // @synthesize tokenForCreateChildContentItemCallback=_tokenForCreateChildContentItemCallback;
@property(nonatomic) void *tokenForContentItemLanguageOptionsCallback; // @synthesize tokenForContentItemLanguageOptionsCallback=_tokenForContentItemLanguageOptionsCallback;
@property(nonatomic) void *tokenForContentItemArtworkCallback; // @synthesize tokenForContentItemArtworkCallback=_tokenForContentItemArtworkCallback;
@property(nonatomic) void *tokenForContentItemMetadataCallback; // @synthesize tokenForContentItemMetadataCallback=_tokenForContentItemMetadataCallback;
@property(nonatomic) void *tokenForCreateContentItemCallback; // @synthesize tokenForCreateContentItemCallback=_tokenForCreateContentItemCallback;
@property(copy, nonatomic) CDUnknownBlockType playbackQueueRequestCreateChildContentItemCallback; // @synthesize playbackQueueRequestCreateChildContentItemCallback=_playbackQueueRequestCreateChildContentItemCallback;
@property(copy, nonatomic) CDUnknownBlockType playbackQueueRequestContentItemDescriptionCallback; // @synthesize playbackQueueRequestContentItemDescriptionCallback=_playbackQueueRequestContentItemDescriptionCallback;
@property(copy, nonatomic) CDUnknownBlockType playbackQueueRequestContentItemLanguageOptionsCallback; // @synthesize playbackQueueRequestContentItemLanguageOptionsCallback=_playbackQueueRequestContentItemLanguageOptionsCallback;
@property(copy, nonatomic) CDUnknownBlockType playbackQueueRequestContentItemArtworkCallback; // @synthesize playbackQueueRequestContentItemArtworkCallback=_playbackQueueRequestContentItemArtworkCallback;
@property(copy, nonatomic) CDUnknownBlockType playbackQueueRequestContentItemMetadataCallback; // @synthesize playbackQueueRequestContentItemMetadataCallback=_playbackQueueRequestContentItemMetadataCallback;
@property(copy, nonatomic) CDUnknownBlockType playbackQueueRequestCreateContentItemCallback; // @synthesize playbackQueueRequestCreateContentItemCallback=_playbackQueueRequestCreateContentItemCallback;
@property(nonatomic) __weak AVPlayerItem *playerItemForContentItemRef; // @synthesize playerItemForContentItemRef=_playerItemForContentItemRef;
@property(retain, nonatomic) NSMutableArray *navigationGroupArtworkLoadedObservers; // @synthesize navigationGroupArtworkLoadedObservers=_navigationGroupArtworkLoadedObservers;
@property(retain, nonatomic) id mediaSelectionOptionsDidChangeObserver; // @synthesize mediaSelectionOptionsDidChangeObserver=_mediaSelectionOptionsDidChangeObserver;
@property(retain, nonatomic) id playerControllerCurrentTimeJumpedObserver; // @synthesize playerControllerCurrentTimeJumpedObserver=_playerControllerCurrentTimeJumpedObserver;
@property(readonly, nonatomic) AVKeyValueObserverCollection *kvoPlayerController; // @synthesize kvoPlayerController=_kvoPlayerController;
@property(readonly, nonatomic) AVKeyValueObserverCollection *kvoCollection; // @synthesize kvoCollection=_kvoCollection;
@property(retain, nonatomic) AVMediaPlayerDelegate *mediaPlayerDelegate; // @synthesize mediaPlayerDelegate=_mediaPlayerDelegate;
@property(readonly, nonatomic) AVPlayerViewController *playerViewController; // @synthesize playerViewController=_playerViewController;
- (id)_nowPlayingInfo;	// IMP=0x00000000000f5c13
- (void)_scaleImage:(id)arg1 toSize:(struct CGSize)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000f5aae
- (void)_fetchNowPlayingInfoArtworkForSize:(struct CGSize)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000f58a5
- (void)_determineArtworkAvailability:(CDUnknownBlockType)arg1;	// IMP=0x00000000000f576b
- (id)_metadataForPlayerItem:(id)arg1 identifiers:(id)arg2;	// IMP=0x00000000000f524f
- (void)_fetchNowPlayingInfo:(CDUnknownBlockType)arg1;	// IMP=0x00000000000f5101
- (id)_externalContentIdentifier;	// IMP=0x00000000000f4fda
- (void)addArtworkForSectionItem:(id)arg1 sectionIndex:(unsigned long long)arg2 requestedSize:(struct CGSize)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000f4bd0
- (_Bool)addMetadataForSectionItem:(id)arg1 sectionIndex:(unsigned long long)arg2;	// IMP=0x00000000000f4a7e
- (void *)sectionContentItemWithParentItem:(void *)arg1 sectionIndex:(unsigned long long)arg2;	// IMP=0x00000000000f48b1
- (unsigned long long)numberOfSectionsForCurrentItem;	// IMP=0x00000000000f4843
- (id)currentLanguageOptions;	// IMP=0x00000000000f4700
- (id)availableLanguageOptionGroups;	// IMP=0x00000000000f45bd
- (void)_invalidateAllContentItemInfo;	// IMP=0x00000000000f42c0
- (void)updateNowPlayingInfoLanguageOptions;	// IMP=0x00000000000f4281
- (void)updateNowPlayingInfoFull;	// IMP=0x00000000000f423a
- (void)updateNowPlayingInfo;	// IMP=0x00000000000f41e2
- (void)_cancelDeferredUpdates;	// IMP=0x00000000000f4187
- (void)_updateNowPlayingInfoLanguageSelectionOnlyDeferred;	// IMP=0x00000000000f413b
- (void)__updateLanguageSelectionForContentItem:(id)arg1;	// IMP=0x00000000000f408c
- (void)_updateNowPlayingInfoDeferred;	// IMP=0x00000000000f407a
- (double)_elapsedDisplayTime;	// IMP=0x00000000000f3fc0
- (double)_displayedDuration;	// IMP=0x00000000000f3f06
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000000f3989
- (void)_postDidBecomeNowPlayingNotificationIfNecessary;	// IMP=0x00000000000f3811
- (id)playerItemIdentifier;	// IMP=0x00000000000f372d
- (void)setContentItemRef:(void *)arg1;	// IMP=0x00000000000f371b
@property(retain, nonatomic) MRContentItem *contentItem;
- (id)interstitialTimeRangeCollection;	// IMP=0x00000000000f358c
@property(readonly) AVAsset *asset;
@property(readonly) AVPlayerItem *playerItem;
@property(readonly) AVPlayer *player;
@property(readonly, nonatomic) AVPlayerController *playerController;
@property(readonly, nonatomic) AVDisplayManager *displayManager;
- (void)playerDidChange;	// IMP=0x00000000000f3399
- (void)_updateNowPlayingSession;	// IMP=0x00000000000f307c
- (id)remoteCommandCenter;	// IMP=0x00000000000f2f48
- (void)setInstallPlaybackQueueCallbacks:(_Bool)arg1;	// IMP=0x00000000000f2606
- (void *)currentPlayerPathRef;	// IMP=0x00000000000f25f4
- (id)currentPlayerPath;	// IMP=0x00000000000f2181
- (void)invalidate;	// IMP=0x00000000000f20dd
- (void)dealloc;	// IMP=0x00000000000f1e23
- (id)init;	// IMP=0x00000000000f1e15
- (id)initWithPlayerViewController:(id)arg1;	// IMP=0x00000000000f15f7
- (void)_stopPublishing;	// IMP=0x00000000000f112f
- (void)_startPublishing;	// IMP=0x00000000000f0fdd
@property(readonly, nonatomic) _Bool isPublishing;
@property(nonatomic, getter=isPictureInPicture) _Bool pictureInPicture;
@property(nonatomic, getter=isNowPlaying) _Bool nowPlaying;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAsset, AVAssetTrack, AVCoordinatedPlaybackSuspension, AVDelegateManager, AVInterstitialController, AVMediaSelectionOption, AVNavigationMarkersGroup, AVObservationController, AVPlayer, AVPlayerItem, AVPlayerItemPhotosensitivityMetadataHandler, AVPlayerLayer, AVQueuePlayer, AVTimeRange, AVValueTiming, BSSimpleAssertion, NSArray, NSDate, NSDictionary, NSError, NSNumber, NSString, NSTimer;
@protocol AVPlayerControllerDelegate, OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface AVPlayerController : NSObject
{
    NSArray *_audioMediaSelectionOptions;	// 8 = 0x8
    NSArray *_visualMediaSelectionOptions;	// 16 = 0x10
    NSArray *_legibleMediaSelectionOptions;	// 24 = 0x18
    AVMediaSelectionOption *_cachedSelectedAudioMediaSelectionOption;	// 32 = 0x20
    AVMediaSelectionOption *_cachedSelectedLegibleMediaSelectionOption;	// 40 = 0x28
    AVMediaSelectionOption *_cachedSelectedLegibleMediaSelectionOptionAccordingToAVFoundation;	// 48 = 0x30
    NSString *_lastKnownPersistedExtendedLanguageTag;	// 56 = 0x38
    void *_observationInfo;	// 64 = 0x40
    _Bool _inspectionSuspended;	// 72 = 0x48
    id _updateAtMinMaxTimePeriodicObserverToken;	// 80 = 0x50
    id _timecodePeriodicObserverToken;	// 88 = 0x58
    _Bool _pictureInPictureInterrupted;	// 96 = 0x60
    _Bool _handlesAudioSessionInterruptions;	// 97 = 0x61
    _Bool _isDeallocating;	// 98 = 0x62
    _Bool _hasSetUpSeekableLiveStreamState;	// 99 = 0x63
    NSNumber *_rateToRestoreAfterAudioSessionInterruptionEnds;	// 104 = 0x68
    CDUnknownBlockType _retryPlayingImmediatelyBlock;	// 112 = 0x70
    _Bool _shouldPlayImmediately;	// 120 = 0x78
    _Bool _looping;	// 121 = 0x79
    long long _actionAtItemEnd;	// 128 = 0x80
    long long _playbackSuspensionCount;	// 136 = 0x88
    long long _scrubbingCount;	// 144 = 0x90
    NSObject<OS_dispatch_queue> *_seekQueue;	// 152 = 0x98
    _Bool _pendingSeek;	// 160 = 0xa0
    CDStruct_1b6d18a9 _toleranceBefore;	// 164 = 0xa4
    CDStruct_1b6d18a9 _toleranceAfter;	// 188 = 0xbc
    _Bool _isScanningForward;	// 212 = 0xd4
    _Bool _isScanningBackward;	// 213 = 0xd5
    unsigned long long _scanningCount;	// 216 = 0xd8
    double _preScanningRate;	// 224 = 0xe0
    AVValueTiming *_liveStreamMinTiming;	// 232 = 0xe8
    AVValueTiming *_liveStreamMaxTiming;	// 240 = 0xf0
    _Bool _liveStreamEventModePossible;	// 248 = 0xf8
    long long _canUseNetworkResourcesForLiveStreamingWhilePausedCount;	// 256 = 0x100
    _Bool _previousValueOfCanUseNetworkResourcesForLiveStreamingWhilePaused;	// 264 = 0x108
    _Bool _shouldPlayWhenLikelyToKeepUp;	// 265 = 0x109
    _Bool _playingOnSecondScreen;	// 266 = 0x10a
    BSSimpleAssertion *_reduceResourceUsageAssertion;	// 272 = 0x110
    double _defaultPlaybackRate;	// 280 = 0x118
    _Bool _touchBarRequiresLinearPlayback;	// 288 = 0x120
    id <AVPlayerControllerDelegate> _internalDelegate;	// 296 = 0x128
    NSObject<OS_dispatch_queue> *_backgroundQueue;	// 304 = 0x130
    NSDate *_lastTimePlayingOnMatchPointDeviceWasUpdated;	// 312 = 0x138
    NSTimer *_updatePlayingOnMatchPointDeviceThrottleTimer;	// 320 = 0x140
    AVPlayerItemPhotosensitivityMetadataHandler *_photosensitivityMetadataHandler;	// 328 = 0x148
    _Bool _muted;	// 336 = 0x150
    _Bool _avkitSettingMuted;	// 337 = 0x151
    _Bool _allowsAudioPlayback;	// 338 = 0x152
    _Bool _hasPendingAtLiveEdgeStateUpdate;	// 339 = 0x153
    NSTimer *_liveEdgeTimer;	// 344 = 0x158
    _Bool _atLiveEdge;	// 352 = 0x160
    _Bool _atMaxTime;	// 353 = 0x161
    _Bool _atMinTime;	// 354 = 0x162
    _Bool _scrubbing;	// 355 = 0x163
    _Bool _pictureInPictureSupported;	// 356 = 0x164
    _Bool _seekingInternal;	// 357 = 0x165
    _Bool _seeking;	// 358 = 0x166
    _Bool _composable;	// 359 = 0x167
    _Bool _hasProtectedContent;	// 360 = 0x168
    _Bool _compatibleWithAirPlayVideo;	// 361 = 0x169
    _Bool _preventingIdleSystemSleep;	// 362 = 0x16a
    _Bool _preventingIdleDisplaySleep;	// 363 = 0x16b
    _Bool _disablingAutomaticTermination;	// 364 = 0x16c
    _Bool _allowsPictureInPicturePlayback;	// 365 = 0x16d
    _Bool _pictureInPictureActive;	// 366 = 0x16e
    _Bool _canTogglePictureInPicture;	// 367 = 0x16f
    _Bool _hasBegunInspection;	// 368 = 0x170
    _Bool _playingOnMatchPointDevice;	// 369 = 0x171
    _Bool _scanningTV;	// 370 = 0x172
    _Bool _shouldLoadVisualMediaSelectionOptions;	// 371 = 0x173
    _Bool _playbackSuspended;	// 372 = 0x174
    _Bool _coordinatedPlaybackActive;	// 373 = 0x175
    AVPlayer *_player;	// 376 = 0x178
    AVPlayer *_activePlayer;	// 384 = 0x180
    double _activeRate;	// 392 = 0x188
    AVObservationController *_observationController;	// 400 = 0x190
    AVAsset *_currentAssetIfReady;	// 408 = 0x198
    NSObject<OS_dispatch_queue> *_assetInspectionQueue;	// 416 = 0x1a0
    AVAsset *_assetBeingPrepared;	// 424 = 0x1a8
    NSString *_externalPlaybackAirPlayDeviceLocalizedName;	// 432 = 0x1b0
    AVValueTiming *_timing;	// 440 = 0x1b8
    AVValueTiming *_minTiming;	// 448 = 0x1c0
    AVValueTiming *_maxTiming;	// 456 = 0x1c8
    AVAssetTrack *_currentAudioTrack;	// 464 = 0x1d0
    AVAssetTrack *_currentVideoTrack;	// 472 = 0x1d8
    double _seekToTime;	// 480 = 0x1e0
    double _initialScrubbingTime;	// 488 = 0x1e8
    NSDictionary *_metadata;	// 496 = 0x1f0
    NSArray *_availableMetadataFormats;	// 504 = 0x1f8
    double _rateBeforeScrubBegan;	// 512 = 0x200
    AVCoordinatedPlaybackSuspension *_scrubCoordinatorSuspension;	// 520 = 0x208
    NSString *_pipActivitySessionIdentifier;	// 528 = 0x210
    AVPlayerLayer *_playerLayerForReducingResources;	// 536 = 0x218
    NSArray *_photosensitivityRegions;	// 544 = 0x220
    NSObject<OS_dispatch_source> *_seekTimer;	// 552 = 0x228
    long long _bestAvailableVideoResolution;	// 560 = 0x230
    long long _bestAvailableVideoRange;	// 568 = 0x238
    long long _bestAvailableAudioFormat;	// 576 = 0x240
    double _suspendedRate;	// 584 = 0x248
    struct CGSize _presentationSize;	// 592 = 0x250
    CDStruct_1b6d18a9 _seekToTimeInternal;	// 608 = 0x260
}

+ (id)keyPathsForValuesAffectingPictureInPicturePossible;	// IMP=0x00600000000c7638
+ (id)keyPathsForValuesAffectingExternalPlaybackType;	// IMP=0x00600000000c760c
+ (id)keyPathsForValuesAffectingExternalPlaybackActive;	// IMP=0x00600000000c75ec
+ (id)keyPathsForValuesAffectingPlayingOnExternalScreen;	// IMP=0x00600000000c75c0
+ (id)keyPathsForValuesAffectingAllowsExternalPlayback;	// IMP=0x00600000000c75a0
+ (id)keyPathsForValuesAffectingCanSeekFrameBackward;	// IMP=0x00600000000c7574
+ (id)keyPathsForValuesAffectingCanSeekFrameForward;	// IMP=0x00600000000c7548
+ (id)keyPathsForValuesAffectingCanSeekToEnd;	// IMP=0x00600000000c7528
+ (id)keyPathsForValuesAffectingCanSeekToBeginning;	// IMP=0x00600000000c7508
+ (id)keyPathsForValuesAffectingCanScanBackward;	// IMP=0x00600000000c74d1
+ (id)keyPathsForValuesAffectingCanScanForward;	// IMP=0x00600000000c749a
+ (id)keyPathsForValuesAffectingCanSeek;	// IMP=0x00600000000c7446
+ (id)keyPathsForValuesAffectingTimeControlStatus;	// IMP=0x00600000000c7426
+ (id)keyPathsForValuesAffectingHasShareableContent;	// IMP=0x00600000000c73ef
+ (id)keyPathsForValuesAffectingHasTrimmableContent;	// IMP=0x00600000000c73c3
+ (id)keyPathsForValuesAffectingHasSeekableLiveStreamingContent;	// IMP=0x00600000000c72f4
+ (id)keyPathsForValuesAffectingHasLiveStreamingContent;	// IMP=0x00600000000c7230
+ (id)keyPathsForValuesAffectingPlayableOffline;	// IMP=0x00600000000c7210
+ (id)keyPathsForValuesAffectingStreaming;	// IMP=0x00600000000c71f0
+ (id)keyPathsForValuesAffectingHasEnabledVideo;	// IMP=0x00600000000c71d0
+ (id)keyPathsForValuesAffectingHasVideo;	// IMP=0x00600000000c71b0
+ (id)keyPathsForValuesAffectingHasEnabledAudio;	// IMP=0x00600000000c7190
+ (id)keyPathsForValuesAffectingLoadedTimeRanges;	// IMP=0x00600000000c7159
+ (id)keyPathsForValuesAffectingSeekableTimeRanges;	// IMP=0x00600000000c7139
+ (id)keyPathsForValuesAffectingCurrentTimeWithinEndTimes;	// IMP=0x00600000000c710d
+ (id)keyPathsForValuesAffectingContentDurationWithinEndTimes;	// IMP=0x00600000000c70e1
+ (id)keyPathsForValuesAffectingForwardPlaybackEndTime;	// IMP=0x00600000000c70c1
+ (id)keyPathsForValuesAffectingMaxTime;	// IMP=0x00600000000c7079
+ (id)keyPathsForValuesAffectingReversePlaybackEndTime;	// IMP=0x00600000000c7059
+ (id)keyPathsForValuesAffectingMinTime;	// IMP=0x00600000000c7022
+ (id)keyPathsForValuesAffectingCurrentTime;	// IMP=0x00600000000c7002
+ (id)keyPathsForValuesAffectingContentDimensions;	// IMP=0x00600000000c6f54
+ (id)keyPathsForValuesAffectingContentDuration;	// IMP=0x00600000000c6f34
+ (id)keyPathsForValuesAffectingHasContent;	// IMP=0x00600000000c6f14
+ (id)keyPathsForValuesAffectingVolume;	// IMP=0x00600000000c6ef4
+ (id)keyPathsForValuesAffectingCanTogglePlayback;	// IMP=0x00600000000c6ec8
+ (id)keyPathsForValuesAffectingCanPause;	// IMP=0x00600000000c6ea8
+ (id)keyPathsForValuesAffectingPlaying;	// IMP=0x00600000000c6e88
+ (id)keyPathsForValuesAffectingCanPlay;	// IMP=0x00600000000c6e5c
+ (id)keyPathsForValuesAffectingDefaultPlaybackRate;	// IMP=0x00600000000c6e38
+ (id)keyPathsForValuesAffectingRate;	// IMP=0x00600000000c6e18
+ (id)keyPathsForValuesAffectingActiveRate;	// IMP=0x00600000000c6df4
+ (id)keyPathsForValuesAffectingCompletelySeekable;	// IMP=0x00600000000c6dc8
+ (id)keyPathsForValuesAffectingError;	// IMP=0x00600000000c6d9c
+ (id)keyPathsForValuesAffectingReadyToPlay;	// IMP=0x00600000000c6d7c
+ (id)keyPathsForValuesAffectingStatus;	// IMP=0x00600000000c6d45
+ (id)keyPathsForValuesAffectingpreferredTransform;	// IMP=0x00600000000c6d21
+ (void)setCachedIsPictureInPictureSupported:(_Bool)arg1;	// IMP=0x00600000000c6d15
+ (_Bool)cachedIsPictureInPictureSupported;	// IMP=0x00600000000c6d09
+ (void)initialize;	// IMP=0x00600000000c6cce
+ (id)keyPathsForValuesAffectingMaximumVideoResolution;	// IMP=0x00600000000c790e
+ (id)keyPathsForValuesAffectingPreferredDisplayCriteria;	// IMP=0x00600000000c78ee
+ (id)keyPathsForValuesAffectingUsesExternalPlaybackWhileExternalScreenIsActive;	// IMP=0x00600000000c78ce
+ (id)_sortedAudibleOption:(id)arg1;	// IMP=0x0060000000139b9b
+ (id)keyPathsForValuesAffectingCurrentLegibleMediaSelectionOption;	// IMP=0x0060000000139b64
+ (id)keyPathsForValuesAffectingHasLegibleMediaSelectionOptions;	// IMP=0x0060000000139b44
+ (id)keyPathsForValuesAffectingCurrentVideoMediaSelectionOption;	// IMP=0x0060000000139b18
+ (id)keyPathsForValuesAffectingCurrentAudioMediaSelectionOption;	// IMP=0x0060000000139af4
+ (id)keyPathsForValuesAffectingHasAudioMediaSelectionOptions;	// IMP=0x0060000000139ad4
+ (id)keyPathsForValuesAffectingHasMediaSelectionOptions;	// IMP=0x0060000000139aa8
+ (id)canonicalLanguageIdentifierFromString:(id)arg1;	// IMP=0x0060000000139933
- (void).cxx_destruct;	// IMP=0x00000000000c3935
@property(nonatomic) _Bool coordinatedPlaybackActive; // @synthesize coordinatedPlaybackActive=_coordinatedPlaybackActive;
@property(readonly, nonatomic) double suspendedRate; // @synthesize suspendedRate=_suspendedRate;
@property(readonly, nonatomic, getter=isPlaybackSuspended) _Bool playbackSuspended; // @synthesize playbackSuspended=_playbackSuspended;
@property(nonatomic) _Bool shouldLoadVisualMediaSelectionOptions; // @synthesize shouldLoadVisualMediaSelectionOptions=_shouldLoadVisualMediaSelectionOptions;
@property(nonatomic) long long bestAvailableAudioFormat; // @synthesize bestAvailableAudioFormat=_bestAvailableAudioFormat;
@property(nonatomic) long long bestAvailableVideoRange; // @synthesize bestAvailableVideoRange=_bestAvailableVideoRange;
@property(nonatomic) long long bestAvailableVideoResolution; // @synthesize bestAvailableVideoResolution=_bestAvailableVideoResolution;
@property(readonly, nonatomic) NSObject<OS_dispatch_source> *seekTimer; // @synthesize seekTimer=_seekTimer;
@property(nonatomic, getter=_isScanningTV) _Bool scanningTV; // @synthesize scanningTV=_scanningTV;
@property(retain, nonatomic) NSArray *photosensitivityRegions; // @synthesize photosensitivityRegions=_photosensitivityRegions;
@property(nonatomic) __weak AVPlayerLayer *playerLayerForReducingResources; // @synthesize playerLayerForReducingResources=_playerLayerForReducingResources;
@property(nonatomic, getter=isPlayingOnMatchPointDevice) _Bool playingOnMatchPointDevice; // @synthesize playingOnMatchPointDevice=_playingOnMatchPointDevice;
@property(nonatomic) _Bool hasBegunInspection; // @synthesize hasBegunInspection=_hasBegunInspection;
@property(copy, nonatomic) NSString *pipActivitySessionIdentifier; // @synthesize pipActivitySessionIdentifier=_pipActivitySessionIdentifier;
@property(nonatomic) _Bool canTogglePictureInPicture; // @synthesize canTogglePictureInPicture=_canTogglePictureInPicture;
@property(nonatomic, getter=isPictureInPictureActive) _Bool pictureInPictureActive; // @synthesize pictureInPictureActive=_pictureInPictureActive;
@property(nonatomic) _Bool allowsPictureInPicturePlayback; // @synthesize allowsPictureInPicturePlayback=_allowsPictureInPicturePlayback;
@property(nonatomic, getter=isDisablingAutomaticTermination) _Bool disablingAutomaticTermination; // @synthesize disablingAutomaticTermination=_disablingAutomaticTermination;
@property(nonatomic, getter=isPreventingIdleDisplaySleep) _Bool preventingIdleDisplaySleep; // @synthesize preventingIdleDisplaySleep=_preventingIdleDisplaySleep;
@property(nonatomic, getter=isPreventingIdleSystemSleep) _Bool preventingIdleSystemSleep; // @synthesize preventingIdleSystemSleep=_preventingIdleSystemSleep;
@property(retain, nonatomic) AVCoordinatedPlaybackSuspension *scrubCoordinatorSuspension; // @synthesize scrubCoordinatorSuspension=_scrubCoordinatorSuspension;
@property(nonatomic) double rateBeforeScrubBegan; // @synthesize rateBeforeScrubBegan=_rateBeforeScrubBegan;
@property(nonatomic, getter=isCompatibleWithAirPlayVideo) _Bool compatibleWithAirPlayVideo; // @synthesize compatibleWithAirPlayVideo=_compatibleWithAirPlayVideo;
@property(retain, nonatomic) NSArray *availableMetadataFormats; // @synthesize availableMetadataFormats=_availableMetadataFormats;
@property(nonatomic) _Bool hasProtectedContent; // @synthesize hasProtectedContent=_hasProtectedContent;
@property(nonatomic, getter=isComposable) _Bool composable; // @synthesize composable=_composable;
@property(retain, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(nonatomic) double initialScrubbingTime; // @synthesize initialScrubbingTime=_initialScrubbingTime;
@property(nonatomic) double seekToTime; // @synthesize seekToTime=_seekToTime;
@property CDStruct_1b6d18a9 seekToTimeInternal; // @synthesize seekToTimeInternal=_seekToTimeInternal;
@property(nonatomic, getter=isSeeking) _Bool seeking; // @synthesize seeking=_seeking;
@property(getter=isSeekingInternal) _Bool seekingInternal; // @synthesize seekingInternal=_seekingInternal;
@property(retain, nonatomic) AVAssetTrack *currentVideoTrack; // @synthesize currentVideoTrack=_currentVideoTrack;
@property(retain, nonatomic) AVAssetTrack *currentAudioTrack; // @synthesize currentAudioTrack=_currentAudioTrack;
@property(retain, nonatomic) AVValueTiming *maxTiming; // @synthesize maxTiming=_maxTiming;
@property(retain, nonatomic) AVValueTiming *minTiming; // @synthesize minTiming=_minTiming;
@property(retain, nonatomic) AVValueTiming *timing; // @synthesize timing=_timing;
@property(retain, nonatomic) NSString *externalPlaybackAirPlayDeviceLocalizedName; // @synthesize externalPlaybackAirPlayDeviceLocalizedName=_externalPlaybackAirPlayDeviceLocalizedName;
@property(nonatomic, getter=isPictureInPictureSupported) _Bool pictureInPictureSupported; // @synthesize pictureInPictureSupported=_pictureInPictureSupported;
@property(retain, nonatomic) AVAsset *assetBeingPrepared; // @synthesize assetBeingPrepared=_assetBeingPrepared;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *assetInspectionQueue; // @synthesize assetInspectionQueue=_assetInspectionQueue;
@property(retain, nonatomic) AVAsset *currentAssetIfReady; // @synthesize currentAssetIfReady=_currentAssetIfReady;
@property(nonatomic) struct CGSize presentationSize; // @synthesize presentationSize=_presentationSize;
@property(readonly, nonatomic) AVObservationController *observationController; // @synthesize observationController=_observationController;
@property(nonatomic) double activeRate; // @synthesize activeRate=_activeRate;
@property(retain, nonatomic) AVPlayer *activePlayer; // @synthesize activePlayer=_activePlayer;
@property(nonatomic, getter=isScrubbing) _Bool scrubbing; // @synthesize scrubbing=_scrubbing;
@property(nonatomic, getter=isAtMinTime) _Bool atMinTime; // @synthesize atMinTime=_atMinTime;
@property(nonatomic, getter=isAtMaxTime) _Bool atMaxTime; // @synthesize atMaxTime=_atMaxTime;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
- (double)_adjustedSeekTimeFromTime:(double)arg1 toTime:(double)arg2;	// IMP=0x00000000000c33d3
- (void)_updateActivePlayer;	// IMP=0x00000000000c3387
- (void)_setupInterstitialController;	// IMP=0x00000000000c3381
- (void)_prepareAssetForInspectionIfNeeded;	// IMP=0x00000000000c2e50
- (id)scanningDelays;	// IMP=0x00000000000c2df6
- (void)_updateRateForScrubbingAndSeeking;	// IMP=0x00000000000c2c6a
- (void)_updatePlayerMutedState;	// IMP=0x00000000000c2b34
- (void)_updateMetadata;	// IMP=0x00000000000c2895
- (id)_outputContext;	// IMP=0x00000000000c2845
- (id)_timecodeTrack;	// IMP=0x00000000000c26eb
- (void)_stopSuspendingPlayback;	// IMP=0x00000000000c26ae
- (void)_startSuspendingPlayback;	// IMP=0x00000000000c266e
- (void)_setSuspendedRate:(double)arg1;	// IMP=0x00000000000c2650
- (void)_setPlaybackSuspended:(_Bool)arg1;	// IMP=0x00000000000c263c
- (void)_endPlaybackSuspension_AVFoundationStrategy;	// IMP=0x00000000000c25fe
- (id)_createMetadataDictionaryForCurrentAsset;	// IMP=0x00000000000c21ae
- (void)_cancelPendingSeeksIfNeeded;	// IMP=0x00000000000c2160
- (void)_beginPlaybackSuspension_AVFoundationStrategy;	// IMP=0x00000000000c2122
- (id)_photosensitiveDisplayTimes;	// IMP=0x00000000000c204c
- (void)_updatePhotosensitivityRegions;	// IMP=0x00000000000c1f41
- (void)_cancelOutstandingAtLiveEdgeStateUpdates;	// IMP=0x00000000000c1ee4
- (void)_updateAtLiveEdgeStateIfNeeded;	// IMP=0x00000000000c1d9e
- (void)_updateAtLiveEdgeStateAndScheduleTimerIfNeeded;	// IMP=0x00000000000c1d3c
- (void)_setNeedsAtLiveEdgeStateUpdate;	// IMP=0x00000000000c1c58
- (void)_scheduleAtLiveEdgeStateUpdateWithTimeInterval:(double)arg1;	// IMP=0x00000000000c1b50
- (void)_scheduleAtLiveEdgeStateUpdateIfNeeded;	// IMP=0x00000000000c1a57
- (void)setCanUseNetworkResourcesForLiveStreamingWhilePaused:(_Bool)arg1;	// IMP=0x00000000000c19eb
- (_Bool)canUseNetworkResourcesForLiveStreamingWhilePaused;	// IMP=0x00000000000c197d
- (_Bool)isReducingResourcesForPictureInPicture;	// IMP=0x00000000000c194a
@property(retain, nonatomic) BSSimpleAssertion *reduceResourceUsageAssertion;
- (void)acquireResourceReductionAssertion;	// IMP=0x00000000000c172d
- (void)endReducingResourcesForPictureInPicturePlayerLayer:(id)arg1;	// IMP=0x00000000000c163c
- (void)beginReducingResourcesForPictureInPicturePlayerLayer:(id)arg1;	// IMP=0x00000000000c1394
- (void)togglePictureInPicture:(id)arg1;	// IMP=0x00000000000c138e
- (void)setPictureInPictureInterrupted:(_Bool)arg1;	// IMP=0x00000000000c1346
- (_Bool)isPictureInPictureInterrupted;	// IMP=0x00000000000c133d
- (_Bool)isPictureInPicturePossible;	// IMP=0x00000000000c10e1
- (void)_updateExternalPlaybackAirPlayDeviceLocalizedNameIfNeeded;	// IMP=0x00000000000c0d26
- (long long)externalPlaybackType;	// IMP=0x00000000000c0c97
- (_Bool)isExternalPlaybackActive;	// IMP=0x00000000000c0c53
@property(nonatomic, getter=isPlayingOnSecondScreen) _Bool playingOnSecondScreen;
- (_Bool)isPlayingOnExternalScreen;	// IMP=0x00000000000c0c0e
- (void)setAllowsExternalPlayback:(_Bool)arg1;	// IMP=0x00000000000c0bc4
- (_Bool)allowsExternalPlayback;	// IMP=0x00000000000c0b80
- (void)_updateMinMaxTimingIfNeeded;	// IMP=0x00000000000c0b3f
- (void)updateMinMaxTiming;	// IMP=0x00000000000c0285
- (void)updateTiming;	// IMP=0x00000000000c004b
- (void)endScrubbing:(id)arg1;	// IMP=0x00000000000bff1c
- (void)beginScrubbing:(id)arg1;	// IMP=0x00000000000bfe4b
- (void)skipBackwardThirtySeconds:(id)arg1;	// IMP=0x00000000000bfd27
- (void)seekOrStepByFrameCount:(long long)arg1;	// IMP=0x00000000000bf5ec
- (void)seekFrameBackward:(id)arg1;	// IMP=0x00000000000bf5ae
- (_Bool)canSeekFrameBackward;	// IMP=0x00000000000bf575
- (void)seekFrameForward:(id)arg1;	// IMP=0x00000000000bf539
- (_Bool)canSeekFrameForward;	// IMP=0x00000000000bf500
- (void)seekToEnd:(id)arg1;	// IMP=0x00000000000bf4e0
- (_Bool)canSeekToEnd;	// IMP=0x00000000000bf4ce
- (void)seekToBeginning:(id)arg1;	// IMP=0x00000000000bf4ae
- (_Bool)canSeekToBeginning;	// IMP=0x00000000000bf49c
- (void)endScanningBackward:(id)arg1;	// IMP=0x00000000000bf325
- (void)_updateScanningBackwardRate;	// IMP=0x00000000000bf146
- (void)beginScanningBackward:(id)arg1;	// IMP=0x00000000000bef98
- (void)scanBackward:(id)arg1;	// IMP=0x00000000000beec0
- (_Bool)canScanBackward;	// IMP=0x00000000000bee1e
- (void)endScanningForward:(id)arg1;	// IMP=0x00000000000beca7
- (void)_updateScanningForwardRate;	// IMP=0x00000000000bead6
- (void)beginScanningForward:(id)arg1;	// IMP=0x00000000000be928
- (void)scanForward:(id)arg1;	// IMP=0x00000000000be855
- (_Bool)canScanForward;	// IMP=0x00000000000be7b3
- (void)seekByTimeInterval:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3;	// IMP=0x00000000000be665
- (void)seekByTimeInterval:(double)arg1;	// IMP=0x00000000000be64d
- (void)actuallySeekToTime;	// IMP=0x00000000000be377
- (void)throttledSeekToTime:(CDStruct_1b6d18a9)arg1 toleranceBefore:(CDStruct_1b6d18a9)arg2 toleranceAfter:(CDStruct_1b6d18a9)arg3;	// IMP=0x00000000000bdfa7
- (void)seekToCMTime:(CDStruct_1b6d18a9)arg1 toleranceBefore:(CDStruct_1b6d18a9)arg2 toleranceAfter:(CDStruct_1b6d18a9)arg3;	// IMP=0x00000000000bdf95
- (void)seekToTime:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3;	// IMP=0x00000000000bdef1
- (void)resumePlaybackCoordinatorIfSuspended;	// IMP=0x00000000000bdd60
- (void)suspendPlaybackCoordinatorWhileActivelySeekingIfNecessary;	// IMP=0x00000000000bdc16
- (void)endScrubbing;	// IMP=0x00000000000bdb42
- (void)beginScrubbing;	// IMP=0x00000000000bda44
- (void)seekToTime:(double)arg1;	// IMP=0x00000000000bda2c
- (_Bool)canSeek;	// IMP=0x00000000000bd852
- (long long)timeControlStatus;	// IMP=0x00000000000bd80e
- (id)currentEnabledAssetTrackForMediaType:(id)arg1;	// IMP=0x00000000000bd2f0
- (void)_updateCurrentVideoTrackIfNeeded;	// IMP=0x00000000000bd276
- (void)_updateCurrentAudioTrackIfNeeded;	// IMP=0x00000000000bd1fc
- (void)_updateCoordinatedPlaybackActive;	// IMP=0x00000000000bd15a
- (_Bool)_assetContainsProResRaw:(id)arg1;	// IMP=0x00000000000bcebb
- (_Bool)_assetIsMarkedNotSerializable:(id)arg1;	// IMP=0x00000000000bcc62
- (id)audioWaveform;	// IMP=0x00000000000bcc5a
- (_Bool)_assetIsRestrictedFromSaving:(id)arg1;	// IMP=0x00000000000bcb77
- (_Bool)hasShareableContent;	// IMP=0x00000000000bca63
- (_Bool)hasTrimmableContent;	// IMP=0x00000000000bc98c
- (_Bool)hasSeekableLiveStreamingContent;	// IMP=0x00000000000bc6dd
- (_Bool)hasLiveStreamingContent;	// IMP=0x00000000000bc570
- (_Bool)isPlayableOffline;	// IMP=0x00000000000bc4df
- (_Bool)isStreaming;	// IMP=0x00000000000bc46a
- (_Bool)hasContentChapters;	// IMP=0x00000000000bc462
- (_Bool)hasEnabledVideo;	// IMP=0x00000000000bc3f4
- (_Bool)hasVideo;	// IMP=0x00000000000bc386
- (_Bool)hasEnabledAudio;	// IMP=0x00000000000bc318
- (id)loadedTimeRanges;	// IMP=0x00000000000bbf6d
- (id)seekableTimeRanges;	// IMP=0x00000000000bbef3
- (double)currentTimeWithinEndTimes;	// IMP=0x00000000000bbeac
@property(readonly, nonatomic) NSDate *currentOrEstimatedDate;
@property(readonly, nonatomic) NSDate *currentDate;
- (double)contentDurationWithinEndTimes;	// IMP=0x00000000000bbceb
- (void)_setMinTiming:(id)arg1 maxTiming:(id)arg2;	// IMP=0x00000000000bbc8a
- (void)setForwardPlaybackEndTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x00000000000bbc0c
- (CDStruct_1b6d18a9)forwardPlaybackEndTime;	// IMP=0x00000000000bbb7e
- (void)setMaxTime:(double)arg1;	// IMP=0x00000000000bb9cb
- (double)maxTime;	// IMP=0x00000000000bb882
- (void)setReversePlaybackEndTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x00000000000bb804
- (CDStruct_1b6d18a9)reversePlaybackEndTime;	// IMP=0x00000000000bb776
- (void)setMinTime:(double)arg1;	// IMP=0x00000000000bb690
- (double)minTime;	// IMP=0x00000000000bb57f
- (double)currentTime;	// IMP=0x00000000000bb48f
- (struct CGSize)contentDimensions;	// IMP=0x00000000000bb451
- (float)nominalFrameRate;	// IMP=0x00000000000bb1a4
- (double)contentDuration;	// IMP=0x00000000000bb0fc
- (_Bool)hasContent;	// IMP=0x00000000000bb099
- (void)setInspectionSuspended:(_Bool)arg1;	// IMP=0x00000000000bb047
- (_Bool)isInspectionSuspended;	// IMP=0x00000000000bb03e
- (void)toggleMuted:(id)arg1;	// IMP=0x00000000000baf56
- (void)setAllowsAudioPlayback:(_Bool)arg1;	// IMP=0x00000000000bae8b
- (_Bool)allowsAudioPlayback;	// IMP=0x00000000000bae7f
- (void)setMuted:(_Bool)arg1;	// IMP=0x00000000000bae5d
- (_Bool)isMuted;	// IMP=0x00000000000bae51
- (void)changeVolumeToMaximum:(id)arg1;	// IMP=0x00000000000bae37
- (void)changeVolumeToMinimum:(id)arg1;	// IMP=0x00000000000bae22
- (void)decreaseVolume:(id)arg1;	// IMP=0x00000000000bade4
- (void)increaseVolume:(id)arg1;	// IMP=0x00000000000bada6
- (void)setVolume:(double)arg1;	// IMP=0x00000000000bacb8
- (double)volume;	// IMP=0x00000000000bac64
- (void)updateAtMinMaxTime;	// IMP=0x00000000000babe8
- (void)setLooping:(_Bool)arg1;	// IMP=0x00000000000bab20
- (_Bool)isLooping;	// IMP=0x00000000000bab17
@property(nonatomic) _Bool touchBarRequiresLinearPlayback;
- (void)togglePlayback:(id)arg1;	// IMP=0x00000000000ba9f4
- (_Bool)canTogglePlayback;	// IMP=0x00000000000ba9bd
- (_Bool)canPause;	// IMP=0x00000000000ba9ab
- (void)autoplay:(id)arg1;	// IMP=0x00000000000ba805
- (void)play:(id)arg1;	// IMP=0x00000000000ba75b
- (void)setPlaying:(_Bool)arg1;	// IMP=0x00000000000ba522
- (_Bool)isPlaying;	// IMP=0x00000000000ba4fe
- (_Bool)canPlay;	// IMP=0x00000000000ba4c7
- (_Bool)canPlayImmediately;	// IMP=0x00000000000ba11b
- (void)_retryPlayImmediatelyIfNeeded;	// IMP=0x00000000000ba082
- (void)setDefaultPlaybackRate:(double)arg1;	// IMP=0x00000000000b9fbd
- (double)defaultPlaybackRate;	// IMP=0x00000000000b9f69
- (void)setRate:(double)arg1;	// IMP=0x00000000000b9f1d
- (void)_setRate_AVFoundationStrategy:(double)arg1;	// IMP=0x00000000000b9ecf
- (void)_playAtRate:(double)arg1;	// IMP=0x00000000000b9bc9
- (double)rate;	// IMP=0x00000000000b9b75
- (void)stopUsingNetworkResourcesForLiveStreamingWhilePaused;	// IMP=0x00000000000b9a78
- (void)startUsingNetworkResourcesForLiveStreamingWhilePaused;	// IMP=0x00000000000b9984
@property(nonatomic, getter=isAtLiveEdge) _Bool atLiveEdge; // @synthesize atLiveEdge=_atLiveEdge;
- (void)_observeValueForKeyPath:(id)arg1 oldValue:(id)arg2 newValue:(id)arg3;	// IMP=0x00000000000b7cee
- (_Bool)isCompletelySeekable;	// IMP=0x00000000000b7aae
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic, getter=isReadyToPlay) _Bool readyToPlay;
@property(readonly, nonatomic) long long status;
- (id)_queuePlayer;	// IMP=0x00000000000b7720
- (void)setObservationInfo:(void *)arg1;	// IMP=0x00000000000b7716
- (void *)observationInfo;	// IMP=0x00000000000b770c
- (struct CGAffineTransform)preferredTransform;	// IMP=0x00000000000b76ce
- (void)startKVO;	// IMP=0x00000000000b6ff2
- (void)dealloc;	// IMP=0x00000000000b6df7
- (void)startInspectionIfNeeded;	// IMP=0x00000000000b6a81
- (void)_commonInit;	// IMP=0x00000000000b6937
- (id)initWithPlayer:(id)arg1;	// IMP=0x00000000000b671b
- (id)init;	// IMP=0x00000000000b6630
- (void)_nukeTVExtras;	// IMP=0x000000000003bb40
- (void)_makeTVExtras;	// IMP=0x000000000003bad8
- (id)tvExtras;	// IMP=0x000000000003bac7
- (void)_updateNavigationMarkers;	// IMP=0x000000000003b99d
- (void)_updatePrimaryNavigationMarkersGroup;	// IMP=0x000000000003b88b
- (void)_setPrimaryNavigationMarkersGroup:(id)arg1;	// IMP=0x000000000003b822
@property(readonly, nonatomic) AVNavigationMarkersGroup *primaryNavigationMarkersGroup;
- (_Bool)isFirstFilteredNavigationGroupChapters;	// IMP=0x000000000003b721
- (_Bool)isFirstUnfilteredNavigationGroupChapters;	// IMP=0x000000000003b6b5
- (id)externalChapterNavigationMarkersGroup;	// IMP=0x000000000003b60f
@property(readonly, nonatomic) NSArray *externalNavigationMarkerGroups;
@property(readonly, nonatomic) AVNavigationMarkersGroup *embeddedChapterNavigationMarkersGroup;
- (void)_loadEmbeddedChapterNavigationMarkersGroupAsynchronously:(CDUnknownBlockType)arg1;	// IMP=0x000000000003b100
- (void)endPlaybackSuspension;	// IMP=0x000000000003b0b1
- (void)beginPlaybackSuspension;	// IMP=0x000000000003b076
- (_Bool)isCoordinatorSuspended;	// IMP=0x000000000003b013
- (void)_resumePlaybackCoordinator;	// IMP=0x000000000003ae94
- (void)_suspendPlaybackCoordinatorForReason:(id)arg1;	// IMP=0x000000000003acf8
- (void)setLimitReadAheadIfAllowed:(_Bool)arg1;	// IMP=0x000000000003ac39
- (void)togglePlaybackEvenWhenInBackground:(id)arg1;	// IMP=0x000000000003aab2
- (void)requestNavigateToDate:(id)arg1 fromDate:(id)arg2 reason:(long long)arg3 playWhenReady:(_Bool)arg4 permissionHandler:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x000000000003a90b
- (void)requestSeekToDate:(id)arg1 reason:(long long)arg2 playWhenReady:(_Bool)arg3;	// IMP=0x000000000003a667
- (void)requestNavigateToTime:(double)arg1 fromTime:(double)arg2 reason:(long long)arg3 playWhenReady:(_Bool)arg4 permissionHandler:(CDUnknownBlockType)arg5 seekCompletion:(CDUnknownBlockType)arg6;	// IMP=0x0000000000039e5d
- (void)requestSeekToTime:(double)arg1 reason:(long long)arg2 playWhenReady:(_Bool)arg3;	// IMP=0x0000000000039b02
- (void)requestPauseWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000039ae8
- (void)requestPauseWithoutAffectingCoordinatedPlaybackWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000039ad1
- (void)requestPauseForAllCoordinatedPlaybackParticipants:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000039904
- (void)requestPlayWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000039674
- (void)requestSeekToDate:(id)arg1 seekReason:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000039404
- (void)requestSeekToTime:(double)arg1 seekReason:(long long)arg2 permissionHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000039159
- (CDStruct_1b6d18a9)timeToSeekAfterUserNavigatedFromTime:(double)arg1 toTime:(double)arg2;	// IMP=0x0000000000038fc7
- (void)seekToDate:(id)arg1 seekReason:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000038e0a
- (void)gotoEndOfSeekableRanges:(id)arg1;	// IMP=0x0000000000038cb6
- (void)seekToTime:(double)arg1 seekReason:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000038a82
- (void)_didRequestSeek;	// IMP=0x0000000000038a11
- (void)_willRequestSeek;	// IMP=0x00000000000389a0
- (void)_didEndSeek;	// IMP=0x000000000003892f
- (void)_willBeginSeek;	// IMP=0x00000000000388be
- (_Bool)playerItem:(id)arg1 shouldSeekToTime:(CDStruct_1b6d18a9 *)arg2 toleranceBefore:(CDStruct_1b6d18a9 *)arg3 toleranceAfter:(CDStruct_1b6d18a9 *)arg4;	// IMP=0x00000000000387d2
@property(readonly, nonatomic) _Bool isSeekingTV;
@property(readonly, nonatomic) long long currentSeekReason;
- (double)displayTimeFromTime:(double)arg1;	// IMP=0x00000000000386a8
- (double)timeFromDisplayTime:(double)arg1;	// IMP=0x000000000003864e
@property(readonly, nonatomic) _Bool shouldContinuePlaybackInBackground;
@property(readonly, nonatomic) long long avkitMediaType;
- (void)loadAspectRatio:(CDUnknownBlockType)arg1;	// IMP=0x0000000000038374
- (double)bounceBackReturningDisplayTime;	// IMP=0x00000000000382f3
@property(readonly, nonatomic) _Bool shouldBounceBackAfterScanForwardPastEndTime;
- (void)updateStartAndEndDates;	// IMP=0x0000000000037945
@property(readonly, nonatomic) double startTime;
@property(readonly, nonatomic) NSDate *exactEndDate;
@property(readonly, nonatomic) NSDate *exactStartDate;
@property(readonly, nonatomic) _Bool canNavigateToBeginning;
@property(readonly, nonatomic) _Bool hasStartAndEndDates;
@property(retain, nonatomic) NSDate *programEndDate;
@property(retain, nonatomic) NSDate *programStartDate;
- (void)setEffectiveRateNonZero:(_Bool)arg1;	// IMP=0x0000000000037442
@property(readonly, nonatomic, getter=isEffectiveRateNonZero) _Bool effectiveRateNonZero;
@property(readonly, nonatomic) double currentDisplayTime;
- (double)playbackEndTime;	// IMP=0x0000000000037380
@property(readonly, nonatomic) double displayedDuration;
@property(readonly, nonatomic) double longestSeekableDurationSeenForCurrentItem;
@property(readonly, nonatomic, getter=isLiveStreamEventModePossible) _Bool liveStreamEventModePossible;
@property(readonly, nonatomic) _Bool isContentDurationIndefinite;
@property(readonly, nonatomic) double contentDurationCached;
@property(readonly, nonatomic) AVTimeRange *displayTimeRangeForNavigation;
@property(readonly, nonatomic) AVTimeRange *timeRangeForNavigation;
@property(readonly, nonatomic) AVTimeRange *timeRangeForNonLivePlayback;
@property(readonly, nonatomic) AVTimeRange *timeRangeSeekable;
@property(readonly, nonatomic) AVPlayerItem *currentItem;
@property(readonly, nonatomic) _Bool hasMoreEnqueuedContent;
- (void)setActivePlaying:(_Bool)arg1;	// IMP=0x00000000000367ae
- (_Bool)isActivePlaying;	// IMP=0x0000000000036769
- (float)_activeRate;	// IMP=0x000000000003659b
- (_Bool)isPrimaryPlayerWaitingForInterstitial;	// IMP=0x0000000000036476
@property(readonly, nonatomic) AVQueuePlayer *queuePlayer;
- (_Bool)linearPlaybackRequiredByInterstitial:(id)arg1;	// IMP=0x000000000003636b
@property(readonly, nonatomic) AVInterstitialController *interstitialController;
@property(retain, nonatomic) AVDelegateManager *delegateManager;
- (id)kvoPlayerItem;	// IMP=0x00000000000361db
- (id)kvoPlayer;	// IMP=0x000000000003618b
- (void)_durationDidChange;	// IMP=0x000000000003602e
- (void)updateTimeRanges;	// IMP=0x0000000000035d10
- (void)invalidateTV;	// IMP=0x0000000000035b13
- (id)initWithTVPlayer:(id)arg1;	// IMP=0x00000000000356fe
- (void)setClientSpecifiedDate:(id)arg1;	// IMP=0x0000000000035695
- (id)clientSpecifiedDate;	// IMP=0x0000000000035645
- (void)updateAudioFormats;	// IMP=0x000000000006e9be
- (void)updateVideoResolutionAndRange;	// IMP=0x000000000006e850
- (void)_updateVideoResolutionAndRange;	// IMP=0x000000000006e26c
- (id)_audioAssetTracks;	// IMP=0x000000000006dfd4
- (id)_videoAssetTracks;	// IMP=0x000000000006dd3c
@property(readonly, nonatomic) struct CGSize maximumVideoResolution;
- (id)preferredDisplayCriteria;	// IMP=0x00000000000c77dd
@property(readonly, nonatomic) _Bool usesExternalPlaybackWhileExternalScreenIsActive;
@property(nonatomic) _Bool handlesAudioSessionInterruptions;
- (_Bool)_mediaSelectionCriteriaCanBeAppliedAutomaticallyToLegibleMediaSelectionGroup;	// IMP=0x0000000000138cd8
- (id)_selectedMediaOptionWithMediaCharacteristic:(id)arg1;	// IMP=0x0000000000138bd0
- (void)_setMediaOption:(id)arg1 mediaCharacteristic:(id)arg2;	// IMP=0x000000000013887a
- (void)_enableAutoMediaSelection:(id)arg1;	// IMP=0x000000000013873f
- (void)_disableLegibleMediaSelectionOptions:(id)arg1;	// IMP=0x0000000000138689
- (void)_performAutomaticMediaSelectionForUserCaptionDisplayType:(long long)arg1;	// IMP=0x00000000001385be
- (void)_ensureUserCaptionDisplayType:(long long)arg1;	// IMP=0x00000000001384ec
- (id)legibleOptions;	// IMP=0x000000000013785f
- (id)audioOptions;	// IMP=0x00000000001374e6
- (id)visualOptions;	// IMP=0x000000000013728a
- (void)reloadVisualOptions;	// IMP=0x000000000013723e
- (void)reloadLegibleOptions;	// IMP=0x00000000001371ac
- (void)reloadAudioOptions;	// IMP=0x000000000013711a
- (void)reloadOptionsAssumingMediaOptionsMayHaveChanged:(_Bool)arg1;	// IMP=0x0000000000136f52
- (void)reloadOptionsAndCurrentSelections;	// IMP=0x0000000000136f3b
- (void)reloadOptions;	// IMP=0x0000000000136f27
- (void)selectedMediaOptionMayHaveChanged:(_Bool)arg1;	// IMP=0x00000000001368b9
- (void)selectedMediaOptionMayHaveChanged;	// IMP=0x00000000001368a5
- (id)_optionsForGroup:(id)arg1;	// IMP=0x0000000000136890
- (id)mediaSelectionGroupForMediaCharacteristic:(id)arg1;	// IMP=0x0000000000136816
- (void)setCurrentLegibleMediaSelectionOption:(id)arg1;	// IMP=0x0000000000136750
- (id)currentLegibleMediaSelectionOption;	// IMP=0x000000000013642c
- (void)setLegibleMediaSelectionOptions:(id)arg1;	// IMP=0x0000000000136357
- (id)legibleMediaSelectionOptions;	// IMP=0x0000000000136349
- (_Bool)hasLegibleMediaSelectionOptions;	// IMP=0x0000000000136301
@property(retain, nonatomic) AVMediaSelectionOption *currentVideoMediaSelectionOption; // @dynamic currentVideoMediaSelectionOption;
- (void)setCurrentAudioMediaSelectionOption:(id)arg1;	// IMP=0x00000000001361c0
- (id)currentAudioMediaSelectionOption;	// IMP=0x0000000000136135
- (void)setVisualMediaSelectionOptions:(id)arg1;	// IMP=0x0000000000136060
- (void)setAudioMediaSelectionOptions:(id)arg1;	// IMP=0x0000000000135f8b
@property(readonly, nonatomic) NSArray *visualMediaSelectionOptions; // @dynamic visualMediaSelectionOptions;
- (id)audioMediaSelectionOptions;	// IMP=0x0000000000135f6f
- (void)setLegibleMediaSelectionOptions:(id)arg1 audioMediaSelectionOptions:(id)arg2 assumeMediaOptionMayHaveChanged:(_Bool)arg3;	// IMP=0x0000000000135e94
- (_Bool)hasAudioMediaSelectionOptions;	// IMP=0x0000000000135e4b
- (_Bool)hasMediaSelectionOptions;	// IMP=0x0000000000135e12

@end

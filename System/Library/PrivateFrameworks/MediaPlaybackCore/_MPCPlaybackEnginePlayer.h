//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVPlayerViewController, MPAVItem, MPCAVItemTrace, MPCExternalPlaybackController, MPCItemBookmarker, MPCLeaseController, MPCMediaFoundationTranslator, MPCPlaybackEngine, MPCPlaybackErrorController, MPCPlayerItemConfigurator, NSDictionary, NSNumber, NSString, _MPCAudioSessionController;
@protocol MFAssetLoading, MFPlaybackStackController><MFQueueManagement, MPCPlaybackEngineEventStreamDeferralAssertion;

__attribute__((visibility("hidden")))
@interface _MPCPlaybackEnginePlayer : NSObject
{
    _Bool _autoPlayWhenLikelyToKeepUp;	// 8 = 0x8
    _Bool _reloadingPlaybackContext;	// 9 = 0x9
    _Bool _lastReportedVocalAttenuationEnabledState;	// 10 = 0xa
    MPCPlaybackEngine *_playbackEngine;	// 16 = 0x10
    long long _jumpIdentifier;	// 24 = 0x18
    id <MFPlaybackStackController><MFQueueManagement> _playbackStackController;	// 32 = 0x20
    MPCItemBookmarker *_bookmarker;	// 40 = 0x28
    MPCMediaFoundationTranslator *_translator;	// 48 = 0x30
    MPCPlaybackErrorController *_errorController;	// 56 = 0x38
    MPCExternalPlaybackController *_externalPlaybackController;	// 64 = 0x40
    id <MFAssetLoading> _assetLoader;	// 72 = 0x48
    MPCLeaseController *_leaseController;	// 80 = 0x50
    MPCPlayerItemConfigurator *_configurator;	// 88 = 0x58
    unsigned long long _stateHandle;	// 96 = 0x60
    MPCAVItemTrace *_playbackStartTrace;	// 104 = 0x68
    _MPCAudioSessionController *_transientAudioSessionController;	// 112 = 0x70
    id <MPCPlaybackEngineEventStreamDeferralAssertion> _evsDeferralAssertionForFirstAudioFrame;	// 120 = 0x78
    NSNumber *_currentRelativeVolume;	// 128 = 0x80
}

+ (id)describePlayer:(id)arg1;	// IMP=0x001000000013ff97
- (void).cxx_destruct;	// IMP=0x00000000000f3e1c
@property(nonatomic) _Bool lastReportedVocalAttenuationEnabledState; // @synthesize lastReportedVocalAttenuationEnabledState=_lastReportedVocalAttenuationEnabledState;
@property(copy, nonatomic) NSNumber *currentRelativeVolume; // @synthesize currentRelativeVolume=_currentRelativeVolume;
@property(retain, nonatomic) id <MPCPlaybackEngineEventStreamDeferralAssertion> evsDeferralAssertionForFirstAudioFrame; // @synthesize evsDeferralAssertionForFirstAudioFrame=_evsDeferralAssertionForFirstAudioFrame;
@property(retain, nonatomic) _MPCAudioSessionController *transientAudioSessionController; // @synthesize transientAudioSessionController=_transientAudioSessionController;
@property(retain, nonatomic) MPCAVItemTrace *playbackStartTrace; // @synthesize playbackStartTrace=_playbackStartTrace;
@property(nonatomic) unsigned long long stateHandle; // @synthesize stateHandle=_stateHandle;
@property(retain, nonatomic) MPCPlayerItemConfigurator *configurator; // @synthesize configurator=_configurator;
@property(retain, nonatomic) MPCLeaseController *leaseController; // @synthesize leaseController=_leaseController;
@property(retain, nonatomic) id <MFAssetLoading> assetLoader; // @synthesize assetLoader=_assetLoader;
@property(retain, nonatomic) MPCExternalPlaybackController *externalPlaybackController; // @synthesize externalPlaybackController=_externalPlaybackController;
@property(retain, nonatomic) MPCPlaybackErrorController *errorController; // @synthesize errorController=_errorController;
@property(retain, nonatomic) MPCMediaFoundationTranslator *translator; // @synthesize translator=_translator;
@property(retain, nonatomic) MPCItemBookmarker *bookmarker; // @synthesize bookmarker=_bookmarker;
@property(retain, nonatomic) id <MFPlaybackStackController><MFQueueManagement> playbackStackController; // @synthesize playbackStackController=_playbackStackController;
@property(nonatomic) long long jumpIdentifier; // @synthesize jumpIdentifier=_jumpIdentifier;
@property(readonly, nonatomic, getter=isReloadingPlaybackContext) _Bool reloadingPlaybackContext; // @synthesize reloadingPlaybackContext=_reloadingPlaybackContext;
@property(nonatomic) _Bool autoPlayWhenLikelyToKeepUp; // @synthesize autoPlayWhenLikelyToKeepUp=_autoPlayWhenLikelyToKeepUp;
@property(readonly, nonatomic) __weak MPCPlaybackEngine *playbackEngine; // @synthesize playbackEngine=_playbackEngine;
- (void)invalidateEVSDeferralAssertionForFirstAudioFrame;	// IMP=0x00000000000f3c12
- (void)takeEVSDeferralAssertionForFirstAudioFrame;	// IMP=0x00000000000f3b32
- (void)assetLoadingDidStartForItem:(id)arg1;	// IMP=0x00000000000f36e8
- (void)assetLoadingDidCompleteForItem:(id)arg1 error:(id)arg2;	// IMP=0x00000000000f2a5f
- (void)didPerformPlayerOperationWithPlayerIdentifier:(id)arg1 items:(id)arg2 operation:(id)arg3;	// IMP=0x00000000000f28dc
- (void)willPerformPlayerOperationWithPlayerIdentifier:(id)arg1 operation:(id)arg2 reason:(id)arg3;	// IMP=0x00000000000f2799
- (void)stackControllerDidCreateTransitionFrom:(id)arg1 to:(id)arg2 type:(long long)arg3 parameters:(id)arg4;	// IMP=0x00000000000f25b4
- (void)errorResolutionDidEndForItem:(id)arg1 error:(id)arg2 resolution:(long long)arg3;	// IMP=0x00000000000f2448
- (void)errorResolutionDidStartForItem:(id)arg1 error:(id)arg2;	// IMP=0x00000000000f2317
- (void)didReportSignpostWithType:(long long)arg1;	// IMP=0x00000000000f22a3
- (void)relativeVolumeDidChangeTo:(float)arg1 timeStamp:(id)arg2;	// IMP=0x00000000000f20b0
- (void)firstVideoFrameWasRenderedForItem:(id)arg1 timeStamp:(id)arg2;	// IMP=0x00000000000f1ade
- (void)playbackIsBlockedOnNonPlayableItem:(id)arg1;	// IMP=0x00000000000f196b
- (void)mediaServicesInterruptionDidEndWithTimeStamp:(id)arg1;	// IMP=0x00000000000f15f5
- (void)mediaServicesInterruptionDidBeginWithItemAtDeath:(id)arg1 timeAtDeath:(double)arg2 timeStamp:(id)arg3;	// IMP=0x00000000000f10d6
- (void)userActionDidEnd:(id)arg1 error:(id)arg2;	// IMP=0x00000000000f0e3c
- (void)userActionDidBegin:(id)arg1;	// IMP=0x00000000000f09df
- (void)didReachEndOfQueueWithReason:(id)arg1;	// IMP=0x00000000000f0795
- (void)screenRecordingDidChange:(_Bool)arg1 timeStamp:(id)arg2;	// IMP=0x00000000000f0585
- (void)tracksDidChangeForItem:(id)arg1 timeStamp:(id)arg2;	// IMP=0x00000000000f0393
- (void)playbackIsLikelyToKeepUp:(_Bool)arg1 forItem:(id)arg2 timeStamp:(id)arg3;	// IMP=0x00000000000efad7
- (void)playbackBufferStateDidChangeToState:(long long)arg1 forItem:(id)arg2 timeStamp:(id)arg3;	// IMP=0x00000000000ef21b
- (void)interruptionDidFinishForInterruptor:(id)arg1 shouldResume:(_Bool)arg2 timeStamp:(id)arg3;	// IMP=0x00000000000eef47
- (void)interruptionDidBeginWithInterruptor:(id)arg1 timeStamp:(id)arg2;	// IMP=0x00000000000eecec
- (void)stateDidChangeFromState:(long long)arg1 toState:(long long)arg2 timeStamp:(id)arg3;	// IMP=0x00000000000ee7b5
- (void)routeDidChange:(_Bool)arg1 metadata:(id)arg2 timeStamp:(id)arg3;	// IMP=0x00000000000ee2c5
- (void)playbackWaitingToPlayForItem:(id)arg1 reason:(id)arg2 timeStamp:(id)arg3;	// IMP=0x00000000000ee070
- (void)timeControlStatusDidChange:(long long)arg1 waitingReason:(id)arg2 timeStamp:(id)arg3;	// IMP=0x00000000000edd5c
- (void)firstFrameWillRenderForItem:(id)arg1 timeStamp:(id)arg2;	// IMP=0x00000000000ed6fb
- (void)playbackRateDidChangeNotifiedForItem:(id)arg1 newRate:(float)arg2 reason:(id)arg3 participantIdentifier:(id)arg4 timeStamp:(id)arg5;	// IMP=0x00000000000ed01a
- (void)playbackRateDidChangeToRate:(float)arg1 forItem:(id)arg2 timeStamp:(id)arg3;	// IMP=0x00000000000ecdb4
- (void)playbackDidStopForItem:(id)arg1 source:(id)arg2 reason:(id)arg3 timeStamp:(id)arg4;	// IMP=0x00000000000ecae1
- (void)playbackDidStartForItem:(id)arg1 rate:(float)arg2 fromStalling:(_Bool)arg3 timeStamp:(id)arg4;	// IMP=0x00000000000ebcb8
- (double)_adjustPlayerTimeForAudioTapProcessing:(double)arg1;	// IMP=0x00000000000ebb78
- (void)_logPlayerEventsForQueueItem:(id)arg1;	// IMP=0x00000000000eb78c
- (void)_updateActiveFormatForQueueItem:(id)arg1;	// IMP=0x00000000000eb3b9
- (void)itemIsReadyToPlay:(id)arg1 timeStamp:(id)arg2;	// IMP=0x00000000000eae57
- (void)itemDidPlayToEnd:(id)arg1 timeStamp:(id)arg2;	// IMP=0x00000000000eabd2
- (void)itemDidFailToPlayToEnd:(id)arg1 error:(id)arg2 timeStamp:(id)arg3;	// IMP=0x00000000000ea59b
- (void)itemDidFailToLoad:(id)arg1 silently:(_Bool)arg2 error:(id)arg3 timeStamp:(id)arg4;	// IMP=0x00000000000ea304
- (void)userSeekCompletedForItem:(id)arg1 fromTime:(double)arg2 toTime:(double)arg3 timeStamp:(id)arg4;	// IMP=0x00000000000e9fbb
- (void)playbackTimeDidChangeTo:(double)arg1 forItem:(id)arg2 reason:(long long)arg3 timeStamp:(id)arg4;	// IMP=0x00000000000e94e8
- (void)playbackDidReachQueueEndWithTimeStamp:(id)arg1;	// IMP=0x00000000000e935a
- (void)itemTransitionDidEndFrom:(id)arg1 to:(id)arg2 type:(long long)arg3 duration:(double)arg4 timeStamp:(id)arg5;	// IMP=0x00000000000e8e64
- (void)itemTransitionWillBeginFrom:(id)arg1 to:(id)arg2 type:(long long)arg3 duration:(double)arg4 timeStamp:(id)arg5;	// IMP=0x00000000000e8949
- (void)itemDidResignCurrent:(id)arg1 source:(long long)arg2 timeStamp:(id)arg3;	// IMP=0x00000000000e852a
- (void)itemDidBecomeCurrent:(id)arg1 source:(long long)arg2 timeStamp:(id)arg3;	// IMP=0x00000000000e7bfb
- (void)currentItemWillChangeFromItem:(id)arg1 toItem:(id)arg2 source:(long long)arg3 timeStamp:(id)arg4;	// IMP=0x00000000000e765a
- (void)engine:(id)arg1 didChangeQueueWithReason:(id)arg2;	// IMP=0x00000000000e755c
- (void)engine:(id)arg1 didChangeQueueController:(id)arg2;	// IMP=0x00000000000e7131
- (void)engine:(id)arg1 willRemoveQueueController:(id)arg2;	// IMP=0x00000000000e70a1
- (_Bool)_itemConfigurationIsIncompatibleWithVocalAttenuationState:(id)arg1;	// IMP=0x00000000000e704d
- (void)_performSkipForUserAction:(id)arg1;	// IMP=0x00000000000e6de8
- (_Bool)_isAVKitSkipAction:(id)arg1;	// IMP=0x00000000000e6d5d
- (void)_playbackDidStopForItem:(id)arg1 source:(id)arg2 reason:(id)arg3 time:(double)arg4;	// IMP=0x00000000000e6901
- (id)_MPAVItemForMFQueuePlayerItem:(id)arg1;	// IMP=0x00000000000e67e7
- (void)_logTimeJumpForItem:(id)arg1 fromTime:(double)arg2 toTime:(double)arg3 userInitiated:(_Bool)arg4 timeStamp:(id)arg5;	// IMP=0x00000000000e60bc
@property(readonly, nonatomic) NSDictionary *_stateDictionary;
- (void)_setupPlaybackStackWithPlaybackEngine:(id)arg1;	// IMP=0x00000000000e5764
- (void)setRelativeVolume:(float)arg1;	// IMP=0x00000000000e56cf
- (void)jumpToTime:(double)arg1 identifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000e54fc
- (void)setRate:(float)arg1 identifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000e52da
- (void)endScanningWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000e5120
- (void)togglePlaybackWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000e4d24
- (void)pauseForLeasePreventionWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000e4b59
- (void)pauseWithFadeout:(double)arg1 identifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000e4984
- (void)pauseWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000e47b9
- (void)playWithRate:(float)arg1 identifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000e45ee
@property(readonly, nonatomic) _Bool hasPlayedSuccessfully;
@property(readonly, nonatomic) AVPlayerViewController *playerViewController;
@property(readonly, nonatomic) long long stateBeforeInterruption;
@property(readonly, nonatomic) long long state;
@property(readonly, nonatomic) float currentRate;
@property(readonly, nonatomic) double currentTime;
@property(readonly, nonatomic) MPAVItem *currentItem;
- (void)updateAudioSession;	// IMP=0x00000000000e422a
- (void)updateAudioSessionSpeechDetection;	// IMP=0x00000000000e41ad
- (void)deactivateAudioSessionIfIdle:(long long)arg1;	// IMP=0x00000000000e4161
- (void)becomeActiveWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e3fb4
- (void)finalizeStateRestoreWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e3e65
- (void)finalizeSetQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000e3607
- (void)reloadItemsKeepingCurrentItem:(_Bool)arg1 allowReuse:(_Bool)arg2;	// IMP=0x00000000000e35b8
- (void)setupPlaybackStackIfNeeded;	// IMP=0x00000000000e3467
- (void)prewarm;	// IMP=0x00000000000e341c
- (void)dealloc;	// IMP=0x00000000000e33e2
- (id)initWithPlaybackEngine:(id)arg1;	// IMP=0x00000000000e32d4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVObservationController, AVPlayer, AVPlayerInterstitialEventController, AVPlayerInterstitialEventMonitor, AVTimeRange, AVTimeRangeCollection;
@protocol AVInterstitialControllerDelegateManager, NSObject;

__attribute__((visibility("hidden")))
@interface AVInterstitialController : NSObject
{
    id <NSObject> _playerItemTimeJumpedObserver;	// 8 = 0x8
    id <NSObject> _playerInterstitialPlayerDidChangeObserver;	// 16 = 0x10
    id <NSObject> _playerInterstitialEventsChangedObserver;	// 24 = 0x18
    id <NSObject> _playerInterstitialCurrentEventChangedObserver;	// 32 = 0x20
    _Bool _shouldAlwaysSkipInterstitials;	// 40 = 0x28
    AVPlayer *_player;	// 48 = 0x30
    AVPlayer *_interstitialPlayer;	// 56 = 0x38
    id <AVInterstitialControllerDelegateManager> _delegateManager;	// 64 = 0x40
    AVTimeRangeCollection *_interstitialTimeRangeCollection;	// 72 = 0x48
    double _continuationTimeAfterInterstitial;	// 80 = 0x50
    CDUnknownBlockType _didEnterInterstitialTimeRangeBlock;	// 88 = 0x58
    CDUnknownBlockType _didLeaveInterstitialTimeRangeBlock;	// 96 = 0x60
    CDUnknownBlockType _didLeaveRequiredInterstitialTimeRangeBlock;	// 104 = 0x68
    CDUnknownBlockType _skipInterstitialTimeRangeBlock;	// 112 = 0x70
    AVPlayerInterstitialEventMonitor *_eventMonitor;	// 120 = 0x78
    AVPlayerInterstitialEventController *_eventController;	// 128 = 0x80
    AVObservationController *_kvo;	// 136 = 0x88
    AVObservationController *_kvoPlayerItem;	// 144 = 0x90
    AVTimeRange *_interstitialTimeRangeInProgress;	// 152 = 0x98
    id _interstitialBoundaryTimeObserver;	// 160 = 0xa0
}

+ (id)interstitialQueue;	// IMP=0x006000000005c30f
+ (id)newTimeRangeCollectionForPlayerItem:(id)arg1 reversePlaybackEndTime:(CDStruct_1b6d18a9)arg2 forwardPlaybackEndTime:(CDStruct_1b6d18a9)arg3;	// IMP=0x006000000005be49
+ (id)newTimeRangeCollectionForPlayerItem:(id)arg1;	// IMP=0x0060000000120408
- (void).cxx_destruct;	// IMP=0x0000000000059e53
@property(retain, nonatomic) id interstitialBoundaryTimeObserver; // @synthesize interstitialBoundaryTimeObserver=_interstitialBoundaryTimeObserver;
@property(retain, nonatomic) AVTimeRange *interstitialTimeRangeInProgress; // @synthesize interstitialTimeRangeInProgress=_interstitialTimeRangeInProgress;
@property(retain, nonatomic) AVObservationController *kvoPlayerItem; // @synthesize kvoPlayerItem=_kvoPlayerItem;
@property(retain, nonatomic) AVObservationController *kvo; // @synthesize kvo=_kvo;
@property(retain, nonatomic) AVPlayerInterstitialEventController *eventController; // @synthesize eventController=_eventController;
@property(retain, nonatomic) AVPlayerInterstitialEventMonitor *eventMonitor; // @synthesize eventMonitor=_eventMonitor;
@property(nonatomic) _Bool shouldAlwaysSkipInterstitials; // @synthesize shouldAlwaysSkipInterstitials=_shouldAlwaysSkipInterstitials;
@property(copy, nonatomic) CDUnknownBlockType skipInterstitialTimeRangeBlock; // @synthesize skipInterstitialTimeRangeBlock=_skipInterstitialTimeRangeBlock;
@property(copy, nonatomic) CDUnknownBlockType didLeaveRequiredInterstitialTimeRangeBlock; // @synthesize didLeaveRequiredInterstitialTimeRangeBlock=_didLeaveRequiredInterstitialTimeRangeBlock;
@property(copy, nonatomic) CDUnknownBlockType didLeaveInterstitialTimeRangeBlock; // @synthesize didLeaveInterstitialTimeRangeBlock=_didLeaveInterstitialTimeRangeBlock;
@property(copy, nonatomic) CDUnknownBlockType didEnterInterstitialTimeRangeBlock; // @synthesize didEnterInterstitialTimeRangeBlock=_didEnterInterstitialTimeRangeBlock;
@property(readonly, nonatomic) double continuationTimeAfterInterstitial; // @synthesize continuationTimeAfterInterstitial=_continuationTimeAfterInterstitial;
@property(retain, nonatomic) AVTimeRangeCollection *interstitialTimeRangeCollection; // @synthesize interstitialTimeRangeCollection=_interstitialTimeRangeCollection;
@property(nonatomic) __weak id <AVInterstitialControllerDelegateManager> delegateManager; // @synthesize delegateManager=_delegateManager;
@property(retain, nonatomic) AVPlayer *interstitialPlayer; // @synthesize interstitialPlayer=_interstitialPlayer;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
- (double)_pendingTimeBoundary;	// IMP=0x0000000000059c1f
- (void)_setPendingTimeBoundary:(double)arg1;	// IMP=0x0000000000059b7b
- (void)didPresentInterstitialTimeRange:(id)arg1;	// IMP=0x00000000000598fc
- (void)willPresentInterstitialTimeRange:(id)arg1;	// IMP=0x0000000000059721
- (void)skipInterstitialTimeRange:(id)arg1;	// IMP=0x00000000000594ce
- (void)didBeginOrResumePlayback;	// IMP=0x0000000000059470
- (_Bool)_shouldSkipInterstitialTimeRange:(id)arg1;	// IMP=0x00000000000593b2
- (id)nextInterstitialTimeRange;	// IMP=0x0000000000059349
@property(readonly, nonatomic) AVTimeRange *previousInterstitialTimeRange;
@property(readonly, nonatomic) AVTimeRange *currentInterstitialTimeRange;
- (void)_stopObservingInterstitialTimeRanges;	// IMP=0x0000000000059156
- (void)_startObservingInterstitialTimeRanges;	// IMP=0x00000000000590da
- (void)sendPendingInterstitialBoundaryNotificationIfNeeded;	// IMP=0x000000000005906d
- (void)sendInterstitialBoundaryNotificationsForTimeJumpIfNeeded;	// IMP=0x000000000005903f
- (void)_sendInterstitialBoundaryNotificationsForTime:(double)arg1;	// IMP=0x0000000000058f95
- (void)_sendInterstitialBoundaryNotificationsForEvent:(id)arg1;	// IMP=0x0000000000058f49
- (void)_sendInterstitialBoundaryNotificationForInterstitialTimeRange:(id)arg1;	// IMP=0x0000000000058df4
- (double)timeToSeekAfterUserNavigatedFromTime:(double)arg1 toTime:(double)arg2;	// IMP=0x0000000000058a53
@property(readonly, nonatomic) _Bool requiresLinearPlayback;
@property(readonly, nonatomic) _Bool shouldEnforceInterstitialPolicy;
- (void)_updateInterstitialTimeRangeCollection;	// IMP=0x000000000005859d
- (void)cancelCurrentPlayerInterstitialEvent;	// IMP=0x000000000005848d
@property(readonly, nonatomic) double timeRemainingInCurrentInterstitial;
- (double)elapsedTimeWithinCurrentInterstitial;	// IMP=0x00000000000582b7
- (double)elapsedTimeForInterstitialPlayer;	// IMP=0x00000000000581b4
- (_Bool)isLive;	// IMP=0x000000000005810a
- (id)currentOrEstimatedDate;	// IMP=0x0000000000058062
@property(readonly, nonatomic) double currentDisplayTime;
- (double)currentTime;	// IMP=0x0000000000057efe
- (id)currentItem;	// IMP=0x0000000000057eae
- (double)displayTimeFromTime:(double)arg1;	// IMP=0x0000000000057e57
- (double)timeFromDisplayTime:(double)arg1;	// IMP=0x0000000000057e00
- (void)_performInterstitialPlayerDependentUpdates;	// IMP=0x0000000000057ba4
- (void)invalidate;	// IMP=0x00000000000579bb
- (void)dealloc;	// IMP=0x000000000005797d
- (void)setupInterstitialObservers;	// IMP=0x00000000000576cd
- (id)init;	// IMP=0x00000000000573db
- (_Bool)loadDurationOfCurrentOrNextInterstitialEvent:(CDUnknownBlockType)arg1;	// IMP=0x000000000005b50c
- (id)timeRangeForPlayerInterstitialEvent:(id)arg1;	// IMP=0x000000000005b2c1
- (id)interstitialTimeRangeForPlayerInterstitialEvent:(id)arg1;	// IMP=0x000000000005b0b8
- (void)updateSynthesizedInterstitialTimeRanges;	// IMP=0x000000000005af5d
- (id)_copySynthesizedInterstitialTimeRanges;	// IMP=0x000000000005ab62

@end

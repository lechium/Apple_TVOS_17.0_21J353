//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, VUITransitionalPlaybackUIManager;
@protocol TVPAVFPlayback, VUINowPlayingFeature, VUINowPlayingFeatureMonitorDelegate;

__attribute__((visibility("hidden")))
@interface VUINowPlayingFeatureMonitor : NSObject
{
    struct {
        _Bool respondsToFeatureDidChangeState;
        _Bool respondsToActiveFeatureChangedFrom;
    } _delegateFlags;	// 8 = 0x8
    _Bool _observingElapsedTime;	// 10 = 0xa
    id <VUINowPlayingFeatureMonitorDelegate> _delegate;	// 16 = 0x10
    NSObject<TVPAVFPlayback> *_player;	// 24 = 0x18
    VUITransitionalPlaybackUIManager *_playbackManager;	// 32 = 0x20
    NSMutableSet *_features;	// 40 = 0x28
    NSMapTable *_featureDependencies;	// 48 = 0x30
    NSMapTable *_featureTokens;	// 56 = 0x38
    NSMapTable *_featureBoundaryInfos;	// 64 = 0x40
    NSMapTable *_featureTimers;	// 72 = 0x48
    id <VUINowPlayingFeature> _featureLastRequestedUI;	// 80 = 0x50
    NSMutableArray *_enabledUIModes;	// 88 = 0x58
    double _lastProcessedElapsedTime;	// 96 = 0x60
    NSMutableDictionary *_boundaryTimeObserverInfos;	// 104 = 0x68
    id _elapsedTimeObserverToken;	// 112 = 0x70
    NSMutableArray *_elapsedTimes;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x000000000006ac00
@property(retain, nonatomic) NSMutableArray *elapsedTimes; // @synthesize elapsedTimes=_elapsedTimes;
@property(retain, nonatomic) id elapsedTimeObserverToken; // @synthesize elapsedTimeObserverToken=_elapsedTimeObserverToken;
@property(retain, nonatomic) NSMutableDictionary *boundaryTimeObserverInfos; // @synthesize boundaryTimeObserverInfos=_boundaryTimeObserverInfos;
@property(nonatomic) double lastProcessedElapsedTime; // @synthesize lastProcessedElapsedTime=_lastProcessedElapsedTime;
@property(nonatomic) _Bool observingElapsedTime; // @synthesize observingElapsedTime=_observingElapsedTime;
@property(retain, nonatomic) NSMutableArray *enabledUIModes; // @synthesize enabledUIModes=_enabledUIModes;
@property(retain, nonatomic) id <VUINowPlayingFeature> featureLastRequestedUI; // @synthesize featureLastRequestedUI=_featureLastRequestedUI;
@property(retain, nonatomic) NSMapTable *featureTimers; // @synthesize featureTimers=_featureTimers;
@property(retain, nonatomic) NSMapTable *featureBoundaryInfos; // @synthesize featureBoundaryInfos=_featureBoundaryInfos;
@property(retain, nonatomic) NSMapTable *featureTokens; // @synthesize featureTokens=_featureTokens;
@property(retain, nonatomic) NSMapTable *featureDependencies; // @synthesize featureDependencies=_featureDependencies;
@property(retain, nonatomic) NSMutableSet *features; // @synthesize features=_features;
@property(retain, nonatomic) VUITransitionalPlaybackUIManager *playbackManager; // @synthesize playbackManager=_playbackManager;
@property(retain, nonatomic) NSObject<TVPAVFPlayback> *player; // @synthesize player=_player;
@property(nonatomic) __weak id <VUINowPlayingFeatureMonitorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_cleanUpEverything;	// IMP=0x000000000006a8ab
- (void)_applicationWillEnterForeground:(id)arg1;	// IMP=0x000000000006a899
- (void)_applicationDidEnterBackground:(id)arg1;	// IMP=0x000000000006a887
- (void)_expireTimerFeaturesIfNeeded;	// IMP=0x000000000006a082
- (void)_setupTimerFeatureExpiration;	// IMP=0x0000000000069d2a
- (_Bool)_isTimerFeatureExpired:(id)arg1;	// IMP=0x0000000000069aa9
- (void)_cancelTimerForFeature:(id)arg1;	// IMP=0x00000000000699b3
- (void)_processTimerTriggeredFeature:(id)arg1;	// IMP=0x0000000000069522
- (_Bool)_needsUIForFeature:(id)arg1;	// IMP=0x00000000000694c1
- (void)_processUserTriggeredFeature:(id)arg1 activate:(_Bool)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000069334
- (void)_removeAllObservedTokensForFeature:(id)arg1;	// IMP=0x00000000000690bc
- (void)_addObservedToken:(id)arg1 forFeature:(id)arg2;	// IMP=0x0000000000068eea
- (void)_removeTimeObservingForFeature:(id)arg1 withStartTime:(double)arg2;	// IMP=0x0000000000068c0e
- (void)_updateBoundaryObserverForFeature:(id)arg1 change:(id)arg2;	// IMP=0x0000000000068adf
- (void)_addTimeObservingForFeature:(id)arg1 withStartTime:(double)arg2 andHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000006896c
- (id)_observerInfoForFeature:(id)arg1 matchingTime:(double)arg2;	// IMP=0x00000000000686e5
- (void)_processAnyTimeBoundFeatures;	// IMP=0x000000000006856d
- (void)_scheduleDeactivationOfTimeBoundFeature:(id)arg1;	// IMP=0x00000000000681a7
- (_Bool)_shouldActivateTimeBoundFeatureInitially:(id)arg1;	// IMP=0x0000000000068126
- (void)_processTimeBoundFeature:(id)arg1;	// IMP=0x0000000000067b9a
- (void)_processLastElapsedTime;	// IMP=0x0000000000067473
- (void)_processElapsedTime:(double)arg1;	// IMP=0x0000000000067367
- (void)_startObservingElapsedTime;	// IMP=0x0000000000067168
- (_Bool)_isElapsedTimeWithinFeatureTimeWindow:(id)arg1;	// IMP=0x0000000000066e93
- (void)_unregisterPlaybackStateNotification;	// IMP=0x0000000000066e05
- (void)_registerPlaybackStateChangeNotification;	// IMP=0x0000000000066d70
- (void)_deactivateFeature:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000066ae8
- (void)_activateFeature:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000668a9
- (_Bool)_shouldAnimateFeature:(id)arg1;	// IMP=0x000000000006680e
- (_Bool)_isTimerTriggeredFeature:(id)arg1;	// IMP=0x00000000000667ac
- (_Bool)_isTVAdvisoryFeature:(id)arg1;	// IMP=0x0000000000066790
- (_Bool)_isHybridFeature:(id)arg1;	// IMP=0x0000000000066774
- (_Bool)_isUserTriggeredFeature:(id)arg1;	// IMP=0x0000000000066758
- (_Bool)_isTimeBoundFeature:(id)arg1;	// IMP=0x000000000006673c
- (void)_processFeature:(id)arg1;	// IMP=0x0000000000066678
- (_Bool)_hasActiveFeaturesInArray:(id)arg1;	// IMP=0x00000000000665e9
- (_Bool)_hasAnyActiveFeature;	// IMP=0x00000000000665a1
- (id)_activeFeature;	// IMP=0x00000000000664be
- (id)_timeBoundFeatures;	// IMP=0x000000000006644b
- (id)_activeFeatures;	// IMP=0x000000000006639d
- (void)_playbackStateChangedNottificaiton:(id)arg1;	// IMP=0x00000000000662cb
- (_Bool)mediaPlaybackManager:(id)arg1 shouldEnableUIModeImplicitly:(long long)arg2;	// IMP=0x0000000000066250
- (void)mediaPlaybackManager:(id)arg1 shouldHideUI:(_Bool)arg2 animated:(_Bool)arg3 animations:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000066045
- (void)deactivateFeature:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000065f7e
- (void)enableUIMode:(long long)arg1 enabled:(_Bool)arg2;	// IMP=0x0000000000065e23
- (void)removeFeaturesMatching:(id)arg1;	// IMP=0x0000000000065b44
- (void)_cleanupFeature:(id)arg1;	// IMP=0x000000000006592d
- (void)removeFeature:(id)arg1;	// IMP=0x0000000000065761
- (id)activeFeatureForType:(unsigned long long)arg1;	// IMP=0x0000000000065627
- (id)featuresForType:(unsigned long long)arg1;	// IMP=0x0000000000065512
- (void)addFeature:(id)arg1 withDependencyToPreferredFeatures:(id)arg2;	// IMP=0x0000000000065365
- (void)addFeature:(id)arg1;	// IMP=0x0000000000065222
@property(readonly, nonatomic) NSArray *allFeatures;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000065182
- (void)dealloc;	// IMP=0x0000000000064ff4
- (id)init;	// IMP=0x0000000000064e56

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


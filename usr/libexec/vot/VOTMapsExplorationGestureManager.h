//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;
@protocol VOTMapsExplorationGestureManagerDelegate;

@interface VOTMapsExplorationGestureManager
{
    NSArray *_explorationSegments;	// 8 = 0x8
    long long _currentIndex;	// 16 = 0x10
    long long _selectionIndex;	// 24 = 0x18
    double _movedAngle;	// 32 = 0x20
    double _lastAngle;	// 40 = 0x28
    _Bool _recentlyMoved;	// 48 = 0x30
    struct CGPoint _currentLocation;	// 56 = 0x38
    struct CGPoint _currentCenter;	// 72 = 0x48
    id <VOTMapsExplorationGestureManagerDelegate> _mapsExplorationGestureManagerDelegate;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x002000000005a2ef
@property(nonatomic) __weak id <VOTMapsExplorationGestureManagerDelegate> mapsExplorationGestureManagerDelegate; // @synthesize mapsExplorationGestureManagerDelegate=_mapsExplorationGestureManagerDelegate;
- (_Bool)isWordBackspaceEvent:(id)arg1;	// IMP=0x001000000005a2ba
- (_Bool)isSpaceEvent:(id)arg1;	// IMP=0x001000000005a2b2
- (_Bool)isReturnKeyEvent:(id)arg1;	// IMP=0x001000000005a2aa
- (_Bool)isPreviousSuggestionEvent:(id)arg1;	// IMP=0x001000000005a2a2
- (_Bool)isNextSuggestionEvent:(id)arg1;	// IMP=0x001000000005a29a
- (_Bool)isNextBrailleTableEvent:(id)arg1;	// IMP=0x001000000005a292
- (_Bool)isNextKeyboardLanguageEvent:(id)arg1;	// IMP=0x001000000005a28a
- (_Bool)isLaunchAppEvent:(id)arg1;	// IMP=0x001000000005a282
- (_Bool)isBackspaceEvent:(id)arg1;	// IMP=0x001000000005a27a
- (void)applyPreviousSuggestionToElement:(id)arg1;	// IMP=0x001000000005a274
- (void)applyNextSuggestionToElement:(id)arg1;	// IMP=0x001000000005a26e
- (_Bool)processTouchLocations:(id)arg1 isFirstTouch:(_Bool)arg2;	// IMP=0x001000000005a266
- (_Bool)processTapWithFingerCount:(unsigned long long)arg1;	// IMP=0x001000000005a25e
- (void)_playSound:(id)arg1;	// IMP=0x001000000005a1f1
- (void)_speakText:(id)arg1 doesNotInterrupt:(_Bool)arg2 cannotBeInterrupted:(_Bool)arg3;	// IMP=0x001000000005a158
- (long long)indexForPoint:(struct CGPoint)arg1;	// IMP=0x0010000000059e6b
- (void)processTouch:(struct CGPoint)arg1;	// IMP=0x0010000000059d07
- (id)explorationSegmentsForRoadsWithAngles:(id)arg1;	// IMP=0x0010000000059959
- (_Bool)processEvent:(id)arg1;	// IMP=0x0010000000059745
- (_Bool)handleVerbosityChangeIncreasing:(_Bool)arg1;	// IMP=0x00100000000596c3
- (_Bool)handleSelection;	// IMP=0x0010000000059493
- (_Bool)handleTracking:(struct CGPoint)arg1;	// IMP=0x00100000000592c4
- (void)setActive:(_Bool)arg1;	// IMP=0x001000000005911c
- (void)endExploration;	// IMP=0x00100000000590df
- (void)beginExploration;	// IMP=0x0010000000059059
- (_Bool)explorationIsPending;	// IMP=0x0010000000059015
- (_Bool)explorationIsActive;	// IMP=0x0010000000058fd1
- (id)currentIntersectionInformation;	// IMP=0x0010000000058f81
- (void)updateCurrentLocation;	// IMP=0x0010000000058f25
- (void)updateExplorationSegments;	// IMP=0x0010000000058df9
- (id)currentMap;	// IMP=0x0010000000058cc8
- (id)init;	// IMP=0x0010000000058bac

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PBMediaRemoteObserver, PBSystemGestureHandle;
@protocol OS_dispatch_source;

@interface PBMediaRemoteCommandCenter : NSObject
{
    CDUnknownBlockType _commandFilter;	// 8 = 0x8
    CDUnknownBlockType _unhandledCommandHandler;	// 16 = 0x10
    CDUnknownBlockType _commandPerformer;	// 24 = 0x18
    PBMediaRemoteObserver *_mediaRemoteObserver;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_updateNowPlayingGestureSource;	// 40 = 0x28
    PBSystemGestureHandle *_playGestureHandle;	// 48 = 0x30
    PBSystemGestureHandle *_pauseGestureHandle;	// 56 = 0x38
    PBSystemGestureHandle *_stopGestureHandle;	// 64 = 0x40
    PBSystemGestureHandle *_rewindTapGestureHandle;	// 72 = 0x48
    PBSystemGestureHandle *_fastForwardTapGestureHandle;	// 80 = 0x50
    PBSystemGestureHandle *_rewindLongPressGestureHandle;	// 88 = 0x58
    PBSystemGestureHandle *_fastForwardLongPressGestureHandle;	// 96 = 0x60
    PBSystemGestureHandle *_previousTrackGestureHandle;	// 104 = 0x68
    PBSystemGestureHandle *_nextTrackGestureHandle;	// 112 = 0x70
    PBSystemGestureHandle *_skipBackwardsGestureHandle;	// 120 = 0x78
    PBSystemGestureHandle *_skipForwardsGestureHandle;	// 128 = 0x80
    PBSystemGestureHandle *_pauseNowPlayingGestureHandle;	// 136 = 0x88
}

+ (id)defaultCenter;	// IMP=0x00400000000db828
- (void).cxx_destruct;	// IMP=0x00100000000dd049
@property(readonly, nonatomic) PBSystemGestureHandle *pauseNowPlayingGestureHandle; // @synthesize pauseNowPlayingGestureHandle=_pauseNowPlayingGestureHandle;
@property(readonly, nonatomic) PBSystemGestureHandle *skipForwardsGestureHandle; // @synthesize skipForwardsGestureHandle=_skipForwardsGestureHandle;
// Error: Property attributes should begin with the type ('T') attribute, property name: skipBackwardsGestureHandle
// Property attributes: (null)

@property(readonly, nonatomic) PBSystemGestureHandle *nextTrackGestureHandle; // @synthesize nextTrackGestureHandle=_nextTrackGestureHandle;
@property(readonly, nonatomic) PBSystemGestureHandle *previousTrackGestureHandle; // @synthesize previousTrackGestureHandle=_previousTrackGestureHandle;
@property(readonly, nonatomic) PBSystemGestureHandle *fastForwardLongPressGestureHandle; // @synthesize fastForwardLongPressGestureHandle=_fastForwardLongPressGestureHandle;
@property(readonly, nonatomic) PBSystemGestureHandle *rewindLongPressGestureHandle; // @synthesize rewindLongPressGestureHandle=_rewindLongPressGestureHandle;
@property(readonly, nonatomic) PBSystemGestureHandle *fastForwardTapGestureHandle; // @synthesize fastForwardTapGestureHandle=_fastForwardTapGestureHandle;
@property(readonly, nonatomic) PBSystemGestureHandle *rewindTapGestureHandle; // @synthesize rewindTapGestureHandle=_rewindTapGestureHandle;
@property(readonly, nonatomic) PBSystemGestureHandle *stopGestureHandle; // @synthesize stopGestureHandle=_stopGestureHandle;
@property(readonly, nonatomic) PBSystemGestureHandle *pauseGestureHandle; // @synthesize pauseGestureHandle=_pauseGestureHandle;
@property(readonly, nonatomic) PBSystemGestureHandle *playGestureHandle; // @synthesize playGestureHandle=_playGestureHandle;
@property(readonly, nonatomic) NSObject<OS_dispatch_source> *updateNowPlayingGestureSource; // @synthesize updateNowPlayingGestureSource=_updateNowPlayingGestureSource;
@property(copy, nonatomic) CDUnknownBlockType unhandledCommandHandler; // @synthesize unhandledCommandHandler=_unhandledCommandHandler;
@property(copy, nonatomic) CDUnknownBlockType commandFilter; // @synthesize commandFilter=_commandFilter;
- (void)pictureInPictureManager:(id)arg1 didUpdateState:(id)arg2;	// IMP=0x00100000000dcf7a
- (void)_updateNowPlayingGestureState;	// IMP=0x00100000000dcb0e
- (void)_setNeedsNowPlayingGestureStateUpdate;	// IMP=0x00100000000dcafa
- (void)_stopSystemObservations;	// IMP=0x00100000000dca27
- (void)_beginSystemObservations;	// IMP=0x00100000000dc7d0
- (void)_skipForwardsWithInterval:(double)arg1;	// IMP=0x00100000000dc702
- (void)_skipBackwardsWithInterval:(double)arg1;	// IMP=0x00100000000dc634
- (void)_changePlaybackRateWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000dc116
- (void)_sendMediaRemoteCommand:(unsigned int)arg1 withOptions:(id)arg2;	// IMP=0x00100000000dc06d
- (void)_attemptToSendMediaRemoteCommand:(unsigned int)arg1 withSender:(CDUnknownBlockType)arg2;	// IMP=0x00100000000dbc53
- (_Bool)_shouldSendMediaRemoteCommand:(unsigned int)arg1 rejectionReason:(out id *)arg2;	// IMP=0x00100000000dbba3
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00100000000dbb59
- (void)dealloc;	// IMP=0x00100000000dba87
- (id)init;	// IMP=0x00100000000dba26
- (id)initWithMediaRemoteObserver:(id)arg1 commandPerformer:(CDUnknownBlockType)arg2;	// IMP=0x00100000000db901
- (void)endSeekingForwardsWithReason:(id)arg1;	// IMP=0x00100000000de22a
- (void)beginSeekingForwardsWithReason:(id)arg1;	// IMP=0x00100000000de116
- (void)endSeekingBackwardsWithReason:(id)arg1;	// IMP=0x00100000000de002
- (void)beginSeekingBackwardsWithReason:(id)arg1;	// IMP=0x00100000000ddeee
- (void)skipForwardsWithReason:(id)arg1;	// IMP=0x00100000000dddba
- (void)skipBackwardsWithReason:(id)arg1;	// IMP=0x00100000000ddc86
- (void)increasePlaybackRateWithReason:(id)arg1;	// IMP=0x00100000000dd982
- (void)decreasePlaybackRateWithReason:(id)arg1;	// IMP=0x00100000000dd67e
- (void)nextTrackWithReason:(id)arg1;	// IMP=0x00100000000dd56a
- (void)previousTrackWithReason:(id)arg1;	// IMP=0x00100000000dd456
- (void)stopWithReason:(id)arg1;	// IMP=0x00100000000dd342
- (void)pauseWithReason:(id)arg1;	// IMP=0x00100000000dd22e
- (void)playWithReason:(id)arg1;	// IMP=0x00100000000dd11d
- (void)_enableSystemGestures;	// IMP=0x00100000000de33e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRDNowPlayingServer, NSMutableArray, NSMutableDictionary;
@protocol MRDNowPlayingStateObserverDelegate, OS_dispatch_queue;

@interface MRDNowPlayingStateObserver : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableArray *_observedNowPlayingNotifications;	// 16 = 0x10
    id _observedVolumeControlNotificationToken;	// 24 = 0x18
    unsigned int _registeredForNowPlayingCount;	// 32 = 0x20
    unsigned int _registeredForVolumeAvailabilityCount;	// 36 = 0x24
    _Bool _wantsCoalescedStateChanged;	// 40 = 0x28
    id <MRDNowPlayingStateObserverDelegate> _delegate;	// 48 = 0x30
    NSMutableDictionary *_coalescingStates;	// 56 = 0x38
    MRDNowPlayingServer *_npServer;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0020000000093c03
@property(readonly, nonatomic) MRDNowPlayingServer *npServer; // @synthesize npServer=_npServer;
@property(retain, nonatomic) NSMutableDictionary *coalescingStates; // @synthesize coalescingStates=_coalescingStates;
@property(readonly, nonatomic) _Bool wantsCoalescedStateChanged; // @synthesize wantsCoalescedStateChanged=_wantsCoalescedStateChanged;
@property(nonatomic) __weak id <MRDNowPlayingStateObserverDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_onQueue_notifyCoalescedPlayerPath:(id)arg1;	// IMP=0x00100000000939a4
- (id)_onQueue_stateForPlayerPath:(id)arg1;	// IMP=0x001000000009374b
- (void)_removeNowPlayingNotifications;	// IMP=0x00100000000935c8
- (void)_addNowPlayingNotification:(id)arg1 selector:(SEL)arg2;	// IMP=0x0010000000093523
- (void)_onQueue_setReceiveVolumeControlUpdates:(_Bool)arg1;	// IMP=0x00100000000932a9
- (void)_onQueue_setReceiveNowPlayingUpdates:(_Bool)arg1;	// IMP=0x001000000009304c
- (void)_setReceiveUpdates:(_Bool)arg1 forSource:(long long)arg2;	// IMP=0x0010000000092fbe
- (void)_handleRemovePlayer:(id)arg1;	// IMP=0x0010000000092e29
- (void)_handlePlayerStateChanged:(id)arg1;	// IMP=0x0010000000092c6d
- (void)_handleContentItemArtworkChanged:(id)arg1;	// IMP=0x0010000000092a71
- (void)_handleContentItemsChanged:(id)arg1;	// IMP=0x0010000000092875
- (void)_handlePlaybackQueueCapabilitiesChanged:(id)arg1;	// IMP=0x001000000009268c
- (void)_handlePlaybackQueueChanged:(id)arg1;	// IMP=0x0010000000092495
- (void)_handleNowPlayingPlaybackStateChanged:(id)arg1;	// IMP=0x0010000000092229
- (void)_handleSupportedCommandsDidChange:(id)arg1;	// IMP=0x0010000000092032
- (void)_handleDefaultSupportedCommandsChanged:(id)arg1;	// IMP=0x0010000000091e5f
- (void)_handleVolumeAvailabilityDidChangeNotification:(id)arg1;	// IMP=0x0010000000091ce5
- (void)_handleRemoveClient:(id)arg1;	// IMP=0x0010000000091c2e
- (void)_handleApplicationClientStateChanged:(id)arg1;	// IMP=0x0010000000091a7f
- (void)_handleNowPlayingPlayerDidChange:(id)arg1;	// IMP=0x00100000000919c8
- (void)_handleNowPlayingClientDidChange:(id)arg1;	// IMP=0x0010000000091911
- (_Bool)_shouldNotifyChange:(id)arg1;	// IMP=0x0010000000091909
- (void)stopReceivingUpdatesForSource:(long long)arg1;	// IMP=0x00100000000918f2
- (void)beginReceivingUpdatesForSource:(long long)arg1;	// IMP=0x00100000000918d8
- (id)debugDescription;	// IMP=0x0010000000091724
- (void)dealloc;	// IMP=0x00100000000916c4
- (id)init;	// IMP=0x00100000000915b4

@end

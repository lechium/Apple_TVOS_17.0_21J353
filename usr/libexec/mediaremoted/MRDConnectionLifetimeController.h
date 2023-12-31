//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MSVTimer, NSDate;
@protocol MRDConnectionLifetimeControllerDataSource, MRDConnectionLifetimeControllerDelegate, OS_dispatch_queue;

@interface MRDConnectionLifetimeController : NSObject
{
    id <MRDConnectionLifetimeControllerDataSource> _dataSource;	// 8 = 0x8
    id <MRDConnectionLifetimeControllerDelegate> _delegate;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    MSVTimer *_playbackTimer;	// 32 = 0x20
    MSVTimer *_disconnectTimer;	// 40 = 0x28
    unsigned long long _deviceState;	// 48 = 0x30
    double _disconnectInterval;	// 56 = 0x38
    double _recentlyPlayingInterval;	// 64 = 0x40
    NSDate *_pendingDisconnectDate;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x002000000009bf3e
@property(retain, nonatomic) NSDate *pendingDisconnectDate; // @synthesize pendingDisconnectDate=_pendingDisconnectDate;
@property(readonly, nonatomic) double recentlyPlayingInterval; // @synthesize recentlyPlayingInterval=_recentlyPlayingInterval;
@property(readonly, nonatomic) double disconnectInterval; // @synthesize disconnectInterval=_disconnectInterval;
@property(nonatomic) unsigned long long deviceState; // @synthesize deviceState=_deviceState;
@property(retain, nonatomic) MSVTimer *disconnectTimer; // @synthesize disconnectTimer=_disconnectTimer;
@property(retain, nonatomic) MSVTimer *playbackTimer; // @synthesize playbackTimer=_playbackTimer;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <MRDConnectionLifetimeControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <MRDConnectionLifetimeControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (_Bool)containsLocalDevice;	// IMP=0x001000000009bd64
- (_Bool)hasPlayedRecently;	// IMP=0x001000000009bd22
- (double)timeSincePlaying;	// IMP=0x001000000009bc46
- (_Bool)isPlaying;	// IMP=0x001000000009bb6e
- (_Bool)isMemberOfActiveSystemEndpoint;	// IMP=0x001000000009b702
- (id)activeSystemEndpointUID;	// IMP=0x001000000009b658
- (void)_handleActiveSystemEndpointChangedNotification:(id)arg1;	// IMP=0x001000000009b4f0
- (void)_handleLayoutDidChangeNotification:(id)arg1;	// IMP=0x001000000009b2c7
- (void)_adjustPlaybackTimerIfNeeded;	// IMP=0x001000000009b002
- (void)_handleIsPlayingDidChangeNotification:(id)arg1;	// IMP=0x001000000009ae0d
- (void)_handleDeviceInfoDidChangeNotification:(id)arg1;	// IMP=0x001000000009ac3b
- (void)_onQueue_evaluateShouldDisconnectWithReason:(id)arg1;	// IMP=0x001000000009a26b
- (void)unregisterForChanges;	// IMP=0x001000000009a211
- (void);	// IMP=0x001000000009a0a3
- (void)dealloc;	// IMP=0x0010000000099fe2
- (void)_initialize;	// IMP=0x0010000000099dc1
- (id)initWithDataSource:(id)arg1 delegate:(id)arg2;	// IMP=0x0010000000099b99

@end


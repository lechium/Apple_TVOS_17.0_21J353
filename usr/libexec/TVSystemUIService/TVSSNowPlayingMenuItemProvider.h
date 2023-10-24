//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, TVSSAudioNowPlayingController, TVSSNowPlayingLingeringController, TVSSSystemOutputDeviceRouteController, TVSSWaveformVisualContent;

@interface TVSSNowPlayingMenuItemProvider
{
    unsigned long long _mode;	// 8 = 0x8
    TVSSNowPlayingLingeringController *_lingeringController;	// 16 = 0x10
    TVSSAudioNowPlayingController *_audioNowPlayingController;	// 24 = 0x18
    TVSSSystemOutputDeviceRouteController *_outputDeviceRouteController;	// 32 = 0x20
    TVSSWaveformVisualContent *_waveformVisualContent;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000031900
@property(retain, nonatomic) TVSSWaveformVisualContent *waveformVisualContent; // @synthesize waveformVisualContent=_waveformVisualContent;
@property(retain, nonatomic) TVSSSystemOutputDeviceRouteController *outputDeviceRouteController; // @synthesize outputDeviceRouteController=_outputDeviceRouteController;
@property(retain, nonatomic) TVSSAudioNowPlayingController *audioNowPlayingController; // @synthesize audioNowPlayingController=_audioNowPlayingController;
@property(retain, nonatomic) TVSSNowPlayingLingeringController *lingeringController; // @synthesize lingeringController=_lingeringController;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
- (void)_updateLingeringControllerActiveState;	// IMP=0x0010000000031720
- (id)_currentVisualContent;	// IMP=0x0010000000030c00
- (void)systemOutputDeviceRouteControllerDidChangeOutputDevices:(id)arg1;	// IMP=0x0010000000030b80
- (void)systemOutputDeviceRouteControllerDidUpdate:(id)arg1;	// IMP=0x0010000000030b00
- (void)nowPlayingState:(id)arg1 playbackStateDidChange:(long long)arg2;	// IMP=0x0010000000030a30
- (_Bool)updateVisualContentForMenuItem:(id)arg1;	// IMP=0x00100000000309a0
- (id)log;	// IMP=0x0010000000030980
- (id)newMenuItem;	// IMP=0x00100000000307a0
- (_Bool)shouldShowMenuItem;	// IMP=0x0010000000030740
- (void)dealloc;	// IMP=0x0010000000030600
- (id)initWithAudioNowPlayingController:(id)arg1 outputDeviceRouteController:(id)arg2 initialMode:(unsigned long long)arg3;	// IMP=0x001000000002fb90

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


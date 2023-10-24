//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, TVSSAudioNowPlayingController, TVSSNowPlayingMenuItemProvider;

@interface TVSSPassiveNowPlayingMenuItemProvider
{
    TVSSNowPlayingMenuItemProvider *_nowPlayingProvider;	// 8 = 0x8
    TVSSAudioNowPlayingController *_audioNowPlayingController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000049790
@property(retain, nonatomic) TVSSAudioNowPlayingController *audioNowPlayingController; // @synthesize audioNowPlayingController=_audioNowPlayingController;
@property(retain, nonatomic) TVSSNowPlayingMenuItemProvider *nowPlayingProvider; // @synthesize nowPlayingProvider=_nowPlayingProvider;
- (void)_updatePassiveItem;	// IMP=0x00100000000495c0
- (void)nowPlayingState:(id)arg1 playbackStateDidChange:(long long)arg2;	// IMP=0x0010000000049560
- (void)providerItemsDidChange:(id)arg1;	// IMP=0x0010000000049510
- (void)dealloc;	// IMP=0x0010000000049470
- (id)initWithNowPlayingProvider:(id)arg1 audioNowPlayingController:(id)arg2;	// IMP=0x0010000000049300

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

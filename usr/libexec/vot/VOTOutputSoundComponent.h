//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, SCRCThread;

@interface VOTOutputSoundComponent
{
    NSMutableDictionary *_cachedSounds;	// 24 = 0x18
    float _volume;	// 32 = 0x20
    SCRCThread *_soundThread;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000002b71b
- (void)sound:(id)arg1 didFinishPlaying:(_Bool)arg2;	// IMP=0x001000000002b5c8
- (void)_playSoundFast:(id)arg1 startedBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000002ae76
- (void)playSoundFast:(id)arg1 startedBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000002adb3
- (void)playSoundFast:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000002ad9c
- (double)outputMutedActivityLastToggleTime;	// IMP=0x001000000002ad80
- (id)outputMutedActivityValue:(id)arg1;	// IMP=0x001000000002ad6b
- (void)setVolume:(float)arg1;	// IMP=0x001000000002ad59
- (void)_handlePerformAction:(id)arg1;	// IMP=0x001000000002ac7f
- (id)soundThread;	// IMP=0x001000000002ac6a
- (id)_findSound:(id)arg1;	// IMP=0x001000000002aa8c
- (void)handleEvent:(id)arg1;	// IMP=0x001000000002a9f1
- (void)_handleSoundThreadMediaSessionDied;	// IMP=0x001000000002a8b7
- (void)_mediaSessionDied:(id)arg1;	// IMP=0x001000000002a884
- (void)_initializeThread;	// IMP=0x001000000002a82f
- (id)init;	// IMP=0x001000000002a6c3

@end


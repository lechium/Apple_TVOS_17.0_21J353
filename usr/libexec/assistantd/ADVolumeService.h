//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFClientConfiguration, AFInstanceContext, CSSpeechController, NSMutableDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface ADVolumeService : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    AFInstanceContext *_instanceContext;	// 16 = 0x10
    CSSpeechController *_speechController;	// 24 = 0x18
    AFClientConfiguration *_clientConfiguration;	// 32 = 0x20
    _Bool _isSmartSiriVolumeAvailable;	// 40 = 0x28
    NSMutableDictionary *_volumesByCategory;	// 48 = 0x30
    float _smartSiriVolume;	// 56 = 0x38
    _Bool _needsUpdateSiriVolume;	// 60 = 0x3c
    unsigned long long _lastSiriVolumeUpdateTimestamp;	// 64 = 0x40
    NSMutableSet *_pendingBlocks;	// 72 = 0x48
    float _deviceSetupFlowSiriVolume;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00200000002ec9c3
- (float)_mediaPlaybackVolume;	// IMP=0x00100000002ec95c
- (void)_updateSiriVolume:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002ec245
- (void)_updateSiriVolumeIfNeeded;	// IMP=0x00100000002ec190
- (void)_setNeedsUpdateSiriVolume;	// IMP=0x00100000002ec0a2
- (void)_fetchSmartSiriVolumeForType:(unsigned long long)arg1;	// IMP=0x00100000002ebed9
- (void)_handleSystemVolumeChangeForCategory:(id)arg1 volume:(float)arg2 audioCategory:(id)arg3 reason:(id)arg4;	// IMP=0x00100000002ebc68
- (void)systemVolumeChanged:(id)arg1;	// IMP=0x00100000002ebb5e
- (void)_fetchSystemVolumes;	// IMP=0x00100000002ebad9
- (void)_stopObservingSystemVolumes;	// IMP=0x00100000002ebad3
- (void)_startObservingSystemVolumes;	// IMP=0x00100000002ebac1
- (void)_stopObservingSystemControllerLifecycle;	// IMP=0x00100000002ebabb
- (void)_startObservingSystemControllerLifecycle;	// IMP=0x00100000002ebaa9
- (void)adAVSystemControllerDidChange:(id)arg1;	// IMP=0x00100000002eba5e
- (void)invalidate;	// IMP=0x00100000002eba13
- (void)setSiriOutputVolume:(float)arg1 forAudioRoute:(id)arg2 withName:(id)arg3 operationType:(long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000002eb89a
- (void)getSiriOutputVolumeForAudioRoute:(id)arg1 withName:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000002eb74d
- (void)getMusicOutputVolumeForAudioRoute:(id)arg1 withName:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000002eb600
- (void)setClientConfiguration:(id)arg1;	// IMP=0x00100000002eb573
- (void)waitUntilSiriOutputVolumeUpdatesAfterTimestamp:(unsigned long long)arg1 withTimeout:(double)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00100000002eb3a6
- (void)updateSiriOutputVolume:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002eb282
- (void)fetchSmartSiriVolumeForType:(unsigned long long)arg1;	// IMP=0x00100000002eb1b2
- (id)initWithQueue:(id)arg1 instanceContext:(id)arg2 speechController:(id)arg3;	// IMP=0x00100000002eb063

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


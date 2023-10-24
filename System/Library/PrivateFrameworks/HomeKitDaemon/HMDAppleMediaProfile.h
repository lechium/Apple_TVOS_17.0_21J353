//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDAppleMediaAccessory, HMDMediaSystem, MPRequestResponseController, NSString;

__attribute__((visibility("hidden")))
@interface HMDAppleMediaProfile
{
    HMDMediaSystem *_mediaSystem;	// 24 = 0x18
    MPRequestResponseController *_controller;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000051fc58
@property(readonly) MPRequestResponseController *controller; // @synthesize controller=_controller;
- (void)didUpdateSleepWakeState:(unsigned long long)arg1;	// IMP=0x000000000051f66d
- (void)didFinishLoadingRequestForController:(id)arg1;	// IMP=0x000000000051efd5
- (void)sessionAudioControlUpdated:(id)arg1;	// IMP=0x000000000051ee9f
- (void)_handleSetPower:(id)arg1;	// IMP=0x000000000051ee99
- (void)_handleSetValue:(id)arg1 withRequestProperty:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000051e6dc
- (_Bool)_updateRefreshPlayback:(id)arg1;	// IMP=0x000000000051e260
- (_Bool)_updatePlayback:(id)arg1;	// IMP=0x000000000051df29
- (void)setMediaSession:(id)arg1;	// IMP=0x000000000051ddaf
@property(nonatomic) __weak HMDMediaSystem *mediaSystem; // @synthesize mediaSystem=_mediaSystem;
@property(readonly) __weak HMDAppleMediaAccessory *mediaAccessory;
- (void)registerForMessages;	// IMP=0x000000000051da2f
- (void)configureWithMessageDispatcher:(id)arg1 configurationTracker:(id)arg2;	// IMP=0x000000000051d944
- (id)initWithAccessory:(id)arg1 uniqueIdentifier:(id)arg2 services:(id)arg3 workQueue:(id)arg4;	// IMP=0x000000000051d806

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


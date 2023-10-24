//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpeechFoundation/CSPolicy.h>

@class NSString;

@interface CSVoiceTriggerJarvisAPEnabledPolicy : CSPolicy
{
    _Bool _isPlaybackAudioSessionActive;	// 8 = 0x8
    NSString *_clientRecordRoute;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x00200000001238dc
- (void).cxx_destruct;	// IMP=0x002000000012350e
@property(retain, nonatomic) NSString *clientRecordRoute; // @synthesize clientRecordRoute=_clientRecordRoute;
@property(nonatomic) _Bool isPlaybackAudioSessionActive; // @synthesize isPlaybackAudioSessionActive=_isPlaybackAudioSessionActive;
- (void)siriClientBehaviorMonitorAudioDeviceInfoUpdated:(id)arg1;	// IMP=0x001000000012343f
- (void)siriClientBehaviorMonitorReleasedAudioSession:(id)arg1;	// IMP=0x001000000012340d
- (void)siriClientBehaviorMonitor:(id)arg1 activatedAudioSessionWithReason:(unsigned long long)arg2;	// IMP=0x00100000001233cd
- (void)siriClientBehaviorMonitor:(id)arg1 didStopStream:(id)arg2 withEventUUID:(id)arg3;	// IMP=0x00100000001233c7
- (void)siriClientBehaviorMonitor:(id)arg1 willStopStream:(id)arg2 reason:(unsigned long long)arg3;	// IMP=0x00100000001233c1
- (void)siriClientBehaviorMonitor:(id)arg1 didStartStreamWithContext:(id)arg2 successfully:(_Bool)arg3 option:(id)arg4 withEventUUID:(id)arg5;	// IMP=0x00100000001233bb
- (void)siriClientBehaviorMonitor:(id)arg1 willStartStreamWithContext:(id)arg2 option:(id)arg3;	// IMP=0x00100000001233b5
- (void)_addVoiceTriggerHearstAPEnabledPolicy;	// IMP=0x00100000001232d0
- (void)_subscribeEventMonitors;	// IMP=0x00100000001231b4
- (id)init;	// IMP=0x0010000000123148

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


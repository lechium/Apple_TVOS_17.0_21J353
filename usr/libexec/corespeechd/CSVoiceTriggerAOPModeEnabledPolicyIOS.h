//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpeechFoundation/CSPolicy.h>

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface CSVoiceTriggerAOPModeEnabledPolicyIOS : CSPolicy
{
    NSObject<OS_dispatch_queue> *_recordStateQueue;	// 8 = 0x8
    _Bool _isSiriClientConsideredAsRecord;	// 16 = 0x10
    NSString *_pendingRecordingStopUUID;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000013e22d
@property(retain, nonatomic) NSString *pendingRecordingStopUUID; // @synthesize pendingRecordingStopUUID=_pendingRecordingStopUUID;
@property(nonatomic) _Bool isSiriClientConsideredAsRecord; // @synthesize isSiriClientConsideredAsRecord=_isSiriClientConsideredAsRecord;
- (void)siriClientBehaviorMonitor:(id)arg1 willStopStream:(id)arg2 reason:(unsigned long long)arg3;	// IMP=0x001000000013e1e2
- (void)siriClientBehaviorMonitor:(id)arg1 willStartStreamWithContext:(id)arg2 option:(id)arg3;	// IMP=0x001000000013e1dc
- (void)siriClientBehaviorMonitor:(id)arg1 didStopStream:(id)arg2 withEventUUID:(id)arg3;	// IMP=0x001000000013e1d6
- (void)siriClientBehaviorMonitor:(id)arg1 didStartStreamWithContext:(id)arg2 successfully:(_Bool)arg3 option:(id)arg4 withEventUUID:(id)arg5;	// IMP=0x001000000013e1d0
- (void)siriClientBehaviorMonitor:(id)arg1 didChangedRecordState:(_Bool)arg2 withEventUUID:(id)arg3 withContext:(id)arg4;	// IMP=0x001000000013e12a
- (void)intuitiveConvAudioCaptureMonitorDidStopAudioCapture:(id)arg1 stopStreamOption:(id)arg2 eventUUID:(id)arg3;	// IMP=0x001000000013e096
- (void)intuitiveConvAudioCaptureMonitor:(id)arg1 didStartAudioCaptureSuccessfully:(_Bool)arg2 option:(id)arg3 eventUUID:(id)arg4;	// IMP=0x001000000013dff0
- (void)_handleClientRecordStateDidChange:(_Bool)arg1 eventUUID:(id)arg2;	// IMP=0x001000000013de24
- (_Bool)_isInPhoneCallStateWithHSPhoneCallCapableRoute;	// IMP=0x001000000013db99
- (_Bool)_isAudioRouteIneligibleForAP;	// IMP=0x001000000013da8e
- (_Bool)_isHearstRoutedAndWithNoPhoneCall;	// IMP=0x001000000013d9fe
- (_Bool)_isJarvisRouted;	// IMP=0x001000000013d966
- (_Bool)_isSpeechDetectionDevicePresent;	// IMP=0x001000000013d8a4
- (void)_addConditionsForIOSAOP;	// IMP=0x001000000013d6d5
- (void)_addConditionsForIOSBargeIn;	// IMP=0x001000000013d437
- (void)_addVoiceTriggerAOPModeEnabledConditions;	// IMP=0x001000000013d360
- (void)_subscribeEventMonitors;	// IMP=0x001000000013d125
- (id)init;	// IMP=0x001000000013d01d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

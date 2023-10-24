//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSAudioRecordContext, CSAudioStream, CSXPCConnection, NSString;
@protocol CSAudioStreamProviding, CSTriggerInfoProviding;

@interface CSAudioStreamProvidingProxy : NSObject
{
    _Bool _clientRequestedSkipMonitorUpdate;	// 8 = 0x8
    id <CSAudioStreamProviding> _audioStreamProviding;	// 16 = 0x10
    id <CSTriggerInfoProviding> _triggerInfoProviding;	// 24 = 0x18
    CSXPCConnection *_xpcConnection;	// 32 = 0x20
    unsigned long long _streamClientType;	// 40 = 0x28
    CSAudioStream *_audioStream;	// 48 = 0x30
    CSAudioRecordContext *_recordContext;	// 56 = 0x38
    NSString *_recordEventUUID;	// 64 = 0x40
    NSString *_accessoryId;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00200000000118b1
@property(nonatomic) _Bool clientRequestedSkipMonitorUpdate; // @synthesize clientRequestedSkipMonitorUpdate=_clientRequestedSkipMonitorUpdate;
@property(retain, nonatomic) NSString *accessoryId; // @synthesize accessoryId=_accessoryId;
@property(retain, nonatomic) NSString *recordEventUUID; // @synthesize recordEventUUID=_recordEventUUID;
@property(retain, nonatomic) CSAudioRecordContext *recordContext; // @synthesize recordContext=_recordContext;
@property(retain, nonatomic) CSAudioStream *audioStream; // @synthesize audioStream=_audioStream;
@property(nonatomic) unsigned long long streamClientType; // @synthesize streamClientType=_streamClientType;
@property(nonatomic) __weak CSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(nonatomic) __weak id <CSTriggerInfoProviding> triggerInfoProviding; // @synthesize triggerInfoProviding=_triggerInfoProviding;
@property(nonatomic, setter=setAudioStreamProvidingForProxy:) __weak id <CSAudioStreamProviding> audioStreamProviding; // @synthesize audioStreamProviding=_audioStreamProviding;
- (void)_setAllowMixableAudioWhileRecordingIfNeeded:(_Bool)arg1;	// IMP=0x00100000000115e6
- (void)_sendDelegateMessageToClient:(id)arg1;	// IMP=0x00100000000114fc
- (void)audioStreamProvider:(id)arg1 didHardwareConfigurationChange:(long long)arg2;	// IMP=0x00100000000113ee
- (void)audioStreamProvider:(id)arg1 audioChunkForTVAvailable:(id)arg2;	// IMP=0x00100000000112ff
- (void)audioStreamProvider:(id)arg1 audioBufferAvailable:(id)arg2;	// IMP=0x0010000000011210
- (void)audioStreamProvider:(id)arg1 didStopStreamUnexpectedly:(long long)arg2;	// IMP=0x0010000000010f85
- (void)_handlePlaybackRouteMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x0010000000010dde
- (void)_handleIsNarrowband:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x0010000000010c35
- (void)_handleRecordSettings:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x0010000000010a82
- (void)_handleAudioDeviceInfo:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x001000000001085a
- (void)_handleRecordDeviceInfo:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x00100000000106a7
- (void)_handleRecordRouteMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x0010000000010500
- (void)_handleIsRecordingMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x0010000000010357
- (void)_handleVoiceTriggerInfoMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x00100000000100f8
- (void)_handleStopAudioStreamMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x001000000000fc78
- (void)_handleStartAudioStreamMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x001000000000f657
- (void)_handleAudioStreamPrepareMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x001000000000f0d4
- (void)_handleAudioStreamRequestMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x001000000000ec4b
- (void)_handleSetCurrentConextMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x001000000000e949
- (void)_handleSupportsDuckingWithStreamHandleID:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x001000000000e788
- (void)handleXPCMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x001000000000e5a0
- (void)CSXPCConnectionReceivedClientError:(id)arg1 clientError:(id)arg2 client:(id)arg3;	// IMP=0x001000000000e150
- (void)_sendReply:(id)arg1 client:(id)arg2 result:(_Bool)arg3 error:(id)arg4;	// IMP=0x001000000000e05c
- (_Bool)_isHubRequest;	// IMP=0x001000000000e04e
- (void)setInitialContext:(id)arg1;	// IMP=0x001000000000dfb9
- (id)initWithXPCConnection:(id)arg1;	// IMP=0x001000000000dd52

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSSet, NSString, NSUUID, TUCallDisplayContext, TUCallProvider, TUHandle, TUJoinConversationRequest;
@protocol CSDRelayCallDelegate;

@interface CSDRelayCall
{
    _Bool _outgoing;	// 8 = 0x8
    _Bool _video;	// 9 = 0x9
    _Bool _voicemail;	// 10 = 0xa
    _Bool _emergency;	// 11 = 0xb
    _Bool _failureExpected;	// 12 = 0xc
    _Bool _supportsEmergencyFallback;	// 13 = 0xd
    _Bool _sos;	// 14 = 0xe
    _Bool _needsManualInCallSounds;	// 15 = 0xf
    _Bool _remoteUplinkMuted;	// 16 = 0x10
    _Bool _uplinkMuted;	// 17 = 0x11
    _Bool _supportsTTYWithVoice;	// 18 = 0x12
    _Bool _conversation;	// 19 = 0x13
    _Bool _cannotRelayAudioOrVideo;	// 20 = 0x14
    int _callStatus;	// 24 = 0x18
    int _ttyType;	// 28 = 0x1c
    int _originatingUIType;	// 32 = 0x20
    TUHandle *_handle;	// 40 = 0x28
    NSString *_isoCountryCode;	// 48 = 0x30
    TUCallProvider *_provider;	// 56 = 0x38
    NSUUID *_callGroupUUID;	// 64 = 0x40
    NSString *_callerNameFromNetwork;	// 72 = 0x48
    TUCallDisplayContext *_displayContext;	// 80 = 0x50
    unsigned long long _initialLinkType;	// 88 = 0x58
    NSUUID *_localSenderIdentityUUID;	// 96 = 0x60
    NSUUID *_localSenderIdentityAccountUUID;	// 104 = 0x68
    NSSet *_remoteParticipantHandles;	// 112 = 0x70
    long long _bluetoothAudioFormat;	// 120 = 0x78
    id <CSDRelayCallDelegate> _relayDelegate;	// 128 = 0x80
    TUJoinConversationRequest *_joinConversationRequest;	// 136 = 0x88
    NSDictionary *_remoteInviteDictionary;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x00200000000ae588
@property(copy, nonatomic) NSDictionary *remoteInviteDictionary; // @synthesize remoteInviteDictionary=_remoteInviteDictionary;
@property(nonatomic) _Bool cannotRelayAudioOrVideo; // @synthesize cannotRelayAudioOrVideo=_cannotRelayAudioOrVideo;
@property(retain, nonatomic) TUJoinConversationRequest *joinConversationRequest; // @synthesize joinConversationRequest=_joinConversationRequest;
@property(nonatomic) __weak id <CSDRelayCallDelegate> relayDelegate; // @synthesize relayDelegate=_relayDelegate;
@property(nonatomic, getter=isConversation) _Bool conversation; // @synthesize conversation=_conversation;
@property(nonatomic) int originatingUIType; // @synthesize originatingUIType=_originatingUIType;
@property(nonatomic) long long bluetoothAudioFormat; // @synthesize bluetoothAudioFormat=_bluetoothAudioFormat;
@property(nonatomic) _Bool supportsTTYWithVoice; // @synthesize supportsTTYWithVoice=_supportsTTYWithVoice;
@property(nonatomic) int ttyType; // @synthesize ttyType=_ttyType;
@property(copy, nonatomic) NSSet *remoteParticipantHandles; // @synthesize remoteParticipantHandles=_remoteParticipantHandles;
@property(retain, nonatomic) NSUUID *localSenderIdentityAccountUUID; // @synthesize localSenderIdentityAccountUUID=_localSenderIdentityAccountUUID;
@property(retain, nonatomic) NSUUID *localSenderIdentityUUID; // @synthesize localSenderIdentityUUID=_localSenderIdentityUUID;
@property(nonatomic) unsigned long long initialLinkType; // @synthesize initialLinkType=_initialLinkType;
@property(nonatomic, getter=isRemoteUplinkMuted) _Bool remoteUplinkMuted; // @synthesize remoteUplinkMuted=_remoteUplinkMuted;
@property(nonatomic) _Bool needsManualInCallSounds; // @synthesize needsManualInCallSounds=_needsManualInCallSounds;
@property(copy, nonatomic) NSString *callerNameFromNetwork; // @synthesize callerNameFromNetwork=_callerNameFromNetwork;
@property(nonatomic, getter=isSOS, setter=setSOS:) _Bool sos; // @synthesize sos=_sos;
@property(nonatomic) _Bool supportsEmergencyFallback; // @synthesize supportsEmergencyFallback=_supportsEmergencyFallback;
@property(nonatomic, getter=isFailureExpected) _Bool failureExpected; // @synthesize failureExpected=_failureExpected;
@property(nonatomic, getter=isEmergency) _Bool emergency; // @synthesize emergency=_emergency;
@property(nonatomic, getter=isVoicemail) _Bool voicemail; // @synthesize voicemail=_voicemail;
@property(nonatomic, getter=isVideo) _Bool video; // @synthesize video=_video;
@property(nonatomic, getter=isOutgoing) _Bool outgoing; // @synthesize outgoing=_outgoing;
@property(copy, nonatomic) NSUUID *callGroupUUID; // @synthesize callGroupUUID=_callGroupUUID;
@property(retain, nonatomic) TUCallProvider *provider; // @synthesize provider=_provider;
@property(nonatomic) int callStatus; // @synthesize callStatus=_callStatus;
@property(copy, nonatomic) NSString *isoCountryCode; // @synthesize isoCountryCode=_isoCountryCode;
@property(retain, nonatomic) TUHandle *handle; // @synthesize handle=_handle;
- (void)setLocallyDisconnectedWithReasonIfNone:(int)arg1 stopConference:(_Bool)arg2;	// IMP=0x00100000000ae1be
- (void)setLocallyDisconnectedWithReasonIfNone:(int)arg1;	// IMP=0x00100000000ae1aa
- (void)setLocallyConnected;	// IMP=0x00100000000ae11c
- (void)setLocallyConnecting;	// IMP=0x00100000000ae089
- (void)setLocallyHasSentInvitation;	// IMP=0x00100000000ae005
- (void)setLocallyHasStartedOutgoing;	// IMP=0x00100000000adf6d
- (void)becomeEndpointForPullFromRemoteDevice;	// IMP=0x00100000000adf0f
- (void)sendHardPauseDigits;	// IMP=0x00100000000adec3
- (void)playLocalDTMFToneForKey:(unsigned char)arg1;	// IMP=0x00100000000ade74
- (void)unhold;	// IMP=0x00100000000add46
- (void)hold;	// IMP=0x00100000000adc14
- (void)stopConference;	// IMP=0x00100000000adb9d
- (void)startConferenceForPulledCallWithTransport:(id)arg1 remoteInviteDictionary:(id)arg2;	// IMP=0x00100000000ad84e
- (void)startConferenceForDialedCallWithTransport:(id)arg1 remoteInviteDictionary:(id)arg2;	// IMP=0x00100000000ad4e4
- (void)startConferenceForAnsweredCallWithTransport:(id)arg1 remoteInviteDictionary:(id)arg2;	// IMP=0x00100000000ad17a
- (void)disconnectWithReason:(int)arg1;	// IMP=0x00100000000ad083
- (void)answerWithRequest:(id)arg1;	// IMP=0x00100000000acfdf
- (void)joinConversationWithRequest:(id)arg1;	// IMP=0x00100000000ace27
- (void)dialWithRequest:(id)arg1 displayContext:(id)arg2;	// IMP=0x00100000000acbf8
- (long long)spatialAudioSourceIdentifier;	// IMP=0x00100000000acb7d
- (long long)outputAudioPowerSpectrumToken;	// IMP=0x00100000000acb02
- (long long)inputAudioPowerSpectrumToken;	// IMP=0x00100000000aca87
- (void)setIsSendingAudio:(_Bool)arg1;	// IMP=0x00100000000aca0e
- (_Bool)isSendingAudio;	// IMP=0x00100000000ac993
- (void)setUplinkMuted:(_Bool)arg1;	// IMP=0x00100000000ac704
- (void)performUplinkMuted:(_Bool)arg1;	// IMP=0x00100000000ac617
- (_Bool)isUplinkMuted;	// IMP=0x00100000000ac59c
- (_Bool)isConferenceActive;	// IMP=0x00100000000ac50f
- (_Bool)shouldOwnMuteHandler;	// IMP=0x00100000000ac42a
- (void)ungroup;	// IMP=0x00100000000ac30d
- (void)groupWithOtherCall:(id)arg1;	// IMP=0x00100000000ac159
- (void)setHardPauseDigits:(id)arg1;	// IMP=0x00100000000ac04f
- (void)setHardPauseDigitsState:(int)arg1;	// IMP=0x00100000000abf9a
@property(copy, nonatomic) TUCallDisplayContext *displayContext; // @synthesize displayContext=_displayContext;
- (_Bool)supportsDisplayingFaceTimeAudioCalls;	// IMP=0x00100000000ab6e1
@property(readonly, nonatomic) TUCallProvider *localProvider;
- (_Bool)canOnlyBeAnsweredWithoutAudioOrVideoRelayWithRequest:(id)arg1;	// IMP=0x00100000000ab5a5
- (_Bool)canBeAnsweredWithAudioOrVideoRelayWithRequest:(id)arg1;	// IMP=0x00100000000ab546
- (_Bool)canBeAnsweredWithRequest:(id)arg1;	// IMP=0x00100000000ab4a3
- (int)callRelaySupport;	// IMP=0x00100000000ab3d5
- (long long)audioInterruptionProviderType;	// IMP=0x00100000000ab3ca
- (long long);	// IMP=0x00100000000ab3bf
- (id)audioMode;	// IMP=0x00100000000ab377
- (id)audioCategory;	// IMP=0x00100000000ab32f
- (_Bool)isHostedOnCurrentDevice;	// IMP=0x00100000000ab327
- (id)callUUID;	// IMP=0x00100000000ab315
- (void)updateWithRelayMessage:(id)arg1;	// IMP=0x00100000000aaee0
- (id)initWithRelayMessage:(id)arg1 outgoing:(_Bool)arg2;	// IMP=0x00100000000aaac2
- (id)initOutgoingWithJoinConversationRequest:(id)arg1;	// IMP=0x00100000000aa79e
- (id)initOutgoingWithDialRequest:(id)arg1;	// IMP=0x00100000000aa697

@end

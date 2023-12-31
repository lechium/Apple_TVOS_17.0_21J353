//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVAudioSession, CSDPauseDigitsQueue, CXAbstractProviderSource, CXCallFailureContext, CXCallSource, CXCallUpdate, LSApplicationRecord, NSDictionary, NSNotificationCenter, NSString, NSURL, NSUUID, TUCallCenter, TUCallScreenShareAttributes, TUParticipant, TUUserConfiguration;
@protocol CSDProviderCallDelegate, TUFeatureFlags;

@interface CSDProviderCall
{
    _Bool _outgoing;	// 8 = 0x8
    _Bool _wantsStagingArea;	// 9 = 0x9
    _Bool _video;	// 10 = 0xa
    _Bool _conversation;	// 11 = 0xb
    _Bool _sharingScreen;	// 12 = 0xc
    _Bool _expanseProvider;	// 13 = 0xd
    _Bool _mixesVoiceWithMedia;	// 14 = 0xe
    _Bool _mediaPlaybackOnExternalDevice;	// 15 = 0xf
    _Bool _underlyingUplinkMuted;	// 16 = 0x10
    _Bool _prefersToPlayDuringWombat;	// 17 = 0x11
    _Bool _held;	// 18 = 0x12
    _Bool _sendingVideo;	// 19 = 0x13
    _Bool _shouldAcceptDateConnectedProviderUpdates;	// 20 = 0x14
    int _ttyType;	// 24 = 0x18
    int _originatingUIType;	// 28 = 0x1c
    TUParticipant *_activeRemoteParticipant;	// 32 = 0x20
    id <TUFeatureFlags> _featureFlags;	// 40 = 0x28
    NSURL *_imageURL;	// 48 = 0x30
    long long _bluetoothAudioFormat;	// 56 = 0x38
    TUCallScreenShareAttributes *_screenShareAttributes;	// 64 = 0x40
    NSDictionary *_silencingUserInfo;	// 72 = 0x48
    TUCallCenter *_callCenter;	// 80 = 0x50
    id <CSDProviderCallDelegate> _providerCallDelegate;	// 88 = 0x58
    NSString *_providerIdentifier;	// 96 = 0x60
    CXCallSource *_backingCallSource;	// 104 = 0x68
    CXAbstractProviderSource *_providerSource;	// 112 = 0x70
    long long _endedReason;	// 120 = 0x78
    CXCallFailureContext *_failureContext;	// 128 = 0x80
    CDUnknownBlockType _usesSystemMutingBlock;	// 136 = 0x88
    CDUnknownBlockType _systemControllerUplinkMutedBlock;	// 144 = 0x90
    CDUnknownBlockType _systemControllerSetUplinkMutedBlock;	// 152 = 0x98
    CXCallUpdate *_mergedCallUpdate;	// 160 = 0xa0
    CSDPauseDigitsQueue *_pauseDigitsQueue;	// 168 = 0xa8
    TUUserConfiguration *_userConfiguration;	// 176 = 0xb0
    NSNotificationCenter *_defaultNotificationCenter;	// 184 = 0xb8
}

- (void).cxx_destruct;	// IMP=0x0020000000059491
@property(retain, nonatomic) NSNotificationCenter *defaultNotificationCenter; // @synthesize defaultNotificationCenter=_defaultNotificationCenter;
@property(readonly, nonatomic) TUUserConfiguration *userConfiguration; // @synthesize userConfiguration=_userConfiguration;
@property(retain, nonatomic) CSDPauseDigitsQueue *pauseDigitsQueue; // @synthesize pauseDigitsQueue=_pauseDigitsQueue;
@property(retain, nonatomic) CXCallUpdate *mergedCallUpdate; // @synthesize mergedCallUpdate=_mergedCallUpdate;
@property(copy, nonatomic) CDUnknownBlockType systemControllerSetUplinkMutedBlock; // @synthesize systemControllerSetUplinkMutedBlock=_systemControllerSetUplinkMutedBlock;
@property(copy, nonatomic) CDUnknownBlockType systemControllerUplinkMutedBlock; // @synthesize systemControllerUplinkMutedBlock=_systemControllerUplinkMutedBlock;
@property(copy, nonatomic) CDUnknownBlockType usesSystemMutingBlock; // @synthesize usesSystemMutingBlock=_usesSystemMutingBlock;
@property(retain, nonatomic) CXCallFailureContext *failureContext; // @synthesize failureContext=_failureContext;
@property(nonatomic) _Bool shouldAcceptDateConnectedProviderUpdates; // @synthesize shouldAcceptDateConnectedProviderUpdates=_shouldAcceptDateConnectedProviderUpdates;
@property(nonatomic) _Bool sendingVideo; // @synthesize sendingVideo=_sendingVideo;
@property(nonatomic) long long endedReason; // @synthesize endedReason=_endedReason;
@property(nonatomic, getter=isHeld) _Bool held; // @synthesize held=_held;
@property(retain, nonatomic) CXAbstractProviderSource *providerSource; // @synthesize providerSource=_providerSource;
@property(retain, nonatomic) CXCallSource *backingCallSource; // @synthesize backingCallSource=_backingCallSource;
@property(readonly, copy, nonatomic) NSString *providerIdentifier; // @synthesize providerIdentifier=_providerIdentifier;
@property(nonatomic) __weak id <CSDProviderCallDelegate> providerCallDelegate; // @synthesize providerCallDelegate=_providerCallDelegate;
@property(retain, nonatomic) TUCallCenter *callCenter; // @synthesize callCenter=_callCenter;
- (_Bool)prefersToPlayDuringWombat;	// IMP=0x00100000000592e4
@property(nonatomic, getter=isUnderlyingUplinkMuted) _Bool underlyingUplinkMuted; // @synthesize underlyingUplinkMuted=_underlyingUplinkMuted;
@property(retain, nonatomic) NSDictionary *silencingUserInfo; // @synthesize silencingUserInfo=_silencingUserInfo;
@property(readonly, nonatomic) _Bool mediaPlaybackOnExternalDevice; // @synthesize mediaPlaybackOnExternalDevice=_mediaPlaybackOnExternalDevice;
@property(readonly, nonatomic) int originatingUIType; // @synthesize originatingUIType=_originatingUIType;
@property(readonly, nonatomic, getter=isExpanseProvider) _Bool expanseProvider; // @synthesize expanseProvider=_expanseProvider;
- (id)screenShareAttributes;	// IMP=0x001000000005926e
- (_Bool)isSharingScreen;	// IMP=0x001000000005925e
@property(nonatomic, getter=isConversation) _Bool conversation; // @synthesize conversation=_conversation;
@property(nonatomic) _Bool wantsStagingArea; // @synthesize wantsStagingArea=_wantsStagingArea;
- (_Bool)isOutgoing;	// IMP=0x001000000005921e
- (id)imageURL;	// IMP=0x001000000005920d
@property(readonly, nonatomic) id <TUFeatureFlags> featureFlags; // @synthesize featureFlags=_featureFlags;
@property(copy, nonatomic) TUParticipant *activeRemoteParticipant; // @synthesize activeRemoteParticipant=_activeRemoteParticipant;
- (_Bool)isReRing;	// IMP=0x0010000000059196
- (id)imageURLForCXSandboxExtendedURL:(id)arg1;	// IMP=0x0010000000058c9d
- (id)activeRemoteParticipantForCallUpdate:(id)arg1;	// IMP=0x0010000000058b79
- (oneway void)handleAudioSessionActivationStateChangedTo:(id)arg1;	// IMP=0x0010000000058ae9
- (void)pauseDigitsQueueChanged:(id)arg1;	// IMP=0x0010000000058a2d
- (void)_sendSoftPauseDigitsIfNecessary;	// IMP=0x00100000000588ae
- (void)_sendDTMFDigits:(id)arg1 type:(long long)arg2;	// IMP=0x001000000005875a
- (id)tuScreenShareAttributesForScreenAttributes:(id)arg1;	// IMP=0x001000000005850c
- (id)cxScreenShareAttributesForCallAttributes:(id)arg1;	// IMP=0x0010000000058335
- (void)dequeueNextPauseDigits;	// IMP=0x001000000005827c
- (void)setRemoteVideoPresentationState:(int)arg1;	// IMP=0x0010000000058137
- (void)setRemoteVideoPresentationSize:(struct CGSize)arg1;	// IMP=0x0010000000057fd9
- (void)playRemoteDTMFToneForKey:(unsigned char)arg1;	// IMP=0x0010000000057eab
- (void)sendHardPauseDigits;	// IMP=0x0010000000057cd0
- (void)setDownlinkMuted:(_Bool)arg1;	// IMP=0x0010000000057c7f
- (void)setUnderlyingUplinkMuted:(_Bool)arg1 bottomUpMute:(_Bool)arg2;	// IMP=0x0010000000057a7f
@property(nonatomic) int ttyType; // @synthesize ttyType=_ttyType;
- (void)setUplinkMuted:(_Bool)arg1;	// IMP=0x0010000000057851
- (void)setSharingScreen:(_Bool)arg1 attributes:(id)arg2;	// IMP=0x0010000000057553
- (void)setSharingScreen:(_Bool)arg1;	// IMP=0x0010000000057432
- (void)setScreenShareAttributes:(id)arg1;	// IMP=0x001000000005724e
- (void)setIsSendingVideo:(_Bool)arg1;	// IMP=0x001000000005717a
- (void)setProviderFailureReasonIfNecessary:(long long)arg1;	// IMP=0x0010000000057091
- (void)disconnectWithReason:(int)arg1;	// IMP=0x0010000000056fb3
- (void)ungroup;	// IMP=0x0010000000056eeb
- (void)groupWithOtherCall:(id)arg1;	// IMP=0x0010000000056dd6
- (void)_setIsOnHold:(_Bool)arg1;	// IMP=0x0010000000056cba
- (void)unhold;	// IMP=0x0010000000056c26
- (void)hold;	// IMP=0x0010000000056b8f
- (void)answerWithRequest:(id)arg1;	// IMP=0x00100000000568e4
- (void)joinConversationWithRequest:(id)arg1;	// IMP=0x0010000000055f31
- (id)_dialDelayForRequest:(id)arg1;	// IMP=0x0010000000055f29
- (void)dialWithRequest:(id)arg1 displayContext:(id)arg2;	// IMP=0x0010000000055b24
- (id)startCallActionWithDialRequest:(id)arg1;	// IMP=0x00100000000557df
- (void)setMediaPlaybackOnExternalDevice:(_Bool)arg1;	// IMP=0x001000000005573a
- (void)setMixesVoiceWithMedia:(_Bool)arg1;	// IMP=0x0010000000055695
@property(nonatomic) long long bluetoothAudioFormat; // @synthesize bluetoothAudioFormat=_bluetoothAudioFormat;
- (void)setTTYType:(int)arg1;	// IMP=0x00100000000554e4
- (void)setScreening:(_Bool)arg1;	// IMP=0x00100000000553b1
- (void)setEndpointOnCurrentDevice:(_Bool)arg1;	// IMP=0x00100000000552c1
- (void)setDateConnected:(id)arg1;	// IMP=0x001000000005521f
@property(copy, nonatomic) NSUUID *callGroupUUID;
@property(nonatomic, getter=isVideo) _Bool video; // @synthesize video=_video;
- (void)setOutgoing:(_Bool)arg1;	// IMP=0x0010000000054dfe
- (_Bool)usesSystemMuting;	// IMP=0x0010000000054d2b
- (_Bool)accessoryButtonEventsEnabled;	// IMP=0x0010000000054ce7
- (long long)transmissionMode;	// IMP=0x0010000000054c92
- (long long)serviceStatus;	// IMP=0x0010000000054c3d
- (long long)outputAudioPowerSpectrumToken;	// IMP=0x0010000000054b67
- (long long)inputAudioPowerSpectrumToken;	// IMP=0x0010000000054a91
- (unsigned long long)initialLinkType;	// IMP=0x00100000000549bb
- (_Bool)isDownlinkMuted;	// IMP=0x0010000000054970
- (_Bool)isUplinkMuted;	// IMP=0x0010000000054910
- (_Bool)isSendingVideo;	// IMP=0x00100000000548fe
- (_Bool)isInternational;	// IMP=0x00100000000545a6
- (int)hardPauseDigitsState;	// IMP=0x00100000000544ee
- (id)hardPauseDigits;	// IMP=0x0010000000054411
- (_Bool)hasEnded;	// IMP=0x00100000000543de
- (_Bool)hasConnected;	// IMP=0x00100000000543ab
- (_Bool)hasStartedConnecting;	// IMP=0x0010000000054378
- (int)callStatusFromUnderlyingSource;	// IMP=0x00100000000542d7
- (id)provider;	// IMP=0x0010000000054257
@property(readonly, nonatomic) LSApplicationRecord *applicationRecord;
- (id)conversationID;	// IMP=0x00100000000541a4
- (_Bool)isMutuallyExclusiveCall;	// IMP=0x001000000005411c
- (_Bool)shouldSuppressInCallUI;	// IMP=0x00100000000540d8
- (_Bool)prefersExclusiveAccessToCellularNetwork;	// IMP=0x0010000000054094
- (_Bool)mayRequireBreakBeforeMake;	// IMP=0x0010000000054050
- (id)remoteParticipantHandles;	// IMP=0x0010000000053f4f
- (id)handoffActivityUserInfo;	// IMP=0x0010000000053e3f
- (id)handoffDynamicIdentifier;	// IMP=0x0010000000053dc5
- (_Bool)supportsEmergencyFallback;	// IMP=0x0010000000053d81
- (_Bool)isFailureExpected;	// IMP=0x0010000000053d3d
- (_Bool)isEmergency;	// IMP=0x0010000000053cf9
- (_Bool)supportsTTYWithVoice;	// IMP=0x0010000000053c69
- (_Bool)isOneToOneModeEnabled;	// IMP=0x0010000000053bd9
- (id)providerContext;	// IMP=0x0010000000053b89
@property(readonly, nonatomic) _Bool ignoresBluetoothDeviceUID;
@property(readonly, nonatomic) _Bool mixesVoiceWithMedia; // @synthesize mixesVoiceWithMedia=_mixesVoiceWithMedia;
- (long long)soundRegion;	// IMP=0x0010000000053ab2
- (_Bool)needsManualInCallSounds;	// IMP=0x0010000000053a53
- (id)audioMode;	// IMP=0x001000000005397e
- (id)audioCategory;	// IMP=0x00100000000538a9
@property(readonly, nonatomic) AVAudioSession *proxyAVAudioSession;
- (long long)audioInterruptionOperationMode;	// IMP=0x001000000005378c
- (long long)audioInterruptionProviderType;	// IMP=0x0000000000053733
- (id)activeRemoteParticipants;	// IMP=0x0010000000053637
- (id)localSenderIdentityAccountUUID;	// IMP=0x001000000005353e
- (id)localSenderIdentityUUID;	// IMP=0x00100000000534ee
- (id)isoCountryCode;	// IMP=0x001000000005349e
- (_Bool)isRemoteUplinkMuted;	// IMP=0x001000000005345a
- (long long)videoStreamToken;	// IMP=0x0010000000053416
- (_Bool)isThirdPartyVideo;	// IMP=0x0010000000053390
- (_Bool)isBlocked;	// IMP=0x00100000000532e6
- (_Bool)isUsingBaseband;	// IMP=0x00100000000531fb
- (id)handle;	// IMP=0x0010000000052fa7
- (id)callHistoryIdentifier;	// IMP=0x0010000000052ebf
- (_Bool)hasBeenRedirected;	// IMP=0x0010000000052e7b
- (id)callerNameFromNetwork;	// IMP=0x0010000000052ddb
- (long long)providerEndedReason;	// IMP=0x0010000000052d97
- (long long)providerErrorCode;	// IMP=0x0010000000052d53
- (id)endedReasonUserInfo;	// IMP=0x0010000000052cf4
- (void)updateForDisconnection;	// IMP=0x0010000000051cc8
- (int)_switchFromFailureReasonToDisconnectedReason:(long long)arg1;	// IMP=0x0010000000051bb8
- (void)updateWithCallUpdate:(id)arg1 notifyDelegate:(_Bool)arg2;	// IMP=0x0010000000050efe
- (void)updateWithCallUpdate:(id)arg1;	// IMP=0x0010000000050ee7
- (void)systemMuteStatusChanged:(id)arg1;	// IMP=0x00100000000509ad
- (void)performUplinkMuted:(_Bool)arg1;	// IMP=0x0010000000050901
- (void)dealloc;	// IMP=0x0010000000050864
- (id)initWithHandoffContext:(id)arg1 backingCallSource:(id)arg2;	// IMP=0x0010000000050742
- (id)initOutgoingWithJoinConversationRequest:(id)arg1;	// IMP=0x001000000005042a
- (id)initOutgoingWithRequestedStartCallAction:(id)arg1 backingCallSource:(id)arg2;	// IMP=0x00100000000502ce
- (id)initOutgoingWithDialRequest:(id)arg1 configuration:(id)arg2;	// IMP=0x001000000005017e
- (id)initOutgoingWithDialRequest:(id)arg1;	// IMP=0x0010000000050055
- (id)initOutgoingWithUpdate:(id)arg1 callUUID:(id)arg2 backingCallSource:(id)arg3 isExpanseProvider:(_Bool)arg4;	// IMP=0x001000000004ff50
- (id)initOutgoingWithUniqueProxyIdentifier:(id)arg1 backingCallSourceIdentifier:(id)arg2 callUpdate:(id)arg3 isVideo:(_Bool)arg4 endpointOnCurrentDevice:(_Bool)arg5 originatingUIType:(int)arg6 configuration:(id)arg7;	// IMP=0x001000000004fc50
- (id)initOutgoingWithUniqueProxyIdentifier:(id)arg1 backingCallSourceIdentifier:(id)arg2 callUpdate:(id)arg3 isVideo:(_Bool)arg4 endpointOnCurrentDevice:(_Bool)arg5 originatingUIType:(int)arg6;	// IMP=0x001000000004fb36
- (id)initIncomingWithBackingCallSource:(id)arg1 UUID:(id)arg2 update:(id)arg3;	// IMP=0x001000000004f944
- (id)initWithUniqueProxyIdentifier:(id)arg1 configuration:(id)arg2;	// IMP=0x001000000004f5a3
- (id)initWithUniqueProxyIdentifier:(id)arg1 endpointOnCurrentDevice:(_Bool)arg2;	// IMP=0x001000000004f4f8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


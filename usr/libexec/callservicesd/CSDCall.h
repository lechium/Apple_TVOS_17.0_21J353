//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TelephonyUtilities/TUCall.h>

@class CSDCallDataSource, CSDIDSTransport, CXCall, IDSDestination, MISSING_TYPE, NSDate, NSDictionary, NSObject, NSSet, NSString, TUDialRequest, TUDynamicCallDisplayContext;
@protocol CSDCallDelegate, CSDMuteProcessAttributionProtocol, OS_dispatch_source;

@interface CSDCall : TUCall
{
    _Bool _isSendingAudio;	// 8 = 0x8
    _Bool _isKnownCaller;	// 9 = 0x9
    _Bool _joinedFromLink;	// 10 = 0xa
    _Bool _localUserInHomeCountry;	// 11 = 0xb
    _Bool _answeringMachineAvailable;	// 12 = 0xc
    _Bool _nondisclosedGreeting;	// 13 = 0xd
    _Bool _identifiedSpamInCallerName;	// 14 = 0xe
    _Bool _uplinkWasExplicitlyMuted;	// 15 = 0xf
    _Bool _hasAudioInterruption;	// 16 = 0x10
    _Bool _hasAudioFinished;	// 17 = 0x11
    _Bool _ignoresBluetoothDeviceUID;	// 18 = 0x12
    _Bool _oneToOneModeEnabled;	// 19 = 0x13
    _Bool _temporaryRequireInCallSounds;	// 20 = 0x14
    _Bool _faceTimeIDStatusRefreshed;	// 21 = 0x15
    long long _junkConfidence;	// 24 = 0x18
    long long _identificationCategory;	// 32 = 0x20
    id <CSDCallDelegate> _delegate;	// 40 = 0x28
    CSDCallDataSource *_dataSource;	// 48 = 0x30
    TUDialRequest *_dialRequest;	// 56 = 0x38
    NSDate *_dateStartedOutgoing;	// 64 = 0x40
    NSString *_ringtoneSubscriptionIdentifier;	// 72 = 0x48
    NSDate *_temporaryDateStartedOutgoing;	// 80 = 0x50
    NSDictionary *_silencingUserInfo;	// 88 = 0x58
    long long _bytesOfDataUsed;	// 96 = 0x60
    unsigned long long _initialLinkType;	// 104 = 0x68
    NSSet *_activeRemoteParticipants;	// 112 = 0x70
    CSDIDSTransport *_relayClientTransport;	// 120 = 0x78
    IDSDestination *_expectedRelayClientDestination;	// 128 = 0x80
    MISSING_TYPE *_timeoutTimer;	// 136 = 0x88
    long long _transmissionState;	// 144 = 0x90
    TUDynamicCallDisplayContext *_dynamicDisplayContext;	// 152 = 0x98
    id <CSDMuteProcessAttributionProtocol> _audioApplication;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x00200000000e15f4
@property(retain, nonatomic) id <CSDMuteProcessAttributionProtocol> audioApplication; // @synthesize audioApplication=_audioApplication;
@property(nonatomic) _Bool faceTimeIDStatusRefreshed; // @synthesize faceTimeIDStatusRefreshed=_faceTimeIDStatusRefreshed;
@property(retain, nonatomic) TUDynamicCallDisplayContext *dynamicDisplayContext; // @synthesize dynamicDisplayContext=_dynamicDisplayContext;
@property(nonatomic) long long transmissionState; // @synthesize transmissionState=_transmissionState;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(retain, nonatomic) IDSDestination *expectedRelayClientDestination; // @synthesize expectedRelayClientDestination=_expectedRelayClientDestination;
@property(retain, nonatomic) CSDIDSTransport *relayClientTransport; // @synthesize relayClientTransport=_relayClientTransport;
@property(copy, nonatomic) NSSet *activeRemoteParticipants; // @synthesize activeRemoteParticipants=_activeRemoteParticipants;
@property(readonly, nonatomic) unsigned long long initialLinkType; // @synthesize initialLinkType=_initialLinkType;
@property(nonatomic) long long bytesOfDataUsed; // @synthesize bytesOfDataUsed=_bytesOfDataUsed;
@property(retain, nonatomic) NSDictionary *silencingUserInfo; // @synthesize silencingUserInfo=_silencingUserInfo;
@property(retain, nonatomic) NSDate *temporaryDateStartedOutgoing; // @synthesize temporaryDateStartedOutgoing=_temporaryDateStartedOutgoing;
@property(nonatomic) _Bool temporaryRequireInCallSounds; // @synthesize temporaryRequireInCallSounds=_temporaryRequireInCallSounds;
@property(readonly, nonatomic, getter=isOneToOneModeEnabled) _Bool oneToOneModeEnabled; // @synthesize oneToOneModeEnabled=_oneToOneModeEnabled;
@property(readonly, nonatomic) _Bool ignoresBluetoothDeviceUID; // @synthesize ignoresBluetoothDeviceUID=_ignoresBluetoothDeviceUID;
@property(nonatomic) NSString *ringtoneSubscriptionIdentifier; // @synthesize ringtoneSubscriptionIdentifier=_ringtoneSubscriptionIdentifier;
@property(nonatomic) _Bool hasAudioFinished; // @synthesize hasAudioFinished=_hasAudioFinished;
@property(nonatomic) _Bool hasAudioInterruption; // @synthesize hasAudioInterruption=_hasAudioInterruption;
@property(nonatomic) _Bool uplinkWasExplicitlyMuted; // @synthesize uplinkWasExplicitlyMuted=_uplinkWasExplicitlyMuted;
@property(retain, nonatomic) NSDate *dateStartedOutgoing; // @synthesize dateStartedOutgoing=_dateStartedOutgoing;
@property(retain, nonatomic) TUDialRequest *dialRequest; // @synthesize dialRequest=_dialRequest;
@property(nonatomic) __weak CSDCallDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <CSDCallDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=hasIdentifiedSpamInCallerName) _Bool identifiedSpamInCallerName; // @synthesize identifiedSpamInCallerName=_identifiedSpamInCallerName;
@property(nonatomic, getter=hasNondisclosedGreeting) _Bool nondisclosedGreeting; // @synthesize nondisclosedGreeting=_nondisclosedGreeting;
@property(nonatomic, getter=isAnsweringMachineAvailable) _Bool answeringMachineAvailable; // @synthesize answeringMachineAvailable=_answeringMachineAvailable;
@property(nonatomic, getter=isLocalUserInHomeCountry) _Bool localUserInHomeCountry; // @synthesize localUserInHomeCountry=_localUserInHomeCountry;
@property(nonatomic) _Bool joinedFromLink; // @synthesize joinedFromLink=_joinedFromLink;
@property(nonatomic) _Bool isKnownCaller; // @synthesize isKnownCaller=_isKnownCaller;
@property(nonatomic) long long identificationCategory; // @synthesize identificationCategory=_identificationCategory;
@property(nonatomic) long long junkConfidence; // @synthesize junkConfidence=_junkConfidence;
@property(nonatomic) _Bool isSendingAudio; // @synthesize isSendingAudio=_isSendingAudio;
- (oneway void)handleAudioSessionActivationStateChangedTo:(id)arg1;	// IMP=0x00100000000e11db
- (void)displayContextChanged:(id)arg1;	// IMP=0x00100000000e11c9
- (void)performUplinkMuted:(_Bool)arg1;	// IMP=0x00100000000e11c3
- (void)handleUpdatedPropertiesAfterChangesInBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000e05c6
- (void)propertiesChanged;	// IMP=0x00100000000e057a
@property(readonly, nonatomic) CXCall *cxCall;
@property(readonly, nonatomic) _Bool mediaPlaybackOnExternalDevice;
@property(readonly, nonatomic) _Bool mixesVoiceWithMedia;
@property(readonly, nonatomic) _Bool mayRequireBreakBeforeMake;
@property(readonly, nonatomic) long long providerEndedReason;
@property(readonly, nonatomic) long long providerErrorCode;
- (id)displayContext;	// IMP=0x00100000000e01f7
- (void)_refreshFaceTimeIDSStatusIfNecessary;	// IMP=0x00100000000dfe6c
- (int)faceTimeIDStatus;	// IMP=0x00100000000dfe2e
@property(readonly, copy, nonatomic) NSDictionary *handoffActivityUserInfo;
@property(readonly, copy, nonatomic) NSString *handoffDynamicIdentifier;
- (_Bool)isSOS;	// IMP=0x00100000000dfd7c
- (_Bool)isEmergency;	// IMP=0x00100000000dfcd5
- (_Bool)isVoicemail;	// IMP=0x00100000000dfc2e
- (_Bool)isOutgoing;	// IMP=0x00100000000dfbc6
- (id)handle;	// IMP=0x00100000000dfb10
@property(readonly, nonatomic) long long audioInterruptionOperationMode;
@property(readonly, nonatomic) long long audioInterruptionProviderType;
@property(readonly, nonatomic) _Bool hasStartedOutgoing;
@property(readonly, nonatomic) int callStatusFromOverride;
@property(readonly, nonatomic) _Bool shouldOverrideCallStatus;
@property(readonly, nonatomic) int callStatusFromUnderlyingSource;
- (int)callStatus;	// IMP=0x00100000000df9e9
@property(readonly, nonatomic) _Bool shouldHandleMuteRequests;
@property(readonly, nonatomic) _Bool shouldOwnMuteHandler;
- (void)updateUplinkMuted:(_Bool)arg1;	// IMP=0x00100000000df5d3
- (void)setUplinkMuted:(_Bool)arg1;	// IMP=0x00100000000df5b6
- (void)setDateEnded:(id)arg1;	// IMP=0x00100000000df3b0
- (void)setDateConnected:(id)arg1;	// IMP=0x00100000000df2d8
- (void)setDateStartedConnecting:(id)arg1;	// IMP=0x00100000000df1e8
- (void)setDateSentInvitation:(id)arg1;	// IMP=0x00100000000df04a
- (void)setScreening:(_Bool)arg1;	// IMP=0x00100000000def70
- (void)setEndpointOnCurrentDevice:(_Bool)arg1;	// IMP=0x00100000000deeba
- (void)setAnsweringMachineStreamToken:(long long)arg1;	// IMP=0x00100000000dee04
- (void)setModel:(id)arg1;	// IMP=0x00100000000ded08
- (void)setSoundRegion:(long long)arg1;	// IMP=0x00100000000dec52
- (void)setFaceTimeIDStatus:(int)arg1;	// IMP=0x00100000000deb9d
- (void)setShouldSuppressRingtone:(_Bool)arg1;	// IMP=0x00100000000deae7
- (void)setDisconnectedReason:(int)arg1;	// IMP=0x00100000000dea32
- (void)setScreeningAnnouncementHasFinished:(_Bool)arg1;	// IMP=0x00100000000de97c
- (void)setWasDialAssisted:(_Bool)arg1;	// IMP=0x00100000000de8c6
- (void)setWantsHoldMusic:(_Bool)arg1;	// IMP=0x00100000000de810
- (void)setTransitionStatus:(int)arg1;	// IMP=0x00100000000de75b
- (void)playRemoteDTMFToneForKey:(unsigned char)arg1;	// IMP=0x00100000000de5d4
- (void)playLocalDTMFToneForKey:(unsigned char)arg1;	// IMP=0x00100000000de5ce
- (void)updateWithProxyCall:(id)arg1;	// IMP=0x00100000000de53d
- (void)updateForDisconnection;	// IMP=0x00100000000de537
- (void)unsuppressRingtoneIfNecessary;	// IMP=0x00100000000de14b
- (void)disconnect;	// IMP=0x00100000000de137
- (void)dialWithRequest:(id)arg1 displayContext:(id)arg2;	// IMP=0x00100000000dded3
- (_Bool)needsGFTRelaySupport;	// IMP=0x00100000000dde51
- (int)callRelaySupport;	// IMP=0x00100000000ddcc6
- (void)unmuteAfterDisconnect;	// IMP=0x00100000000ddcb2
- (void)setupInputMuteHandlerWithFeatureFlags:(id)arg1 forApplication:(id)arg2;	// IMP=0x00100000000ddcac
- (void)setupInputMuteHandlerWithFeatureFlags:(id)arg1;	// IMP=0x00100000000ddca6
- (void)dealloc;	// IMP=0x00100000000ddc10
- (id)initWithUniqueProxyIdentifier:(id)arg1 configuration:(id)arg2;	// IMP=0x00100000000ddb9c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool prefersToPlayDuringWombat;
@property(readonly) Class superclass;

@end


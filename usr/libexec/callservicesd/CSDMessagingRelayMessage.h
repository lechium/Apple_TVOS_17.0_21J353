//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CSDMessagingAVConferenceInviteData, CSDMessagingCallCapabilitiesState, CSDMessagingCallDisplayContext, CSDMessagingCallModel, CSDMessagingCallModelState, CSDMessagingCallProvider, CSDMessagingHandle, CSDMessagingRoute, IDSDestination, NSArray, NSData, NSMutableArray, NSSet, NSString, NSUUID, TUCallCapabilitiesState, TUCallDisplayContext, TUCallModel, TUCallProvider, TUDialRequest, TUHandle, TUJoinConversationRequest;

@interface CSDMessagingRelayMessage : PBCodable
{
    double _hostCallCreationTime;	// 8 = 0x8
    double _messageSendTime;	// 16 = 0x10
    NSString *_callerNameFromNetwork;	// 24 = 0x18
    NSString *_contactIdentifier;	// 32 = 0x20
    NSMutableArray *_conversationMembers;	// 40 = 0x28
    NSString *_conversationUUIDString;	// 48 = 0x30
    NSMutableArray *_conversations;	// 56 = 0x38
    NSString *_destinationID;	// 64 = 0x40
    NSData *_dummyPayload;	// 72 = 0x48
    NSMutableArray *_endpointIDSDestinationURIs;	// 80 = 0x50
    NSString *_groupUUIDString;	// 88 = 0x58
    CSDMessagingHandle *_handle;	// 96 = 0x60
    NSMutableArray *_handlesToInvites;	// 104 = 0x68
    NSString *_hardPauseDigits;	// 112 = 0x70
    unsigned int _hardPauseState;	// 120 = 0x78
    CSDMessagingAVConferenceInviteData *_inviteData;	// 128 = 0x80
    NSString *_isoCountryCode;	// 136 = 0x88
    NSString *_joinConversationRequestURLString;	// 144 = 0x90
    NSString *_localSenderIdentityAccountUUIDString;	// 152 = 0x98
    NSString *_localSenderIdentityUUIDString;	// 160 = 0xa0
    NSString *_oBSOLETEConferenceIdentifier;	// 168 = 0xa8
    NSMutableArray *_otherUniqueProxyIdentifiers;	// 176 = 0xb0
    NSMutableArray *_prominenceEntrys;	// 184 = 0xb8
    CSDMessagingCallCapabilitiesState *_protoCallCapabilitiesState;	// 192 = 0xc0
    CSDMessagingCallModel *_protoCallModel;	// 200 = 0xc8
    CSDMessagingCallModelState *_protoCallModelState;	// 208 = 0xd0
    NSMutableArray *_protoCalls;	// 216 = 0xd8
    NSData *_protoDTMFKey;	// 224 = 0xe0
    unsigned int _protoDisconnectedReason;	// 232 = 0xe8
    CSDMessagingCallDisplayContext *_protoDisplayContext;	// 240 = 0xf0
    unsigned int _protoOriginatingUIType;	// 248 = 0xf8
    unsigned int _protoPriority;	// 252 = 0xfc
    unsigned int _protoProtocolVersion;	// 256 = 0x100
    CSDMessagingCallProvider *_protoProvider;	// 264 = 0x108
    unsigned int _protoService;	// 272 = 0x110
    unsigned int _protoSoundRegion;	// 276 = 0x114
    unsigned int _protoTTYType;	// 280 = 0x118
    NSMutableArray *_providers;	// 288 = 0x120
    int _receivedMessageType;	// 296 = 0x128
    NSMutableArray *_remoteParticipantHandles;	// 304 = 0x130
    int _requestActionType;	// 312 = 0x138
    CSDMessagingRoute *_route;	// 320 = 0x140
    NSMutableArray *_routes;	// 328 = 0x148
    NSString *_sourceIdentifier;	// 336 = 0x150
    float _systemVolume;	// 344 = 0x158
    int _type;	// 348 = 0x15c
    NSString *_uniqueProxyIdentifier;	// 352 = 0x160
    _Bool _protoCannotBeAnswered;	// 360 = 0x168
    _Bool _protoCannotRelayAudioOrVideoOnPairedDevice;	// 361 = 0x169
    _Bool _protoEmergency;	// 362 = 0x16a
    _Bool _protoExpectedEndpointOnMessagingDevice;	// 363 = 0x16b
    _Bool _protoFailureExpected;	// 364 = 0x16c
    _Bool _protoNeedsManualInCallSounds;	// 365 = 0x16d
    _Bool _protoRemoteUplinkMuted;	// 366 = 0x16e
    _Bool _protoSOS;	// 367 = 0x16f
    _Bool _protoShouldSuppressRingtone;	// 368 = 0x170
    _Bool _protoSupportsEmergencyFallback;	// 369 = 0x171
    _Bool _protoSupportsTTYWithVoice;	// 370 = 0x172
    _Bool _protoUplinkMuted;	// 371 = 0x173
    _Bool _protoVideo;	// 372 = 0x174
    _Bool _protoVoicemail;	// 373 = 0x175
    _Bool _protoWantsHoldMusic;	// 374 = 0x176
    struct {
        unsigned int hostCallCreationTime:1;
        unsigned int messageSendTime:1;
        unsigned int hardPauseState:1;
        unsigned int protoDisconnectedReason:1;
        unsigned int protoOriginatingUIType:1;
        unsigned int protoPriority:1;
        unsigned int protoProtocolVersion:1;
        unsigned int protoService:1;
        unsigned int protoSoundRegion:1;
        unsigned int protoTTYType:1;
        unsigned int receivedMessageType:1;
        unsigned int requestActionType:1;
        unsigned int systemVolume:1;
        unsigned int type:1;
        unsigned int protoCannotBeAnswered:1;
        unsigned int protoCannotRelayAudioOrVideoOnPairedDevice:1;
        unsigned int protoEmergency:1;
        unsigned int protoExpectedEndpointOnMessagingDevice:1;
        unsigned int protoFailureExpected:1;
        unsigned int protoNeedsManualInCallSounds:1;
        unsigned int protoRemoteUplinkMuted:1;
        unsigned int protoSOS:1;
        unsigned int protoShouldSuppressRingtone:1;
        unsigned int protoSupportsEmergencyFallback:1;
        unsigned int protoSupportsTTYWithVoice:1;
        unsigned int protoUplinkMuted:1;
        unsigned int protoVideo:1;
        unsigned int protoVoicemail:1;
        unsigned int protoWantsHoldMusic:1;
    } _has;	// 376 = 0x178
}

+ (Class)prominenceEntryType;	// IMP=0x00200000000781cf
+ (Class)handlesToInviteType;	// IMP=0x00100000000780fd
+ (Class)conversationMembersType;	// IMP=0x001000000007802b
+ (Class)conversationsType;	// IMP=0x0010000000077f2f
+ (Class)endpointIDSDestinationURIsType;	// IMP=0x0010000000077d01
+ (Class)routesType;	// IMP=0x0010000000077c1a
+ (Class)remoteParticipantHandlesType;	// IMP=0x0010000000077297
+ (Class)providersType;	// IMP=0x0010000000077034
+ (Class)otherUniqueProxyIdentifiersType;	// IMP=0x0010000000076ee9
+ (Class)protoCallType;	// IMP=0x00100000000762cb
- (void).cxx_destruct;	// IMP=0x00100000000819a7
@property(retain, nonatomic) NSMutableArray *prominenceEntrys; // @synthesize prominenceEntrys=_prominenceEntrys;
@property(retain, nonatomic) NSMutableArray *handlesToInvites; // @synthesize handlesToInvites=_handlesToInvites;
@property(retain, nonatomic) NSMutableArray *conversationMembers; // @synthesize conversationMembers=_conversationMembers;
@property(retain, nonatomic) NSString *conversationUUIDString; // @synthesize conversationUUIDString=_conversationUUIDString;
@property(retain, nonatomic) NSString *joinConversationRequestURLString; // @synthesize joinConversationRequestURLString=_joinConversationRequestURLString;
@property(retain, nonatomic) NSMutableArray *conversations; // @synthesize conversations=_conversations;
@property(retain, nonatomic) NSString *groupUUIDString; // @synthesize groupUUIDString=_groupUUIDString;
@property(nonatomic) _Bool protoSupportsEmergencyFallback; // @synthesize protoSupportsEmergencyFallback=_protoSupportsEmergencyFallback;
@property(nonatomic) _Bool protoFailureExpected; // @synthesize protoFailureExpected=_protoFailureExpected;
@property(nonatomic) unsigned int protoOriginatingUIType; // @synthesize protoOriginatingUIType=_protoOriginatingUIType;
@property(nonatomic) unsigned int protoPriority; // @synthesize protoPriority=_protoPriority;
@property(retain, nonatomic) NSString *isoCountryCode; // @synthesize isoCountryCode=_isoCountryCode;
@property(retain, nonatomic) NSMutableArray *endpointIDSDestinationURIs; // @synthesize endpointIDSDestinationURIs=_endpointIDSDestinationURIs;
@property(retain, nonatomic) CSDMessagingRoute *route; // @synthesize route=_route;
@property(retain, nonatomic) NSMutableArray *routes; // @synthesize routes=_routes;
@property(nonatomic) _Bool protoSupportsTTYWithVoice; // @synthesize protoSupportsTTYWithVoice=_protoSupportsTTYWithVoice;
@property(nonatomic) unsigned int protoTTYType; // @synthesize protoTTYType=_protoTTYType;
@property(retain, nonatomic) NSString *localSenderIdentityAccountUUIDString; // @synthesize localSenderIdentityAccountUUIDString=_localSenderIdentityAccountUUIDString;
@property(retain, nonatomic) NSMutableArray *remoteParticipantHandles; // @synthesize remoteParticipantHandles=_remoteParticipantHandles;
@property(retain, nonatomic) NSString *localSenderIdentityUUIDString; // @synthesize localSenderIdentityUUIDString=_localSenderIdentityUUIDString;
@property(nonatomic) float systemVolume; // @synthesize systemVolume=_systemVolume;
@property(nonatomic) _Bool protoRemoteUplinkMuted; // @synthesize protoRemoteUplinkMuted=_protoRemoteUplinkMuted;
@property(nonatomic) _Bool protoUplinkMuted; // @synthesize protoUplinkMuted=_protoUplinkMuted;
@property(nonatomic) _Bool protoVideo; // @synthesize protoVideo=_protoVideo;
@property(retain, nonatomic) CSDMessagingCallProvider *protoProvider; // @synthesize protoProvider=_protoProvider;
@property(retain, nonatomic) CSDMessagingAVConferenceInviteData *inviteData; // @synthesize inviteData=_inviteData;
@property(retain, nonatomic) CSDMessagingCallDisplayContext *protoDisplayContext; // @synthesize protoDisplayContext=_protoDisplayContext;
@property(retain, nonatomic) NSMutableArray *providers; // @synthesize providers=_providers;
@property(nonatomic) _Bool protoSOS; // @synthesize protoSOS=_protoSOS;
@property(retain, nonatomic) CSDMessagingHandle *handle; // @synthesize handle=_handle;
@property(retain, nonatomic) CSDMessagingCallModel *protoCallModel; // @synthesize protoCallModel=_protoCallModel;
@property(retain, nonatomic) NSMutableArray *otherUniqueProxyIdentifiers; // @synthesize otherUniqueProxyIdentifiers=_otherUniqueProxyIdentifiers;
@property(nonatomic) _Bool protoEmergency; // @synthesize protoEmergency=_protoEmergency;
@property(nonatomic) unsigned int protoSoundRegion; // @synthesize protoSoundRegion=_protoSoundRegion;
@property(retain, nonatomic) CSDMessagingCallCapabilitiesState *protoCallCapabilitiesState; // @synthesize protoCallCapabilitiesState=_protoCallCapabilitiesState;
@property(retain, nonatomic) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
@property(nonatomic) _Bool protoExpectedEndpointOnMessagingDevice; // @synthesize protoExpectedEndpointOnMessagingDevice=_protoExpectedEndpointOnMessagingDevice;
@property(nonatomic) _Bool protoCannotRelayAudioOrVideoOnPairedDevice; // @synthesize protoCannotRelayAudioOrVideoOnPairedDevice=_protoCannotRelayAudioOrVideoOnPairedDevice;
@property(nonatomic) _Bool protoNeedsManualInCallSounds; // @synthesize protoNeedsManualInCallSounds=_protoNeedsManualInCallSounds;
@property(nonatomic) double messageSendTime; // @synthesize messageSendTime=_messageSendTime;
@property(nonatomic) double hostCallCreationTime; // @synthesize hostCallCreationTime=_hostCallCreationTime;
@property(retain, nonatomic) NSData *dummyPayload; // @synthesize dummyPayload=_dummyPayload;
@property(nonatomic) _Bool protoShouldSuppressRingtone; // @synthesize protoShouldSuppressRingtone=_protoShouldSuppressRingtone;
@property(nonatomic) unsigned int protoProtocolVersion; // @synthesize protoProtocolVersion=_protoProtocolVersion;
@property(nonatomic) unsigned int hardPauseState; // @synthesize hardPauseState=_hardPauseState;
@property(retain, nonatomic) NSString *hardPauseDigits; // @synthesize hardPauseDigits=_hardPauseDigits;
@property(retain, nonatomic) NSMutableArray *protoCalls; // @synthesize protoCalls=_protoCalls;
@property(retain, nonatomic) NSString *callerNameFromNetwork; // @synthesize callerNameFromNetwork=_callerNameFromNetwork;
@property(nonatomic) _Bool protoVoicemail; // @synthesize protoVoicemail=_protoVoicemail;
@property(retain, nonatomic) NSString *oBSOLETEConferenceIdentifier; // @synthesize oBSOLETEConferenceIdentifier=_oBSOLETEConferenceIdentifier;
@property(nonatomic) unsigned int protoDisconnectedReason; // @synthesize protoDisconnectedReason=_protoDisconnectedReason;
@property(retain, nonatomic) NSData *protoDTMFKey; // @synthesize protoDTMFKey=_protoDTMFKey;
@property(nonatomic) _Bool protoCannotBeAnswered; // @synthesize protoCannotBeAnswered=_protoCannotBeAnswered;
@property(nonatomic) _Bool protoWantsHoldMusic; // @synthesize protoWantsHoldMusic=_protoWantsHoldMusic;
@property(nonatomic) unsigned int protoService; // @synthesize protoService=_protoService;
@property(retain, nonatomic) CSDMessagingCallModelState *protoCallModelState; // @synthesize protoCallModelState=_protoCallModelState;
@property(retain, nonatomic) NSString *sourceIdentifier; // @synthesize sourceIdentifier=_sourceIdentifier;
- (id);	// IMP=0x0010000000081386
@property(retain, nonatomic) NSString *destinationID; // @synthesize destinationID=_destinationID;
@property(retain, nonatomic) NSString *uniqueProxyIdentifier; // @synthesize uniqueProxyIdentifier=_uniqueProxyIdentifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000080114
- (unsigned long long)hash;	// IMP=0x001000000007f5cc
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000007e949
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000007d490
- (void)copyTo:(id)arg1;	// IMP=0x001000000007c87a
- (void)writeTo:(id)arg1;	// IMP=0x001000000007b909
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000007b8fc
- (id)dictionaryRepresentation;	// IMP=0x001000000007828f
- (id)description;	// IMP=0x00100000000781e0
- (id)prominenceEntryAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000781b2
- (unsigned long long)prominenceEntrysCount;	// IMP=0x0010000000078195
- (void)addProminenceEntry:(id)arg1;	// IMP=0x001000000007812b
- (void)clearProminenceEntrys;	// IMP=0x001000000007810e
- (id)handlesToInviteAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000780e0
- (unsigned long long)handlesToInvitesCount;	// IMP=0x00100000000780c3
- (void)addHandlesToInvite:(id)arg1;	// IMP=0x0010000000078059
- (void)clearHandlesToInvites;	// IMP=0x001000000007803c
- (id)conversationMembersAtIndex:(unsigned long long)arg1;	// IMP=0x001000000007800e
- (unsigned long long)conversationMembersCount;	// IMP=0x0010000000077ff1
- (void)addConversationMembers:(id)arg1;	// IMP=0x0010000000077f87
- (void)clearConversationMembers;	// IMP=0x0010000000077f6a
@property(readonly, nonatomic) _Bool hasConversationUUIDString;
@property(readonly, nonatomic) _Bool hasJoinConversationRequestURLString;
- (id)conversationsAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000077f12
- (unsigned long long)conversationsCount;	// IMP=0x0010000000077ef5
- (void)addConversations:(id)arg1;	// IMP=0x0010000000077e8b
- (void)clearConversations;	// IMP=0x0010000000077e6e
@property(readonly, nonatomic) _Bool hasGroupUUIDString;
@property(nonatomic) _Bool hasProtoSupportsEmergencyFallback;
@property(nonatomic) _Bool hasProtoFailureExpected;
@property(nonatomic) _Bool hasProtoOriginatingUIType;
@property(nonatomic) _Bool hasProtoPriority;
@property(readonly, nonatomic) _Bool hasIsoCountryCode;
- (id)endpointIDSDestinationURIsAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000077ce4
- (unsigned long long)endpointIDSDestinationURIsCount;	// IMP=0x0010000000077cc7
- (void)addEndpointIDSDestinationURIs:(id)arg1;	// IMP=0x0010000000077c5d
- (void)clearEndpointIDSDestinationURIs;	// IMP=0x0010000000077c40
@property(readonly, nonatomic) _Bool hasRoute;
- (id)routesAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000077bfd
- (unsigned long long)routesCount;	// IMP=0x0010000000077be0
- (void)addRoutes:(id)arg1;	// IMP=0x0010000000077b76
- (void)clearRoutes;	// IMP=0x0010000000077b59
- (int)StringAsRequestActionType:(id)arg1;	// IMP=0x001000000007740f
- (id)requestActionTypeAsString:(int)arg1;	// IMP=0x00100000000773c6
@property(nonatomic) _Bool hasRequestActionType;
@property(nonatomic) int requestActionType; // @synthesize requestActionType=_requestActionType;
@property(nonatomic) _Bool hasProtoSupportsTTYWithVoice;
@property(nonatomic) _Bool hasProtoTTYType;
@property(readonly, nonatomic) _Bool hasLocalSenderIdentityAccountUUIDString;
- (id)remoteParticipantHandlesAtIndex:(unsigned long long)arg1;	// IMP=0x001000000007727a
- (unsigned long long)remoteParticipantHandlesCount;	// IMP=0x001000000007725d
- (void)addRemoteParticipantHandles:(id)arg1;	// IMP=0x00100000000771f3
- (void)clearRemoteParticipantHandles;	// IMP=0x00100000000771d6
@property(readonly, nonatomic) _Bool hasLocalSenderIdentityUUIDString;
@property(nonatomic) _Bool hasSystemVolume;
@property(nonatomic) _Bool hasProtoRemoteUplinkMuted;
@property(nonatomic) _Bool hasProtoUplinkMuted;
@property(nonatomic) _Bool hasProtoVideo;
@property(readonly, nonatomic) _Bool hasProtoProvider;
@property(readonly, nonatomic) _Bool hasInviteData;
@property(readonly, nonatomic) _Bool hasProtoDisplayContext;
- (id)providersAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000077017
- (unsigned long long)providersCount;	// IMP=0x0010000000076ffa
- (void)addProviders:(id)arg1;	// IMP=0x0010000000076f90
- (void)clearProviders;	// IMP=0x0010000000076f73
// Error: Property attributes should begin with the type ('T') attribute, property name: hasProtoSOS
// Property attributes: (null)

@property(readonly, nonatomic) _Bool hasHandle;
@property(readonly, nonatomic) _Bool hasProtoCallModel;
- (id)otherUniqueProxyIdentifiersAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000076ecc
- (unsigned long long)otherUniqueProxyIdentifiersCount;	// IMP=0x0010000000076eaf
- (void)addOtherUniqueProxyIdentifiers:(id)arg1;	// IMP=0x0010000000076e45
- (void)clearOtherUniqueProxyIdentifiers;	// IMP=0x0010000000076e28
@property(nonatomic) _Bool hasProtoEmergency;
@property(nonatomic) _Bool hasProtoSoundRegion;
@property(readonly, nonatomic) _Bool hasProtoCallCapabilitiesState;
@property(readonly, nonatomic) _Bool hasContactIdentifier;
@property(nonatomic) _Bool hasProtoExpectedEndpointOnMessagingDevice;
@property(nonatomic) _Bool hasProtoCannotRelayAudioOrVideoOnPairedDevice;
@property(nonatomic) _Bool hasProtoNeedsManualInCallSounds;
@property(nonatomic) _Bool hasMessageSendTime;
@property(nonatomic) _Bool hasHostCallCreationTime;
@property(readonly, nonatomic) _Bool hasDummyPayload;
@property(nonatomic) _Bool hasProtoShouldSuppressRingtone;
@property(nonatomic) _Bool hasProtoProtocolVersion;
- (int)StringAsReceivedMessageType:(id)arg1;	// IMP=0x00100000000763f2
- (id)receivedMessageTypeAsString:(int)arg1;	// IMP=0x00100000000763a9
@property(nonatomic) _Bool hasReceivedMessageType;
@property(nonatomic) int receivedMessageType; // @synthesize receivedMessageType=_receivedMessageType;
@property(nonatomic) _Bool hasHardPauseState;
@property(readonly, nonatomic) _Bool hasHardPauseDigits;
- (id)protoCallAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000762ae
- (unsigned long long)protoCallsCount;	// IMP=0x0010000000076291
- (void)addProtoCall:(id)arg1;	// IMP=0x0010000000076227
- (void)clearProtoCalls;	// IMP=0x001000000007620a
@property(readonly, nonatomic) _Bool hasCallerNameFromNetwork;
@property(nonatomic) _Bool hasProtoVoicemail;
@property(readonly, nonatomic) _Bool hasOBSOLETEConferenceIdentifier;
@property(nonatomic) _Bool hasProtoDisconnectedReason;
@property(readonly, nonatomic) _Bool hasProtoDTMFKey;
@property(nonatomic) _Bool hasProtoCannotBeAnswered;
@property(nonatomic) _Bool hasProtoWantsHoldMusic;
@property(nonatomic) _Bool hasProtoService;
@property(readonly, nonatomic) _Bool hasProtoCallModelState;
@property(readonly, nonatomic) _Bool hasSourceIdentifier;
@property(readonly, nonatomic) _Bool hasDestinationID;
@property(readonly, nonatomic) _Bool hasUniqueProxyIdentifier;
- (int)StringAsType:(id)arg1;	// IMP=0x00100000000758ac
- (id)typeAsString:(int)arg1;	// IMP=0x0010000000075863
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) int originatingUIType;
@property(nonatomic) long long priority;
@property(nonatomic) _Bool supportsTTYWithVoice;
@property(nonatomic) int ttyType;
@property(copy, nonatomic) NSSet *remoteParticipantTUHandles;
@property(retain, nonatomic) NSUUID *localSenderIdentityAccountUUID;
@property(retain, nonatomic) NSUUID *localSenderIdentityUUID;
@property(retain, nonatomic) IDSDestination *endpointIDSDestination;
@property(retain, nonatomic) TUCallDisplayContext *displayContext;
- (void)setTuProvider:(id)arg1 isVideo:(_Bool)arg2;	// IMP=0x001000000004d272
@property(nonatomic, getter=isVideo) _Bool video;
@property(retain, nonatomic) TUCallProvider *tuProvider;
@property(retain, nonatomic) NSArray *tuProviders;
@property(retain, nonatomic) TUHandle *tuHandle;
- (void)addCall:(id)arg1;	// IMP=0x001000000004ca1b
@property(retain, nonatomic) TUCallModel *callModel;
@property(nonatomic, getter=isRemoteUplinkMuted) _Bool remoteUplinkMuted;
@property(nonatomic, getter=isUplinkMuted) _Bool uplinkMuted;
@property(nonatomic, getter=isSOS, setter=setSOS:) _Bool sos;
@property(nonatomic) _Bool supportsEmergencyFallback;
@property(nonatomic, getter=isFailureExpected) _Bool failureExpected;
@property(nonatomic, getter=isEmergency) _Bool emergency;
@property(retain, nonatomic) TUCallCapabilitiesState *callCapabilitiesState;
@property(nonatomic) long long soundRegion;
@property(nonatomic, getter=isExpectedEndpointOnMessagingDevice) _Bool expectedEndpointOnMessagingDevice;
@property(nonatomic) _Bool cannotRelayAudioOrVideoOnPairedDevice;
@property(nonatomic) _Bool needsManualInCallSounds;
@property(nonatomic) _Bool shouldSuppressRingtone;
- (void)customizeForProtocolVersion:(int)arg1;	// IMP=0x001000000004bab2
- (void)addProtocolVersion;	// IMP=0x001000000004ba9b
@property(nonatomic) int protocolVersion;
@property(nonatomic) int hardPauseDigitsState;
@property(nonatomic, getter=isVoicemail) _Bool voicemail;
@property(nonatomic) unsigned char DTMFKey;
@property(nonatomic) _Bool cannotBeAnswered;
@property(nonatomic) int disconnectedReason;
@property(nonatomic) _Bool wantsHoldMusic;
- (void)setService:(int)arg1;	// IMP=0x001000000004b7be
- (int)service;	// IMP=0x001000000004b7ac
@property(readonly, nonatomic) TUJoinConversationRequest *joinConversationRequest;
@property(readonly, nonatomic) TUDialRequest *dialRequest;
@property(readonly, copy, nonatomic) NSString *receivedMessageTypeString;
@property(readonly, copy, nonatomic) NSString *typeString;
- (id)initBuzzMemberMessage:(id)arg1 conversationUUID:(id)arg2;	// IMP=0x001000000004b0f6
- (id)initAddRemoteMemberMessageWithMembers:(id)arg1 otherInvitedHandles:(id)arg2 conversationWithUUID:(id)arg3;	// IMP=0x001000000004ac76
- (id)initWithType:(int)arg1 uniqueProxyIdentifier:(id)arg2;	// IMP=0x001000000004ac15
- (id)initWithType:(int)arg1;	// IMP=0x001000000004ab36
- (id)initWithDictionary:(id)arg1;	// IMP=0x001000000004a899

@end

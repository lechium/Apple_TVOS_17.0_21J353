//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, NSString, NSUUID, TUConversationActivity, TUConversationParticipantAssociation, TUConversationProvider;

@interface CSDConversationJoinContext : NSObject
{
    _Bool _invitation;	// 8 = 0x8
    _Bool _shouldSuppressInCallUI;	// 9 = 0x9
    _Bool _videoEnabled;	// 10 = 0xa
    _Bool _videoPaused;	// 11 = 0xb
    _Bool _wantsStagingArea;	// 12 = 0xc
    _Bool _representsTransitionFromPending;	// 13 = 0xd
    _Bool _upgrade;	// 14 = 0xe
    _Bool _initiator;	// 15 = 0xf
    _Bool _momentsAvailable;	// 16 = 0x10
    _Bool _screening;	// 17 = 0x11
    _Bool _personaAvailable;	// 18 = 0x12
    _Bool _gftDowngradeToOneToOneAvailable;	// 19 = 0x13
    _Bool _uPlusNDowngradeAvailable;	// 20 = 0x14
    _Bool _supportsLeaveContext;	// 21 = 0x15
    _Bool _uPlusOneScrenShareAvailable;	// 22 = 0x16
    _Bool _uPlusOneAVLessAvailable;	// 23 = 0x17
    _Bool _video;	// 24 = 0x18
    _Bool _lightweight;	// 25 = 0x19
    _Bool _oneToOneModeEnabled;	// 26 = 0x1a
    _Bool _spatialPersonaEnabled;	// 27 = 0x1b
    NSUUID *_messagesGroupUUID;	// 32 = 0x20
    NSString *_messagesGroupName;	// 40 = 0x28
    NSUUID *_upgradeSessionUUID;	// 48 = 0x30
    unsigned long long _avMode;	// 56 = 0x38
    unsigned long long _presentationMode;	// 64 = 0x40
    TUConversationProvider *_provider;	// 72 = 0x48
    NSSet *_invitationPreferences;	// 80 = 0x50
    unsigned long long _sharePlayProtocolVersion;	// 88 = 0x58
    unsigned long long _visionFeatureVersion;	// 96 = 0x60
    unsigned long long _visionCallEstablishmentVersion;	// 104 = 0x68
    TUConversationParticipantAssociation *_participantAssociation;	// 112 = 0x70
    NSString *_collaborationIdentifier;	// 120 = 0x78
    TUConversationActivity *_activity;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x0020000000069303
@property(nonatomic, getter=isSpatialPersonaEnabled) _Bool spatialPersonaEnabled; // @synthesize spatialPersonaEnabled=_spatialPersonaEnabled;
@property(copy, nonatomic) TUConversationActivity *activity; // @synthesize activity=_activity;
@property(copy, nonatomic) NSString *collaborationIdentifier; // @synthesize collaborationIdentifier=_collaborationIdentifier;
@property(copy, nonatomic) TUConversationParticipantAssociation *participantAssociation; // @synthesize participantAssociation=_participantAssociation;
@property(nonatomic) unsigned long long visionCallEstablishmentVersion; // @synthesize visionCallEstablishmentVersion=_visionCallEstablishmentVersion;
@property(nonatomic) unsigned long long visionFeatureVersion; // @synthesize visionFeatureVersion=_visionFeatureVersion;
@property(nonatomic) unsigned long long sharePlayProtocolVersion; // @synthesize sharePlayProtocolVersion=_sharePlayProtocolVersion;
@property(retain, nonatomic) NSSet *invitationPreferences; // @synthesize invitationPreferences=_invitationPreferences;
@property(retain, nonatomic) TUConversationProvider *provider; // @synthesize provider=_provider;
@property(nonatomic) unsigned long long presentationMode; // @synthesize presentationMode=_presentationMode;
@property(nonatomic) unsigned long long avMode; // @synthesize avMode=_avMode;
@property(nonatomic, getter=isOneToOneModeEnabled) _Bool oneToOneModeEnabled; // @synthesize oneToOneModeEnabled=_oneToOneModeEnabled;
@property(copy, nonatomic) NSUUID *upgradeSessionUUID; // @synthesize upgradeSessionUUID=_upgradeSessionUUID;
@property(copy, nonatomic) NSString *messagesGroupName; // @synthesize messagesGroupName=_messagesGroupName;
@property(copy, nonatomic) NSUUID *messagesGroupUUID; // @synthesize messagesGroupUUID=_messagesGroupUUID;
@property(nonatomic, getter=isLightweight) _Bool lightweight; // @synthesize lightweight=_lightweight;
@property(nonatomic, getter=isVideo) _Bool video; // @synthesize video=_video;
@property(nonatomic, getter=isUPlusOneAVLessAvailable) _Bool uPlusOneAVLessAvailable; // @synthesize uPlusOneAVLessAvailable=_uPlusOneAVLessAvailable;
@property(nonatomic, getter=isUPlusOneScreenShareAvailable) _Bool uPlusOneScrenShareAvailable; // @synthesize uPlusOneScrenShareAvailable=_uPlusOneScrenShareAvailable;
@property(nonatomic) _Bool supportsLeaveContext; // @synthesize supportsLeaveContext=_supportsLeaveContext;
@property(nonatomic, getter=isUPlusNDowngradeAvailable) _Bool uPlusNDowngradeAvailable; // @synthesize uPlusNDowngradeAvailable=_uPlusNDowngradeAvailable;
@property(nonatomic, getter=isGFTDowngradeToOneToOneAvailable) _Bool gftDowngradeToOneToOneAvailable; // @synthesize gftDowngradeToOneToOneAvailable=_gftDowngradeToOneToOneAvailable;
@property(nonatomic, getter=isPersonaAvailable) _Bool personaAvailable; // @synthesize personaAvailable=_personaAvailable;
@property(nonatomic, getter=isScreening) _Bool screening; // @synthesize screening=_screening;
@property(nonatomic, getter=isMomentsAvailable) _Bool momentsAvailable; // @synthesize momentsAvailable=_momentsAvailable;
@property(nonatomic, getter=isInitiator) _Bool initiator; // @synthesize initiator=_initiator;
@property(nonatomic, getter=isUpgrade) _Bool upgrade; // @synthesize upgrade=_upgrade;
@property(nonatomic) _Bool representsTransitionFromPending; // @synthesize representsTransitionFromPending=_representsTransitionFromPending;
@property(nonatomic) _Bool wantsStagingArea; // @synthesize wantsStagingArea=_wantsStagingArea;
@property(nonatomic, getter=isVideoPaused) _Bool videoPaused; // @synthesize videoPaused=_videoPaused;
@property(nonatomic, getter=isVideoEnabled) _Bool videoEnabled; // @synthesize videoEnabled=_videoEnabled;
@property(nonatomic) _Bool shouldSuppressInCallUI; // @synthesize shouldSuppressInCallUI=_shouldSuppressInCallUI;
@property(nonatomic, getter=isInvitation) _Bool invitation; // @synthesize invitation=_invitation;
- (id)description;	// IMP=0x00100000000684ba
- (id)init;	// IMP=0x0010000000068482

@end


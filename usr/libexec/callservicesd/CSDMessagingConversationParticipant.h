//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CSDConversationParticipant, CSDMessagingConversationParticipantAssociation, CSDMessagingHandle, NSData;

@interface CSDMessagingConversationParticipant : PBCodable
{
    unsigned long long _identifier;	// 8 = 0x8
    CSDMessagingConversationParticipantAssociation *_association;	// 16 = 0x10
    int _avMode;	// 24 = 0x18
    NSData *_avcData;	// 32 = 0x20
    CSDMessagingHandle *_handle;	// 40 = 0x28
    unsigned int _options;	// 48 = 0x30
    NSData *_personaHandshakeData;	// 56 = 0x38
    unsigned int _sharePlayProtocolVersion;	// 64 = 0x40
    unsigned int _version;	// 68 = 0x44
    unsigned int _visionCallEstablishmentVersion;	// 72 = 0x48
    unsigned int _visionFeatureVersion;	// 76 = 0x4c
    _Bool _guestModeEnabled;	// 80 = 0x50
    _Bool _isGFTDowngradeToOneToOneAvailable;	// 81 = 0x51
    _Bool _isGondolaCallingAvailable;	// 82 = 0x52
    _Bool _isLightweight;	// 83 = 0x53
    _Bool _isMomentsAvailable;	// 84 = 0x54
    _Bool _isPersonaAvailable;	// 85 = 0x55
    _Bool _isScreenSharingAvailable;	// 86 = 0x56
    _Bool _isSpatialPersonaEnabled;	// 87 = 0x57
    _Bool _isUPlusNDowngradeAvailable;	// 88 = 0x58
    _Bool _isUPlusOneAVLessAvailable;	// 89 = 0x59
    _Bool _isUPlusOneScreenSharingAvailable;	// 90 = 0x5a
    _Bool _supportsLeaveContext;	// 91 = 0x5b
    struct {
        unsigned int identifier:1;
        unsigned int avMode:1;
        unsigned int options:1;
        unsigned int sharePlayProtocolVersion:1;
        unsigned int version:1;
        unsigned int visionCallEstablishmentVersion:1;
        unsigned int visionFeatureVersion:1;
        unsigned int guestModeEnabled:1;
        unsigned int isGFTDowngradeToOneToOneAvailable:1;
        unsigned int isGondolaCallingAvailable:1;
        unsigned int isLightweight:1;
        unsigned int isMomentsAvailable:1;
        unsigned int isPersonaAvailable:1;
        unsigned int isScreenSharingAvailable:1;
        unsigned int isSpatialPersonaEnabled:1;
        unsigned int isUPlusNDowngradeAvailable:1;
        unsigned int isUPlusOneAVLessAvailable:1;
        unsigned int isUPlusOneScreenSharingAvailable:1;
        unsigned int supportsLeaveContext:1;
    } _has;	// 92 = 0x5c
}

+ (id)participantWithTUConversationParticipant:(id)arg1;	// IMP=0x0010000000192f85
+ (id)participantWithCSDConversationParticipant:(id)arg1;	// IMP=0x0010000000192ab8
+ (id)participantWithCSDConversationJoinContext:(id)arg1;	// IMP=0x0010000000192843
- (void).cxx_destruct;	// IMP=0x0010000000013e6f
@property(nonatomic) unsigned int visionCallEstablishmentVersion; // @synthesize visionCallEstablishmentVersion=_visionCallEstablishmentVersion;
@property(nonatomic) unsigned int visionFeatureVersion; // @synthesize visionFeatureVersion=_visionFeatureVersion;
@property(nonatomic) _Bool isUPlusOneAVLessAvailable; // @synthesize isUPlusOneAVLessAvailable=_isUPlusOneAVLessAvailable;
@property(nonatomic) _Bool isSpatialPersonaEnabled; // @synthesize isSpatialPersonaEnabled=_isSpatialPersonaEnabled;
@property(retain, nonatomic) NSData *personaHandshakeData; // @synthesize personaHandshakeData=_personaHandshakeData;
@property(nonatomic) _Bool isUPlusOneScreenSharingAvailable; // @synthesize isUPlusOneScreenSharingAvailable=_isUPlusOneScreenSharingAvailable;
@property(nonatomic) _Bool supportsLeaveContext; // @synthesize supportsLeaveContext=_supportsLeaveContext;
@property(nonatomic) _Bool isUPlusNDowngradeAvailable; // @synthesize isUPlusNDowngradeAvailable=_isUPlusNDowngradeAvailable;
@property(retain, nonatomic) CSDMessagingConversationParticipantAssociation *association; // @synthesize association=_association;
@property(nonatomic) _Bool guestModeEnabled; // @synthesize guestModeEnabled=_guestModeEnabled;
@property(nonatomic) _Bool isGFTDowngradeToOneToOneAvailable; // @synthesize isGFTDowngradeToOneToOneAvailable=_isGFTDowngradeToOneToOneAvailable;
@property(nonatomic) unsigned int options; // @synthesize options=_options;
@property(nonatomic) unsigned int sharePlayProtocolVersion; // @synthesize sharePlayProtocolVersion=_sharePlayProtocolVersion;
@property(nonatomic) _Bool isLightweight; // @synthesize isLightweight=_isLightweight;
@property(nonatomic) _Bool isPersonaAvailable; // @synthesize isPersonaAvailable=_isPersonaAvailable;
@property(nonatomic) _Bool isGondolaCallingAvailable; // @synthesize isGondolaCallingAvailable=_isGondolaCallingAvailable;
@property(nonatomic) _Bool isScreenSharingAvailable; // @synthesize isScreenSharingAvailable=_isScreenSharingAvailable;
@property(nonatomic) _Bool isMomentsAvailable; // @synthesize isMomentsAvailable=_isMomentsAvailable;
@property(retain, nonatomic) NSData *avcData; // @synthesize avcData=_avcData;
@property(retain, nonatomic) CSDMessagingHandle *handle; // @synthesize handle=_handle;
@property(nonatomic) unsigned long long identifier; // @synthesize identifier=_identifier;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000139b8
- (unsigned long long)hash;	// IMP=0x0010000000013660
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000013145
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000012e14
- (void)copyTo:(id)arg1;	// IMP=0x0010000000012b3e
- (void)writeTo:(id)arg1;	// IMP=0x0010000000012815
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000012808
- (id)dictionaryRepresentation;	// IMP=0x0010000000011341
- (id)description;	// IMP=0x0010000000011292
@property(nonatomic) _Bool hasVisionCallEstablishmentVersion;
@property(nonatomic) _Bool hasVisionFeatureVersion;
@property(nonatomic) _Bool hasIsUPlusOneAVLessAvailable;
@property(nonatomic) _Bool hasIsSpatialPersonaEnabled;
@property(readonly, nonatomic) _Bool hasPersonaHandshakeData;
@property(nonatomic) _Bool hasIsUPlusOneScreenSharingAvailable;
@property(nonatomic) _Bool hasSupportsLeaveContext;
- (int)StringAsAvMode:(id)arg1;	// IMP=0x0010000000011018
- (id)avModeAsString:(int)arg1;	// IMP=0x0010000000010fcf
@property(nonatomic) _Bool hasAvMode;
@property(nonatomic) int avMode; // @synthesize avMode=_avMode;
@property(nonatomic) _Bool hasIsUPlusNDowngradeAvailable;
@property(readonly, nonatomic) _Bool hasAssociation;
@property(nonatomic) _Bool hasGuestModeEnabled;
@property(nonatomic) _Bool hasIsGFTDowngradeToOneToOneAvailable;
// Error: Property attributes should begin with the type ('T') attribute, property name: hasOptions
// Property attributes: (null)

@property(nonatomic) _Bool hasSharePlayProtocolVersion;
@property(nonatomic) _Bool hasIsLightweight;
@property(nonatomic) _Bool hasIsPersonaAvailable;
@property(nonatomic) _Bool hasIsGondolaCallingAvailable;
@property(nonatomic) _Bool hasIsScreenSharingAvailable;
@property(nonatomic) _Bool hasIsMomentsAvailable;
@property(readonly, nonatomic) _Bool hasAvcData;
@property(readonly, nonatomic) _Bool hasHandle;
@property(nonatomic) _Bool hasIdentifier;
@property(nonatomic) _Bool hasVersion;
- (id)description;	// IMP=0x00100000001937a5
@property(readonly, nonatomic) CSDConversationParticipant *csdConversationParticipant;

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CSDMessagingConversationMember, CSDMessagingConversationReport, CSDMessagingHandle, NSMutableArray, NSSet, NSString;

@interface CSDMessagingConversationRelayMessage : PBCodable
{
    NSMutableArray *_activeParticipants;	// 8 = 0x8
    int _avMode;	// 16 = 0x10
    NSString *_groupUUIDString;	// 24 = 0x18
    CSDMessagingHandle *_initiator;	// 32 = 0x20
    CSDMessagingConversationMember *_localMember;	// 40 = 0x28
    NSString *_messagesGroupUUIDString;	// 48 = 0x30
    NSMutableArray *_remoteMembers;	// 56 = 0x38
    CSDMessagingConversationReport *_reportData;	// 64 = 0x40
    int _state;	// 72 = 0x48
    int _type;	// 76 = 0x4c
    NSString *_uUIDString;	// 80 = 0x50
    unsigned int _version;	// 88 = 0x58
    _Bool _locallyCreated;	// 92 = 0x5c
    struct {
        unsigned int avMode:1;
        unsigned int state:1;
        unsigned int type:1;
        unsigned int version:1;
        unsigned int locallyCreated:1;
    } _has;	// 96 = 0x60
}

+ (Class)activeParticipantsType;	// IMP=0x00200000000ce05b
+ (Class)remoteMembersType;	// IMP=0x00100000000cdf89
- (void).cxx_destruct;	// IMP=0x00100000000d0488
@property(retain, nonatomic) CSDMessagingConversationReport *reportData; // @synthesize reportData=_reportData;
@property(retain, nonatomic) NSMutableArray *activeParticipants; // @synthesize activeParticipants=_activeParticipants;
@property(retain, nonatomic) NSMutableArray *remoteMembers; // @synthesize remoteMembers=_remoteMembers;
@property(retain, nonatomic) CSDMessagingConversationMember *localMember; // @synthesize localMember=_localMember;
@property(retain, nonatomic) CSDMessagingHandle *initiator; // @synthesize initiator=_initiator;
@property(nonatomic) _Bool locallyCreated; // @synthesize locallyCreated=_locallyCreated;
@property(retain, nonatomic) NSString *messagesGroupUUIDString; // @synthesize messagesGroupUUIDString=_messagesGroupUUIDString;
@property(retain, nonatomic) NSString *groupUUIDString; // @synthesize groupUUIDString=_groupUUIDString;
@property(retain, nonatomic) NSString *uUIDString; // @synthesize uUIDString=_uUIDString;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000cff19
- (unsigned long long)hash;	// IMP=0x00100000000cfd75
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000cfac5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000cf61c
- (void)copyTo:(id)arg1;	// IMP=0x00100000000cf370
- (void)writeTo:(id)arg1;	// IMP=0x00100000000ceff9
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000cefec
- (id)dictionaryRepresentation;	// IMP=0x00100000000ce274
- (id)description;	// IMP=0x00100000000ce1c5
@property(readonly, nonatomic) _Bool hasReportData;
- (int)StringAsAvMode:(id)arg1;	// IMP=0x00100000000ce119
- (id)avModeAsString:(int)arg1;	// IMP=0x00100000000ce0d0
@property(nonatomic) _Bool hasAvMode;
@property(nonatomic) int avMode; // @synthesize avMode=_avMode;
- (id)activeParticipantsAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000ce03e
- (unsigned long long)activeParticipantsCount;	// IMP=0x00100000000ce021
- (void)addActiveParticipants:(id)arg1;	// IMP=0x00100000000cdfb7
- (void)clearActiveParticipants;	// IMP=0x00100000000cdf9a
- (id)remoteMembersAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000cdf6c
- (unsigned long long)remoteMembersCount;	// IMP=0x00100000000cdf4f
- (void)addRemoteMembers:(id)arg1;	// IMP=0x00100000000cdee5
- (void)clearRemoteMembers;	// IMP=0x00100000000cdec8
@property(readonly, nonatomic) _Bool hasLocalMember;
@property(readonly, nonatomic) _Bool hasInitiator;
@property(nonatomic) _Bool hasLocallyCreated;
@property(readonly, nonatomic) _Bool hasMessagesGroupUUIDString;
@property(readonly, nonatomic) _Bool hasGroupUUIDString;
@property(readonly, nonatomic) _Bool hasUUIDString;
- (int)StringAsState:(id)arg1;	// IMP=0x00100000000cdd42
- (id)stateAsString:(int)arg1;	// IMP=0x00100000000cdcf9
@property(nonatomic) _Bool hasState;
@property(nonatomic) int state; // @synthesize state=_state;
- (int)StringAsType:(id)arg1;	// IMP=0x00100000000cdbfa
- (id)typeAsString:(int)arg1;	// IMP=0x00100000000cdbb1
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) _Bool hasVersion;
@property(readonly, nonatomic) long long relayType;
@property(readonly, nonatomic) unsigned long long tuAVMode;
@property(readonly, nonatomic) long long tuState;
- (void)setStateforTUState:(long long)arg1;	// IMP=0x00100000001a7b65
- (void)setConversationMembers:(id)arg1;	// IMP=0x00100000001a7915
@property(readonly, retain, nonatomic) NSSet *tuConversationParticipants;
@property(readonly, retain, nonatomic) NSSet *tuConversationMembers;
- (id)initWithRemoteMembers:(id)arg1;	// IMP=0x00100000001a7498
- (id)initWithConversation:(id)arg1;	// IMP=0x00100000001a6e8c

@end

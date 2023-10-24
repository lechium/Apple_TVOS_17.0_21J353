//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableDictionary, NSSet, NSString;
@protocol CSDConversationServerBag, CSDIDSGroupSessionDelegate, CSDIDSGroupSessionProvider, TUFeatureFlags;

@interface CSDIDSGroupSession
{
    _Bool _joined;	// 8 = 0x8
    unsigned short _localParticipantType;	// 10 = 0xa
    id <CSDIDSGroupSessionDelegate> _delegate;	// 16 = 0x10
    unsigned long long _localParticipantIdentifier;	// 24 = 0x18
    id <TUFeatureFlags> _featureFlags;	// 32 = 0x20
    id <CSDIDSGroupSessionProvider> _sessionProvider;	// 40 = 0x28
    unsigned long long _retryCount;	// 48 = 0x30
    unsigned long long _lightweightRetryCount;	// 56 = 0x38
    id <CSDConversationServerBag> _serverBag;	// 64 = 0x40
    NSMutableDictionary *_preferences;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0020000000144dc1
@property(readonly, nonatomic) NSMutableDictionary *preferences; // @synthesize preferences=_preferences;
@property(retain, nonatomic) id <CSDConversationServerBag> serverBag; // @synthesize serverBag=_serverBag;
@property(nonatomic) unsigned long long lightweightRetryCount; // @synthesize lightweightRetryCount=_lightweightRetryCount;
@property(nonatomic) unsigned long long retryCount; // @synthesize retryCount=_retryCount;
@property(readonly, nonatomic) id <CSDIDSGroupSessionProvider> sessionProvider; // @synthesize sessionProvider=_sessionProvider;
@property(readonly, nonatomic) id <TUFeatureFlags> featureFlags; // @synthesize featureFlags=_featureFlags;
@property(nonatomic) unsigned short localParticipantType; // @synthesize localParticipantType=_localParticipantType;
@property(nonatomic) unsigned long long localParticipantIdentifier; // @synthesize localParticipantIdentifier=_localParticipantIdentifier;
@property(nonatomic, getter=isJoined) _Bool joined; // @synthesize joined=_joined;
@property(nonatomic) __weak id <CSDIDSGroupSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)sessionProvider:(id)arg1 didReceiveServerErrorCode:(unsigned int)arg2;	// IMP=0x0010000000144c45
- (void)sessionProvider:(id)arg1 didReceiveData:(id)arg2 dataType:(unsigned short)arg3 forParticipant:(id)arg4;	// IMP=0x0010000000144bb6
- (void)sessionProvider:(id)arg1 didReceiveDataBlob:(id)arg2 forParticipant:(id)arg3;	// IMP=0x0010000000144b28
- (void)sessionProviderDidReceiveKeyUpdate:(id)arg1;	// IMP=0x0010000000144adc
- (void)sessionProvider:(id)arg1 didUnregisterPluginAllocationInfo:(id)arg2;	// IMP=0x0010000000144a71
- (void)sessionProvider:(id)arg1 didRegisterPluginAllocationInfo:(id)arg2;	// IMP=0x0010000000144a06
- (void)sessionProvider:(id)arg1 didReceiveKickedParticipantIDs:(id)arg2 withCode:(unsigned int)arg3 withType:(unsigned short)arg4 isTruncated:(_Bool)arg5;	// IMP=0x0010000000144978
- (void)sessionProvider:(id)arg1 didReceiveReport:(id)arg2;	// IMP=0x001000000014490d
- (void)sessionProvider:(id)arg1 didReceiveActiveLightweightParticipants:(id)arg2 success:(_Bool)arg3;	// IMP=0x00100000001443e1
- (void)sessionProvider:(id)arg1 didReceiveActiveParticipants:(id)arg2 success:(_Bool)arg3;	// IMP=0x0010000000143eb5
- (void)sessionProviderDidTerminate:(id)arg1;	// IMP=0x0010000000143dd0
- (void)sessionProvider:(id)arg1 didReceiveLocalParticipantType:(unsigned short)arg2 error:(id)arg3;	// IMP=0x0010000000143c97
- (void)sessionProvider:(id)arg1 didLeaveGroupWithError:(id)arg2;	// IMP=0x0010000000143b7d
- (void)sessionProvider:(id)arg1 didJoinGroupWithParticipantIdentifiers:(id)arg2 localParticipantIdentifier:(unsigned long long)arg3 error:(id)arg4;	// IMP=0x00100000001438c4
- (void)sessionProvider:(id)arg1 endedWithReason:(unsigned int)arg2 error:(id)arg3;	// IMP=0x0010000000143798
- (unsigned long long)callTypeForJoinContext:(id)arg1;	// IMP=0x0010000000143777
- (id)idsDestinationForActiveParticipant:(id)arg1;	// IMP=0x0010000000143677
- (id)_updateParticipantDestinationIDForParticipant:(id)arg1 members:(id)arg2;	// IMP=0x0010000000143234
- (void)setScreening:(_Bool)arg1;	// IMP=0x001000000014314f
- (void)setParticipantType:(unsigned short)arg1 forParticipant:(id)arg2 members:(id)arg3 isLocalParticipant:(_Bool)arg4;	// IMP=0x0010000000142fcb
- (void)addRequiredCapabilities:(id)arg1 requiredLackOfCapabilities:(id)arg2;	// IMP=0x0010000000142eb7
@property(readonly, nonatomic) NSSet *requiredLackOfCapabilities;
@property(readonly, nonatomic) NSSet *requiredCapabilities;
- (void)participantIDForAlias:(unsigned long long)arg1 salt:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000142cf7
- (unsigned long long)participantIDForAlias:(unsigned long long)arg1 salt:(id)arg2;	// IMP=0x0010000000142bf0
- (void)addAliasesToConversationContainer:(id)arg1 withSalt:(id)arg2;	// IMP=0x0010000000142adc
- (void)requestEncryptionKeyForParticipants:(id)arg1 topic:(id)arg2;	// IMP=0x00100000001429c8
- (void)requestDataCryptorForTopic:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001428bf
- (void)allowMember:(id)arg1;	// IMP=0x0010000000142793
- (void)kickMember:(id)arg1;	// IMP=0x0010000000142667
- (void)reconnect;	// IMP=0x001000000014259f
- (void)restart;	// IMP=0x00100000001424c8
- (void)registerPluginWithOptions:(id)arg1;	// IMP=0x00100000001423dc
- (void)leaveGroupSessionWithContext:(id)arg1;	// IMP=0x001000000014225e
- (void)requestActiveParticipants;	// IMP=0x0010000000142196
- (void)sendLocalParticipant:(id)arg1;	// IMP=0x00100000001420a5
- (void)addMembers:(id)arg1 toExistingMembers:(id)arg2 participantDestinationIDs:(id)arg3 webDestinationIDs:(id)arg4 activeParticipants:(id)arg5 activitySessions:(id)arg6 link:(id)arg7 otherInvitedHandles:(id)arg8 report:(id)arg9 invitationPreferences:(id)arg10;	// IMP=0x00100000001413d2
- (void)addMembers:(id)arg1 toExistingMembers:(id)arg2 activeParticipants:(id)arg3 activitySessions:(id)arg4 link:(id)arg5 otherInvitedHandles:(id)arg6 report:(id)arg7 invitationPreferences:(id)arg8 requiredCapabilities:(id)arg9 messagesGroupUUID:(id)arg10 messagesGroupName:(id)arg11 addingFromLetMeIn:(_Bool)arg12 triggeredLocally:(_Bool)arg13 highlightIdentifier:(id)arg14 stagedActivitySession:(id)arg15 avMode:(unsigned long long)arg16;	// IMP=0x001000000013fa63
- (void)removeMembers:(id)arg1 fromExistingMembers:(id)arg2 activeParticipants:(id)arg3 triggeredLocally:(_Bool)arg4;	// IMP=0x001000000013f47c
- (void)joinUsingContext:(id)arg1 localParticipantAVCData:(id)arg2 members:(id)arg3 otherInvitedHandles:(id)arg4 participantDestinationIDs:(id)arg5 link:(id)arg6 report:(id)arg7 stagedActivitySession:(id)arg8 personaHandshakeBlob:(id)arg9 activitySession:(id)arg10;	// IMP=0x001000000013e525
@property(readonly, copy, nonatomic) NSArray *participantDestinationIDs;
@property(readonly, copy, nonatomic) NSString *idsDestination;
- (id)initWithGroupSessionProvider:(id)arg1;	// IMP=0x001000000013e421
- (id)initWithGroupSessionProvider:(id)arg1 featureFlags:(id)arg2;	// IMP=0x001000000013e292

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


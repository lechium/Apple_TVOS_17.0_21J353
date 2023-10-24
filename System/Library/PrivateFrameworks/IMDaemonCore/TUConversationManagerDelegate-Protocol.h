//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMDaemonCore/NSObject-Protocol.h>

@class NSArray, NSData, NSError, NSSet, NSString, TUConversation, TUConversationActivityEvent, TUConversationActivitySession, TUConversationLink, TUConversationManager, TUConversationMember, TUConversationNotice, TUConversationParticipant;
@protocol TUScreenShareAttributes;

@protocol TUConversationManagerDelegate <NSObject>

@optional
- (void)conversationManager:(TUConversationManager *)arg1 screeningChangedForConversation:(TUConversation *)arg2;
- (void)conversationManager:(TUConversationManager *)arg1 cameraMixedWithScreenDidChangeForConversation:(TUConversation *)arg2 fromOldConversation:(TUConversation *)arg3;
- (void)conversationManager:(TUConversationManager *)arg1 cameraMixedWithScreenDidChangeForConversation:(TUConversation *)arg2;
- (void)conversationManager:(TUConversationManager *)arg1 systemActivitySessionsChangedForConversation:(TUConversation *)arg2 fromOldConversation:(TUConversation *)arg3;
- (void)conversationManager:(TUConversationManager *)arg1 systemActivitySessionsChangedForConversation:(TUConversation *)arg2;
- (void)conversationManager:(TUConversationManager *)arg1 handoffEligibilityChangedToConversation:(TUConversation *)arg2 fromPreviousConversation:(TUConversation *)arg3;
- (void)conversationManager:(TUConversationManager *)arg1 handoffEligibilityChangedForConversation:(TUConversation *)arg2;
- (void)conversationManager:(TUConversationManager *)arg1 screenSharingAvailableChanged:(_Bool)arg2;
- (void)conversationManager:(TUConversationManager *)arg1 sharePlayAvailableChanged:(_Bool)arg2;
- (void)conversationManager:(TUConversationManager *)arg1 conversation:(TUConversation *)arg2 didChangeSceneAssociationForActivitySession:(TUConversationActivitySession *)arg3;
- (void)conversationManager:(TUConversationManager *)arg1 conversation:(TUConversation *)arg2 didChangeStateForActivitySession:(TUConversationActivitySession *)arg3;
- (void)conversationManager:(TUConversationManager *)arg1 ignoreLMIRequestsChangedForConversation:(TUConversation *)arg2;
- (void)conversationManager:(TUConversationManager *)arg1 remoteScreenShareEndedWithReason:(NSError *)arg2;
- (void)conversationManager:(TUConversationManager *)arg1 remoteScreenShareAttributesChanged:(id <TUScreenShareAttributes>)arg2 isLocallySharing:(_Bool)arg3;
- (void)conversationManager:(TUConversationManager *)arg1 conversation:(TUConversation *)arg2 launchStateChanged:(unsigned long long)arg3 forActivitySession:(TUConversationActivitySession *)arg4;
- (void)conversationManager:(TUConversationManager *)arg1 conversation:(TUConversation *)arg2 screenSharingChangedForParticipant:(TUConversationParticipant *)arg3;
- (void)conversationManager:(TUConversationManager *)arg1 trackedPendingMember:(TUConversationMember *)arg2 forConversationLink:(TUConversationLink *)arg3;
- (void)conversationManager:(TUConversationManager *)arg1 updatedIncomingPendingConversations:(NSArray *)arg2;
- (void)conversationManager:(TUConversationManager *)arg1 conversationUpdatedMessagesGroupUUID:(TUConversation *)arg2;
- (void)conversationManager:(TUConversationManager *)arg1 conversation:(TUConversation *)arg2 updatedMessagesGroupPhoto:(NSData *)arg3;
- (void)conversationManager:(TUConversationManager *)arg1 conversationUpdatedMessagesGroupName:(TUConversation *)arg2 fromOldConversation:(TUConversation *)arg3;
- (void)conversationManager:(TUConversationManager *)arg1 conversationUpdatedMessagesGroupName:(TUConversation *)arg2;
- (void)conversationManager:(TUConversationManager *)arg1 conversation:(TUConversation *)arg2 buzzedMember:(TUConversationMember *)arg3;
- (void)conversationManager:(TUConversationManager *)arg1 conversation:(TUConversation *)arg2 addedMembersLocally:(NSSet *)arg3;
- (void)conversationManager:(TUConversationManager *)arg1 conversation:(TUConversation *)arg2 participant:(TUConversationParticipant *)arg3 addedNotice:(TUConversationNotice *)arg4;
- (void)conversationManager:(TUConversationManager *)arg1 changedActivityAuthorizationForBundleIdentifier:(NSString *)arg2;
- (void)conversationManager:(TUConversationManager *)arg1 conversation:(TUConversation *)arg2 receivedActivitySessionEvent:(TUConversationActivityEvent *)arg3;
- (void)conversationManager:(TUConversationManager *)arg1 migratingFromConversation:(TUConversation *)arg2 toConversation:(TUConversation *)arg3;
- (void)serverDisconnectedForConversationManager:(TUConversationManager *)arg1;
- (void)conversationManager:(TUConversationManager *)arg1 conversation:(TUConversation *)arg2 requestedScreenShareForParticipant:(TUConversationParticipant *)arg3;
- (void)conversationManager:(TUConversationManager *)arg1 linkInvitedMemberHandlesChangedForConversation:(TUConversation *)arg2 fromOldConversation:(TUConversation *)arg3;
- (void)conversationManager:(TUConversationManager *)arg1 linkInvitedMemberHandlesChangedForConversation:(TUConversation *)arg2;
- (void)conversationManager:(TUConversationManager *)arg1 linkChangedForConversation:(TUConversation *)arg2 fromOldConversation:(TUConversation *)arg3;
- (void)conversationManager:(TUConversationManager *)arg1 linkChangedForConversation:(TUConversation *)arg2;
- (void)conversationManager:(TUConversationManager *)arg1 didChangeActivatedLinks:(NSArray *)arg2;
- (void)conversationManager:(TUConversationManager *)arg1 addedActiveConversation:(TUConversation *)arg2;
- (void)conversationManager:(TUConversationManager *)arg1 removedActiveConversation:(TUConversation *)arg2;
- (void)conversationManager:(TUConversationManager *)arg1 resolvedAudioVideoModeChangedForConversation:(TUConversation *)arg2 fromOldConversation:(TUConversation *)arg3;
- (void)conversationManager:(TUConversationManager *)arg1 resolvedAudioVideoModeChangedForConversation:(TUConversation *)arg2;
- (void)conversationManager:(TUConversationManager *)arg1 presentationContextChangedForConversation:(TUConversation *)arg2 fromOldConversation:(TUConversation *)arg3;
- (void)conversationManager:(TUConversationManager *)arg1 presentationContextChangedForConversation:(TUConversation *)arg2;
- (void)conversationManager:(TUConversationManager *)arg1 avModeChangedForConversation:(TUConversation *)arg2 fromOldConversation:(TUConversation *)arg3;
- (void)conversationManager:(TUConversationManager *)arg1 avModeChangedForConversation:(TUConversation *)arg2;
- (void)conversationManager:(TUConversationManager *)arg1 oneToOneModeChangedForConversation:(TUConversation *)arg2 fromOldConversation:(TUConversation *)arg3;
- (void)conversationManager:(TUConversationManager *)arg1 oneToOneModeChangedForConversation:(TUConversation *)arg2;
- (void)conversationManager:(TUConversationManager *)arg1 activitySessionsChangedForConversation:(TUConversation *)arg2 fromOldConversation:(TUConversation *)arg3;
- (void)conversationManager:(TUConversationManager *)arg1 activitySessionsChangedForConversation:(TUConversation *)arg2;
- (void)conversationManager:(TUConversationManager *)arg1 activeRemoteParticipantsChangedForConversation:(TUConversation *)arg2 fromOldConversation:(TUConversation *)arg3;
- (void)conversationManager:(TUConversationManager *)arg1 activeRemoteParticipantsChangedForConversation:(TUConversation *)arg2;
- (void)conversationManager:(TUConversationManager *)arg1 otherInvitedHandlesChangedForConversation:(TUConversation *)arg2 fromOldConversation:(TUConversation *)arg3;
- (void)conversationManager:(TUConversationManager *)arg1 otherInvitedHandlesChangedForConversation:(TUConversation *)arg2;
- (void)conversationManager:(TUConversationManager *)arg1 rejectedMembersChangedForConversation:(TUConversation *)arg2 fromOldConversation:(TUConversation *)arg3;
- (void)conversationManager:(TUConversationManager *)arg1 rejectedMembersChangedForConversation:(TUConversation *)arg2;
- (void)conversationManager:(TUConversationManager *)arg1 kickedMembersChangedForConversation:(TUConversation *)arg2 fromOldConversation:(TUConversation *)arg3;
- (void)conversationManager:(TUConversationManager *)arg1 kickedMembersChangedForConversation:(TUConversation *)arg2;
- (void)conversationManager:(TUConversationManager *)arg1 pendingMembersChangedForConversation:(TUConversation *)arg2 fromOldConversation:(TUConversation *)arg3;
- (void)conversationManager:(TUConversationManager *)arg1 pendingMembersChangedForConversation:(TUConversation *)arg2;
- (void)conversationManager:(TUConversationManager *)arg1 remoteMembersChangedForConversation:(TUConversation *)arg2 fromOldConversation:(TUConversation *)arg3;
- (void)conversationManager:(TUConversationManager *)arg1 remoteMembersChangedForConversation:(TUConversation *)arg2;
- (void)conversationManager:(TUConversationManager *)arg1 localVideoToggledForConversation:(TUConversation *)arg2 fromOldConversation:(TUConversation *)arg3;
- (void)conversationManager:(TUConversationManager *)arg1 localVideoToggledForConversation:(TUConversation *)arg2;
- (void)conversationManager:(TUConversationManager *)arg1 letMeInRequestStateChangedForConversation:(TUConversation *)arg2 fromOldConversation:(TUConversation *)arg3;
- (void)conversationManager:(TUConversationManager *)arg1 letMeInRequestStateChangedForConversation:(TUConversation *)arg2;
- (void)conversationManager:(TUConversationManager *)arg1 stateChangedForConversation:(TUConversation *)arg2 fromOldConversation:(TUConversation *)arg3;
- (void)conversationManager:(TUConversationManager *)arg1 stateChangedForConversation:(TUConversation *)arg2;
- (void)conversationsChangedForConversationManager:(TUConversationManager *)arg1;
@end


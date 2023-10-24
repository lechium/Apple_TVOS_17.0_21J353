//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMCore/NSObject-Protocol.h>

@class IMItem, IMMessageItem, NSArray, NSDictionary, NSError, NSNumber, NSString;

@protocol IMDaemonListenerChatProtocol <NSObject>
- (void)qosClassWhileServicingRequestsResponse:(unsigned int)arg1 identifier:(NSString *)arg2;
- (void)account:(NSString *)arg1 chat:(NSString *)arg2 style:(unsigned char)arg3 chatProperties:(NSDictionary *)arg4 groupID:(NSString *)arg5 chatPersonCentricID:(NSString *)arg6 initialEmergencyQuestionnaireReceived:(IMItem *)arg7;
- (void)collaborationNoticesDidChangeForChatGUIDs:(NSArray *)arg1;
- (void)screenTimeEnablementChanged:(_Bool)arg1;
- (void)pinCodeAlertCompleted:(NSString *)arg1 deviceName:(NSString *)arg2 deviceType:(NSString *)arg3 phoneNumber:(NSString *)arg4 responseFromDevice:(_Bool)arg5 wasCancelled:(_Bool)arg6;
- (void)displayPinCodeForAccount:(NSString *)arg1 pinCode:(NSNumber *)arg2 deviceName:(NSString *)arg3 deviceType:(NSString *)arg4 phoneNumber:(NSString *)arg5;
- (void)groupPhotoUpdatedForChatIdentifier:(NSString *)arg1 style:(unsigned char)arg2 account:(NSString *)arg3 userInfo:(NSDictionary *)arg4;
- (void)blackholedChatsExist:(_Bool)arg1;
- (void)previouslyBlackholedChatLoadedWithHandleIDs:(NSArray *)arg1 chat:(NSDictionary *)arg2;
- (void)previouslyBlackholedChatLoadedWithChatIdentifier:(NSString *)arg1 chats:(NSArray *)arg2;
- (void)historicalMessageGUIDsDeleted:(NSArray *)arg1 chatGUIDs:(NSArray *)arg2 queryID:(NSString *)arg3;
- (void)finishedDownloadingPurgedAssetsForChatIDs:(NSArray *)arg1;
- (void)downloadedPurgedAssetBatchForChatIDs:(NSArray *)arg1 completedTransferGUIDs:(NSArray *)arg2;
- (void)account:(NSString *)arg1 chat:(NSString *)arg2 style:(unsigned char)arg3 chatProperties:(NSDictionary *)arg4 chatPersonCentricID:(NSString *)arg5 member:(NSDictionary *)arg6 statusChanged:(int)arg7;
- (void)account:(NSString *)arg1 chat:(NSString *)arg2 style:(unsigned char)arg3 chatProperties:(NSDictionary *)arg4 groupID:(NSString *)arg5 chatPersonCentricID:(NSString *)arg6 statusChanged:(int)arg7 handleInfo:(NSArray *)arg8;
- (void)service:(NSString *)arg1 chat:(NSString *)arg2 style:(unsigned char)arg3 messagesUpdated:(NSArray *)arg4;
- (void)account:(NSString *)arg1 chat:(NSString *)arg2 style:(unsigned char)arg3 chatProperties:(NSDictionary *)arg4 messagesUpdated:(NSArray *)arg5;
- (void)account:(NSString *)arg1 chat:(NSString *)arg2 style:(unsigned char)arg3 chatProperties:(NSDictionary *)arg4 messageUpdated:(IMItem *)arg5 suppressNotification:(_Bool)arg6;
- (void)account:(NSString *)arg1 chat:(NSString *)arg2 style:(unsigned char)arg3 chatProperties:(NSDictionary *)arg4 messageUpdated:(IMItem *)arg5;
- (void)account:(NSString *)arg1 chat:(NSString *)arg2 style:(unsigned char)arg3 chatProperties:(NSDictionary *)arg4 groupID:(NSString *)arg5 chatPersonCentricID:(NSString *)arg6 messagesReceived:(NSArray *)arg7 messagesComingFromStorage:(_Bool)arg8;
- (void)account:(NSString *)arg1 chat:(NSString *)arg2 style:(unsigned char)arg3 chatProperties:(NSDictionary *)arg4 groupID:(NSString *)arg5 chatPersonCentricID:(NSString *)arg6 messageReceived:(IMItem *)arg7;
- (void)account:(NSString *)arg1 chat:(NSString *)arg2 style:(unsigned char)arg3 chatProperties:(NSDictionary *)arg4 notifySentMessage:(IMMessageItem *)arg5 sendTime:(NSNumber *)arg6;
- (void)account:(NSString *)arg1 chat:(NSString *)arg2 style:(unsigned char)arg3 chatProperties:(NSDictionary *)arg4 groupID:(NSString *)arg5 chatPersonCentricID:(NSString *)arg6 messageSent:(IMMessageItem *)arg7;
- (void)account:(NSString *)arg1 chat:(NSString *)arg2 style:(unsigned char)arg3 chatProperties:(NSDictionary *)arg4 invitationReceived:(IMMessageItem *)arg5;
- (void)chatLoadedWithChatIdentifier:(NSString *)arg1 chats:(NSArray *)arg2;
- (void)chatsNeedRemerging:(NSArray *)arg1 groupedChats:(NSArray *)arg2;
- (void)recoveredMessagesFromRecentlyDeletedForChatsWithGUIDs:(NSArray *)arg1;
- (void)permanentlyDeletedRecoverableMessagesForChatsWithGUIDs:(NSArray *)arg1 deletedChatGUIDs:(NSArray *)arg2;
- (void)permanentlyDeletedMessagesInChatsWithDeletedChatGUIDs:(NSArray *)arg1 queryID:(NSString *)arg2;
- (void)permanentlyDeletedMessagesInChatsWithDeletedChatGUIDs:(NSArray *)arg1;
- (void)loadedRecoverableMessagesMetadata:(NSDictionary *)arg1 queryID:(NSString *)arg2;
- (void)recoveredMessagesWithQueryID:(NSString *)arg1;
- (void)movedMessagesToRecentlyDeletedForChatsWithGUIDs:(NSArray *)arg1 queryID:(NSString *)arg2;
- (void)movedMessagesToRecentlyDeletedWithQueryID:(NSString *)arg1;
- (void)forcedReloadingChatRegistryWithQueryID:(NSString *)arg1;
- (void)markedAsReadForMessageGUID:(NSString *)arg1 success:(_Bool)arg2 queryID:(NSString *)arg3;
- (void)loadedChats:(NSArray *)arg1 queryID:(NSString *)arg2;
- (void)loadedChats:(NSArray *)arg1;
- (void)engroupParticipantsUpdatedForChat:(NSString *)arg1;
- (void)leftChat:(NSString *)arg1;
- (void)account:(NSString *)arg1 chat:(NSString *)arg2 style:(unsigned char)arg3 chatProperties:(NSDictionary *)arg4 error:(NSError *)arg5;
- (void)account:(NSString *)arg1 chat:(NSString *)arg2 style:(unsigned char)arg3 chatProperties:(NSDictionary *)arg4 updateProperties:(NSDictionary *)arg5;
- (void)chat:(NSString *)arg1 uncachedAttachmentCountUpdated:(NSNumber *)arg2;
- (void)chat:(NSString *)arg1 lastMessageTimeStampOnLoadUpdated:(double)arg2;
- (void)chat:(NSString *)arg1 nicknamesUpdated:(NSDictionary *)arg2;
- (void)chat:(NSString *)arg1 engramIDUpdated:(NSString *)arg2;
- (void)chat:(NSString *)arg1 isDeletingIncomingMessagesUpdated:(_Bool)arg2;
- (void)chat:(NSString *)arg1 isRecoveredUpdated:(_Bool)arg2;
- (void)chat:(NSString *)arg1 isFilteredUpdated:(long long)arg2;
- (void)chat:(NSString *)arg1 lastAddressedSIMIDUpdated:(NSString *)arg2;
- (void)chat:(NSString *)arg1 lastAddressedHandleUpdated:(NSString *)arg2;
- (void)chat:(NSString *)arg1 chatPersonCentricID:(NSString *)arg2 displayNameUpdated:(NSString *)arg3 sender:(NSString *)arg4;
- (void)chat:(NSString *)arg1 chatPersonCentricID:(NSString *)arg2 displayNameUpdated:(NSString *)arg3;
- (void)chat:(NSString *)arg1 propertiesUpdated:(NSDictionary *)arg2;
- (void)chat:(NSString *)arg1 updated:(NSDictionary *)arg2;
@end


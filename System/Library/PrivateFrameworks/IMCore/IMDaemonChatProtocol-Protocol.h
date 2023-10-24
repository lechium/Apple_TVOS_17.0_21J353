//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMCore/NSObject-Protocol.h>

@class IMCollaborationNotice, IMItem, IMMessageItem, IMSyndicationAction, NSArray, NSData, NSDate, NSDictionary, NSIndexSet, NSNumber, NSPredicate, NSString;

@protocol IMDaemonChatProtocol <NSObject>
- (void)fetchCommonCapabilities:(NSArray *)arg1 fromChatWithGUID:(NSString *)arg2 reply:(void (^)(_Bool, NSDictionary *))arg3;
- (void)loadChatsWithHandleIDs:(NSArray *)arg1 groupID:(NSString *)arg2 displayName:(NSString *)arg3 style:(unsigned char)arg4 queryID:(NSString *)arg5;
- (void)loadChatsWithGroupID:(NSString *)arg1 queryID:(NSString *)arg2;
- (void)loadChatsWithIdentifier:(NSString *)arg1 queryID:(NSString *)arg2;
- (void)loadChatsFilteredUsingPredicate:(NSPredicate *)arg1 lastMessageOlderThan:(NSDate *)arg2 limit:(long long)arg3 queryID:(NSString *)arg4;
- (void)loadChatsFilteredUsingPredicate:(NSPredicate *)arg1 queryID:(NSString *)arg2;
- (void)loadChatWithGUID:(NSString *)arg1 queryID:(NSString *)arg2;
- (void)unreadCountWithCompletion:(void (^)(long long))arg1;
- (void)updateNotice:(IMCollaborationNotice *)arg1;
- (void)dismissNotice:(IMCollaborationNotice *)arg1;
- (void)fetchCollaborationNoticesForChatGUID:(NSString *)arg1 reply:(void (^)(NSArray *))arg2;
- (void)sendCommand:(NSNumber *)arg1 withProperties:(NSDictionary *)arg2 toPerson:(NSString *)arg3 account:(NSString *)arg4 toChatID:(NSString *)arg5 identifier:(NSString *)arg6 style:(unsigned char)arg7;
- (void)sendCommand:(NSNumber *)arg1 withProperties:(NSDictionary *)arg2 toPerson:(NSString *)arg3 account:(NSString *)arg4;
- (void)removeChatID:(NSString *)arg1 identifier:(NSString *)arg2 style:(unsigned char)arg3 account:(NSString *)arg4;
- (void)leaveiMessageChatID:(NSString *)arg1 identifier:(NSString *)arg2 style:(unsigned char)arg3 account:(NSString *)arg4;
- (void)leaveChatID:(NSString *)arg1 identifier:(NSString *)arg2 style:(unsigned char)arg3 account:(NSString *)arg4;
- (void)declineInvitationToChatID:(NSString *)arg1 identifier:(NSString *)arg2 style:(unsigned char)arg3 account:(NSString *)arg4;
- (void)closeSessionChatID:(NSString *)arg1 identifier:(NSString *)arg2 style:(unsigned char)arg3 account:(NSString *)arg4;
- (void)recoverChatsFromJunkContainingMessageWithGUID:(NSString *)arg1;
- (void)unblackholeAndLoadChatWithHandleIDs:(NSArray *)arg1 reply:(void (^)(NSArray *))arg2;
- (void)chat:(NSString *)arg1 updateLastKnownHybridState:(_Bool)arg2;
- (void)chat:(NSString *)arg1 updateLastAddressedSIMID:(NSString *)arg2;
- (void)chat:(NSString *)arg1 updateLastAddressHandle:(NSString *)arg2;
- (void)chat:(NSString *)arg1 updateIsDeletingIncomingMessages:(_Bool)arg2;
- (void)chat:(NSString *)arg1 updateIsRecovered:(_Bool)arg2;
- (void)chat:(NSString *)arg1 updateIsBlackholed:(_Bool)arg2;
- (void)chat:(NSString *)arg1 updateIsFiltered:(long long)arg2;
- (void)chat:(NSString *)arg1 updateDisplayName:(NSString *)arg2;
- (void)chat:(NSString *)arg1 updateProperties:(NSDictionary *)arg2;
- (void)setProperties:(NSDictionary *)arg1 ofParticipant:(NSString *)arg2 inChatID:(NSString *)arg3 identifier:(NSString *)arg4 style:(unsigned char)arg5 account:(NSString *)arg6;
- (void)updateBalloonPayload:(NSData *)arg1 attachments:(NSArray *)arg2 forMessageGUID:(NSString *)arg3;
- (void)sendBalloonPayload:(NSData *)arg1 attachments:(NSArray *)arg2 withMessageGUID:(NSString *)arg3 bundleID:(NSString *)arg4;
- (void)sendSyndicationAction:(IMSyndicationAction *)arg1 toChatsWithIdentifiers:(NSArray *)arg2;
- (void)sendSavedReceiptForMessage:(IMMessageItem *)arg1 toChatID:(NSString *)arg2 identifier:(NSString *)arg3 style:(unsigned char)arg4 account:(NSString *)arg5;
- (void)sendPlayedReceiptForMessage:(IMMessageItem *)arg1 toChatID:(NSString *)arg2 identifier:(NSString *)arg3 style:(unsigned char)arg4 account:(NSString *)arg5;
- (void)sendReadReceiptForMessage:(IMMessageItem *)arg1 toChatID:(NSString *)arg2 identifier:(NSString *)arg3 style:(unsigned char)arg4 account:(NSString *)arg5;
- (void)sendStickerAtPath:(NSString *)arg1 toChatID:(NSString *)arg2 forNBubbleFromTheBottom:(long long)arg3 atX:(NSString *)arg4 atY:(NSString *)arg5 scale:(NSString *)arg6 balloonWidth:(NSString *)arg7;
- (void)storeItem:(IMItem *)arg1 inChatGUID:(NSString *)arg2;
- (void)markMessageAsCorrupt:(NSString *)arg1 setCorrupt:(_Bool)arg2;
- (void)updateMessage:(IMMessageItem *)arg1 withIndexesOfDeletedItems:(NSIndexSet *)arg2 withIndexToRangeMapOfDeletedItems:(NSDictionary *)arg3 deleteDate:(NSDate *)arg4;
- (void)updateMessage:(IMMessageItem *)arg1;
- (void)requestPendingMessages;
- (void)removeChat:(NSString *)arg1;
- (void)loadChatWithChatIdentifier:(NSString *)arg1;
- (void)loadAnyChatsContainingHandleIDsIn:(NSArray *)arg1 reply:(void (^)(NSArray *))arg2;
- (void)loadChatsWithHandleIDs:(NSArray *)arg1 groupID:(NSString *)arg2 displayName:(NSString *)arg3 style:(unsigned char)arg4 reply:(void (^)(NSArray *))arg5;
- (void)loadChatsWithGroupID:(NSString *)arg1 reply:(void (^)(NSArray *))arg2;
- (void)loadChatsWithPinningIdentifier:(NSString *)arg1 reply:(void (^)(NSArray *))arg2;
- (void)loadChatsWithIdentifier:(NSString *)arg1 reply:(void (^)(NSArray *))arg2;
- (void)loadChatsFilteredUsingPredicate:(NSPredicate *)arg1 lastMessageOlderThan:(NSDate *)arg2 limit:(long long)arg3 reply:(void (^)(NSArray *))arg4;
- (void)loadChatsFilteredUsingPredicate:(NSPredicate *)arg1 reply:(void (^)(NSArray *))arg2;
- (void)loadChatWithGUID:(NSString *)arg1 reply:(void (^)(NSArray *))arg2;
- (void)loadAllChats;
@end


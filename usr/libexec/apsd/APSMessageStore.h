//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface APSMessageStore : NSObject
{
    _Bool _databaseOpen;	// 8 = 0x8
    _Bool _pendingDatabaseClose;	// 9 = 0x9
}

+ (id)sharedInstance;	// IMP=0x00400000000994a5
- (id)_onQueueSubscribedChannelsForRecords:(struct __CFArray *)arg1;	// IMP=0x002000000009c952
- (id)_onQueueSubscribedChannelsForRecord:(struct _APSChannelRecordStruct *)arg1;	// IMP=0x001000000009c8b3
- (id)allRegisteredChannels;	// IMP=0x001000000009c711
- (id)allRegisteredChannelsForEnvironment:(id)arg1 userName:(id)arg2;	// IMP=0x001000000009c4ce
- (id)allRegisteredChannelsForTopic:(id)arg1 environment:(id)arg2 userName:(id)arg3;	// IMP=0x001000000009c145
- (id)lookupChannelWithChannelID:(id)arg1 andPushTopic:(id)arg2 environment:(id)arg3 userName:(id)arg4;	// IMP=0x001000000009bd43
- (void)updateChannel:(id)arg1;	// IMP=0x001000000009bc41
- (void)deleteChannelID:(id)arg1 forTopic:(id)arg2 environment:(id)arg3 userName:(id)arg4;	// IMP=0x001000000009ba68
- (void)storeChannel:(id)arg1;	// IMP=0x001000000009b81a
- (void)markAllOutgoingMessagesAsUnsent;	// IMP=0x001000000009b7f7
- (void)markMessageWithGUID:(id)arg1 asSent:(_Bool)arg2;	// IMP=0x001000000009b65d
- (void)deleteOutgoingMessageWithGUID:(id)arg1;	// IMP=0x001000000009b542
- (id)storeOutgoingMessage:(id)arg1 environment:(id)arg2;	// IMP=0x001000000009b182
- (id)incomingHighPriorityMessagesForEnvironment:(id)arg1 pushTokens:(id)arg2;	// IMP=0x001000000009b163
- (id)incomingMessagesForTopic:(id)arg1 priority:(long long)arg2 environment:(id)arg3 pushTokens:(id)arg4;	// IMP=0x001000000009acfd
- (id)_onQueueIncomingMessagesFromRecords:(struct __CFArray *)arg1;	// IMP=0x001000000009a86a
- (id)pendingLowPriorityIncomingMessageTopicsForEnvironment:(id)arg1 pushTokens:(id)arg2;	// IMP=0x001000000009a53f
- (void)deleteStaleIncomingLowPriorityMessagesForEnvironment:(id)arg1;	// IMP=0x001000000009a437
- (void)deleteLowPriorityIncomingMessagesForTopic:(id)arg1 environment:(id)arg2 pushTokens:(id)arg3;	// IMP=0x001000000009a320
- (void)_onQueueDeleteLowPriorityIncomingMessagesForTopic:(id)arg1 environment:(id)arg2 pushTokens:(id)arg3;	// IMP=0x001000000009a0f5
- (void)deleteIncomingMessageWithGUID:(id)arg1;	// IMP=0x001000000009a05b
- (void)storeIncomingMessage:(id)arg1 environment:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000099bc0
- (void)performBlock:(CDUnknownBlockType)arg1 waitUntilDone:(_Bool)arg2;	// IMP=0x0010000000099aae
- (void)performBlock:(CDUnknownBlockType)arg1 afterDelay:(double)arg2;	// IMP=0x00100000000999a4
- (void)performBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000998a2
- (void)openDatabase;	// IMP=0x0010000000099820
- (void)closeDatabase;	// IMP=0x00100000000997af
- (void)_setDatabaseCloseTimer;	// IMP=0x0010000000099765
- (void)_clearDatabaseCloseTimer;	// IMP=0x001000000009972a
- (void)__closeDatabase;	// IMP=0x0010000000099624
- (id)init;	// IMP=0x00100000000994fa

@end

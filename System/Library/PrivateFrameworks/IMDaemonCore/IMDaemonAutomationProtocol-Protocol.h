//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMDaemonCore/NSObject-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSString;

@protocol IMDaemonAutomationProtocol <NSObject>
- (void)test_firstUnlockCompleted;
- (void)debugUpdateGroupParticipantversion:(long long)arg1 chatIdentifier:(NSString *)arg2;
- (void)logDumpAndSendMessageTo:(NSString *)arg1 forHours:(int)arg2;
- (void)_automation_markMessagesAsRead:(_Bool)arg1 messageGUID:(NSString *)arg2 forChatGUID:(NSString *)arg3 fromMe:(_Bool)arg4 queryID:(NSString *)arg5;
- (void)_automation_receiveDictionary:(NSDictionary *)arg1 fromID:(NSString *)arg2;
- (void)_automation_sendDictionary:(NSDictionary *)arg1 options:(NSDictionary *)arg2 toHandles:(NSArray *)arg3;
- (void)stopRecordingMessagesReplayDatabase;
- (void)beginRecordingMessagesToReplayDatabase:(NSString *)arg1;
- (void)replayMessagesFromDatabasePath:(NSString *)arg1;
- (void)simulateMessageReceive:(NSString *)arg1 serviceName:(NSString *)arg2 groupID:(NSString *)arg3 handles:(NSArray *)arg4 sender:(NSString *)arg5 date:(NSDate *)arg6 associatedMessageType:(long long)arg7 associatedMessageGuid:(NSString *)arg8;
- (void)simulateMessageReceive:(NSString *)arg1 serviceName:(NSString *)arg2 groupID:(NSString *)arg3 handles:(NSArray *)arg4 sender:(NSString *)arg5;
@end


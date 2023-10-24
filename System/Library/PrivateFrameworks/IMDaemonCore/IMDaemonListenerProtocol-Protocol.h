//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMDaemonCore/IMDaemonListenerAVProtocol-Protocol.h>
#import <IMDaemonCore/IMDaemonListenerAccountsProtocol-Protocol.h>
#import <IMDaemonCore/IMDaemonListenerAnyProtocol-Protocol.h>
#import <IMDaemonCore/IMDaemonListenerChatCountsProtocol-Protocol.h>
#import <IMDaemonCore/IMDaemonListenerChatDatabaseProtocol-Protocol.h>
#import <IMDaemonCore/IMDaemonListenerChatMessageHistoryProtocol-Protocol.h>
#import <IMDaemonCore/IMDaemonListenerChatProtocol-Protocol.h>
#import <IMDaemonCore/IMDaemonListenerCloudSyncProtocol-Protocol.h>
#import <IMDaemonCore/IMDaemonListenerFileProviderProtocol-Protocol.h>
#import <IMDaemonCore/IMDaemonListenerFileTransfersProtocol-Protocol.h>
#import <IMDaemonCore/IMDaemonListenerNotificationsProtocol-Protocol.h>
#import <IMDaemonCore/IMDaemonListenerServiceProtocol-Protocol.h>
#import <IMDaemonCore/IMDaemonListenerSyncedSettingsProtocol-Protocol.h>
#import <IMDaemonCore/NSObject-Protocol.h>

@class NSDictionary;

@protocol IMDaemonListenerProtocol <NSObject, IMDaemonListenerAccountsProtocol, IMDaemonListenerAnyProtocol, IMDaemonListenerAVProtocol, IMDaemonListenerChatCountsProtocol, IMDaemonListenerChatDatabaseProtocol, IMDaemonListenerChatMessageHistoryProtocol, IMDaemonListenerChatProtocol, IMDaemonListenerCloudSyncProtocol, IMDaemonListenerFileProviderProtocol, IMDaemonListenerFileTransfersProtocol, IMDaemonListenerNotificationsProtocol, IMDaemonListenerServiceProtocol, IMDaemonListenerSyncedSettingsProtocol>
- (void)vcCapabilitiesChanged:(unsigned long long)arg1;
- (void)pendingACRequestComplete;
- (void)pendingVCRequestComplete;
- (void)setupComplete;
- (void)setupComplete:(_Bool)arg1 info:(NSDictionary *)arg2;
@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSString;

@protocol SyncStateManaging
- (void)clearSyncStateForAllRecordTypes;
- (void)deleteAllCloudKitData;
- (void)sendBroadcastToClient;
- (void)commitChanges;
- (void)startChanges;
- (void)setSyncStopped;
- (void)setSyncStarted;
- (void)setSyncJobStateWithState:(unsigned long long)arg1;
- (void)setSyncPhaseType:(unsigned long long)arg1;
- (void)setLastSyncDate:(NSDate *)arg1;
- (NSDate *)lastSyncDate;
- (void)setSyncDate:(NSDate *)arg1 forKey:(NSString *)arg2 shouldOverride:(_Bool)arg3;
@end


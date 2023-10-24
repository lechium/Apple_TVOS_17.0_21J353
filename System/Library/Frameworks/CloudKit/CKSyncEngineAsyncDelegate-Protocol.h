//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/NSObject-Protocol.h>

@class CKSyncEngine, CKSyncEngineEvent, CKSyncEngineFetchChangesContext, CKSyncEngineSendChangesContext, NSArray;

@protocol CKSyncEngineAsyncDelegate <NSObject>
- (void)syncEngine:(CKSyncEngine *)arg1 relatedApplicationBundleIdentifiersForZoneIDs:(NSArray *)arg2 recordIDs:(NSArray *)arg3 completionHandler:(void (^)(NSArray *))arg4;
- (void)syncEngine:(CKSyncEngine *)arg1 nextFetchChangesOptionsForContext:(CKSyncEngineFetchChangesContext *)arg2 completionHandler:(void (^)(CKSyncEngineFetchChangesOptions *))arg3;
- (void)syncEngine:(CKSyncEngine *)arg1 nextRecordZoneChangeBatchForContext:(CKSyncEngineSendChangesContext *)arg2 completionHandler:(void (^)(CKSyncEngineRecordZoneChangeBatch *))arg3;
- (void)syncEngine:(CKSyncEngine *)arg1 handleEvent:(CKSyncEngineEvent *)arg2 completionHandler:(void (^)(void))arg3;
@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKitDaemon/NSObject-Protocol.h>

@class CKAcceptSharesOperationInfo, CKCodeFunctionInvokeOperationInfo, CKDeclineSharesOperationInfo, CKDiscoverUserIdentitiesOperationInfo, CKEventMetricInfo, CKFetchDatabaseChangesOperationInfo, CKFetchNotificationChangesOperationInfo, CKFetchRecordZoneChangesOperationInfo, CKFetchRecordZonesOperationInfo, CKFetchRecordsOperationInfo, CKFetchShareMetadataOperationInfo, CKFetchShareParticipantsOperationInfo, CKFetchSubscriptionsOperationInfo, CKFetchWebAuthTokenOperationInfo, CKMapShareURLsToInstalledBundleIDsOperationInfo, CKMarkNotificationsReadOperationInfo, CKModifyBadgeOperationInfo, CKModifyRecordZonesOperationInfo, CKModifyRecordsOperationInfo, CKModifySubscriptionsOperationInfo, CKMovePhotosOperationInfo, CKQueryOperationInfo, NSArray, NSFileHandle, NSString;
@protocol CKAcceptSharesOperationCallbacks, CKCodeFunctionInvokeOperationCallbacks, CKCodeOperationCallbacks, CKDeclineSharesOperationCallbacks, CKDiscoverUserIdentitiesOperationCallbacks, CKFetchDatabaseChangesOperationCallbacks, CKFetchNotificationChangesOperationCallbacks, CKFetchRecordChangesOperationCallbacks, CKFetchRecordZoneChangesOperationCallbacks, CKFetchRecordZonesOperationCallbacks, CKFetchRecordsOperationCallbacks, CKFetchShareMetadataOperationCallbacks, CKFetchShareParticipantsOperationCallbacks, CKFetchSubscriptionsOperationCallbacks, CKFetchWebAuthTokenOperationCallbacks, CKMapShareURLsToInstalledBundleIDsOperationCallbacks, CKMarkNotificationsReadOperationCallbacks, CKModifyRecordZonesOperationCallbacks, CKModifyRecordsOperationCallbacks, CKModifySubscriptionsOperationCallbacks, CKMovePhotosOperationCallbacks, CKOperationCallbacks, CKQueryOperationCallbacks;

@protocol CKXPCContainerScopedDaemonAPI <NSObject>
- (void)suggestedMergeableDeltaSizeWithCompletionHandler:(void (^)(long long))arg1;
- (void)displayInfoOnAccountWithCompletionHandler:(void (^)(NSPersonNameComponents *, NSString *, NSString *, NSError *))arg1;
- (void)networkTransferEndpointWithCompletionHandler:(void (^)(NSObject<OS_xpc_object> *, NSError *))arg1;
- (void)fetchAllLongLivedOperationIDsWithCompletionHandler:(void (^)(NSArray *, NSError *))arg1;
- (void)fetchLongLivedOperationsWithIDs:(NSArray *)arg1 completionHandler:(void (^)(NSArray *, NSError *))arg2;
- (void)performMovePhotosOperation:(CKMovePhotosOperationInfo *)arg1 clientOperationCallbackProxy:(id <CKMovePhotosOperationCallbacks>)arg2 withBlock:(void (^)(void))arg3;
- (void)performFetchWebAuthTokenOperation:(CKFetchWebAuthTokenOperationInfo *)arg1 clientOperationCallbackProxy:(id <CKFetchWebAuthTokenOperationCallbacks>)arg2 withBlock:(void (^)(void))arg3;
- (void)performMapShareURLsToInstalledBundleIDsOperation:(CKMapShareURLsToInstalledBundleIDsOperationInfo *)arg1 clientOperationCallbackProxy:(id <CKMapShareURLsToInstalledBundleIDsOperationCallbacks>)arg2 withBlock:(void (^)(void))arg3;
- (void)performFetchShareMetadataOperation:(CKFetchShareMetadataOperationInfo *)arg1 clientOperationCallbackProxy:(id <CKFetchShareMetadataOperationCallbacks>)arg2 withBlock:(void (^)(void))arg3;
- (void)performDeclineSharesOperation:(CKDeclineSharesOperationInfo *)arg1 clientOperationCallbackProxy:(id <CKDeclineSharesOperationCallbacks>)arg2 withBlock:(void (^)(void))arg3;
- (void)performAcceptSharesOperation:(CKAcceptSharesOperationInfo *)arg1 clientOperationCallbackProxy:(id <CKAcceptSharesOperationCallbacks>)arg2 withBlock:(void (^)(void))arg3;
- (void)performMarkNotificationsReadOperation:(CKMarkNotificationsReadOperationInfo *)arg1 clientOperationCallbackProxy:(id <CKMarkNotificationsReadOperationCallbacks>)arg2 withBlock:(void (^)(void))arg3;
- (void)performFetchNotificationChangesOperation:(CKFetchNotificationChangesOperationInfo *)arg1 clientOperationCallbackProxy:(id <CKFetchNotificationChangesOperationCallbacks>)arg2 withBlock:(void (^)(void))arg3;
- (void)performModifyBadgeOperation:(CKModifyBadgeOperationInfo *)arg1 clientOperationCallbackProxy:(id <CKOperationCallbacks>)arg2 withBlock:(void (^)(void))arg3;
- (void)performFetchDatabaseChangesOperation:(CKFetchDatabaseChangesOperationInfo *)arg1 clientOperationCallbackProxy:(id <CKFetchDatabaseChangesOperationCallbacks>)arg2 withBlock:(void (^)(void))arg3;
- (void)performFetchRecordZonesOperation:(CKFetchRecordZonesOperationInfo *)arg1 clientOperationCallbackProxy:(id <CKFetchRecordZonesOperationCallbacks>)arg2 withBlock:(void (^)(void))arg3;
- (void)performModifyRecordZonesOperation:(CKModifyRecordZonesOperationInfo *)arg1 clientOperationCallbackProxy:(id <CKModifyRecordZonesOperationCallbacks>)arg2 withBlock:(void (^)(void))arg3;
- (void)performFetchSubscriptionsOperation:(CKFetchSubscriptionsOperationInfo *)arg1 clientOperationCallbackProxy:(id <CKFetchSubscriptionsOperationCallbacks>)arg2 withBlock:(void (^)(void))arg3;
- (void)performModifySubscriptionsOperation:(CKModifySubscriptionsOperationInfo *)arg1 clientOperationCallbackProxy:(id <CKModifySubscriptionsOperationCallbacks>)arg2 withBlock:(void (^)(void))arg3;
- (void)performQueryOperation:(CKQueryOperationInfo *)arg1 clientOperationCallbackProxy:(id <CKQueryOperationCallbacks>)arg2 withBlock:(void (^)(void))arg3;
- (void)performFetchRecordZoneChangesOperation:(CKFetchRecordZoneChangesOperationInfo *)arg1 clientOperationCallbackProxy:(id <CKFetchRecordZoneChangesOperationCallbacks>)arg2 withBlock:(void (^)(void))arg3;
- (void)performFetchRecordChangesOperation:(CKFetchRecordZoneChangesOperationInfo *)arg1 clientOperationCallbackProxy:(id <CKFetchRecordChangesOperationCallbacks>)arg2 withBlock:(void (^)(void))arg3;
- (void)performModifyRecordsOperation:(CKModifyRecordsOperationInfo *)arg1 clientOperationCallbackProxy:(id <CKModifyRecordsOperationCallbacks>)arg2 withBlock:(void (^)(void))arg3;
- (void)performFetchRecordsOperation:(CKFetchRecordsOperationInfo *)arg1 clientOperationCallbackProxy:(id <CKFetchRecordsOperationCallbacks>)arg2 withBlock:(void (^)(void))arg3;
- (void)performFetchShareParticipantsOperation:(CKFetchShareParticipantsOperationInfo *)arg1 clientOperationCallbackProxy:(id <CKFetchShareParticipantsOperationCallbacks>)arg2 withBlock:(void (^)(void))arg3;
- (void)performDiscoverUserIdentitiesOperation:(CKDiscoverUserIdentitiesOperationInfo *)arg1 clientOperationCallbackProxy:(id <CKDiscoverUserIdentitiesOperationCallbacks>)arg2 withBlock:(void (^)(void))arg3;
- (void)requestApplicationPermission:(unsigned long long)arg1 completionHandler:(void (^)(long long, NSError *))arg2;
- (void)statusForApplicationPermission:(unsigned long long)arg1 completionHandler:(void (^)(long long, NSError *))arg2;
- (void)importantUserIDsWithCompletionHandler:(void (^)(NSString *, NSString *, NSError *))arg1;
- (void)submitClientEventMetric:(CKEventMetricInfo *)arg1 completeWhenQueued:(_Bool)arg2 completionHandler:(void (^)(void))arg3;
- (void)dumpDaemonStatusReportToFileHandle:(NSFileHandle *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)performCodeFunctionInvokeOperation:(CKCodeFunctionInvokeOperationInfo *)arg1 clientOperationCallbackProxy:(id <CKCodeFunctionInvokeOperationCallbacks>)arg2 withBlock:(void (^)(void))arg3;
- (void)performCodeOperation:(CKCodeFunctionInvokeOperationInfo *)arg1 clientOperationCallbackProxy:(id <CKCodeOperationCallbacks>)arg2 withBlock:(void (^)(void))arg3;
- (void)cancelOperationWithIdentifier:(NSString *)arg1 completionHandler:(void (^)(void))arg2;
- (void)reloadAccountWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)accountInfoWithCompletionHandler:(void (^)(CKAccountInfo *, NSError *))arg1;
@end


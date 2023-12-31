//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKAssetRepairScheduler, CKUploadRequestMetadata, NSError;

@protocol CKAssetRepairSchedulerDelegate
- (void)assetRepairSchedulerAllRequestsComplete:(CKAssetRepairScheduler *)arg1;
- (void)assetRepairScheduler:(CKAssetRepairScheduler *)arg1 completedRepairWithMetadata:(CKUploadRequestMetadata *)arg2 error:(NSError *)arg3;
- (void)assetRepairScheduler:(CKAssetRepairScheduler *)arg1 preparingRepairWithIncludedMetadataCount:(unsigned long long)arg2;
- (void)assetRepairScheduler:(CKAssetRepairScheduler *)arg1 completedRequestWithMetadata:(CKUploadRequestMetadata *)arg2 result:(long long)arg3;
@end


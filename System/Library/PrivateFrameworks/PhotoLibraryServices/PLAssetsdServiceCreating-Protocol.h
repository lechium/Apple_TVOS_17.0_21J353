//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@protocol PLAssetsdServiceCreating <NSObject>
- (void)getDebugServiceWithReply:(void (^)(id <PLAssetsdDebugServiceProtocol>, NSError *))arg1;
- (void)getDiagnosticsServiceWithReply:(void (^)(id <PLAssetsdDiagnosticsServiceProtocol>, NSError *))arg1;
- (void)getDemoServiceWithReply:(void (^)(id <PLAssetsdDemoServiceProtocol>, NSError *))arg1;
- (void)getNotificationServiceWithReply:(void (^)(id <PLAssetsdNotificationServiceProtocol>, NSError *))arg1;
- (void)getSyncServiceWithReply:(void (^)(id <PLAssetsdSyncServiceProtocol>, NSError *))arg1;
- (void)getMigrationServiceWithReply:(void (^)(id <PLAssetsdMigrationServiceProtocol>, NSError *))arg1;
- (void)getCloudInternalServiceWithReply:(void (^)(id <PLAssetsdCloudInternalServiceProtocol>, NSError *))arg1;
- (void)getCloudServiceWithReply:(void (^)(id <PLAssetsdCloudServiceProtocol>, NSError *))arg1;
- (void)getResourceInternalServiceWithReply:(void (^)(id <PLAssetsdResourceInternalServiceProtocol>, NSError *))arg1;
- (void)getResourceWriteOnlyServiceWithReply:(void (^)(id <PLAssetsdResourceWriteOnlyServiceProtocol>, NSError *))arg1;
- (void)getResourceServiceWithReply:(void (^)(id <PLAssetsdResourceServiceProtocol>, NSError *))arg1;
- (void)getResourceAvailabilityServiceWithReply:(void (^)(id <PLAssetsdResourceAvailabilityServiceProtocol>, NSError *))arg1;
- (void)getPhotoKitAddServiceWithReply:(void (^)(id <PLAssetsdPhotoKitAddServiceProtocol>, NSError *))arg1;
- (void)getPhotoKitServiceWithReply:(void (^)(id <PLAssetsdPhotoKitServiceProtocol>, NSError *))arg1;
- (void)getPrivacySupportServiceWithReply:(void (^)(id <PLAssetsdPrivacySupportServiceProtocol>, NSError *))arg1;
- (void)getLibraryManagementServiceWithReply:(void (^)(id <PLAssetsdLibraryManagementServiceProtocol>, NSError *))arg1;
- (void)getSystemLibraryURLReadOnlyServiceWithReply:(void (^)(id <PLAssetsdSystemLibraryURLReadOnlyServiceProtocol>, NSError *))arg1;
- (void)getLibraryInternalServiceWithReply:(void (^)(id <PLAssetsdLibraryInternalServiceProtocol>, NSError *))arg1;
- (void)getLibraryServiceWithReply:(void (^)(id <PLAssetsdLibraryServiceProtocol>, NSError *))arg1;
@end


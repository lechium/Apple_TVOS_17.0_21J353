//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppStoreDaemon/NSObject-Protocol.h>

@protocol ASDServiceProtocol <NSObject>
- (void)getUpdatesServiceWithReplyHandler:(void (^)(id <ASDUpdatesServiceProtocol><NSXPCProxyCreating>, NSError *))arg1;
- (void)getTestFlightFeedbackServiceWithReplyHandler:(void (^)(id <ASDTestFlightFeedbackServiceProtocol><NSXPCProxyCreating>, NSError *))arg1;
- (void)getStoreKitExternalNotificationServiceWithReplyHandler:(void (^)(id <ASDStoreKitExternalNotificationServiceProtocol><NSXPCProxyCreating>, NSError *))arg1;
- (void)getSkannerServiceWithReplyHandler:(void (^)(id <ASDSkannerServiceProtocol><NSXPCProxyCreating>, NSError *))arg1;
- (void)getRestoreServiceWithReplyHandler:(void (^)(id <ASDRestoreServiceProtocol><NSXPCProxyCreating>, NSError *))arg1;
- (void)getRepairServiceWithReplyHandler:(void (^)(id <ASDRepairServiceProtocol><NSXPCProxyCreating>, NSError *))arg1;
- (void)getPurchaseServiceWithReplyHandler:(void (^)(id <ASDPurchaseServiceProtocol><NSXPCProxyCreating>, NSError *))arg1;
- (void)getPurchaseHistoryServiceWithReplyHandler:(void (^)(id <ASDPurchaseHistoryServiceProtocol><NSXPCProxyCreating>, NSError *))arg1;
- (void)getPersonalizationServiceWithReplyHandler:(void (^)(id <ASDPersonalizationServiceProtocol><NSXPCProxyCreating>, NSError *))arg1;
- (void)getOcelotServiceWithReplyHandler:(void (^)(id <ASDOcelotServiceProtocol><NSXPCProxyCreating>, NSError *))arg1;
- (void)getMetricsServiceWithReplyHandler:(void (^)(id <ASDAppMetricsServiceProtocol><NSXPCProxyCreating>, NSError *))arg1;
- (void)getManagedAppServiceWithReplyHandler:(void (^)(id <ASDManagedAppServiceProtocol><NSXPCProxyCreating>, NSError *))arg1;
- (void)getMacDaemonManagedServiceWithReplyHandler:(void (^)(id <ASDMacDaemonManagedServiceProtocol><NSXPCProxyCreating>, NSError *))arg1;
- (void)getLibraryServiceWithReplyHandler:(void (^)(id <ASDAppLibraryServiceProtocol><NSXPCProxyCreating>, NSError *))arg1;
- (void)getInstallWebAttributionServiceWithReplyHandler:(void (^)(id <ASDInstallWebAttributionServiceProtocol><NSXPCProxyCreating>, NSError *))arg1;
- (void)getInstallAttributionServiceWithReplyHandler:(void (^)(id <ASDInstallAttributionServiceProtocol><NSXPCProxyCreating>, NSError *))arg1;
- (void)getInstallationServiceWithReplyHandler:(void (^)(id <ASDInstallationServiceProtocol><NSXPCProxyCreating>, NSError *))arg1;
- (void)getIAPHistoryServiceWithReplyHandler:(void (^)(id <ASDIAPHistoryServiceProtocol><NSXPCProxyCreating>, NSError *))arg1;
- (void)getFairPlayServiceWithReplyHandler:(void (^)(id <ASDFairPlayServiceProtocol><NSXPCProxyCreating>, NSError *))arg1;
- (void)getDiagnosticServiceWithReplyHandler:(void (^)(id <ASDDiagnosticServiceProtocol><NSXPCProxyCreating>, NSError *))arg1;
- (void)getClipServiceWithReplyHandler:(void (^)(id <ASDClipServiceProtocol><NSXPCProxyCreating>, NSError *))arg1;
- (void)getCrossfireServiceWithReplyHandler:(void (^)(id <ASDCrossfireServiceProtocol><NSXPCProxyCreating>, NSError *))arg1;
- (void)getAppStoreServiceWithReplyHandler:(void (^)(id <ASDAppStoreServiceProtocol><NSXPCProxyCreating>, NSError *))arg1;
@end


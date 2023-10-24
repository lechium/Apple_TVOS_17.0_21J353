//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMBLocalDatabase, HMDCloudPairedMetadata, HMDCloudPairedMetadataVersionConfiguration, HMDNetworkRouterFirewallRuleAccessoryIdentifier, HMDNetworkRouterFirewallRuleCloudNetworkDeclarations, HMDNetworkRouterFirewallRuleConfiguration, HMFVersion, NSDictionary, NSSet, NSString;
@protocol HMDNetworkRouterFirewallRuleManagerInternal;

@protocol HMDNetworkRouterFirewallRuleManagerBackingStoreCoordinator <NSObject>
@property(readonly, nonatomic) __weak id <HMDNetworkRouterFirewallRuleManagerInternal> firewallRuleManager;
- (HMDCloudPairedMetadataVersionConfiguration *)pairedMetadataVersionConfigurationForAccessory:(HMDNetworkRouterFirewallRuleAccessoryIdentifier *)arg1 pairedMetadata:(HMDCloudPairedMetadata *)arg2;
- (HMDNetworkRouterFirewallRuleConfiguration *)ruleConfigurationForAccessory:(HMDNetworkRouterFirewallRuleAccessoryIdentifier *)arg1 declarations:(HMDNetworkRouterFirewallRuleCloudNetworkDeclarations *)arg2;
- (_Bool)removeOverridesForProductGroup:(NSString *)arg1 productNumber:(NSString *)arg2 error:(id *)arg3;
- (_Bool)removeAllOverridesWithError:(id *)arg1;
- (_Bool)addOverrides:(NSDictionary *)arg1 replace:(_Bool)arg2 error:(id *)arg3;
- (_Bool)removeAllLocalRulesWithError:(id *)arg1;
- (NSString *)dumpPairedMetadataForProductGroup:(NSString *)arg1 productNumber:(NSString *)arg2 firmwareVersion:(HMFVersion *)arg3 ignoreOverrides:(_Bool)arg4 rawOutput:(_Bool)arg5 error:(id *)arg6;
- (NSString *)dumpLocalRulesForProductGroup:(NSString *)arg1 productNumber:(NSString *)arg2 firmwareVersion:(HMFVersion *)arg3 ignoreOverrides:(_Bool)arg4 rawOutput:(_Bool)arg5 error:(id *)arg6;
- (void)dumpCloudRecordsForProductGroup:(NSString *)arg1 productNumber:(NSString *)arg2 rawOutput:(_Bool)arg3 listOnly:(_Bool)arg4 verifySignatures:(_Bool)arg5 completion:(void (^)(NSString *, NSError *))arg6;
- (NSSet *)fetchPairedMetadataVersionConfigurationsForAccessories:(NSSet *)arg1 qualityOfService:(long long)arg2 ignoreOverrides:(_Bool)arg3 error:(id *)arg4;
- (void)fetchRulesForAccessories:(NSSet *)arg1 qualityOfService:(long long)arg2 ignoreOverrides:(_Bool)arg3 completion:(void (^)(NSSet *, NSError *))arg4;
- (void)fetchCloudChangesWithQualityOfService:(long long)arg1 ignoreLastFetchedAccessories:(_Bool)arg2 forceChangeNotifications:(_Bool)arg3 completion:(void (^)(NSSet *, NSError *))arg4;
- (void)shutdownWithCompletion:(void (^)(NSError *))arg1;
- (void)startupWithLocalDatabase:(HMBLocalDatabase *)arg1 completion:(void (^)(NSError *))arg2;

@optional
- (void)firewallRuleManagerClientsDidChange;
@end


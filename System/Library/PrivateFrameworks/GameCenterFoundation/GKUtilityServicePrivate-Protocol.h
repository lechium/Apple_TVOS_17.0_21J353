//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameCenterFoundation/GKUtilityService-Protocol.h>

@class NSArray, NSData, NSURL;

@protocol GKUtilityServicePrivate <GKUtilityService>
- (oneway void)getWidgetStoreBagValueWithHandler:(void (^)(NSError *, NSNumber *, NSNumber *))arg1;
- (oneway void)getHostGameWithHandler:(void (^)(GKGameInternal *))arg1;
- (oneway void)invokeASCAppLaunchTrampolineWithURL:(NSURL *)arg1 handler:(void (^)(NSError *, NSNumber *, NSString *))arg2;
- (oneway void)checkAndUpdateArcadeSubscriberStatusWithHandler:(void (^)(NSError *))arg1;
- (oneway void)getArcadeSubscription:(void (^)(long long))arg1;
- (oneway void)cancelNetworkManagerTasks;
- (oneway void)loadDataForURL:(NSURL *)arg1 postBody:(NSData *)arg2 completionHandler:(void (^)(NSData *, NSError *))arg3;
- (oneway void)refreshPreferencesWithDataType:(unsigned int)arg1;
- (oneway void)refreshPreferences;
- (oneway void)updateNotificationTopicsForcefully:(_Bool)arg1;
- (oneway void)pingWithHandler:(void (^)(void))arg1;
- (oneway void)clearCaches;
- (oneway void)terminate;
- (oneway void)openGameCenterSettings;
- (oneway void)openSettings;
- (oneway void)getCredentialInfoAndStoreBagValuesForKeys:(NSArray *)arg1 handler:(void (^)(NSString *, NSString *, NSString *, NSData *, NSDictionary *, NSError *))arg2;
@end


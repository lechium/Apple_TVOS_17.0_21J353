//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameCenterFoundation/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSNumber, NSString, NSURL;

@protocol GKUtilityService <NSObject>
- (oneway void)openGameCenterSettings;
- (oneway void)completeGameRecording;
- (oneway void)recordGameStart;
- (oneway void)completeMatchRecording:(NSString *)arg1 matchType:(NSString *)arg2;
- (oneway void)recordSharePlayDevices:(NSNumber *)arg1;
- (oneway void)recordActiveDevices:(NSNumber *)arg1;
- (oneway void)recordMatchServer:(NSString *)arg1;
- (oneway void)recordMatchStart:(NSString *)arg1 minPlayers:(NSNumber *)arg2 maxPlayers:(NSNumber *)arg3;
- (oneway void)reportMultiplayerActivityMetricsEvent:(NSDictionary *)arg1;
- (oneway void)reportPerformanceMetricsEvent:(NSDictionary *)arg1;
- (oneway void)reportMetricsEventWithTopic:(NSString *)arg1 shouldFlush:(NSNumber *)arg2 metricsFields:(NSDictionary *)arg3;
- (oneway void)viewableThresholdWithCompletion:(void (^)(NSNumber *))arg1;
- (oneway void)openSoftwareUpdateSettings;
- (oneway void)openICloudSettings;
- (oneway void)deleteCachedImageDataFromSubdirectory:(NSString *)arg1 withFileName:(NSString *)arg2 handler:(void (^)(void))arg3;
- (oneway void)loadCachedImageDataFromSubdirectory:(NSString *)arg1 withFileName:(NSString *)arg2 handler:(void (^)(NSData *))arg3;
- (oneway void)cacheImageData:(NSData *)arg1 inSubdirectory:(NSString *)arg2 withFileName:(NSString *)arg3 handler:(void (^)(void))arg4;
- (oneway void)requestImageDataForURL:(NSURL *)arg1 subdirectory:(NSString *)arg2 fileName:(NSString *)arg3 handler:(void (^)(NSData *))arg4;
- (oneway void)getStoreBagValuesForKeys:(NSArray *)arg1 handler:(void (^)(NSDictionary *, NSError *))arg2;
@end


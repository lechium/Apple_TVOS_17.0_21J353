//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoAnalysis/PLAnalysisServiceLibraryAvailabilityNotificationProtocol-Protocol.h>

@class NSURL;

@protocol PLPhotoAnalysisServiceProviderProtocol <PLAnalysisServiceLibraryAvailabilityNotificationProtocol>
- (void)wallpaperServiceAt:(NSURL *)arg1 reply:(void (^)(id <PLPhotoAnalysisWallpaperServiceProtocol>, NSError *))arg2;
- (void)executiveServiceAt:(NSURL *)arg1 reply:(void (^)(id <PLPhotoAnalysisExecutiveServiceProtocol>, NSError *))arg2;
- (void)testServiceAt:(NSURL *)arg1 reply:(void (^)(id <PLPhotoAnalysisTestServiceProtocol>, NSError *))arg2;
- (void)momentGraphServiceAt:(NSURL *)arg1 reply:(void (^)(id <PLPhotoAnalysisMomentGraphServiceProtocol>, NSError *))arg2;
- (void)photoLibraryServiceAt:(NSURL *)arg1 reply:(void (^)(id <PLPhotoAnalysisPhotoLibraryServiceProtocol>, NSError *))arg2;
- (void)legacyStorytellingServiceAt:(NSURL *)arg1 reply:(void (^)(id, NSError *))arg2;
@end


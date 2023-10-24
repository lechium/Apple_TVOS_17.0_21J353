//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary, NSSet, NSString;

@protocol PLPhotoAnalysisGraphServiceClientProtocol
- (void)requestGraphModelResultWithOptions:(NSDictionary *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSDictionary *, NSError *))arg3;
- (void)runPerformanceTest:(NSString *)arg1 options:(NSDictionary *)arg2 context:(NSDictionary *)arg3 reply:(void (^)(_Bool, NSError *))arg4;
- (void)requestEnergyStatusWithContext:(NSDictionary *)arg1 reply:(void (^)(NSDictionary *))arg2;
- (void)requestUpdateFeaturedContentBasedOnUserFeedbackWithPersonUUIDs:(NSSet *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(_Bool, NSError *))arg3;
- (void)requestCurationScoreByAssetUUIDForAssetUUIDs:(NSArray *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSDictionary *, NSError *))arg3;
- (void)requestGeoHashForAssetLocalIdentifiers:(NSArray *)arg1 geoHashSize:(NSString *)arg2 context:(NSDictionary *)arg3 reply:(void (^)(NSDictionary *, NSError *))arg4;
- (void)requestIconicSceneScoreForAssetLocalIdentifiers:(NSArray *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSDictionary *, NSError *))arg3;
- (void)runCurationWithItems:(NSDictionary *)arg1 options:(NSDictionary *)arg2 context:(NSDictionary *)arg3 reply:(void (^)(NSDictionary *, NSError *))arg4;
- (void)requestSignalModelInfosWithContext:(NSDictionary *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)requestAssetCollectionsRelatedToAssetWithLocalIdentifier:(NSString *)arg1 options:(NSDictionary *)arg2 context:(NSDictionary *)arg3 reply:(void (^)(NSArray *, NSError *))arg4;
- (void)generateSuggestionsWithOptions:(NSDictionary *)arg1 context:(NSDictionary *)arg2 reply:(void (^)(NSDictionary *, NSError *))arg3;
@end


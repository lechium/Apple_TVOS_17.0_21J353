//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GEOTileData, GEOURLWithHeaders, NSArray, NSData, NSError, NSString, _GEOSimpleTileRequesterOperation;

@protocol GEOSimpleTileRequesterSubclass
- (GEOURLWithHeaders *)urlForTileKey:(const struct _GEOTileKey *)arg1;

@optional
- (GEOTileData *)processTileData:(GEOTileData *)arg1 forKey:(const struct _GEOTileKey *)arg2 error:(id *)arg3;
- (void)failedLoadingTileForKey:(struct _GEOTileKey)arg1 baseOperation:(_GEOSimpleTileRequesterOperation *)arg2 error:(NSError *)arg3;
- (void)finishedLoadingTileForKey:(struct _GEOTileKey)arg1 baseOperation:(_GEOSimpleTileRequesterOperation *)arg2;
- (NSArray *)additionalAnalyticsStatesForKey:(const struct _GEOTileKey *)arg1;
- (_Bool)shouldReportAnalyticsOnSuccessForTileKey:(const struct _GEOTileKey *)arg1;
- (_Bool)shouldReportAnalyticsOnErrorWithRetryForTileKey:(const struct _GEOTileKey *)arg1;
- (_Bool)shouldReportAnalyticsOnErrorForTileKey:(const struct _GEOTileKey *)arg1;
- (_Bool)shouldDownloadToDiskForTileKey:(const struct _GEOTileKey *)arg1 estimatedDataSize:(unsigned long long)arg2;
- (_Bool)downloadsDataToDisk;
- (_Bool)tileDataIsCacheableForTileKey:(const struct _GEOTileKey *)arg1;
- (NSString *)mergeBaseTileEtag:(NSString *)arg1 withLocalizationTileEtag:(NSString *)arg2;
- (NSData *)mergeBaseTile:(NSData *)arg1 withLocalizationTile:(NSData *)arg2;
- (CDUnion_20bcf645)tileSetForKey:(const struct _GEOTileKey *)arg1;
- (unsigned int)tileEditionForKey:(const struct _GEOTileKey *)arg1;
- (_Bool)shouldAllowEmptyDataForTileKey:(const struct _GEOTileKey *)arg1;
- (int)checksumMethodForIncomingTileDataWithKey:(const struct _GEOTileKey *)arg1;
- (_Bool)needsLocalizationForKey:(const struct _GEOTileKey *)arg1;
- (GEOURLWithHeaders *)localizationURLForTileKey:(const struct _GEOTileKey *)arg1;
- (CDStruct_026435ec)kindForTileKey:(const struct _GEOTileKey *)arg1;
@end


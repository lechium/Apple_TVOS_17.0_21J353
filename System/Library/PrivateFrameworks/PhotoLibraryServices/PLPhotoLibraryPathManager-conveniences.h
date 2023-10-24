//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibraryServicesCore/PLPhotoLibraryPathManager.h>

@interface PLPhotoLibraryPathManager (conveniences)
+ (id)defaultDeferredRenderFileFormatTypeIdentifierForHDR;	// IMP=0x008000000056bc43
+ (id)defaultDeferredRenderFileFormatTypeIdentifier;	// IMP=0x008000000056bc27
+ (id)temporaryRenderContentURLForInternalRendersWithExtension:(id)arg1 appropriateForURL:(id)arg2;	// IMP=0x008000000056b970
- (id)temporaryRenderContentURLForInternalRendersWithExtension:(id)arg1;	// IMP=0x00100000005698eb
- (_Bool)_shouldRemoveOutboundResourceAtURL:(id)arg1 withExpiryInterval:(double)arg2;	// IMP=0x0010000000569752
- (void)cleanupOutboundSharingFilesWithExpiryInterval:(double)arg1;	// IMP=0x0010000000568f89
- (id)assetCreationHoldingDirectoryForAssetUUID:(id)arg1;	// IMP=0x0010000000568f0f
- (id)assetCreationHoldingDirectory;	// IMP=0x0010000000568e04
- (_Bool)removeComputeDirectory;	// IMP=0x0010000000568cc3
- (_Bool)removePartialVideoDirectory;	// IMP=0x0010000000568b4d
- (id)URLForPartialVideoDirectoryWithAssetUUID:(id)arg1;	// IMP=0x0010000000568a27
- (id)URLForPartialVideoWithResourceFingerprint:(id)arg1 assetUUID:(id)arg2 timeRange:(CDStruct_3c1748cc)arg3;	// IMP=0x001000000056888a
- (id)cloudSharingArchiveDirectory;	// IMP=0x001000000056886c
- (id)directoryPathForInFlightComments:(_Bool)arg1;	// IMP=0x0010000000568663
- (id)cloudServiceEnableLogFileURL;	// IMP=0x00100000005685c9
- (_Bool)removeCPLDataDirectory;	// IMP=0x00100000005681e7
- (id)_cplLocalModeEnabledMarkerFilePathCreateIfNeeded:(_Bool)arg1;	// IMP=0x0010000000568186
- (id)cplLocalModeEnabledMarkerFilePathForWriting;	// IMP=0x001000000056816f
- (id)cplLocalModeEnabledMarkerFilePathForReading;	// IMP=0x001000000056815b
- (id)cplDownloadFinishedMarkerFilePath;	// IMP=0x00100000005680f7
- (id)cplEnableMarkerFilePath;	// IMP=0x0010000000568093
- (id)wipeCPLOnOpenPath;	// IMP=0x001000000056802f
- (id)forceSoftResetSyncPath;	// IMP=0x0010000000567fcb
- (id)disableICloudPhotosFilePath;	// IMP=0x0010000000567f67
- (id)pauseICloudPhotosFilePath;	// IMP=0x0010000000567f0b
- (id)enableICloudPhotosFilePath;	// IMP=0x0010000000567eaf
- (id)cplDataDirectoryCreateIfNeeded:(_Bool)arg1;	// IMP=0x0010000000567e8d
- (id)deletedMemoryUUIDsFilePath;	// IMP=0x0010000000567e31
- (id)searchIndexStatusFilePath;	// IMP=0x0010000000567dda
- (id)searchIndexSpotlightPrivateIndexDirectory;	// IMP=0x0010000000567d83
- (id)searchIndexSpotlightProgressFilePath;	// IMP=0x0010000000567d2c
- (id)searchIndexSynonymsFilePath;	// IMP=0x0010000000567cd5
- (id)searchIndexGraphDataProgressFilePath;	// IMP=0x0010000000567c7e
- (id)searchIndexZeroKeywordStoreFilePath;	// IMP=0x0010000000567c27
- (id)searchIndexProgressFilePath;	// IMP=0x0010000000567bd0
- (id)searchIndexMetadataStoreFilePath;	// IMP=0x0010000000567b79
- (id)searchIndexSystemInfoFilePath;	// IMP=0x0010000000567b22
- (id)searchIndexDatabaseFilePath;	// IMP=0x0010000000567acb
- (id)searchIndexDirectory;	// IMP=0x0010000000567ab4
- (id)photoStreamsDataDirectory;	// IMP=0x0010000000567a5a
- (id)URLForMetadataWithExtension:(id)arg1 forMediaInMainDirectory:(id)arg2 withFilename:(id)arg3;	// IMP=0x0010000000567887
- (id)assetPathForComputeDirectoryWithDirectory:(id)arg1 filename:(id)arg2;	// IMP=0x001000000056786a
- (id)assetPathForMutationsDirectoryWithDirectory:(id)arg1 filename:(id)arg2;	// IMP=0x001000000056784d
- (id)_dcimAssetPathForResourceDirectoryPathType:(unsigned char)arg1 directory:(id)arg2 filename:(id)arg3;	// IMP=0x00100000005676cc
- (_Bool)isSystemPhotoLibraryPathManager;	// IMP=0x0010000000567522
- (id)recordRebuildReason;	// IMP=0x001000000056b3f7
- (long long)lastRebuildReason;	// IMP=0x001000000056b1e0
- (void)setSqliteErrorForRebuildReason:(long long)arg1 allowsExit:(_Bool)arg2;	// IMP=0x001000000056ab88
- (void)_abortWithRebuildReasonPLRebuildReasonExcessiveOrphanedSceneClassifications;	// IMP=0x001000000056ab02
- (void)_abortWithRebuildReasonPLRebuildReasonPersonUUIDCorruption;	// IMP=0x001000000056aa7c
- (void)_abortWithRebuildReasonPLRebuildReasonBackgroundMigration;	// IMP=0x001000000056a9f6
- (void)_abortWithRebuildReasonPLRebuildReasonExcessivePersistentHistorySize;	// IMP=0x001000000056a970
- (void)_abortWithRebuildReasonPLRebuildReasonSharedAlbumUUIDCorruption;	// IMP=0x001000000056a8ea
- (void)_abortWithRebuildReasonPLRebuildReasonMPSUUIDCorruption;	// IMP=0x001000000056a864
- (void)_abortWithRebuildReasonPLRebuildReasonSharedAlbumPathCorruption;	// IMP=0x001000000056a7de
- (void)_abortWithRebuildReasonPLRebuildReasonMPSPathCorruption;	// IMP=0x001000000056a758
- (void)_abortWithRebuildReasonPLRebuildReasonUpgradeForceRebuild;	// IMP=0x001000000056a6d2
- (void)_abortWithRebuildReasonPLRebuildReasonTooManyThumbnailRebuilds;	// IMP=0x001000000056a64c
- (void)_abortWithRebuildReasonPLRebuildReasonDatabaseCorruption;	// IMP=0x001000000056a5c6
- (void)_abortWithRebuildReasonPLRebuildReasonPathCorruption;	// IMP=0x001000000056a540
- (void)_abortWithRebuildReasonPLRebuildReasonUUIDCorruption;	// IMP=0x001000000056a4ba
- (void)_abortWithRebuildReasonPLRebuildReasonTooManyOrphanedRecords;	// IMP=0x001000000056a434
- (void)_abortWithRebuildReasonPLRebuildReasonExcessiveRecoveryAttempts;	// IMP=0x001000000056a3ae
- (void)_abortWithRebuildReasonPLRebuildReasonCorruption;	// IMP=0x001000000056a328
- (void)_abortWithRebuildReasonPLRebuildReasonUnknown;	// IMP=0x001000000056a2a2
- (void)_abortWithRebuildReasonPLRebuildReasonLightweightMigration;	// IMP=0x001000000056a21c
- (void)_abortWithRebuildReasonPLRebuildReasonStagedDemoContentInstallation;	// IMP=0x001000000056a196
- (void)_abortWithRebuildReasonPLRebuildReasonSimulatedCorruption;	// IMP=0x001000000056a110
- (void)removeSqliteErrorIndicatorFile;	// IMP=0x0010000000569ef2
- (_Bool)_createSqliteErrorIndicatorFileWithRebuildReason:(long long)arg1;	// IMP=0x0010000000569b39
- (id)_rebuildDateFormatter;	// IMP=0x0010000000569ab7
- (_Bool)sqliteErrorIndicatorFileExists;	// IMP=0x0010000000569a42
@end

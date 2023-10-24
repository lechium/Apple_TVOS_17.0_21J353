//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MADServiceClientTaskQueuingScheduler, NSMutableDictionary, NSObject, NSString, NSXPCConnection;
@protocol OS_dispatch_queue, VCPMediaAnalysisClientProtocol;

@interface VCPMediaAnalysisClientHandler
{
    NSXPCConnection *_connection;	// 8 = 0x8
    id <VCPMediaAnalysisClientProtocol> _clientProxy;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_managementQueue;	// 24 = 0x18
    NSMutableDictionary *_taskIDMapping;	// 32 = 0x20
    struct CF<__SecTask *> _secTask;	// 40 = 0x28
    NSString *_clientBundleID;	// 48 = 0x30
    NSString *_clientTeamID;	// 56 = 0x38
    _Bool _userSafetyEntitled;	// 64 = 0x40
    MADServiceClientTaskQueuingScheduler *_queuingTaskScheduler;	// 72 = 0x48
}

+ (unsigned long long)disablePhotosPostCaptureProcessing;	// IMP=0x002000000004c58a
+ (id)errorForStatus:(int)arg1 withDescription:(id)arg2;	// IMP=0x0010000000047138
+ (id)clientHandlerWithXPCConnection:(id)arg1;	// IMP=0x00100000000470d3
- (id).cxx_construct;	// IMP=0x002000000005ef61
- (void).cxx_destruct;	// IMP=0x001000000005eecc
- (void)requestStaticStickerScoring:(int)arg1 photoLibraryURL:(id)arg2 options:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000005e9ae
- (void)downloadVideoEncoderIfNeededWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000005e645
- (void)queryAssetsPendingDeferredProcessingWithPhotoLibraryURL:(id)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x001000000005e195
- (void)requestForceDeferredProcessing:(int)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x001000000005dd75
- (void)requestDeferredProcessingTypes:(id)arg1 forAssetsWithLocalIdentifiers:(id)arg2 withPhotoLibraryURL:(id)arg3 andReply:(CDUnknownBlockType)arg4;	// IMP=0x001000000005d40e
- (void)requestProcessingTypes:(unsigned long long)arg1 forAssetsWithLocalIdentifiers:(id)arg2 fromPhotoLibraryWithURL:(id)arg3 withRequestID:(int)arg4 andReply:(CDUnknownBlockType)arg5;	// IMP=0x001000000005d063
- (void)requestIdentificationOfFacesWithLocalIdentifiers:(id)arg1 fromPhotoLibraryWithURL:(id)arg2 withRequestID:(int)arg3 andReply:(CDUnknownBlockType)arg4;	// IMP=0x001000000005cb21
- (void)requestAutoCounterSIMLValidation:(int)arg1 withPhotoLibraryURL:(id)arg2 simlGroundTruthURL:(id)arg3 andReply:(CDUnknownBlockType)arg4;	// IMP=0x001000000005c745
- (void)requestAutoCounterAccuracyCalculation:(int)arg1 withPhotoLibraryURL:(id)arg2 clusterStateURL:(id)arg3 groundTruthURL:(id)arg4 andReply:(CDUnknownBlockType)arg5;	// IMP=0x001000000005c275
- (void)requestAutoCounterAccuracyCalculation:(int)arg1 withPhotoLibraryURL:(id)arg2 andReply:(CDUnknownBlockType)arg3;	// IMP=0x001000000005bbbe
- (void)requestDumpAutoCounter:(int)arg1 withPhotoLibraryURL:(id)arg2 andReply:(CDUnknownBlockType)arg3;	// IMP=0x001000000005b704
- (void)requestOptInAutoCounter:(int)arg1 withPhotoLibraryURL:(id)arg2 persons:(id)arg3 andReply:(CDUnknownBlockType)arg4;	// IMP=0x001000000005b0db
- (void)queryAutoCounterOptInStatus:(int)arg1 withPhotoLibraryURL:(id)arg2 personLocalIdentifiers:(id)arg3 andReply:(CDUnknownBlockType)arg4;	// IMP=0x001000000005ab59
- (void)requestVIPModelStorageFilepathForPhotoLibraryURL:(id)arg1 forModelType:(unsigned long long)arg2 andReply:(CDUnknownBlockType)arg3;	// IMP=0x001000000005a84c
- (void)requestPersonPreferenceForPhotoLibraryURL:(id)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x001000000005a689
- (void)requestRebuildPersons:(int)arg1 withLocalIdentifiers:(id)arg2 andPhotoLibraryURL:(id)arg3 andReply:(CDUnknownBlockType)arg4;	// IMP=0x0010000000059da8
- (void)requestReclusterFaces:(int)arg1 withPhotoLibraryURL:(id)arg2 andReply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000059511
- (void)requestResetFaceClusteringState:(int)arg1 withPhotoLibraryURL:(id)arg2 andReply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000058c7a
- (void)requestClusterCacheValidation:(int)arg1 withPhotoLibraryURL:(id)arg2 andReply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000583c1
- (void)requestPersonPromoterStatus:(int)arg1 withAdvancedFlag:(_Bool)arg2 andPhotoLibraryURL:(id)arg3 andReply:(CDUnknownBlockType)arg4;	// IMP=0x001000000005820a
- (void)requestSuggestedMePersonIdentifier:(int)arg1 withContext:(id)arg2 andPhotoLibraryURL:(id)arg3 andReply:(CDUnknownBlockType)arg4;	// IMP=0x00100000000578f0
- (void)requestResetPetClassificationModel:(int)arg1 withPhotoLibraryURL:(id)arg2 andReply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000057059
- (void)requestResetFaceClassificationModel:(int)arg1 withPhotoLibraryURL:(id)arg2 andReply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000567c2
- (void)requestResetPersons:(int)arg1 withPhotoLibraryURL:(id)arg2 andReply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000055ec3
- (void)requestFaceCandidatesforKeyFace:(int)arg1 withPersonsWithLocalIdentifiers:(id)arg2 andPhotoLibraryURL:(id)arg3 andReply:(CDUnknownBlockType)arg4;	// IMP=0x00100000000555a9
- (void)requestUpdateKeyFacesOfPersons:(int)arg1 withLocalIdentifiers:(id)arg2 andForceUpdate:(_Bool)arg3 andPhotoLibraryURL:(id)arg4 andReply:(CDUnknownBlockType)arg5;	// IMP=0x0010000000054c82
- (void)requestSuggestedPersons:(int)arg1 withPersonWithLocalIdentifier:(id)arg2 toBeConfirmedPersonSuggestions:(id)arg3 toBeRejectedPersonSuggestions:(id)arg4 andPhotoLibraryURL:(id)arg5 andReply:(CDUnknownBlockType)arg6;	// IMP=0x001000000005422b
- (void)currentOutstandingTasksWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000005417f
- (void)cancelBackgroundActivityWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000054049
- (void)notifyLibraryAvailableAtURL:(id)arg1;	// IMP=0x0010000000053e2f
- (void)cancelAllRequests;	// IMP=0x0010000000053a60
- (void)cancelRequest:(int)arg1;	// IMP=0x0010000000053774
- (void)requestRecentsProcessing:(int)arg1 withTaskID:(unsigned long long)arg2 photoLibraryWithURL:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0010000000052aa9
- (void)requestAssetProcessing:(int)arg1 withTaskID:(unsigned long long)arg2 forLocalIdentifiers:(id)arg3 fromPhotoLibraryWithURL:(id)arg4 withOptions:(id)arg5 andReply:(CDUnknownBlockType)arg6;	// IMP=0x001000000005195c
- (void)requestVideoFramesProcessing:(int)arg1 withTaskID:(unsigned long long)arg2 frames:(id)arg3 options:(id)arg4 andReply:(CDUnknownBlockType)arg5;	// IMP=0x0010000000050dd8
- (void)requestLibraryProcessing:(int)arg1 withTaskID:(unsigned long long)arg2 forPhotoLibraryURL:(id)arg3 withOptions:(id)arg4 andReply:(CDUnknownBlockType)arg5;	// IMP=0x001000000004f4c9
- (void)_resetProcessingStatusForTaskID:(unsigned long long)arg1 andPhotoLibrary:(id)arg2;	// IMP=0x001000000004f2d7
- (void)requestAssetAnalysis:(int)arg1 forPhotoLibraryURL:(id)arg2 withLocalIdentifiers:(id)arg3 realTime:(_Bool)arg4 withReply:(CDUnknownBlockType)arg5;	// IMP=0x001000000004e62f
- (void)requestAssetAnalysis:(int)arg1 forLocalIdentifiers:(id)arg2 fromPhotoLibraryWithURL:(id)arg3 withOptions:(id)arg4 analysisTypes:(unsigned long long)arg5 withReply:(CDUnknownBlockType)arg6;	// IMP=0x001000000004d965
- (void)requestURLAssetAnalysis:(int)arg1 forAssetWithResourcePaths:(id)arg2 withOptions:(id)arg3 analysisTypes:(unsigned long long)arg4 sandboxTokens:(id)arg5 withReply:(CDUnknownBlockType)arg6;	// IMP=0x001000000004c592
- (void)endEntryPoint;	// IMP=0x001000000004c584
- (void)cacheHitWithQueryID:(unsigned long long)arg1 cachedResultQueryID:(unsigned long long)arg2 engagementSuggestionType:(id)arg3;	// IMP=0x001000000004c57e
- (void)cacheHitWithQueryID:(unsigned long long)arg1 cachedResultQueryID:(unsigned long long)arg2;	// IMP=0x001000000004c578
- (void)startEntryPointWithQueryID:(unsigned long long)arg1 andEvent:(unsigned long long)arg2;	// IMP=0x001000000004c572
- (void)startEntryPointWithQueryID:(unsigned long long)arg1;	// IMP=0x001000000004c56c
- (void)queryUserSafetyEnablement:(CDUnknownBlockType)arg1;	// IMP=0x001000000004c39a
- (void)resetPerformanceMeasurements;	// IMP=0x001000000004c390
- (void)queryPerformanceMeasurementsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000004c328
- (void)requestVideoProcessing:(id)arg1 assetIdentifier:(id)arg2 identifierType:(unsigned long long)arg3 photoLibraryURL:(id)arg4 requestID:(int)arg5 isIncremental:(_Bool)arg6 reply:(CDUnknownBlockType)arg7;	// IMP=0x001000000004c195
- (void)requestVideoProcessing:(id)arg1 assetURL:(id)arg2 sandboxToken:(id)arg3 identifier:(id)arg4 requestID:(int)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x001000000004be13
- (void)requestVideoProcessing:(id)arg1 asset:(id)arg2 requestID:(int)arg3 isIncremental:(_Bool)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x001000000004b7f0
- (void)requestImageProcessingWithCloudIdentifierRequests:(id)arg1 requestID:(int)arg2 andReply:(CDUnknownBlockType)arg3;	// IMP=0x001000000004b0cc
- (void)requestImageProcessing:(id)arg1 forAssetWithCloudIdentifier:(id)arg2 requestID:(int)arg3 andReply:(CDUnknownBlockType)arg4;	// IMP=0x001000000004a4e2
- (void)requestImageProcessing:(id)arg1 forIOSurface:(id)arg2 withOrientation:(unsigned int)arg3 assetLocalIdentifier:(id)arg4 photoLibraryURL:(id)arg5 requestID:(int)arg6 andReply:(CDUnknownBlockType)arg7;	// IMP=0x0010000000049cca
- (void)requestImageProcessing:(id)arg1 forAssetWithIdentifier:(id)arg2 identifierType:(unsigned long long)arg3 fromPhotoLibraryWithURL:(id)arg4 requestID:(int)arg5 andReply:(CDUnknownBlockType)arg6;	// IMP=0x001000000004962a
- (id)assetWithIdentifier:(id)arg1 identifierType:(unsigned long long)arg2 fromPhotoLibraryWithURL:(id)arg3 error:(id *)arg4;	// IMP=0x0010000000048df1
- (void)requestImageProcessing:(id)arg1 forImageData:(id)arg2 withUniformTypeIdentifier:(id)arg3 identifier:(id)arg4 requestID:(int)arg5 andReply:(CDUnknownBlockType)arg6;	// IMP=0x00100000000487a6
- (void)requestImageProcessing:(id)arg1 forAssetURL:(id)arg2 withSandboxToken:(id)arg3 identifier:(id)arg4 requestID:(int)arg5 andReply:(CDUnknownBlockType)arg6;	// IMP=0x0010000000047fc8
- (void)requestImageProcessing:(id)arg1 forIOSurface:(id)arg2 withOrientation:(unsigned int)arg3 identifier:(id)arg4 requestID:(int)arg5 andReply:(CDUnknownBlockType)arg6;	// IMP=0x0010000000047888
- (long long)consumeSandboxExtension:(id)arg1 url:(id)arg2;	// IMP=0x0010000000047622
- (void)requestMediaAnalysisDatabaseAccessSandboxExtensionWithPhotoLibraryURL:(id)arg1 andReply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000047324
- (id)initWithXPCConnection:(id)arg1;	// IMP=0x001000000004685e
- (id)init;	// IMP=0x0010000000046850

@end


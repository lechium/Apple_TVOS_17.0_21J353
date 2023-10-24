//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VNRegionOfInterestTilingOptions, VisionCoreSceneNetInferenceNetworkDescriptor, _VNImageAnalyzerMultiDetectorSceneOperationPointsCache;

__attribute__((visibility("hidden")))
@interface VNImageAnalyzerMultiDetector
{
    VNRegionOfInterestTilingOptions *_inputImageTilingOptions;	// 16 = 0x10
    int _customClassifierEspressoEngine;	// 24 = 0x18
    int _customClassifierEspressoDeviceID;	// 28 = 0x1c
    unsigned long long _model;	// 32 = 0x20
    VisionCoreSceneNetInferenceNetworkDescriptor *_inferenceDescriptor;	// 40 = 0x28
    unsigned int _cachedInferenceImagePixelFormatType;	// 48 = 0x30
    shared_ptr_eb20c8f2 _defaultSceneClassificationHierarchicalModel;	// 56 = 0x38
    struct shared_ptr<vision::mod::ImageAnalyzer> _imageAnalyzer;	// 72 = 0x48
    struct vector<unsigned long, std::allocator<unsigned long>> _entityNetIndexesToReport;	// 88 = 0x58
    _VNImageAnalyzerMultiDetectorSceneOperationPointsCache *_operationPointsCache;	// 112 = 0x70
    struct shared_ptr<std::vector<std::shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier>>> _junkCustomClassifiers_DO_NOT_ACCESS_DIRECTLY;	// 120 = 0x78
    struct unique_ptr<vision::mod::ImageAnalyzer_PCA, std::default_delete<vision::mod::ImageAnalyzer_PCA>> _imageAnalyzerPCA256_DO_NOT_ACCESS_DIRECTLY;	// 136 = 0x88
    struct shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier> _VNVYvzEtX1JlUdu8xx5qhDICustomClassifier;	// 144 = 0x90
    struct shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier> _potentialLandmarkCustomClassifier_DO_NOT_ACCESS_DIRECTLY;	// 160 = 0xa0
    struct shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier> _VN5kJNH3eYuyaLxNpZr5Z7ziCustomClassifier;	// 176 = 0xb0
    struct shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier> _significantEventCustomClassifier_DO_NOT_ACCESS_DIRECTLY;	// 192 = 0xc0
    struct shared_ptr<vision::mod::ImageAnalyzer_CustomClassifier> _cityNatureCustomClassifier_DO_NOT_ACCESS_DIRECTLY;	// 208 = 0xd0
    struct os_unfair_lock_s _cachedAllSceneClassificationsFromLastAnalysisAccessLock;	// 224 = 0xe0
    struct shared_ptr<const std::vector<std::tuple<std::string, float, bool>>> _cachedAllSceneClassificationsFromLastAnalysis;	// 232 = 0xe8
    _Bool _hasherInitialized;	// 248 = 0xf8
}

+ (id)allPhotosAdjustmentKeys;	// IMP=0x006000000021e97c
+ (id)supportedImageSizeSetForOptions:(id)arg1 error:(id *)arg2;	// IMP=0x006000000021e7f1
+ (shared_ptr_eb20c8f2)createHierarchicalModelForMultiDetectorModel:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x006000000021e72c
+ (shared_ptr_eb20c8f2)createHierarchicalModelForInferenceDescriptor:(id)arg1 error:(id *)arg2;	// IMP=0x006000000021e44f
+ (id)disallowedListForModel:(unsigned long long)arg1;	// IMP=0x006000000021e40d
+ (unsigned long long)modelForRequestClass:(Class)arg1 revision:(unsigned long long)arg2;	// IMP=0x006000000021e31f
+ (Class)detectorClassForConfigurationOptions:(id)arg1 error:(id *)arg2;	// IMP=0x006000000021e127
+ (id)configurationOptionKeysForDetectorKey;	// IMP=0x006000000021e0c4
+ (void)recordDefaultConfigurationOptionsInDictionary:(id)arg1;	// IMP=0x006000000021e045
+ (id)supportedComputeStageDevicesForOptions:(id)arg1 error:(id *)arg2;	// IMP=0x006000000021de0d
+ (id)computeStagesToBindForConfigurationOptions:(id)arg1;	// IMP=0x006000000021dda6
+ (_Bool)_getAssociatedBoundingBoxGeneratorClass:(Class *)arg1 options:(id *)arg2 forConfigurationOptions:(id)arg3 error:(id *)arg4;	// IMP=0x006000000021dc2e
+ (id)_newSaliencyHeatmapBoundingBoxGeneratorOptionsForOptions:(id)arg1;	// IMP=0x006000000021dadb
+ (id)_saliencyHeatmapBoundingBoxGeneratorTypeForOriginatingRequestSpecifier:(id)arg1;	// IMP=0x006000000021da39
+ (id)_inferenceDescriptorForOptions:(id)arg1 error:(id *)arg2;	// IMP=0x006000000021d906
+ (id)_newInferenceDescriptorForModel:(unsigned long long)arg1 configuredWithOptions:(id)arg2 error:(id *)arg3;	// IMP=0x006000000021d7dd
- (id).cxx_construct;	// IMP=0x000000000020b211
- (void).cxx_destruct;	// IMP=0x000000000020b103
- (id)allCityNatureIdentifiersWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x000000000020b07a
- (id)allSignificantEventIdentifiersWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x000000000020aff1
- (id)allVN5kJNH3eYuyaLxNpZr5Z7ziIdentifiersWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x000000000020af68
- (id)allRecognizedObjectsIdentifiersWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x000000000020a97d
- (id)allJunkIdentifiersForOptions:(id)arg1 error:(id *)arg2;	// IMP=0x000000000020a808
- (id)sceneLabelOperationPointsForOriginatingRequestSpecifier:(id)arg1 error:(id *)arg2;	// IMP=0x000000000020a7db
- (id)allSceneIdentifiersWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x000000000020a1dd
@property(readonly) _Bool hasSliderNet;
@property(readonly) _Bool hasObjDetNet;
- (id)_processFullImagePixelBuffer:(const struct __CVBuffer *)arg1 options:(id)arg2 regionOfInterest:(struct CGRect)arg3 qosClass:(unsigned int)arg4 warningRecorder:(id)arg5 error:(id *)arg6 progressHandler:(CDUnknownBlockType)arg7;	// IMP=0x000000000020993f
- (id)processRegionOfInterest:(struct CGRect)arg1 croppedPixelBuffer:(const struct __CVBuffer *)arg2 options:(id)arg3 qosClass:(unsigned int)arg4 warningRecorder:(id)arg5 error:(id *)arg6 progressHandler:(CDUnknownBlockType)arg7;	// IMP=0x00000000002098f9
- (_Bool)createRegionOfInterestCrop:(struct CGRect)arg1 options:(id)arg2 qosClass:(unsigned int)arg3 warningRecorder:(id)arg4 pixelBuffer:(struct __CVBuffer **)arg5 error:(id *)arg6 progressHandler:(CDUnknownBlockType)arg7;	// IMP=0x000000000020946d
- (id)internalProcessUsingQualityOfServiceClass:(unsigned int)arg1 options:(id)arg2 regionOfInterest:(struct CGRect)arg3 warningRecorder:(id)arg4 error:(id *)arg5 progressHandler:(CDUnknownBlockType)arg6;	// IMP=0x000000000020738c
- (_Bool)completeInitializationForSession:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000205ff9
- (id)initWithConfigurationOptions:(id)arg1;	// IMP=0x0000000000205fb7
- (_Bool)warmUpSession:(id)arg1 withOptions:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000205837
- (_Bool)shouldBeReplacedByDetectorOfClass:(Class)arg1 withConfiguration:(id)arg2;	// IMP=0x00000000002057ac
- (_Bool)canBehaveAsDetectorOfClass:(Class)arg1 withConfiguration:(id)arg2;	// IMP=0x00000000002056f9
- (unsigned long long)signPostAdditionalParameter;	// IMP=0x00000000002056bf
- (id)description;	// IMP=0x00000000002055f9

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary, VNSaliencyOHeatmapBoundingBoxGenerator, VisionCoreSmartCam5InferenceNetworkDescriptor;

__attribute__((visibility("hidden")))
@interface VNSmartCam5GatingDetector
{
    VisionCoreSmartCam5InferenceNetworkDescriptor *_inferenceNetworkDescriptor;	// 16 = 0x10
    NSDictionary *_documentIdentifierToSceneLabels;	// 24 = 0x18
    VNSaliencyOHeatmapBoundingBoxGenerator *_boundingBoxGenerator;	// 32 = 0x20
}

+ (id)segmentationLabelsFilePathForConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x006000000012d365
+ (_Bool)providesSegmentationLabelsForConfiguration:(id)arg1;	// IMP=0x006000000012d35d
+ (unsigned int)analysisPixelFormatTypeForConfiguration:(id)arg1;	// IMP=0x006000000012d2c8
+ (id)inputImageBlobNameForConfiguration:(id)arg1;	// IMP=0x006000000012d227
+ (id)sceneLabelsFilePathForConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x006000000012d13e
+ (_Bool)providesSceneLabelsForConfiguration:(id)arg1;	// IMP=0x006000000012d136
+ (id)modelPathForConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x006000000012d088
+ (id)_inferenceNetworkDescriptorForConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x006000000012cfce
- (void).cxx_destruct;	// IMP=0x000000000012bf36
- (id)observationsForLastAnalysisOfImageAnalyzer:(void *)arg1 processOptions:(id)arg2 originatingRequestSpecifier:(id)arg3 qosClass:(unsigned int)arg4 error:(id *)arg5;	// IMP=0x000000000012b4ba
- (unsigned int)analysisTypesForProcessOptions:(id)arg1;	// IMP=0x000000000012b1ec
- (_Bool)configureImageAnalyzerOptions:(void *)arg1 error:(id *)arg2;	// IMP=0x000000000012b0c2
- (unsigned long long)defaultImageCropAndScaleOption;	// IMP=0x000000000012b0b7
- (_Bool)completeInitializationForSession:(id)arg1 error:(id *)arg2;	// IMP=0x000000000012aec0
@property(readonly, copy) NSArray *supportedDocumentElementIdentifiers;
- (id)supportedClassificationIdentifiersWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x000000000012ae14

@end


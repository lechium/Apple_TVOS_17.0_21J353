//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VNCoreSceneUnderstandingDetector
{
}

+ (id)supportedImageSizeSetForOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00800000001f8eb2
+ (void)recordDefaultConfigurationOptionsInDictionary:(id)arg1;	// IMP=0x00800000001f8e33
+ (id)supportedComputeStageDevicesForOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00800000001f8b56
+ (id)computeStagesToBindForConfigurationOptions:(id)arg1;	// IMP=0x00800000001f8aef
+ (id)allCityNatureIdentifiersWithConfigurationOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00800000001f8ad0
+ (id)allSignificantEventIdentifiersWithConfigurationOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00800000001f8ab1
+ (id)allVN5kJNH3eYuyaLxNpZr5Z7ziIdentifiersWithConfigurationOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00800000001f8a92
+ (id)allRecognizedObjectIdentifiersWithConfigurationOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00800000001f89a4
+ (id)allClassificationIdentifiersWithConfigurationOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00800000001f8985
+ (_Bool)handlesRequestClass:(Class)arg1 revision:(unsigned long long)arg2;	// IMP=0x00800000001f8978
+ (id)_newSaliencyHeatmapBoundingBoxGeneratorOptionsForOptions:(id)arg1;	// IMP=0x00800000001f8825
+ (id)_specialCaseRecognizedObjectsDuplicationsForOriginatingRequestSpecifier:(id)arg1;	// IMP=0x00800000001f878d
- (id)processRegionOfInterest:(struct CGRect)arg1 croppedPixelBuffer:(const struct __CVBuffer *)arg2 options:(id)arg3 qosClass:(unsigned int)arg4 warningRecorder:(id)arg5 error:(id *)arg6 progressHandler:(CDUnknownBlockType)arg7;	// IMP=0x00000000001f8fcd
- (_Bool)createRegionOfInterestCrop:(struct CGRect)arg1 options:(id)arg2 qosClass:(unsigned int)arg3 warningRecorder:(id)arg4 pixelBuffer:(struct __CVBuffer **)arg5 error:(id *)arg6 progressHandler:(CDUnknownBlockType)arg7;	// IMP=0x00000000001f8fbc
- (id)internalProcessUsingQualityOfServiceClass:(unsigned int)arg1 options:(id)arg2 regionOfInterest:(struct CGRect)arg3 warningRecorder:(id)arg4 error:(id *)arg5 progressHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000000001f8fac
- (_Bool)warmUpSession:(id)arg1 withOptions:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001f8f9c
- (_Bool)completeInitializationForSession:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001f8f23
- (_Bool)needsMetalContext;	// IMP=0x00000000001f8f1b

@end

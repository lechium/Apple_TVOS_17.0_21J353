//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VNDetectionprintInferenceNetworkDescriptor;

__attribute__((visibility("hidden")))
@interface VNDetectionprintGenerator
{
    VNDetectionprintInferenceNetworkDescriptor *_inferenceNetworkDescriptor;	// 16 = 0x10
}

+ (unsigned long long)inputImageAspectRatioHandlingForConfigurationOptions:(id)arg1;	// IMP=0x00600000002b8c6d
+ (unsigned int)networkRequiredInputImagePixelFormatForConfigurationOptions:(id)arg1;	// IMP=0x00600000002b8bd8
+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1;	// IMP=0x00600000002b8b37
+ (id)espressoModelPathForConfigurationOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00600000002b8a3c
+ (void)fullyPopulateConfigurationOptions:(id)arg1;	// IMP=0x00600000002b8911
+ (id)_inferenceNetworkDescriptorForConfigurationOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00600000002b87ce
- (void).cxx_destruct;	// IMP=0x00000000002b98df
- (id)processRegionOfInterest:(struct CGRect)arg1 croppedPixelBuffer:(const struct __CVBuffer *)arg2 options:(id)arg3 qosClass:(unsigned int)arg4 warningRecorder:(id)arg5 error:(id *)arg6 progressHandler:(CDUnknownBlockType)arg7;	// IMP=0x00000000002b8fd7
- (_Bool)createRegionOfInterestCrop:(struct CGRect)arg1 options:(id)arg2 qosClass:(unsigned int)arg3 warningRecorder:(id)arg4 pixelBuffer:(struct __CVBuffer **)arg5 error:(id *)arg6 progressHandler:(CDUnknownBlockType)arg7;	// IMP=0x00000000002b8d3b
- (_Bool)completeInitializationForSession:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002b8c75

@end

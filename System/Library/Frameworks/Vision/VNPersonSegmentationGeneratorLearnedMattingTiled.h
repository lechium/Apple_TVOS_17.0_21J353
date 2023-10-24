//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VNMetalContext;
@protocol MTLComputePipelineState;

__attribute__((visibility("hidden")))
@interface VNPersonSegmentationGeneratorLearnedMattingTiled
{
    VNMetalContext *_postProcessingMetalContext;	// 16 = 0x10
    id <MTLComputePipelineState> _createTileWithScaleComputePipelineState;	// 24 = 0x18
    id <MTLComputePipelineState> _pasteTileComputePipelineState;	// 32 = 0x20
}

+ (_Bool)supportsTiling;	// IMP=0x0060000000195025
+ (id)espressoModelFileNameForConfigurationOptions:(id)arg1;	// IMP=0x0060000000195018
+ (id)computeStagesToBindForConfigurationOptions:(id)arg1;	// IMP=0x0060000000194f92
+ (id)supportedComputeStageDevicesForOptions:(id)arg1 error:(id *)arg2;	// IMP=0x0060000000194eab
- (void).cxx_destruct;	// IMP=0x0000000000196c75
- (id)_bindPixelBufferToTexture:(struct __CVBuffer *)arg1 error:(id *)arg2;	// IMP=0x0000000000196bcb
- (optional_c07b8cc9)_processTiledImageBuffer:(id)arg1 inputMaskObservation:(id)arg2 options:(id)arg3 qosClass:(unsigned int)arg4 error:(id *)arg5;	// IMP=0x00000000001957d2
- (optional_c07b8cc9)processLockedImageBuffer:(struct __CVBuffer *)arg1 inputMaskObservation:(id)arg2 options:(id)arg3 qosClass:(unsigned int)arg4 error:(id *)arg5;	// IMP=0x00000000001952f9
- (struct BufferSize)_calculateNumberOfTilesForNetworkInputImageSize:(struct BufferSize)arg1 networkInputMaskSize:(struct BufferSize)arg2 networkOutputMaskSize:(struct BufferSize)arg3 rotated:(_Bool)arg4;	// IMP=0x00000000001951cb
- (struct BufferSize)outputMaskSize;	// IMP=0x00000000001951bb
- (_Bool)completeInitializationForSession:(id)arg1 error:(id *)arg2;	// IMP=0x000000000019502d

@end

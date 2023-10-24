//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet;
@protocol MLComputeDeviceProtocol;

__attribute__((visibility("hidden")))
@interface VNEspressoModelClassifier
{
    shared_ptr_b26ea6de mDescriptorProcessor;	// 16 = 0x10
    shared_ptr_047f28ed mClassifier;	// 32 = 0x20
    id <MLComputeDeviceProtocol> _computeDevice;	// 48 = 0x30
    NSSet *_disallowedIdentifiers;	// 56 = 0x38
}

+ (void)initDumpDebugIntermediates:(id *)arg1 debugInfo:(id *)arg2;	// IMP=0x00400000001056ad
+ (id)supportedComputeStageDevicesForOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00400000001055f1
+ (id)configurationOptionKeysForDetectorKey;	// IMP=0x004000000010558e
+ (id)classifierResourceTypesToNamesForOriginatingRequestSpecifier:(id)arg1;	// IMP=0x0040000000105581
+ (void)convertRelationships:(id)arg1 toStdRelationships:(void *)arg2;	// IMP=0x00400000001054e9
+ (shared_ptr_eb20c8f2)createHierarchicalModelForOriginatingRequestSpecifier:(id)arg1 error:(id *)arg2;	// IMP=0x0040000000104edf
+ (id)createObservationWithDescriptors:(id)arg1 forOriginatingRequestSpecifier:(id)arg2;	// IMP=0x0040000000104eac
+ (shared_ptr_b26ea6de)createDescriprorProcessorWithModelPath:(const char *)arg1 nBatch:(int)arg2 computePlatform:(int)arg3 computePath:(int)arg4 options:(struct Options)arg5;	// IMP=0x0040000000104e7f
+ (shared_ptr_047f28ed)createClassifierWithDescriptor:(shared_ptr_b26ea6de)arg1 classifierAbsolutePath:(const char *)arg2 computePlatform:(int)arg3 computePath:(int)arg4 labelsFilename:(const char *)arg5 options:(struct Options)arg6;	// IMP=0x0040000000104e52
- (id).cxx_construct;	// IMP=0x0000000000109a10
- (void).cxx_destruct;	// IMP=0x00000000001099c1
- (id)disallowedIdentifiers;	// IMP=0x00000000001099ac
- (id)getLabels;	// IMP=0x0000000000109896
- (id)calculateImageDescriptors:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 canceller:(id)arg4 error:(id *)arg5;	// IMP=0x0000000000108bd6
- (id)processRegionOfInterest:(struct CGRect)arg1 croppedPixelBuffer:(const struct __CVBuffer *)arg2 options:(id)arg3 qosClass:(unsigned int)arg4 warningRecorder:(id)arg5 error:(id *)arg6 progressHandler:(CDUnknownBlockType)arg7;	// IMP=0x000000000010822f
- (_Bool)createRegionOfInterestCrop:(struct CGRect)arg1 options:(id)arg2 qosClass:(unsigned int)arg3 warningRecorder:(id)arg4 pixelBuffer:(struct __CVBuffer **)arg5 error:(id *)arg6 progressHandler:(CDUnknownBlockType)arg7;	// IMP=0x0000000000108149
- (id)internalProcessUsingQualityOfServiceClass:(unsigned int)arg1 options:(id)arg2 regionOfInterest:(struct CGRect)arg3 warningRecorder:(id)arg4 error:(id *)arg5 progressHandler:(CDUnknownBlockType)arg6;	// IMP=0x0000000000107eb2
- (_Bool)completeInitializationForSession:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000107a28
- (id)boundComputeStageDevices;	// IMP=0x00000000001079ae

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VNSmartCamClassifier
{
}

+ (void)initDumpDebugIntermediates:(id *)arg1 debugInfo:(id *)arg2;	// IMP=0x00400000000d086f
+ (id)supportedComputeStageDevicesForOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00400000000d07b3
+ (id)createObservationWithDescriptors:(id)arg1 forOriginatingRequestSpecifier:(id)arg2;	// IMP=0x00400000000d0726
+ (id)returnAllResultsOptionKey;	// IMP=0x00400000000d0719
+ (Class)espressoModelImageprintClass;	// IMP=0x00400000000d0708
+ (id)classifierResourceTypesToNamesForOriginatingRequestSpecifier:(id)arg1;	// IMP=0x00400000000d068b
+ (shared_ptr_b26ea6de)createDescriprorProcessorWithModelPath:(const char *)arg1 nBatch:(int)arg2 computePlatform:(int)arg3 computePath:(int)arg4 options:(struct Options)arg5;	// IMP=0x00400000000d0456
+ (shared_ptr_047f28ed)createClassifierWithDescriptor:(shared_ptr_b26ea6de)arg1 classifierAbsolutePath:(const char *)arg2 computePlatform:(int)arg3 computePath:(int)arg4 labelsFilename:(const char *)arg5 options:(struct Options)arg6;	// IMP=0x00400000000cff90
- (_Bool)completeInitializationForSession:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000cff61

@end

//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol VNModelFile;

__attribute__((visibility("hidden")))
@interface VNFaceBBoxAligner
{
    struct shared_ptr<vision::mod::FaceBoxPoseAligner<signed char>> mFaceBoxPoseAlignerImpl;	// 16 = 0x10
    _Bool _modelFilesWereMemmapped;	// 32 = 0x20
    id <VNModelFile> mFaceBoxAlignerModelFileHandle;	// 40 = 0x28
}

+ (id)configurationOptionKeysForDetectorKey;	// IMP=0x006000000029ebe8
+ (id)supportedComputeStageDevicesForOptions:(id)arg1 error:(id *)arg2;	// IMP=0x006000000029eb2c
- (id).cxx_construct;	// IMP=0x00000000002a077d
- (void).cxx_destruct;	// IMP=0x00000000002a0722
- (id)processRegionOfInterest:(struct CGRect)arg1 croppedPixelBuffer:(const struct __CVBuffer *)arg2 options:(id)arg3 qosClass:(unsigned int)arg4 warningRecorder:(id)arg5 error:(id *)arg6 progressHandler:(CDUnknownBlockType)arg7;	// IMP=0x000000000029f61e
- (_Bool)createRegionOfInterestCrop:(struct CGRect)arg1 options:(id)arg2 qosClass:(unsigned int)arg3 warningRecorder:(id)arg4 pixelBuffer:(struct __CVBuffer **)arg5 error:(id *)arg6 progressHandler:(CDUnknownBlockType)arg7;	// IMP=0x000000000029f0f9
- (id)internalProcessUsingQualityOfServiceClass:(unsigned int)arg1 options:(id)arg2 regionOfInterest:(struct CGRect)arg3 warningRecorder:(id)arg4 error:(id *)arg5 progressHandler:(CDUnknownBlockType)arg6;	// IMP=0x000000000029ef1a
- (void)dealloc;	// IMP=0x000000000029ee27
- (_Bool)completeInitializationForSession:(id)arg1 error:(id *)arg2;	// IMP=0x000000000029ed0d

@end


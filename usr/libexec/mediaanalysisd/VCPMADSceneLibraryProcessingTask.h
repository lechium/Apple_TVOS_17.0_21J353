//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VCPMAMLModel, VCPObjectPool, VCPPoolBasedPixelBufferCreator, VCPPreAnalysisImageLoader, VNSession;

@interface VCPMADSceneLibraryProcessingTask
{
    VCPPoolBasedPixelBufferCreator *_monochromeBufferCreator;	// 8 = 0x8
    VCPPreAnalysisImageLoader *_imageLoader;	// 16 = 0x10
    VNSession *_session;	// 24 = 0x18
    VCPObjectPool *_ivsPool;	// 32 = 0x20
    VCPMAMLModel *_rotationModel;	// 40 = 0x28
    VCPPoolBasedPixelBufferCreator *_rotationBufferCreator;	// 48 = 0x30
}

+ (id)fetchPropertySets;	// IMP=0x00200000000a97ff
+ (unsigned long long)taskID;	// IMP=0x00100000000a97f4
+ (id)name;	// IMP=0x00100000000a97e7
+ (id)taskWithPhotoLibraries:(id)arg1 cancelBlock:(CDUnknownBlockType)arg2 progressHandler:(CDUnknownBlockType)arg3 andCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000a96c1
- (void).cxx_destruct;	// IMP=0x00200000000a9b66
- (_Bool)run:(id *)arg1;	// IMP=0x00100000000a99dd
- (id)assetPriorityPredicates;	// IMP=0x00100000000a98f7
- (id)batchWithAnalysisDatabase:(id)arg1 allowDownload:(_Bool)arg2 cancelBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000000a988c
- (_Bool)shouldProcessAsset:(id)arg1;	// IMP=0x00100000000a9877
- (void)dealloc;	// IMP=0x00100000000a976e
- (id)initWithPhotoLibraries:(id)arg1 cancelBlock:(CDUnknownBlockType)arg2 progressHandler:(CDUnknownBlockType)arg3 andCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000a918a

@end


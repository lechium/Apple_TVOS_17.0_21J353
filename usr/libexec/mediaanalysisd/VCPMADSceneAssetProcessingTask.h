//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VCPMAMLModel, VCPObjectPool, VCPPoolBasedPixelBufferCreator, VCPPreAnalysisImageLoader, VNSession;

@interface VCPMADSceneAssetProcessingTask
{
    VCPPoolBasedPixelBufferCreator *_monochromeBufferCreator;	// 8 = 0x8
    VCPPreAnalysisImageLoader *_imageLoader;	// 16 = 0x10
    VNSession *_session;	// 24 = 0x18
    VCPObjectPool *_ivsPool;	// 32 = 0x20
    VCPMAMLModel *_rotationModel;	// 40 = 0x28
    VCPPoolBasedPixelBufferCreator *_rotationBufferCreator;	// 48 = 0x30
}

+ (id)fetchPropertySets;	// IMP=0x002000000001dd83
+ (unsigned long long)taskID;	// IMP=0x001000000001dd78
+ (id)name;	// IMP=0x001000000001dd6b
- (void).cxx_destruct;	// IMP=0x002000000001e004
- (_Bool)run:(id *)arg1;	// IMP=0x001000000001de7b
- (id)batchWithAnalysisDatabase:(id)arg1 allowDownload:(_Bool)arg2 cancelBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000001de10
- (_Bool)shouldProcessAsset:(id)arg1;	// IMP=0x001000000001ddfb
- (void)dealloc;	// IMP=0x001000000001dcf2
- (id)initWithLocalIdentifiers:(id)arg1 fromPhotoLibraryWithURL:(id)arg2 cancelBlock:(CDUnknownBlockType)arg3 progressHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x001000000001d7b3

@end

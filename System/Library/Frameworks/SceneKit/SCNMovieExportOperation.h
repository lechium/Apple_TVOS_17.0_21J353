//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor;

__attribute__((visibility("hidden")))
@interface SCNMovieExportOperation
{
    AVAssetWriterInput *_assetWriterInput;	// 144 = 0x90
    AVAssetWriterInputPixelBufferAdaptor *_avAdaptor;	// 152 = 0x98
    AVAssetWriter *_assetWriter;	// 160 = 0xa0
    float _rate;	// 168 = 0xa8
    _Bool _mirrored;	// 172 = 0xac
    float _supersampling;	// 176 = 0xb0
}

- (void)main;	// IMP=0x00000000002ad113
- (void)renderAndAppendWithPresentationTime:(CDStruct_198678f7)arg1 usingAdaptor:(id)arg2 metalTextureCache:(struct __CVMetalTextureCache *)arg3 cvQueue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x00000000002ac980
- (void)appendImage:(struct CGImage *)arg1 withPresentationTime:(CDStruct_198678f7)arg2 usingAdaptor:(id)arg3;	// IMP=0x00000000002ac73b
- (void)_finishedExport;	// IMP=0x00000000002ac683
- (struct CGImage *)_copySnapshot:(struct CGSize)arg1;	// IMP=0x00000000002ac5c8
- (void)_setupMovieToWritableFile:(id)arg1;	// IMP=0x00000000002ac5c2
- (void)dealloc;	// IMP=0x00000000002ac55c
- (id)initWithRenderer:(id)arg1 size:(struct CGSize)arg2 attributes:(id)arg3 outputURL:(id)arg4;	// IMP=0x00000000002abf60

@end


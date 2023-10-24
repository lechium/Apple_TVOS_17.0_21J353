//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSURL;

@interface VCPMADPhotoAssetProcessingTask
{
    NSArray *_localIdentifiers;	// 8 = 0x8
    NSURL *_photoLibraryURL;	// 16 = 0x10
    CDUnknownBlockType _progressHandler;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000af23e
- (_Bool)run:(id *)arg1;	// IMP=0x00100000000ae5b1
- (id)initWithLocalIdentifiers:(id)arg1 fromPhotoLibraryWithURL:(id)arg2 cancelBlock:(CDUnknownBlockType)arg3 progressHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000ae42c

@end


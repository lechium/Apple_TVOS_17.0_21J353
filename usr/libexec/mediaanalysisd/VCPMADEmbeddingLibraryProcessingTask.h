//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaAnalysis/VCPMABaseTask.h>

@class NSArray;

@interface VCPMADEmbeddingLibraryProcessingTask : VCPMABaseTask
{
    NSArray *_photoLibraries;	// 8 = 0x8
    CDUnknownBlockType _progressHandler;	// 16 = 0x10
}

+ (_Bool)processLocalLibraries;	// IMP=0x0040000000008301
+ (id)taskWithPhotoLibraries:(id)arg1 cancelBlock:(CDUnknownBlockType)arg2 progressHandler:(CDUnknownBlockType)arg3 andCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000008236
- (void).cxx_destruct;	// IMP=0x002000000000846b
- (_Bool)run:(id *)arg1;	// IMP=0x0010000000008309
- (id)initWithPhotoLibraries:(id)arg1 cancelBlock:(CDUnknownBlockType)arg2 progressHandler:(CDUnknownBlockType)arg3 andCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000008077

@end

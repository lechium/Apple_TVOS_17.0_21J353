//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, PHPhotoLibrary, VCPFaceClusterer, VCPPhotosFaceProcessingContext;
@protocol OS_dispatch_queue;

@interface VCPFaceProcessingChangeBatch : NSObject
{
    PHPhotoLibrary *_photoLibrary;	// 8 = 0x8
    NSMutableArray *_pendingChanges;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_publishQueue;	// 24 = 0x18
    VCPFaceClusterer *_clusterer;	// 32 = 0x20
    VCPPhotosFaceProcessingContext *_context;	// 40 = 0x28
}

+ (id);	// IMP=0x004000000008c10c
- (void).cxx_destruct;	// IMP=0x002000000008c8df
- (_Bool)publishWithError:(id *)arg1;	// IMP=0x001000000008c5a5
- (void)_publishPendingChanges;	// IMP=0x001000000008c330
- (int)updateAsset:(id)arg1 withAnalysis:(id)arg2;	// IMP=0x001000000008c1c4
- (id)initWithPhotoLibrary:(id)arg1 faceClusterer:(id)arg2 andContext:(id)arg3;	// IMP=0x001000000008bfaa

@end


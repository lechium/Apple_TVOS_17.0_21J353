//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface VCPPhotosCaptureProcessingTask : NSObject
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
    NSArray *_photoLibraries;	// 16 = 0x10
    struct atomic<bool> _started;	// 24 = 0x18
    struct atomic<bool> _cancel;	// 25 = 0x19
    struct atomic<bool> _interrupt;	// 26 = 0x1a
    NSObject<OS_dispatch_group> *_persistGroup;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_persistQueue;	// 40 = 0x28
    unsigned long long _numberOfNewCaptures;	// 48 = 0x30
    unsigned long long _numberOfNewCapturesProcessed;	// 56 = 0x38
    unsigned long long _numberOfCapturesHaveFaces;	// 64 = 0x40
    unsigned long long _numberOfNewCapturesWithFaceHaveFaceprintFromCamera;	// 72 = 0x48
    unsigned long long _numberOfPositiveFaces;	// 80 = 0x50
    unsigned long long _numberOfFaces;	// 88 = 0x58
}

+ (_Bool)_cameraFaceOnly;	// IMP=0x00200000000680fc
+ (_Bool)_concurrentFaceProcessing;	// IMP=0x001000000006809f
+ (_Bool)_allowProcessingCapturedFace;	// IMP=0x0010000000068097
+ (id)taskWithPhotoLibraries:(id)arg1 andCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000067cba
- (void).cxx_destruct;	// IMP=0x002000000006c42d
- (int)run;	// IMP=0x001000000006c261
- (void)_reportEventPostCapturesProcessing;	// IMP=0x001000000006bcb8
- (void)_resetFieldsPostCapturesProcessing;	// IMP=0x000000000006bca3
- (_Bool)run:(id *)arg1;	// IMP=0x001000000006a2c9
- (void)ocrProcessingForAssets:(id)arg1;	// IMP=0x0010000000069b5d
- (int)faceProcessingForAssets:(id)arg1 withManager:(id)arg2 onDemandDetection:(_Bool)arg3;	// IMP=0x0010000000068f91
- (void)_persistClassifiedFaces:(id)arg1 withDetectedPersons:(id)arg2;	// IMP=0x0010000000068198
- (_Bool)isAssetEligible:(id)arg1;	// IMP=0x0010000000068104
- (void)resetInterruption;	// IMP=0x0010000000068025
- (void)interrupt;	// IMP=0x0010000000067fb3
- (void)cancel;	// IMP=0x0010000000067f41
- (_Bool)autoCancellable;	// IMP=0x0010000000067f39
- (float)resourceRequirement;	// IMP=0x0010000000067f2b
- (void)dealloc;	// IMP=0x0010000000067d4e
- (id)initWithPhotoLibraries:(id)arg1 andCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000067bae
- (id)init;	// IMP=0x0010000000067ba0

@end


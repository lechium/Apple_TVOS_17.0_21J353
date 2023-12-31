//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "VCPMADResource.h"

@class NSObject, PHPhotoLibrary, VCPObjectPool, VCPPhotosFaceProcessingContext, VNPersonsModel;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCPMADPersonIdentificationTaskResource : VCPMADResource
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    VCPObjectPool *_sessionPool;	// 16 = 0x10
    VCPPhotosFaceProcessingContext *_faceProcessingContext;	// 24 = 0x18
    VNPersonsModel *_personIdentityModel;	// 32 = 0x20
    PHPhotoLibrary *_photoLibrary;	// 40 = 0x28
}

+ (id)sharedResource;	// IMP=0x0060000000167c9e
- (void).cxx_destruct;	// IMP=0x000000000016867b
- (void)purge;	// IMP=0x00000000001685b6
- (id)photoLibrary;	// IMP=0x00000000001684b6
- (id)faceProcessingContext;	// IMP=0x00000000001683b6
- (id)personIdentityModel;	// IMP=0x00000000001682b6
- (id)visionSession;	// IMP=0x0000000000168181
- (void)_loadResources;	// IMP=0x0000000000167d69
- (id)init;	// IMP=0x0000000000167bd0

@end


//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MADImageSafetyClassificationRequest, NSString, VCPMADServiceImageAsset;

__attribute__((visibility("hidden")))
@interface VCPMADImageSafetyClassificationTask : NSObject
{
    MADImageSafetyClassificationRequest *_request;	// 8 = 0x8
    VCPMADServiceImageAsset *_imageAsset;	// 16 = 0x10
    NSString *_signpostPayload;	// 24 = 0x18
    struct atomic<bool> _canceled;	// 32 = 0x20
    struct Scaler _scaler;	// 40 = 0x28
}

+ (id)dependencies;	// IMP=0x001000000005f3d9
+ (id)taskWithRequest:(id)arg1 imageAsset:(id)arg2 andSignpostPayload:(id)arg3;	// IMP=0x001000000005f1ee
- (id).cxx_construct;	// IMP=0x000000000006169b
- (void).cxx_destruct;	// IMP=0x0000000000061654
- (int)run;	// IMP=0x000000000005fcf1
- (int)createUprightPixelBuffer:(struct __CVBuffer **)arg1 fromSourceBuffer:(struct __CVBuffer *)arg2 andOrientation:(unsigned int)arg3;	// IMP=0x000000000005f40d
- (void)logMemoryWithMessage:(id)arg1;	// IMP=0x000000000005f407
- (void)cancel;	// IMP=0x000000000005f3fc
- (_Bool)autoCancellable;	// IMP=0x000000000005f3f4
- (float)resourceRequirement;	// IMP=0x000000000005f3e6
- (id)initWithRequest:(id)arg1 imageAsset:(id)arg2 andSignpostPayload:(id)arg3;	// IMP=0x000000000005f110

@end

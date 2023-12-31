//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MADMLScalingRequest, NSString, VCPMADServiceImageAsset;

__attribute__((visibility("hidden")))
@interface VCPMADMLScalingTask : NSObject
{
    MADMLScalingRequest *_request;	// 8 = 0x8
    VCPMADServiceImageAsset *_imageAsset;	// 16 = 0x10
    struct atomic<bool> _canceled;	// 24 = 0x18
    NSString *_signpostPayload;	// 32 = 0x20
    struct CF<__CVPixelBufferPool *> _pixelBufferPool;	// 40 = 0x28
    struct CF<__CVPixelBufferPool *> _outputPixelBufferPool;	// 48 = 0x30
    struct CF<OpaqueVTPixelTransferSession *> _transferSession;	// 56 = 0x38
}

+ (id)dependencies;	// IMP=0x00100000001261a9
+ (id)taskWithRequest:(id)arg1 imageAsset:(id)arg2 andSignpostPayload:(id)arg3;	// IMP=0x0010000000125fbe
- (id).cxx_construct;	// IMP=0x0000000000126b27
- (void).cxx_destruct;	// IMP=0x0000000000126ad9
- (int)run;	// IMP=0x00000000001264ce
- (int)convertPixelFormat:(struct __CVBuffer **)arg1;	// IMP=0x00000000001261d7
- (void)cancel;	// IMP=0x00000000001261cc
- (_Bool)autoCancellable;	// IMP=0x00000000001261c4
- (float)resourceRequirement;	// IMP=0x00000000001261b6
- (id)initWithRequest:(id)arg1 imageAsset:(id)arg2 andSignpostPayload:(id)arg3;	// IMP=0x0000000000125ee0

@end


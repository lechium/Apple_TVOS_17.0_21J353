//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SCNMTLComputePipeline;
@protocol MTLBuffer;

__attribute__((visibility("hidden")))
@interface SCNMTLSmoothNormalsDeformer : NSObject
{
    unsigned int _lastUpdateFrameIndex;	// 8 = 0x8
    unsigned int _baseVertexCount;	// 12 = 0xc
    id <MTLBuffer> _perVertexTrianglesOffsets;	// 16 = 0x10
    id <MTLBuffer> _perVertexTrianglesIndices;	// 24 = 0x18
    SCNMTLComputePipeline *_smoothNormalsPipeline;	// 32 = 0x20
}

+ (unsigned long long)requiredOutputs;	// IMP=0x001000000004f20c
+ (unsigned long long)supportedOutputs;	// IMP=0x001000000004f201
+ (unsigned long long)requiredInputs;	// IMP=0x001000000004f1f6
- (unsigned long long)updateWithComputeContext:(id)arg1 positions:(id)arg2 normals:(id)arg3 tangents:(id)arg4;	// IMP=0x000000000004fd52
- (void)dealloc;	// IMP=0x000000000004fd01

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


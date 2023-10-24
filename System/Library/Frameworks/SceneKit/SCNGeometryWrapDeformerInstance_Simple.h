//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SCNMTLComputePipeline;
@protocol MTLBuffer;

__attribute__((visibility("hidden")))
@interface SCNGeometryWrapDeformerInstance_Simple : NSObject
{
    struct {
        unsigned int vertexCount;
        CDStruct_14d5dc5e driverToDeformedTransform;
    } _uniforms;	// 16 = 0x10
    struct __C3DNode *_drivingNode;	// 96 = 0x60
    struct __C3DNode *_deformedNode;	// 104 = 0x68
    unsigned int _lastUpdateFrameIndex;	// 112 = 0x70
    unsigned long long _bindingMode;	// 120 = 0x78
    SCNMTLComputePipeline *_computePipeline;	// 128 = 0x80
    id <MTLBuffer> _bindingPointIndicesBuffer;	// 136 = 0x88
    id <MTLBuffer> _bindingBarycentricCoordsBuffer;	// 144 = 0x90
    id <MTLBuffer> _bindingOffsetsOrTransformsBuffer;	// 152 = 0x98
    id <MTLBuffer> _bindingTransformsBuffer;	// 160 = 0xa0
}

- (unsigned long long)updateWithContext:(id)arg1;	// IMP=0x00000000002f1bd3
- (void)dealloc;	// IMP=0x00000000002f1b6f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


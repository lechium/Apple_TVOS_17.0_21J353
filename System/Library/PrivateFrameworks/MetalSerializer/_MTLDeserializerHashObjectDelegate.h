//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface _MTLDeserializerHashObjectDelegate : NSObject
{
    NSMutableDictionary *_commandQueues;	// 8 = 0x8
    NSMutableDictionary *_functions;	// 16 = 0x10
    NSMutableDictionary *_computePipelines;	// 24 = 0x18
    NSMutableDictionary *_renderPipelines;	// 32 = 0x20
    NSMutableDictionary *_buffers;	// 40 = 0x28
    NSMutableDictionary *_textures;	// 48 = 0x30
    NSMutableDictionary *_samplers;	// 56 = 0x38
    NSMutableDictionary *_depthStencils;	// 64 = 0x40
    NSMutableDictionary *_fences;	// 72 = 0x48
    NSMutableDictionary *_argumentBufferLayouts;	// 80 = 0x50
    NSMutableDictionary *_argumentEncoders;	// 88 = 0x58
    NSMutableDictionary *_heaps;	// 96 = 0x60
    NSMutableDictionary *_events;	// 104 = 0x68
}

- (id)functionWithFunctionRef:(unsigned long long)arg1;	// IMP=0x000000000000cf44
- (id)getResourceForReference:(unsigned int)arg1;	// IMP=0x000000000000ce6e
- (void)deleteResourceForReference:(unsigned int)arg1;	// IMP=0x000000000000cd83
- (void)deleteEventForReference:(unsigned int)arg1;	// IMP=0x000000000000ccbf
- (id)getEventForReference:(unsigned int)arg1;	// IMP=0x000000000000cc0c
- (unsigned int)registerEventForReference:(unsigned int)arg1 event:(id)arg2;	// IMP=0x000000000000cb38
- (void)deleteHeapForReference:(unsigned int)arg1;	// IMP=0x000000000000ca74
- (id)getHeapForReference:(unsigned int)arg1;	// IMP=0x000000000000c9c1
- (unsigned int)registerHeapForReference:(unsigned int)arg1 heap:(id)arg2;	// IMP=0x000000000000c8ed
- (void)deleteArgumentEncoderForReference:(unsigned int)arg1;	// IMP=0x000000000000c829
- (id)getArgumentEncoderForReference:(unsigned int)arg1;	// IMP=0x000000000000c776
- (unsigned int)registerArgumentEncoderForReference:(unsigned int)arg1 argumentEncoder:(id)arg2;	// IMP=0x000000000000c6a2
- (void)deleteArgumentBufferLayoutForReference:(unsigned int)arg1;	// IMP=0x000000000000c5de
- (id)getArgumentBufferLayoutForReference:(unsigned int)arg1;	// IMP=0x000000000000c52b
- (unsigned int)registerArgumentBufferLayoutForReference:(unsigned int)arg1 argumentBufferLayout:(id)arg2;	// IMP=0x000000000000c457
- (void)deleteFenceForReference:(unsigned int)arg1;	// IMP=0x000000000000c393
- (id)getFenceForReference:(unsigned int)arg1;	// IMP=0x000000000000c2e0
- (unsigned int)registerFenceForReference:(unsigned int)arg1 fence:(id)arg2;	// IMP=0x000000000000c20c
- (void)deleteDepthStencilStateForReference:(unsigned int)arg1;	// IMP=0x000000000000c148
- (id)getDepthStencilStateForReference:(unsigned int)arg1;	// IMP=0x000000000000c095
- (unsigned int)registerDepthStencilStateForReference:(unsigned int)arg1 depthStencil:(id)arg2;	// IMP=0x000000000000bfc1
- (void)deleteSamplerStateForReference:(unsigned int)arg1;	// IMP=0x000000000000befd
- (id)getSamplerStateForReference:(unsigned int)arg1;	// IMP=0x000000000000be4a
- (unsigned int)registerSamplerStateForReference:(unsigned int)arg1 sampler:(id)arg2;	// IMP=0x000000000000bd76
- (void)deleteTextureForReference:(unsigned int)arg1;	// IMP=0x000000000000bcb2
- (id)getTextureForReference:(unsigned int)arg1;	// IMP=0x000000000000bbff
- (unsigned int)registerTextureForReference:(unsigned int)arg1 texture:(id)arg2;	// IMP=0x000000000000bb2b
- (void)deleteBufferForReference:(unsigned int)arg1;	// IMP=0x000000000000ba67
- (id)getBufferForReference:(unsigned int)arg1;	// IMP=0x000000000000b9b4
- (unsigned int)registerBufferForReference:(unsigned int)arg1 buffer:(id)arg2;	// IMP=0x000000000000b8e0
- (void)deleteRenderPipelineStateForReference:(unsigned int)arg1;	// IMP=0x000000000000b81c
- (id)getRenderPipelineStateForReference:(unsigned int)arg1;	// IMP=0x000000000000b769
- (unsigned int)registerRenderPipelineStateForReference:(unsigned int)arg1 renderPipeline:(id)arg2;	// IMP=0x000000000000b695
- (void)deleteComputePipelineStateForReference:(unsigned int)arg1;	// IMP=0x000000000000b5d1
- (id)getComputePipelineStateForReference:(unsigned int)arg1;	// IMP=0x000000000000b51e
- (unsigned int)registerComputePipelineStateForReference:(unsigned int)arg1 computePipeline:(id)arg2;	// IMP=0x000000000000b44a
- (void)deleteFunctionForReference:(unsigned int)arg1;	// IMP=0x000000000000b386
- (id)getFunctionForReference:(unsigned int)arg1;	// IMP=0x000000000000b2d3
- (unsigned int)registerFunctionForReference:(unsigned int)arg1 function:(id)arg2;	// IMP=0x000000000000b1ff
- (void)deleteCommandQueueForReference:(unsigned int)arg1;	// IMP=0x000000000000b13b
- (id)getCommandQueueForReference:(unsigned int)arg1;	// IMP=0x000000000000b088
- (unsigned int)registerCommandQueueForReference:(unsigned int)arg1 commandQueue:(id)arg2;	// IMP=0x000000000000afb4
- (void)dealloc;	// IMP=0x000000000000ae4a
- (id)init;	// IMP=0x000000000000ad3a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


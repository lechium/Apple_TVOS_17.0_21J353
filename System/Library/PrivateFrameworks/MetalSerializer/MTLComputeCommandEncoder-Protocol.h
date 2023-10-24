//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MetalSerializer/MTLCommandEncoder-Protocol.h>

@protocol MTLAccelerationStructure, MTLBuffer, MTLComputePipelineState, MTLCounterSampleBuffer, MTLFence, MTLHeap, MTLIndirectCommandBuffer, MTLIntersectionFunctionTable, MTLResource, MTLSamplerState, MTLTexture, MTLVisibleFunctionTable;

@protocol MTLComputeCommandEncoder <MTLCommandEncoder>
@property(readonly) unsigned long long dispatchType;
- (void)sampleCountersInBuffer:(id <MTLCounterSampleBuffer>)arg1 atSampleIndex:(unsigned long long)arg2 withBarrier:(_Bool)arg3;
- (void)memoryBarrierWithResources:(const id *)arg1 count:(unsigned long long)arg2;
- (void)memoryBarrierWithScope:(unsigned long long)arg1;
- (void)executeCommandsInBuffer:(id <MTLIndirectCommandBuffer>)arg1 indirectBuffer:(id <MTLBuffer>)arg2 indirectBufferOffset:(unsigned long long)arg3;
- (void)executeCommandsInBuffer:(id <MTLIndirectCommandBuffer>)arg1 withRange:(struct _NSRange)arg2;
- (void)useHeaps:(const id *)arg1 count:(unsigned long long)arg2;
- (void)useHeap:(id <MTLHeap>)arg1;
- (void)useResources:(const id *)arg1 count:(unsigned long long)arg2 usage:(unsigned long long)arg3;
- (void)useResource:(id <MTLResource>)arg1 usage:(unsigned long long)arg2;
- (void)waitForFence:(id <MTLFence>)arg1;
- (void)updateFence:(id <MTLFence>)arg1;
- (void)dispatchThreads:(CDStruct_14f26992)arg1 threadsPerThreadgroup:(CDStruct_14f26992)arg2;
- (void)dispatchThreadgroupsWithIndirectBuffer:(id <MTLBuffer>)arg1 indirectBufferOffset:(unsigned long long)arg2 threadsPerThreadgroup:(CDStruct_14f26992)arg3;
- (void)dispatchThreadgroups:(CDStruct_14f26992)arg1 threadsPerThreadgroup:(CDStruct_14f26992)arg2;
- (void)setStageInRegionWithIndirectBuffer:(id <MTLBuffer>)arg1 indirectBufferOffset:(unsigned long long)arg2;
- (void)setStageInRegion:(CDStruct_4c83c94d)arg1;
- (void)setImageblockWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (void)setThreadgroupMemoryLength:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setSamplerStates:(const id *)arg1 lodMinClamps:(const float *)arg2 lodMaxClamps:(const float *)arg3 withRange:(struct _NSRange)arg4;
- (void)setSamplerState:(id <MTLSamplerState>)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4;
- (void)setSamplerStates:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (void)setSamplerState:(id <MTLSamplerState>)arg1 atIndex:(unsigned long long)arg2;
- (void)setTextures:(const id *)arg1 withRange:(struct _NSRange)arg2;
- (void)setTexture:(id <MTLTexture>)arg1 atIndex:(unsigned long long)arg2;
- (void)setAccelerationStructure:(id <MTLAccelerationStructure>)arg1 atBufferIndex:(unsigned long long)arg2;
- (void)setIntersectionFunctionTables:(const id *)arg1 withBufferRange:(struct _NSRange)arg2;
- (void)setIntersectionFunctionTable:(id <MTLIntersectionFunctionTable>)arg1 atBufferIndex:(unsigned long long)arg2;
- (void)setVisibleFunctionTables:(const id *)arg1 withBufferRange:(struct _NSRange)arg2;
- (void)setVisibleFunctionTable:(id <MTLVisibleFunctionTable>)arg1 atBufferIndex:(unsigned long long)arg2;
- (void)setBytes:(const void *)arg1 length:(unsigned long long)arg2 attributeStride:(unsigned long long)arg3 atIndex:(unsigned long long)arg4;
- (void)setBufferOffset:(unsigned long long)arg1 attributeStride:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 attributeStrides:(const unsigned long long *)arg3 withRange:(struct _NSRange)arg4;
- (void)setBuffer:(id <MTLBuffer>)arg1 offset:(unsigned long long)arg2 attributeStride:(unsigned long long)arg3 atIndex:(unsigned long long)arg4;
- (void)setBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 withRange:(struct _NSRange)arg3;
- (void)setBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setBuffer:(id <MTLBuffer>)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setBytes:(const void *)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setComputePipelineState:(id <MTLComputePipelineState>)arg1;
@end


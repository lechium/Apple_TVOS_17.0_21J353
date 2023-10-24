//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, _MTLDeserializer;
@protocol MTLComputeCommandEncoderSPI, MTLComputePipelineState;

__attribute__((visibility("hidden")))
@interface MTLDeserializerComputeDecoder : NSObject
{
    _MTLDeserializer *deserializer;	// 8 = 0x8
    id <MTLComputeCommandEncoderSPI> computeEncoder;	// 16 = 0x10
    id <MTLComputePipelineState> _computePipeline;	// 24 = 0x18
}

@property(readonly) unsigned char type;
- (void)fault;	// IMP=0x0000000000019444
- (void)decodeWithHeader:(CDStruct_d6d194d4 *)arg1 withIterator:(id)arg2;	// IMP=0x000000000001914b
- (void)decodeBarrierResources:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000018fe5
- (void)decodeBarrierScope:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000018f9d
- (void)decodeWaitForFence:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000018f45
- (void)decodeUpdateFence:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000018eed
- (void)decodeSetThreadgroupMemoryLength:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000018e35
- (void)decodeSetStageInRegionIndirect:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000018d6f
- (void)decodeSetStageInRegion:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000018ce7
- (void)decodeSetPipelineState:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000018c21
- (void)decodeSetBufferOffset:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000018b6a
- (void)decodeUseHeaps:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000018a04
- (void)decodeUseResources:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x000000000001889a
- (void)decodeSetTextures:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x00000000000186b4
- (void)decodeSetSamplersLODClamp:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000018475
- (void)decodeSetSamplers:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000018292
- (void)decodeSetBuffers:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000018075
- (void)decodeDispatchThreads:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000017fc8
- (void)decodeDispatchThreadgroupsIndirect:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000017f0d
- (void)decodeDispatchThreadgroups:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2;	// IMP=0x0000000000017e60
- (void)readVariableCommand:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2 maxExpectedSize:(unsigned long long)arg3 into:(void *)arg4;	// IMP=0x0000000000017dc3
- (void)readCommand:(CDStruct_c0454aff *)arg1 withIterator:(id)arg2 expectedSize:(unsigned long long)arg3 into:(void *)arg4;	// IMP=0x0000000000017d04
- (void)dealloc;	// IMP=0x0000000000017cba
- (id)initWithDeserializer:(id)arg1 commandBuffer:(id)arg2;	// IMP=0x0000000000017c54

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


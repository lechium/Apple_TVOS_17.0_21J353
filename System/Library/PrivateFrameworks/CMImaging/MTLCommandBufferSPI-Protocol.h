//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CMImaging/MTLCommandBuffer-Protocol.h>

@class MTLComputePassDescriptor, MTLRenderPassDescriptor, NSArray, NSDictionary, NSMutableDictionary;
@protocol MTLComputeCommandEncoder, MTLDeadlineProfile, MTLDebugCommandEncoder, MTLDrawable, MTLEvent, MTLHeap, MTLRenderCommandEncoder, MTLResource, MTLResourceGroupSPI, MTLSharedEvent;

@protocol MTLCommandBufferSPI <MTLCommandBuffer>
@property(readonly, retain) id <MTLDeadlineProfile> deadlineProfile;
@property(readonly, nonatomic) NSMutableDictionary *userDictionary;
@property(readonly) NSDictionary *profilingResults;
@property(getter=isProfilingEnabled) _Bool profilingEnabled;
- (void)encodeConditionalAbortEvent:(id <MTLSharedEvent>)arg1;
- (void)encodeSignalEvent:(id <MTLSharedEvent>)arg1 value:(unsigned long long)arg2 agentMask:(unsigned long long)arg3;
- (void)presentDrawable:(id <MTLDrawable>)arg1 options:(NSDictionary *)arg2;
- (void)setLogs:(NSArray *)arg1;
- (_Bool)commitAndWaitUntilSubmittedWithDeadline:(unsigned long long)arg1;
- (void)commitWithDeadline:(unsigned long long)arg1;
- (void)addPurgedHeap:(id <MTLHeap>)arg1;
- (void)addPurgedResource:(id <MTLResource>)arg1;
- (void)encodeDashboardFinalizeForResourceGroup:(id <MTLResourceGroupSPI>)arg1 dashboard:(unsigned long long)arg2 values:(const unsigned long long *)arg3 indices:(const unsigned long long *)arg4 count:(unsigned long long)arg5;
- (void)encodeDashboardFinalizeForResourceGroup:(id <MTLResourceGroupSPI>)arg1 dashboard:(unsigned long long)arg2 value:(unsigned long long)arg3 forIndex:(unsigned long long)arg4;
- (void)encodeDashboardTagForResourceGroup:(id <MTLResourceGroupSPI>)arg1;

@optional
@property(readonly) unsigned long long globalTraceObjectID;
@property(readonly, nonatomic, getter=getListIndex) unsigned long long listIndex;
- (void)encodeSignalEventScheduled:(id <MTLSharedEvent>)arg1 value:(unsigned long long)arg2;
- (void)encodeCacheHintFinalize:(unsigned long long)arg1 resourceGroups:(const id *)arg2 count:(unsigned long long)arg3;
- (void)encodeCacheHintTag:(unsigned long long)arg1 resourceGroups:(const id *)arg2 count:(unsigned long long)arg3;
- (void)dropResourceGroups:(const id *)arg1 count:(unsigned long long)arg2;
- (void)setResourceGroups:(const id *)arg1 count:(unsigned long long)arg2;
- (void)encodeWaitForEvent:(id <MTLEvent>)arg1 value:(unsigned long long)arg2 timeout:(unsigned int)arg3;
- (unsigned long long)protectionOptions;
- (void)setProtectionOptions:(unsigned long long)arg1;
- (_Bool)commitAndWaitUntilSubmitted;
- (void)commitAndHold;
- (id <MTLDebugCommandEncoder>)debugCommandEncoder;
- (id <MTLComputeCommandEncoder>)sampledComputeCommandEncoderWithDescriptor:(MTLComputePassDescriptor *)arg1 programInfoBuffer:(CDUnion_c6e49ed4 *)arg2 capacity:(unsigned long long)arg3;
- (id <MTLComputeCommandEncoder>)sampledComputeCommandEncoderWithDispatchType:(unsigned long long)arg1 programInfoBuffer:(CDUnion_c6e49ed4 *)arg2 capacity:(unsigned long long)arg3;
- (id <MTLComputeCommandEncoder>)sampledComputeCommandEncoderWithProgramInfoBuffer:(CDUnion_c6e49ed4 *)arg1 capacity:(unsigned long long)arg2;
- (id <MTLRenderCommandEncoder>)sampledRenderCommandEncoderWithDescriptor:(MTLRenderPassDescriptor *)arg1 programInfoBuffer:(CDUnion_c6e49ed4 *)arg2 capacity:(unsigned long long)arg3;
- (void *)debugBufferContentsWithLength:(unsigned long long *)arg1;
@end


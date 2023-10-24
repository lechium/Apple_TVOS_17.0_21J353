//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BGRBilinearUpsampler, VNMetalContext;
@protocol MTLComputePipelineState, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface _VNInstanceMaskObservationMaskProductionResources : NSObject
{
    NSObject<OS_dispatch_semaphore> *_completionSemaphore;	// 8 = 0x8
    VNMetalContext *_metalContext;	// 16 = 0x10
    BGRBilinearUpsampler *_bilinearUpsampler;	// 24 = 0x18
    id <MTLComputePipelineState> _applyMaskComputeState;	// 32 = 0x20
    id <MTLComputePipelineState> _cropCopyingComputeState;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000006d1ef
@property(readonly) id <MTLComputePipelineState> cropCopyingComputeState; // @synthesize cropCopyingComputeState=_cropCopyingComputeState;
@property(readonly) id <MTLComputePipelineState> applyMaskComputeState; // @synthesize applyMaskComputeState=_applyMaskComputeState;
@property(readonly) BGRBilinearUpsampler *bilinearUpsampler; // @synthesize bilinearUpsampler=_bilinearUpsampler;
@property(readonly) VNMetalContext *metalContext; // @synthesize metalContext=_metalContext;
@property(readonly) NSObject<OS_dispatch_semaphore> *completionSemaphore; // @synthesize completionSemaphore=_completionSemaphore;
- (void)dealloc;	// IMP=0x000000000006d14c

@end


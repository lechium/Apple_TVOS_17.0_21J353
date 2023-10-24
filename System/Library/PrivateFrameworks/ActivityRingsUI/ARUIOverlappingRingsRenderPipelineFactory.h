//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ARUIRingsAlphaReductionState, ARUIRingsEmptyState, ARUIRingsEndCapShadowState, ARUIRingsFillState;

__attribute__((visibility("hidden")))
@interface ARUIOverlappingRingsRenderPipelineFactory
{
    ARUIRingsEmptyState *_emptyState;	// 8 = 0x8
    ARUIRingsFillState *_fillState;	// 16 = 0x10
    ARUIRingsEndCapShadowState *_endCapShadowState;	// 24 = 0x18
    ARUIRingsAlphaReductionState *_alphaReductionState;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000001c6b8
- (id)pipelineForConfiguration:(id)arg1;	// IMP=0x000000000001c56f
- (id)initWithDeviceSPI:(id)arg1 librarySPI:(id)arg2;	// IMP=0x000000000001c444
- (id)initWithDevice:(id)arg1 library:(id)arg2;	// IMP=0x000000000001c2f2

@end

